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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPPROTECTURLSREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPPROTECTURLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateBPProtectURLs请求参数结构体
                */
                class CreateBPProtectURLsRequest : public AbstractModel
                {
                public:
                    CreateBPProtectURLsRequest();
                    ~CreateBPProtectURLsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业名称
                     * @return CompanyName 企业名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置企业名称
                     * @param _companyName 企业名称
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取电话号码
                     * @return Phone 电话号码
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置电话号码
                     * @param _phone 电话号码
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取营业执照
                     * @return LicenseName 营业执照
                     * 
                     */
                    std::string GetLicenseName() const;

                    /**
                     * 设置营业执照
                     * @param _licenseName 营业执照
                     * 
                     */
                    void SetLicenseName(const std::string& _licenseName);

                    /**
                     * 判断参数 LicenseName 是否已赋值
                     * @return LicenseName 是否已赋值
                     * 
                     */
                    bool LicenseNameHasBeenSet() const;

                    /**
                     * 获取保护网站
                     * @return ProtectURLs 保护网站
                     * 
                     */
                    std::vector<std::string> GetProtectURLs() const;

                    /**
                     * 设置保护网站
                     * @param _protectURLs 保护网站
                     * 
                     */
                    void SetProtectURLs(const std::vector<std::string>& _protectURLs);

                    /**
                     * 判断参数 ProtectURLs 是否已赋值
                     * @return ProtectURLs 是否已赋值
                     * 
                     */
                    bool ProtectURLsHasBeenSet() const;

                    /**
                     * 获取网站名称
                     * @return ProtectWebs 网站名称
                     * 
                     */
                    std::vector<std::string> GetProtectWebs() const;

                    /**
                     * 设置网站名称
                     * @param _protectWebs 网站名称
                     * 
                     */
                    void SetProtectWebs(const std::vector<std::string>& _protectWebs);

                    /**
                     * 判断参数 ProtectWebs 是否已赋值
                     * @return ProtectWebs 是否已赋值
                     * 
                     */
                    bool ProtectWebsHasBeenSet() const;

                private:

                    /**
                     * 企业名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 电话号码
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 营业执照
                     */
                    std::string m_licenseName;
                    bool m_licenseNameHasBeenSet;

                    /**
                     * 保护网站
                     */
                    std::vector<std::string> m_protectURLs;
                    bool m_protectURLsHasBeenSet;

                    /**
                     * 网站名称
                     */
                    std::vector<std::string> m_protectWebs;
                    bool m_protectWebsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPPROTECTURLSREQUEST_H_
