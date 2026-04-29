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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBERESOURCEGRANTEDACCOUNTSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBERESOURCEGRANTEDACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DescribeResourceGrantedAccounts请求参数结构体
                */
                class DescribeResourceGrantedAccountsRequest : public AbstractModel
                {
                public:
                    DescribeResourceGrantedAccountsRequest();
                    ~DescribeResourceGrantedAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账户组Id(只支持32位)
                     * @return ResourceId 账户组Id(只支持32位)
                     * 
                     */
                    uint64_t GetResourceId() const;

                    /**
                     * 设置账户组Id(只支持32位)
                     * @param _resourceId 账户组Id(只支持32位)
                     * 
                     */
                    void SetResourceId(const uint64_t& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 账户组Id(只支持32位)
                     */
                    uint64_t m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBERESOURCEGRANTEDACCOUNTSREQUEST_H_
