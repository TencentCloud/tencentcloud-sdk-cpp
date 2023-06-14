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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPBRANDREQUEST_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPBRANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * CreateBPBrand请求参数结构体
                */
                class CreateBPBrandRequest : public AbstractModel
                {
                public:
                    CreateBPBrandRequest();
                    ~CreateBPBrandRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取品牌logo
                     * @return BrandLogo 品牌logo
                     * 
                     */
                    std::string GetBrandLogo() const;

                    /**
                     * 设置品牌logo
                     * @param _brandLogo 品牌logo
                     * 
                     */
                    void SetBrandLogo(const std::string& _brandLogo);

                    /**
                     * 判断参数 BrandLogo 是否已赋值
                     * @return BrandLogo 是否已赋值
                     * 
                     */
                    bool BrandLogoHasBeenSet() const;

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
                     * 获取商标名称
                     * @return TrademarkNames 商标名称
                     * 
                     */
                    std::vector<std::string> GetTrademarkNames() const;

                    /**
                     * 设置商标名称
                     * @param _trademarkNames 商标名称
                     * 
                     */
                    void SetTrademarkNames(const std::vector<std::string>& _trademarkNames);

                    /**
                     * 判断参数 TrademarkNames 是否已赋值
                     * @return TrademarkNames 是否已赋值
                     * 
                     */
                    bool TrademarkNamesHasBeenSet() const;

                    /**
                     * 获取商标证明
                     * @return Trademarks 商标证明
                     * 
                     */
                    std::vector<std::string> GetTrademarks() const;

                    /**
                     * 设置商标证明
                     * @param _trademarks 商标证明
                     * 
                     */
                    void SetTrademarks(const std::vector<std::string>& _trademarks);

                    /**
                     * 判断参数 Trademarks 是否已赋值
                     * @return Trademarks 是否已赋值
                     * 
                     */
                    bool TrademarksHasBeenSet() const;

                    /**
                     * 获取是否涉及转让: 0-不转让 1-转让
                     * @return IsTransfers 是否涉及转让: 0-不转让 1-转让
                     * 
                     */
                    std::vector<std::string> GetIsTransfers() const;

                    /**
                     * 设置是否涉及转让: 0-不转让 1-转让
                     * @param _isTransfers 是否涉及转让: 0-不转让 1-转让
                     * 
                     */
                    void SetIsTransfers(const std::vector<std::string>& _isTransfers);

                    /**
                     * 判断参数 IsTransfers 是否已赋值
                     * @return IsTransfers 是否已赋值
                     * 
                     */
                    bool IsTransfersHasBeenSet() const;

                    /**
                     * 获取转让证明
                     * @return Transfers 转让证明
                     * 
                     */
                    std::vector<std::string> GetTransfers() const;

                    /**
                     * 设置转让证明
                     * @param _transfers 转让证明
                     * 
                     */
                    void SetTransfers(const std::vector<std::string>& _transfers);

                    /**
                     * 判断参数 Transfers 是否已赋值
                     * @return Transfers 是否已赋值
                     * 
                     */
                    bool TransfersHasBeenSet() const;

                    /**
                     * 获取保护网址
                     * @return ProtectURLs 保护网址
                     * 
                     */
                    std::vector<std::string> GetProtectURLs() const;

                    /**
                     * 设置保护网址
                     * @param _protectURLs 保护网址
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
                     * 获取保护应用
                     * @return ProtectAPPs 保护应用
                     * 
                     */
                    std::vector<std::string> GetProtectAPPs() const;

                    /**
                     * 设置保护应用
                     * @param _protectAPPs 保护应用
                     * 
                     */
                    void SetProtectAPPs(const std::vector<std::string>& _protectAPPs);

                    /**
                     * 判断参数 ProtectAPPs 是否已赋值
                     * @return ProtectAPPs 是否已赋值
                     * 
                     */
                    bool ProtectAPPsHasBeenSet() const;

                    /**
                     * 获取保护公众号
                     * @return ProtectOfficialAccounts 保护公众号
                     * 
                     */
                    std::vector<std::string> GetProtectOfficialAccounts() const;

                    /**
                     * 设置保护公众号
                     * @param _protectOfficialAccounts 保护公众号
                     * 
                     */
                    void SetProtectOfficialAccounts(const std::vector<std::string>& _protectOfficialAccounts);

                    /**
                     * 判断参数 ProtectOfficialAccounts 是否已赋值
                     * @return ProtectOfficialAccounts 是否已赋值
                     * 
                     */
                    bool ProtectOfficialAccountsHasBeenSet() const;

                    /**
                     * 获取保护小程序
                     * @return ProtectMiniPrograms 保护小程序
                     * 
                     */
                    std::vector<std::string> GetProtectMiniPrograms() const;

                    /**
                     * 设置保护小程序
                     * @param _protectMiniPrograms 保护小程序
                     * 
                     */
                    void SetProtectMiniPrograms(const std::vector<std::string>& _protectMiniPrograms);

                    /**
                     * 判断参数 ProtectMiniPrograms 是否已赋值
                     * @return ProtectMiniPrograms 是否已赋值
                     * 
                     */
                    bool ProtectMiniProgramsHasBeenSet() const;

                    /**
                     * 获取请求来源：0-反钓鱼 2-反假冒
                     * @return APISource 请求来源：0-反钓鱼 2-反假冒
                     * 
                     */
                    int64_t GetAPISource() const;

                    /**
                     * 设置请求来源：0-反钓鱼 2-反假冒
                     * @param _aPISource 请求来源：0-反钓鱼 2-反假冒
                     * 
                     */
                    void SetAPISource(const int64_t& _aPISource);

                    /**
                     * 判断参数 APISource 是否已赋值
                     * @return APISource 是否已赋值
                     * 
                     */
                    bool APISourceHasBeenSet() const;

                private:

                    /**
                     * 品牌名称
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 企业名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 品牌logo
                     */
                    std::string m_brandLogo;
                    bool m_brandLogoHasBeenSet;

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
                     * 授权书
                     */
                    std::string m_authorization;
                    bool m_authorizationHasBeenSet;

                    /**
                     * 商标名称
                     */
                    std::vector<std::string> m_trademarkNames;
                    bool m_trademarkNamesHasBeenSet;

                    /**
                     * 商标证明
                     */
                    std::vector<std::string> m_trademarks;
                    bool m_trademarksHasBeenSet;

                    /**
                     * 是否涉及转让: 0-不转让 1-转让
                     */
                    std::vector<std::string> m_isTransfers;
                    bool m_isTransfersHasBeenSet;

                    /**
                     * 转让证明
                     */
                    std::vector<std::string> m_transfers;
                    bool m_transfersHasBeenSet;

                    /**
                     * 保护网址
                     */
                    std::vector<std::string> m_protectURLs;
                    bool m_protectURLsHasBeenSet;

                    /**
                     * 保护应用
                     */
                    std::vector<std::string> m_protectAPPs;
                    bool m_protectAPPsHasBeenSet;

                    /**
                     * 保护公众号
                     */
                    std::vector<std::string> m_protectOfficialAccounts;
                    bool m_protectOfficialAccountsHasBeenSet;

                    /**
                     * 保护小程序
                     */
                    std::vector<std::string> m_protectMiniPrograms;
                    bool m_protectMiniProgramsHasBeenSet;

                    /**
                     * 请求来源：0-反钓鱼 2-反假冒
                     */
                    int64_t m_aPISource;
                    bool m_aPISourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPBRANDREQUEST_H_
