/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_PLAYER_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_PLAYER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/MatchAttribute.h>
#include <tencentcloud/gpm/v20200820/model/RegionLatency.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * 玩家信息。
                */
                class Player : public AbstractModel
                {
                public:
                    Player();
                    ~Player() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取玩家 PlayerId 长度 128 [a-zA-Z\d-\._]*
                     * @return Id 玩家 PlayerId 长度 128 [a-zA-Z\d-\._]*
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置玩家 PlayerId 长度 128 [a-zA-Z\d-\._]*
                     * @param _id 玩家 PlayerId 长度 128 [a-zA-Z\d-\._]*
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取玩家昵称，长度 128
                     * @return Name 玩家昵称，长度 128
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置玩家昵称，长度 128
                     * @param _name 玩家昵称，长度 128
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取玩家匹配属性，最多 10 条
                     * @return MatchAttributes 玩家匹配属性，最多 10 条
                     * 
                     */
                    std::vector<MatchAttribute> GetMatchAttributes() const;

                    /**
                     * 设置玩家匹配属性，最多 10 条
                     * @param _matchAttributes 玩家匹配属性，最多 10 条
                     * 
                     */
                    void SetMatchAttributes(const std::vector<MatchAttribute>& _matchAttributes);

                    /**
                     * 判断参数 MatchAttributes 是否已赋值
                     * @return MatchAttributes 是否已赋值
                     * 
                     */
                    bool MatchAttributesHasBeenSet() const;

                    /**
                     * 获取队伍名，可以传递不同队伍名，长度 128 [a-zA-Z0-9-\.]*
                     * @return Team 队伍名，可以传递不同队伍名，长度 128 [a-zA-Z0-9-\.]*
                     * 
                     */
                    std::string GetTeam() const;

                    /**
                     * 设置队伍名，可以传递不同队伍名，长度 128 [a-zA-Z0-9-\.]*
                     * @param _team 队伍名，可以传递不同队伍名，长度 128 [a-zA-Z0-9-\.]*
                     * 
                     */
                    void SetTeam(const std::string& _team);

                    /**
                     * 判断参数 Team 是否已赋值
                     * @return Team 是否已赋值
                     * 
                     */
                    bool TeamHasBeenSet() const;

                    /**
                     * 获取自定义玩家状态 透传参数 [0, 99999]
                     * @return CustomPlayerStatus 自定义玩家状态 透传参数 [0, 99999]
                     * 
                     */
                    uint64_t GetCustomPlayerStatus() const;

                    /**
                     * 设置自定义玩家状态 透传参数 [0, 99999]
                     * @param _customPlayerStatus 自定义玩家状态 透传参数 [0, 99999]
                     * 
                     */
                    void SetCustomPlayerStatus(const uint64_t& _customPlayerStatus);

                    /**
                     * 判断参数 CustomPlayerStatus 是否已赋值
                     * @return CustomPlayerStatus 是否已赋值
                     * 
                     */
                    bool CustomPlayerStatusHasBeenSet() const;

                    /**
                     * 获取自定义玩家信息 透传参数 长度 1024
                     * @return CustomProfile 自定义玩家信息 透传参数 长度 1024
                     * 
                     */
                    std::string GetCustomProfile() const;

                    /**
                     * 设置自定义玩家信息 透传参数 长度 1024
                     * @param _customProfile 自定义玩家信息 透传参数 长度 1024
                     * 
                     */
                    void SetCustomProfile(const std::string& _customProfile);

                    /**
                     * 判断参数 CustomProfile 是否已赋值
                     * @return CustomProfile 是否已赋值
                     * 
                     */
                    bool CustomProfileHasBeenSet() const;

                    /**
                     * 获取各区域延迟，最多 20 条
                     * @return RegionLatencies 各区域延迟，最多 20 条
                     * 
                     */
                    std::vector<RegionLatency> GetRegionLatencies() const;

                    /**
                     * 设置各区域延迟，最多 20 条
                     * @param _regionLatencies 各区域延迟，最多 20 条
                     * 
                     */
                    void SetRegionLatencies(const std::vector<RegionLatency>& _regionLatencies);

                    /**
                     * 判断参数 RegionLatencies 是否已赋值
                     * @return RegionLatencies 是否已赋值
                     * 
                     */
                    bool RegionLatenciesHasBeenSet() const;

                private:

                    /**
                     * 玩家 PlayerId 长度 128 [a-zA-Z\d-\._]*
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 玩家昵称，长度 128
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 玩家匹配属性，最多 10 条
                     */
                    std::vector<MatchAttribute> m_matchAttributes;
                    bool m_matchAttributesHasBeenSet;

                    /**
                     * 队伍名，可以传递不同队伍名，长度 128 [a-zA-Z0-9-\.]*
                     */
                    std::string m_team;
                    bool m_teamHasBeenSet;

                    /**
                     * 自定义玩家状态 透传参数 [0, 99999]
                     */
                    uint64_t m_customPlayerStatus;
                    bool m_customPlayerStatusHasBeenSet;

                    /**
                     * 自定义玩家信息 透传参数 长度 1024
                     */
                    std::string m_customProfile;
                    bool m_customProfileHasBeenSet;

                    /**
                     * 各区域延迟，最多 20 条
                     */
                    std::vector<RegionLatency> m_regionLatencies;
                    bool m_regionLatenciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_PLAYER_H_
