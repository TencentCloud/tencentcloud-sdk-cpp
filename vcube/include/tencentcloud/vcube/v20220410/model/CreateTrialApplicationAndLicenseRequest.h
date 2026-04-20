/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>应用名</p>
                     * @return AppName <p>应用名</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>应用名</p>
                     * @param _appName <p>应用名</p>
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
                     * 获取<p>应用ID</p>
                     * @return BundleId <p>应用ID</p>
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _bundleId <p>应用ID</p>
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
                     * 获取<p>包名</p>
                     * @return PackageName <p>包名</p>
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>包名</p>
                     * @param _packageName <p>包名</p>
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
                     * 获取<p>鸿蒙包包名</p>
                     * @return BundleName <p>鸿蒙包包名</p>
                     * 
                     */
                    std::string GetBundleName() const;

                    /**
                     * 设置<p>鸿蒙包包名</p>
                     * @param _bundleName <p>鸿蒙包包名</p>
                     * 
                     */
                    void SetBundleName(const std::string& _bundleName);

                    /**
                     * 判断参数 BundleName 是否已赋值
                     * @return BundleName 是否已赋值
                     * 
                     */
                    bool BundleNameHasBeenSet() const;

                    /**
                     * 获取<p>功能 id 数组</p>
                     * @return FeatureIds <p>功能 id 数组</p>
                     * 
                     */
                    std::vector<int64_t> GetFeatureIds() const;

                    /**
                     * 设置<p>功能 id 数组</p>
                     * @param _featureIds <p>功能 id 数组</p>
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
                     * 获取<p>是否要开通优图功能</p>
                     * @return XMagic <p>是否要开通优图功能</p>
                     * 
                     */
                    bool GetXMagic() const;

                    /**
                     * 设置<p>是否要开通优图功能</p>
                     * @param _xMagic <p>是否要开通优图功能</p>
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
                     * 获取<p>营业执照</p>
                     * @return CompanyPermit <p>营业执照</p>
                     * 
                     */
                    std::string GetCompanyPermit() const;

                    /**
                     * 设置<p>营业执照</p>
                     * @param _companyPermit <p>营业执照</p>
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
                     * 获取<p>公司类型</p>
                     * @return CompanyType <p>公司类型</p>
                     * 
                     */
                    std::string GetCompanyType() const;

                    /**
                     * 设置<p>公司类型</p>
                     * @param _companyType <p>公司类型</p>
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
                     * 获取<p>公司名称</p>
                     * @return CompanyName <p>公司名称</p>
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置<p>公司名称</p>
                     * @param _companyName <p>公司名称</p>
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
                     * 获取<p>要开通的测试功能名称，基础套餐只能有一个</p>
                     * @return PlanList <p>要开通的测试功能名称，基础套餐只能有一个</p>
                     * 
                     */
                    std::vector<std::string> GetPlanList() const;

                    /**
                     * 设置<p>要开通的测试功能名称，基础套餐只能有一个</p>
                     * @param _planList <p>要开通的测试功能名称，基础套餐只能有一个</p>
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
                     * 获取<p>Mac 进程名</p>
                     * @return MacBundleId <p>Mac 进程名</p>
                     * 
                     */
                    std::string GetMacBundleId() const;

                    /**
                     * 设置<p>Mac 进程名</p>
                     * @param _macBundleId <p>Mac 进程名</p>
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
                     * 获取<p>Windows 进程名</p>
                     * @return WinProcessName <p>Windows 进程名</p>
                     * 
                     */
                    std::string GetWinProcessName() const;

                    /**
                     * 设置<p>Windows 进程名</p>
                     * @param _winProcessName <p>Windows 进程名</p>
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
                     * 获取<p>要创建到哪个平台，web、mobile、pc，默认mobile</p>
                     * @return Platform <p>要创建到哪个平台，web、mobile、pc，默认mobile</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>要创建到哪个平台，web、mobile、pc，默认mobile</p>
                     * @param _platform <p>要创建到哪个平台，web、mobile、pc，默认mobile</p>
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
                     * 获取<p>授权域名列表</p>
                     * @return DomainList <p>授权域名列表</p>
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置<p>授权域名列表</p>
                     * @param _domainList <p>授权域名列表</p>
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
                     * <p>应用名</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>包名</p>
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * <p>鸿蒙包包名</p>
                     */
                    std::string m_bundleName;
                    bool m_bundleNameHasBeenSet;

                    /**
                     * <p>功能 id 数组</p>
                     */
                    std::vector<int64_t> m_featureIds;
                    bool m_featureIdsHasBeenSet;

                    /**
                     * <p>是否要开通优图功能</p>
                     */
                    bool m_xMagic;
                    bool m_xMagicHasBeenSet;

                    /**
                     * <p>营业执照</p>
                     */
                    std::string m_companyPermit;
                    bool m_companyPermitHasBeenSet;

                    /**
                     * <p>公司类型</p>
                     */
                    std::string m_companyType;
                    bool m_companyTypeHasBeenSet;

                    /**
                     * <p>公司名称</p>
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * <p>要开通的测试功能名称，基础套餐只能有一个</p>
                     */
                    std::vector<std::string> m_planList;
                    bool m_planListHasBeenSet;

                    /**
                     * <p>Mac 进程名</p>
                     */
                    std::string m_macBundleId;
                    bool m_macBundleIdHasBeenSet;

                    /**
                     * <p>Windows 进程名</p>
                     */
                    std::string m_winProcessName;
                    bool m_winProcessNameHasBeenSet;

                    /**
                     * <p>要创建到哪个平台，web、mobile、pc，默认mobile</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>授权域名列表</p>
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATETRIALAPPLICATIONANDLICENSEREQUEST_H_
