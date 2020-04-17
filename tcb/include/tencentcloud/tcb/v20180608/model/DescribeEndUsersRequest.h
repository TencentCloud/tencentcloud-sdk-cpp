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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEndUsers请求参数结构体
                */
                class DescribeEndUsersRequest : public AbstractModel
                {
                public:
                    DescribeEndUsersRequest();
                    ~DescribeEndUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开发者的环境ID
                     * @return EnvId 开发者的环境ID
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置开发者的环境ID
                     * @param EnvId 开发者的环境ID
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取按照 uuid 列表过滤，最大个数为100
                     * @return UUIds 按照 uuid 列表过滤，最大个数为100
                     */
                    std::vector<std::string> GetUUIds() const;

                    /**
                     * 设置按照 uuid 列表过滤，最大个数为100
                     * @param UUIds 按照 uuid 列表过滤，最大个数为100
                     */
                    void SetUUIds(const std::vector<std::string>& _uUIds);

                    /**
                     * 判断参数 UUIds 是否已赋值
                     * @return UUIds 是否已赋值
                     */
                    bool UUIdsHasBeenSet() const;

                private:

                    /**
                     * 开发者的环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 按照 uuid 列表过滤，最大个数为100
                     */
                    std::vector<std::string> m_uUIds;
                    bool m_uUIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERSREQUEST_H_
