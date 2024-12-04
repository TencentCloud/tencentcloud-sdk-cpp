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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATETRIALAPPLICATIONANDLICENSEREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATETRIALAPPLICATIONANDLICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * CreateTrialApplicationAndLicense请求参数结构体
                */
                class CreateTrialApplicationAndLicenseRequest : public AbstractModel
                {
                public:
                    CreateTrialApplicationAndLicenseRequest();
                    ~CreateTrialApplicationAndLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名
                     * @return AppName 应用名
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名
                     * @param _appName 应用名
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return BundleId 应用ID
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置应用ID
                     * @param _bundleId 应用ID
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取包名
                     * @return PackageName 包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置包名
                     * @param _packageName 包名
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取功能 id 数组
                     * @return FeatureIds 功能 id 数组
                     * 
                     */
                    std::vector<int64_t> GetFeatureIds() const;

                    /**
                     * 设置功能 id 数组
                     * @param _featureIds 功能 id 数组
                     * 
                     */
                    void SetFeatureIds(const std::vector<int64_t>& _featureIds);

                    /**
                     * 判断参数 FeatureIds 是否已赋值
                     * @return FeatureIds 是否已赋值
                     * 
                     */
                    bool FeatureIdsHasBeenSet() const;

                    /**
                     * 获取是否要开通优图功能
                     * @return XMagic 是否要开通优图功能
                     * 
                     */
                    bool GetXMagic() const;

                    /**
                     * 设置是否要开通优图功能
                     * @param _xMagic 是否要开通优图功能
                     * 
                     */
                    void SetXMagic(const bool& _xMagic);

                    /**
                     * 判断参数 XMagic 是否已赋值
                     * @return XMagic 是否已赋值
                     * 
                     */
                    bool XMagicHasBeenSet() const;

                    /**
                     * 获取营业执照
                     * @return CompanyPermit 营业执照
                     * 
                     */
                    std::string GetCompanyPermit() const;

                    /**
                     * 设置营业执照
                     * @param _companyPermit 营业执照
                     * 
                     */
                    void SetCompanyPermit(const std::string& _companyPermit);

                    /**
                     * 判断参数 CompanyPermit 是否已赋值
                     * @return CompanyPermit 是否已赋值
                     * 
                     */
                    bool CompanyPermitHasBeenSet() const;

                    /**
                     * 获取公司类型
                     * @return CompanyType 公司类型
                     * 
                     */
                    std::string GetCompanyType() const;

                    /**
                     * 设置公司类型
                     * @param _companyType 公司类型
                     * 
                     */
                    void SetCompanyType(const std::string& _companyType);

                    /**
                     * 判断参数 CompanyType 是否已赋值
                     * @return CompanyType 是否已赋值
                     * 
                     */
                    bool CompanyTypeHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return CompanyName 公司名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置公司名称
                     * @param _companyName 公司名称
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
                     * 获取要开通的测试功能名称，基础套餐只能有一个
                     * @return PlanList 要开通的测试功能名称，基础套餐只能有一个
                     * 
                     */
                    std::vector<std::string> GetPlanList() const;

                    /**
                     * 设置要开通的测试功能名称，基础套餐只能有一个
                     * @param _planList 要开通的测试功能名称，基础套餐只能有一个
                     * 
                     */
                    void SetPlanList(const std::vector<std::string>& _planList);

                    /**
                     * 判断参数 PlanList 是否已赋值
                     * @return PlanList 是否已赋值
                     * 
                     */
                    bool PlanListHasBeenSet() const;

                    /**
                     * 获取Mac 进程名
                     * @return MacBundleId Mac 进程名
                     * 
                     */
                    std::string GetMacBundleId() const;

                    /**
                     * 设置Mac 进程名
                     * @param _macBundleId Mac 进程名
                     * 
                     */
                    void SetMacBundleId(const std::string& _macBundleId);

                    /**
                     * 判断参数 MacBundleId 是否已赋值
                     * @return MacBundleId 是否已赋值
                     * 
                     */
                    bool MacBundleIdHasBeenSet() const;

                    /**
                     * 获取Windows 进程名
                     * @return WinProcessName Windows 进程名
                     * 
                     */
                    std::string GetWinProcessName() const;

                    /**
                     * 设置Windows 进程名
                     * @param _winProcessName Windows 进程名
                     * 
                     */
                    void SetWinProcessName(const std::string& _winProcessName);

                    /**
                     * 判断参数 WinProcessName 是否已赋值
                     * @return WinProcessName 是否已赋值
                     * 
                     */
                    bool WinProcessNameHasBeenSet() const;

                    /**
                     * 获取要创建到哪个平台，web、mobile、pc，默认mobile
                     * @return Platform 要创建到哪个平台，web、mobile、pc，默认mobile
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置要创建到哪个平台，web、mobile、pc，默认mobile
                     * @param _platform 要创建到哪个平台，web、mobile、pc，默认mobile
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取授权域名列表
                     * @return DomainList 授权域名列表
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置授权域名列表
                     * @param _domainList 授权域名列表
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * 应用名
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 功能 id 数组
                     */
                    std::vector<int64_t> m_featureIds;
                    bool m_featureIdsHasBeenSet;

                    /**
                     * 是否要开通优图功能
                     */
                    bool m_xMagic;
                    bool m_xMagicHasBeenSet;

                    /**
                     * 营业执照
                     */
                    std::string m_companyPermit;
                    bool m_companyPermitHasBeenSet;

                    /**
                     * 公司类型
                     */
                    std::string m_companyType;
                    bool m_companyTypeHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 要开通的测试功能名称，基础套餐只能有一个
                     */
                    std::vector<std::string> m_planList;
                    bool m_planListHasBeenSet;

                    /**
                     * Mac 进程名
                     */
                    std::string m_macBundleId;
                    bool m_macBundleIdHasBeenSet;

                    /**
                     * Windows 进程名
                     */
                    std::string m_winProcessName;
                    bool m_winProcessNameHasBeenSet;

                    /**
                     * 要创建到哪个平台，web、mobile、pc，默认mobile
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 授权域名列表
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATETRIALAPPLICATIONANDLICENSEREQUEST_H_
