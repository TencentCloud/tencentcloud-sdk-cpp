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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_PLAYER_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_PLAYER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mgobe
    {
        namespace V20201014
        {
            namespace Model
            {
                /**
                * 玩家信息详情
                */
                class Player : public AbstractModel
                {
                public:
                    Player();
                    ~Player() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取玩家 OpenId。最长不超过64个字符。
                     * @return OpenId 玩家 OpenId。最长不超过64个字符。
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置玩家 OpenId。最长不超过64个字符。
                     * @param _openId 玩家 OpenId。最长不超过64个字符。
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取玩家昵称。最长不超过32个字符。
                     * @return Name 玩家昵称。最长不超过32个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置玩家昵称。最长不超过32个字符。
                     * @param _name 玩家昵称。最长不超过32个字符。
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
                     * 获取队伍 ID。最长不超过16个字符。
                     * @return TeamId 队伍 ID。最长不超过16个字符。
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置队伍 ID。最长不超过16个字符。
                     * @param _teamId 队伍 ID。最长不超过16个字符。
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取是否为机器人。
                     * @return IsRobot 是否为机器人。
                     * 
                     */
                    bool GetIsRobot() const;

                    /**
                     * 设置是否为机器人。
                     * @param _isRobot 是否为机器人。
                     * 
                     */
                    void SetIsRobot(const bool& _isRobot);

                    /**
                     * 判断参数 IsRobot 是否已赋值
                     * @return IsRobot 是否已赋值
                     * 
                     */
                    bool IsRobotHasBeenSet() const;

                    /**
                     * 获取玩家 PlayerId。出参使用，由后端返回。
                     * @return PlayerId 玩家 PlayerId。出参使用，由后端返回。
                     * 
                     */
                    std::string GetPlayerId() const;

                    /**
                     * 设置玩家 PlayerId。出参使用，由后端返回。
                     * @param _playerId 玩家 PlayerId。出参使用，由后端返回。
                     * 
                     */
                    void SetPlayerId(const std::string& _playerId);

                    /**
                     * 判断参数 PlayerId 是否已赋值
                     * @return PlayerId 是否已赋值
                     * 
                     */
                    bool PlayerIdHasBeenSet() const;

                    /**
                     * 获取自定义玩家状态。非负数，最大不超过4294967295。默认为0。
                     * @return CustomPlayerStatus 自定义玩家状态。非负数，最大不超过4294967295。默认为0。
                     * 
                     */
                    uint64_t GetCustomPlayerStatus() const;

                    /**
                     * 设置自定义玩家状态。非负数，最大不超过4294967295。默认为0。
                     * @param _customPlayerStatus 自定义玩家状态。非负数，最大不超过4294967295。默认为0。
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
                     * 获取自定义玩家属性。最长不超过256个字符。默认为空字符串。
                     * @return CustomProfile 自定义玩家属性。最长不超过256个字符。默认为空字符串。
                     * 
                     */
                    std::string GetCustomProfile() const;

                    /**
                     * 设置自定义玩家属性。最长不超过256个字符。默认为空字符串。
                     * @param _customProfile 自定义玩家属性。最长不超过256个字符。默认为空字符串。
                     * 
                     */
                    void SetCustomProfile(const std::string& _customProfile);

                    /**
                     * 判断参数 CustomProfile 是否已赋值
                     * @return CustomProfile 是否已赋值
                     * 
                     */
                    bool CustomProfileHasBeenSet() const;

                private:

                    /**
                     * 玩家 OpenId。最长不超过64个字符。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 玩家昵称。最长不超过32个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 队伍 ID。最长不超过16个字符。
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * 是否为机器人。
                     */
                    bool m_isRobot;
                    bool m_isRobotHasBeenSet;

                    /**
                     * 玩家 PlayerId。出参使用，由后端返回。
                     */
                    std::string m_playerId;
                    bool m_playerIdHasBeenSet;

                    /**
                     * 自定义玩家状态。非负数，最大不超过4294967295。默认为0。
                     */
                    uint64_t m_customPlayerStatus;
                    bool m_customPlayerStatusHasBeenSet;

                    /**
                     * 自定义玩家属性。最长不超过256个字符。默认为空字符串。
                     */
                    std::string m_customProfile;
                    bool m_customProfileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_PLAYER_H_
