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
                     */
                    std::string GetGameId() const;

                    /**
                     * 设置游戏ID
                     * @param GameId 游戏ID
                     */
                    void SetGameId(const std::string& _gameId);

                    /**
                     * 判断参数 GameId 是否已赋值
                     * @return GameId 是否已赋值
                     */
                    bool GameIdHasBeenSet() const;

                    /**
                     * 获取实例分组ID
                     * @return GroupId 实例分组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置实例分组ID
                     * @param GroupId 实例分组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEINSTANCESCOUNTREQUEST_H_
