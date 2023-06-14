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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCOMPANYTITLEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCOMPANYTITLEREQUEST_H_

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
                * QueryCompanyTitle请求参数结构体
                */
                class QueryCompanyTitleRequest : public AbstractModel
                {
                public:
                    QueryCompanyTitleRequest();
                    ~QueryCompanyTitleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公司抬头关键字
                     * @return CompanyTitleKeyword 公司抬头关键字
                     * 
                     */
                    std::string GetCompanyTitleKeyword() const;

                    /**
                     * 设置公司抬头关键字
                     * @param _companyTitleKeyword 公司抬头关键字
                     * 
                     */
                    void SetCompanyTitleKeyword(const std::string& _companyTitleKeyword);

                    /**
                     * 判断参数 CompanyTitleKeyword 是否已赋值
                     * @return CompanyTitleKeyword 是否已赋值
                     * 
                     */
                    bool CompanyTitleKeywordHasBeenSet() const;

                    /**
                     * 获取开票平台ID。0：高灯，1：票易通
                     * @return InvoicePlatformId 开票平台ID。0：高灯，1：票易通
                     * 
                     */
                    int64_t GetInvoicePlatformId() const;

                    /**
                     * 设置开票平台ID。0：高灯，1：票易通
                     * @param _invoicePlatformId 开票平台ID。0：高灯，1：票易通
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
                     * 获取销方纳税人识别号
                     * @return SellerTaxpayerNum 销方纳税人识别号
                     * 
                     */
                    std::string GetSellerTaxpayerNum() const;

                    /**
                     * 设置销方纳税人识别号
                     * @param _sellerTaxpayerNum 销方纳税人识别号
                     * 
                     */
                    void SetSellerTaxpayerNum(const std::string& _sellerTaxpayerNum);

                    /**
                     * 判断参数 SellerTaxpayerNum 是否已赋值
                     * @return SellerTaxpayerNum 是否已赋值
                     * 
                     */
                    bool SellerTaxpayerNumHasBeenSet() const;

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
                     * 公司抬头关键字
                     */
                    std::string m_companyTitleKeyword;
                    bool m_companyTitleKeywordHasBeenSet;

                    /**
                     * 开票平台ID。0：高灯，1：票易通
                     */
                    int64_t m_invoicePlatformId;
                    bool m_invoicePlatformIdHasBeenSet;

                    /**
                     * 销方纳税人识别号
                     */
                    std::string m_sellerTaxpayerNum;
                    bool m_sellerTaxpayerNumHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYCOMPANYTITLEREQUEST_H_
