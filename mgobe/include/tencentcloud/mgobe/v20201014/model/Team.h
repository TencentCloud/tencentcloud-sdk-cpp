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

#ifndef TENCENTCLOUD_MGOBE_V20201014_MODEL_TEAM_H_
#define TENCENTCLOUD_MGOBE_V20201014_MODEL_TEAM_H_

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
                * 团队属性
                */
                class Team : public AbstractModel
                {
                public:
                    Team();
                    ~Team() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取队伍ID。最长不超过16个字符。
                     * @return Id 队伍ID。最长不超过16个字符。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置队伍ID。最长不超过16个字符。
                     * @param _id 队伍ID。最长不超过16个字符。
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
                     * 获取队伍名称。最长不超过32个字符。
                     * @return Name 队伍名称。最长不超过32个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置队伍名称。最长不超过32个字符。
                     * @param _name 队伍名称。最长不超过32个字符。
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
                     * 获取队伍最小人数。最大不超过100人。
                     * @return MinPlayers 队伍最小人数。最大不超过100人。
                     * 
                     */
                    int64_t GetMinPlayers() const;

                    /**
                     * 设置队伍最小人数。最大不超过100人。
                     * @param _minPlayers 队伍最小人数。最大不超过100人。
                     * 
                     */
                    void SetMinPlayers(const int64_t& _minPlayers);

                    /**
                     * 判断参数 MinPlayers 是否已赋值
                     * @return MinPlayers 是否已赋值
                     * 
                     */
                    bool MinPlayersHasBeenSet() const;

                    /**
                     * 获取队伍最大人数。最大不超过100人。
                     * @return MaxPlayers 队伍最大人数。最大不超过100人。
                     * 
                     */
                    int64_t GetMaxPlayers() const;

                    /**
                     * 设置队伍最大人数。最大不超过100人。
                     * @param _maxPlayers 队伍最大人数。最大不超过100人。
                     * 
                     */
                    void SetMaxPlayers(const int64_t& _maxPlayers);

                    /**
                     * 判断参数 MaxPlayers 是否已赋值
                     * @return MaxPlayers 是否已赋值
                     * 
                     */
                    bool MaxPlayersHasBeenSet() const;

                private:

                    /**
                     * 队伍ID。最长不超过16个字符。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 队伍名称。最长不超过32个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 队伍最小人数。最大不超过100人。
                     */
                    int64_t m_minPlayers;
                    bool m_minPlayersHasBeenSet;

                    /**
                     * 队伍最大人数。最大不超过100人。
                     */
                    int64_t m_maxPlayers;
                    bool m_maxPlayersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MGOBE_V20201014_MODEL_TEAM_H_
