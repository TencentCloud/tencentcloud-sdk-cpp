/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACEUSERRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACEUSERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/ServerlessSpaceUser.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeServerlessSpaceUser返回参数结构体
                */
                class DescribeServerlessSpaceUserResponse : public AbstractModel
                {
                public:
                    DescribeServerlessSpaceUserResponse();
                    ~DescribeServerlessSpaceUserResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户数组
                     * @return ServerlessSpaceUsers 用户数组
                     * 
                     */
                    std::vector<ServerlessSpaceUser> GetServerlessSpaceUsers() const;

                    /**
                     * 判断参数 ServerlessSpaceUsers 是否已赋值
                     * @return ServerlessSpaceUsers 是否已赋值
                     * 
                     */
                    bool ServerlessSpaceUsersHasBeenSet() const;

                    /**
                     * 获取用户总数
                     * @return TotalCount 用户总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 用户数组
                     */
                    std::vector<ServerlessSpaceUser> m_serverlessSpaceUsers;
                    bool m_serverlessSpaceUsersHasBeenSet;

                    /**
                     * 用户总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSSPACEUSERRESPONSE_H_
