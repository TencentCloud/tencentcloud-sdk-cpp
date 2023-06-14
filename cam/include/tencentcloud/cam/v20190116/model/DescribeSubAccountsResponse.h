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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESUBACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESUBACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/SubAccountUser.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DescribeSubAccounts返回参数结构体
                */
                class DescribeSubAccountsResponse : public AbstractModel
                {
                public:
                    DescribeSubAccountsResponse();
                    ~DescribeSubAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取子用户列表
                     * @return SubAccounts 子用户列表
                     * 
                     */
                    std::vector<SubAccountUser> GetSubAccounts() const;

                    /**
                     * 判断参数 SubAccounts 是否已赋值
                     * @return SubAccounts 是否已赋值
                     * 
                     */
                    bool SubAccountsHasBeenSet() const;

                private:

                    /**
                     * 子用户列表
                     */
                    std::vector<SubAccountUser> m_subAccounts;
                    bool m_subAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DESCRIBESUBACCOUNTSRESPONSE_H_
