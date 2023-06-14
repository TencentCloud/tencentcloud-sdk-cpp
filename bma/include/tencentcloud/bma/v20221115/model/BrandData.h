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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_BRANDDATA_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_BRANDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20221115/model/TrademarkData.h>
#include <tencentcloud/bma/v20221115/model/ServiceData.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * 品牌响应数据
                */
                class BrandData : public AbstractModel
                {
                public:
                    BrandData();
                    ~BrandData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取品牌Id
                     * @return CompanyId 品牌Id
                     * 
                     */
                    int64_t GetCompanyId() const;

                    /**
                     * 设置品牌Id
                     * @param _companyId 品牌Id
                     * 
                     */
                    void SetCompanyId(const int64_t& _companyId);

                    /**
                     * 判断参数 CompanyId 是否已赋值
                     * @return CompanyId 是否已赋值
                     * 
                     */
                    bool CompanyIdHasBeenSet() const;

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
                     * 获取品牌名称
                     * @return BrandName 品牌名称
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名称
                     * @param _brandName 品牌名称
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取联系电话
                     * @return Phone 联系电话
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置联系电话
                     * @param _phone 联系电话
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
                     * @return License 营业执照
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置营业执照
                     * @param _license 营业执照
                     * 
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取营业执照审核状态
                     * @return LicenseStatus 营业执照审核状态
                     * 
                     */
                    int64_t GetLicenseStatus() const;

                    /**
                     * 设置营业执照审核状态
                     * @param _licenseStatus 营业执照审核状态
                     * 
                     */
                    void SetLicenseStatus(const int64_t& _licenseStatus);

                    /**
                     * 判断参数 LicenseStatus 是否已赋值
                     * @return LicenseStatus 是否已赋值
                     * 
                     */
                    bool LicenseStatusHasBeenSet() const;

                    /**
                     * 获取营业执照审核状态说明
                     * @return LicenseNote 营业执照审核状态说明
                     * 
                     */
                    std::string GetLicenseNote() const;

                    /**
                     * 设置营业执照审核状态说明
                     * @param _licenseNote 营业执照审核状态说明
                     * 
                     */
                    void SetLicenseNote(const std::string& _licenseNote);

                    /**
                     * 判断参数 LicenseNote 是否已赋值
                     * @return LicenseNote 是否已赋值
                     * 
                     */
                    bool LicenseNoteHasBeenSet() const;

                    /**
                     * 获取授权书
                     * @return Authorization 授权书
                     * 
                     */
                    std::string GetAuthorization() const;

                    /**
                     * 设置授权书
                     * @param _authorization 授权书
                     * 
                     */
                    void SetAuthorization(const std::string& _authorization);

                    /**
                     * 判断参数 Authorization 是否已赋值
                     * @return Authorization 是否已赋值
                     * 
                     */
                    bool AuthorizationHasBeenSet() const;

                    /**
                     * 获取授权书审核状态
                     * @return AuthorizationStatus 授权书审核状态
                     * 
                     */
                    int64_t GetAuthorizationStatus() const;

                    /**
                     * 设置授权书审核状态
                     * @param _authorizationStatus 授权书审核状态
                     * 
                     */
                    void SetAuthorizationStatus(const int64_t& _authorizationStatus);

                    /**
                     * 判断参数 AuthorizationStatus 是否已赋值
                     * @return AuthorizationStatus 是否已赋值
                     * 
                     */
                    bool AuthorizationStatusHasBeenSet() const;

                    /**
                     * 获取授权书审核状态说明
                     * @return AuthorizationNote 授权书审核状态说明
                     * 
                     */
                    std::string GetAuthorizationNote() const;

                    /**
                     * 设置授权书审核状态说明
                     * @param _authorizationNote 授权书审核状态说明
                     * 
                     */
                    void SetAuthorizationNote(const std::string& _authorizationNote);

                    /**
                     * 判断参数 AuthorizationNote 是否已赋值
                     * @return AuthorizationNote 是否已赋值
                     * 
                     */
                    bool AuthorizationNoteHasBeenSet() const;

                    /**
                     * 获取商标信息
                     * @return Trademarks 商标信息
                     * 
                     */
                    std::vector<TrademarkData> GetTrademarks() const;

                    /**
                     * 设置商标信息
                     * @param _trademarks 商标信息
                     * 
                     */
                    void SetTrademarks(const std::vector<TrademarkData>& _trademarks);

                    /**
                     * 判断参数 Trademarks 是否已赋值
                     * @return Trademarks 是否已赋值
                     * 
                     */
                    bool TrademarksHasBeenSet() const;

                    /**
                     * 获取新增时间
                     * @return InsertTime 新增时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置新增时间
                     * @param _insertTime 新增时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取服务信息
                     * @return Services 服务信息
                     * 
                     */
                    ServiceData GetServices() const;

                    /**
                     * 设置服务信息
                     * @param _services 服务信息
                     * 
                     */
                    void SetServices(const ServiceData& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取账号id
                     * @return Uin 账号id
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账号id
                     * @param _uin 账号id
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 品牌Id
                     */
                    int64_t m_companyId;
                    bool m_companyIdHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 品牌名称
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 联系电话
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 营业执照
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 营业执照审核状态
                     */
                    int64_t m_licenseStatus;
                    bool m_licenseStatusHasBeenSet;

                    /**
                     * 营业执照审核状态说明
                     */
                    std::string m_licenseNote;
                    bool m_licenseNoteHasBeenSet;

                    /**
                     * 授权书
                     */
                    std::string m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * 授权书审核状态
                     */
                    int64_t m_authorizationStatus;
                    bool m_authorizationStatusHasBeenSet;

                    /**
                     * 授权书审核状态说明
                     */
                    std::string m_authorizationNote;
                    bool m_authorizationNoteHasBeenSet;

                    /**
                     * 商标信息
                     */
                    std::vector<TrademarkData> m_trademarks;
                    bool m_trademarksHasBeenSet;

                    /**
                     * 新增时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 服务信息
                     */
                    ServiceData m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * 账号id
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_BRANDDATA_H_
