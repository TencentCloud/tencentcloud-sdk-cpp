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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEINSTANCESCOUNTREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEINSTANCESCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeInstancesCount请求参数结构体
                */
                class DescribeInstancesCountRequest : public AbstractModel
                {
                public:
                    DescribeInstancesCountRequest();
                    ~DescribeInstancesCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏ID
                     * @return GameId 游戏ID
                     * 
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏ID
                     * @param _gameId 游戏ID
                     * 
                     */
                    void SetGameId(const std::string& _gameId);

                    /**
                     * 判断参数 GameId 是否已赋值
                     * @return GameId 是否已赋值
                     * 
                     */
                    bool GameIdHasBeenSet() const;

                    /**
                     * 获取实例分组ID
                     * @return GroupId 实例分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置实例分组ID
                     * @param _groupId 实例分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取游戏区域
                     * @return GameRegion 游戏区域
                     * 
                     */
                    std::string GetGameRegion() const;

                    /**
                     * 设置游戏区域
                     * @param _gameRegion 游戏区域
                     * 
                     */
                    void SetGameRegion(const std::string& _gameRegion);

                    /**
                     * 判断参数 GameRegion 是否已赋值
                     * @return GameRegion 是否已赋值
                     * 
                     */
                    bool GameRegionHasBeenSet() const;

                    /**
                     * 获取游戏类型。
MOBILE：手游
PC：默认值，端游
                     * @return GameType 游戏类型。
MOBILE：手游
PC：默认值，端游
                     * 
                     */
                    std::string GetGameType() const;

                    /**
                     * 设置游戏类型。
MOBILE：手游
PC：默认值，端游
                     * @param _gameType 游戏类型。
MOBILE：手游
PC：默认值，端游
                     * 
                     */
                    void SetGameType(const std::string& _gameType);

                    /**
                     * 判断参数 GameType 是否已赋值
                     * @return GameType 是否已赋值
                     * 
                     */
                    bool GameTypeHasBeenSet() const;

                private:

                    /**
                     * 游戏ID
                     */
                    std::string m_gameId;
                    bool m_gameIdHasBeenSet;

                    /**
                     * 实例分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 游戏区域
                     */
                    std::string m_gameRegion;
                    bool m_gameRegionHasBeenSet;

                    /**
                     * 游戏类型。
MOBILE：手游
PC：默认值，端游
                     */
                    std::string m_gameType;
                    bool m_gameTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEINSTANCESCOUNTREQUEST_H_
