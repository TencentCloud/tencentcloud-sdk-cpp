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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPCOMPANYINFORESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPCOMPANYINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20210624/model/BrandData.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * DescribeBPCompanyInfo返回参数结构体
                */
                class DescribeBPCompanyInfoResponse : public AbstractModel
                {
                public:
                    DescribeBPCompanyInfoResponse();
                    ~DescribeBPCompanyInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取xx
                     * @return CompanyName xx
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return Phone xx
                     */
                    std::string GetPhone() const;

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return LicenseName xx
                     */
                    std::string GetLicenseName() const;

                    /**
                     * 判断参数 LicenseName 是否已赋值
                     * @return LicenseName 是否已赋值
                     */
                    bool LicenseNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return LicenseStatus xx
                     */
                    int64_t GetLicenseStatus() const;

                    /**
                     * 判断参数 LicenseStatus 是否已赋值
                     * @return LicenseStatus 是否已赋值
                     */
                    bool LicenseStatusHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return LicenseNote xx
                     */
                    std::string GetLicenseNote() const;

                    /**
                     * 判断参数 LicenseNote 是否已赋值
                     * @return LicenseNote 是否已赋值
                     */
                    bool LicenseNoteHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return AuthorizationName xx
                     */
                    std::string GetAuthorizationName() const;

                    /**
                     * 判断参数 AuthorizationName 是否已赋值
                     * @return AuthorizationName 是否已赋值
                     */
                    bool AuthorizationNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return AuthorizationStatus xx
                     */
                    int64_t GetAuthorizationStatus() const;

                    /**
                     * 判断参数 AuthorizationStatus 是否已赋值
                     * @return AuthorizationStatus 是否已赋值
                     */
                    bool AuthorizationStatusHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return AuthorizationNote xx
                     */
                    std::string GetAuthorizationNote() const;

                    /**
                     * 判断参数 AuthorizationNote 是否已赋值
                     * @return AuthorizationNote 是否已赋值
                     */
                    bool AuthorizationNoteHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return BrandDatas xx
                     */
                    std::vector<BrandData> GetBrandDatas() const;

                    /**
                     * 判断参数 BrandDatas 是否已赋值
                     * @return BrandDatas 是否已赋值
                     */
                    bool BrandDatasHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return CompanyId xx
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     */
                    bool CompanyIdHasBeenSet() const;

                private:

                    /**
                     * xx
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_licenseName;
                    bool m_licenseNameHasBeenSet;

                    /**
                     * xx
                     */
                    int64_t m_licenseStatus;
                    bool m_licenseStatusHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_licenseNote;
                    bool m_licenseNoteHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_authorizationName;
                    bool m_authorizationNameHasBeenSet;

                    /**
                     * xx
                     */
                    int64_t m_authorizationStatus;
                    bool m_authorizationStatusHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_authorizationNote;
                    bool m_authorizationNoteHasBeenSet;

                    /**
                     * xx
                     */
                    std::vector<BrandData> m_brandDatas;
                    bool m_brandDatasHasBeenSet;

                    /**
                     * xx
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPCOMPANYINFORESPONSE_H_
