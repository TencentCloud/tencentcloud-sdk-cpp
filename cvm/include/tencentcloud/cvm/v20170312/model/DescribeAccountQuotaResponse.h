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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEACCOUNTQUOTARESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEACCOUNTQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/AccountQuotaOverview.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAccountQuota返回参数结构体
                */
                class DescribeAccountQuotaResponse : public AbstractModel
                {
                public:
                    DescribeAccountQuotaResponse();
                    ~DescribeAccountQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取配额数据
                     * @return AccountQuotaOverview 配额数据
                     * 
                     */
                    AccountQuotaOverview GetAccountQuotaOverview() const;

                    /**
                     * 判断参数 AccountQuotaOverview 是否已赋值
                     * @return AccountQuotaOverview 是否已赋值
                     * 
                     */
                    bool AccountQuotaOverviewHasBeenSet() const;

                private:

                    /**
                     * 用户appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 配额数据
                     */
                    AccountQuotaOverview m_accountQuotaOverview;
                    bool m_accountQuotaOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEACCOUNTQUOTARESPONSE_H_
