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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTINFOFORMANAGEMENTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTINFOFORMANAGEMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryMerchantInfoForManagement请求参数结构体
                */
                class QueryMerchantInfoForManagementRequest : public AbstractModel
                {
                public:
                    QueryMerchantInfoForManagementRequest();
                    ~QueryMerchantInfoForManagementRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开票平台ID
                     * @return InvoicePlatformId 开票平台ID
                     * 
                     */
                    int64_t GetInvoicePlatformId() const;

                    /**
                     * 设置开票平台ID
                     * @param _invoicePlatformId 开票平台ID
                     * 
                     */
                    void SetInvoicePlatformId(const int64_t& _invoicePlatformId);

                    /**
                     * 判断参数 InvoicePlatformId 是否已赋值
                     * @return InvoicePlatformId 是否已赋值
                     * 
                     */
                    bool InvoicePlatformIdHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return Offset 页码
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页码
                     * @param _offset 页码
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取页大小
                     * @return Limit 页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置页大小
                     * @param _limit 页大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox。
                     * @return Profile 接入环境。沙箱环境填sandbox。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox。
                     * @param _profile 接入环境。沙箱环境填sandbox。
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 开票平台ID
                     */
                    int64_t m_invoicePlatformId;
                    bool m_invoicePlatformIdHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYMERCHANTINFOFORMANAGEMENTREQUEST_H_
