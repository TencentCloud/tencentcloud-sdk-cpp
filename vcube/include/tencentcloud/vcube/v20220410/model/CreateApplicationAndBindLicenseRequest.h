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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEAPPLICATIONANDBINDLICENSEREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEAPPLICATIONANDBINDLICENSEREQUEST_H_

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
                * CreateApplicationAndBindLicense请求参数结构体
                */
                class CreateApplicationAndBindLicenseRequest : public AbstractModel
                {
                public:
                    CreateApplicationAndBindLicenseRequest();
                    ~CreateApplicationAndBindLicenseRequest() = default;
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
                     * 获取<p>资源包ID</p>
                     * @return ResourceIds <p>资源包ID</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>资源包ID</p>
                     * @param _resourceIds <p>资源包ID</p>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

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
                     * 获取<p>优图资源id列表</p>
                     * @return XMagicResourceIds <p>优图资源id列表</p>
                     * 
                     */
                    std::vector<std::string> GetXMagicResourceIds() const;

                    /**
                     * 设置<p>优图资源id列表</p>
                     * @param _xMagicResourceIds <p>优图资源id列表</p>
                     * 
                     */
                    void SetXMagicResourceIds(const std::vector<std::string>& _xMagicResourceIds);

                    /**
                     * 判断参数 XMagicResourceIds 是否已赋值
                     * @return XMagicResourceIds 是否已赋值
                     * 
                     */
                    bool XMagicResourceIdsHasBeenSet() const;

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
                     * 获取<p>要开通的域名列表</p>
                     * @return DomainList <p>要开通的域名列表</p>
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置<p>要开通的域名列表</p>
                     * @param _domainList <p>要开通的域名列表</p>
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取<p>要开通的端，web/mobile/pc</p>
                     * @return Platform <p>要开通的端，web/mobile/pc</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>要开通的端，web/mobile/pc</p>
                     * @param _platform <p>要开通的端，web/mobile/pc</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

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
                     * <p>资源包ID</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

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
                     * <p>优图资源id列表</p>
                     */
                    std::vector<std::string> m_xMagicResourceIds;
                    bool m_xMagicResourceIdsHasBeenSet;

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
                     * <p>要开通的域名列表</p>
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * <p>要开通的端，web/mobile/pc</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEAPPLICATIONANDBINDLICENSEREQUEST_H_
