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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEBALANCEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEBALANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * DescribeBalance请求参数结构体
                */
                class DescribeBalanceRequest : public AbstractModel
                {
                public:
                    DescribeBalanceRequest();
                    ~DescribeBalanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账户类型：1-设备接入；2-云存。
                     * @return AccountType 账户类型：1-设备接入；2-云存。
                     * 
                     */
                    uint64_t GetAccountType() const;

                    /**
                     * 设置账户类型：1-设备接入；2-云存。
                     * @param _accountType 账户类型：1-设备接入；2-云存。
                     * 
                     */
                    void SetAccountType(const uint64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                private:

                    /**
                     * 账户类型：1-设备接入；2-云存。
                     */
                    uint64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_DESCRIBEBALANCEREQUEST_H_
