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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_APPLICATIONINFO_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_APPLICATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/License.h>
#include <tencentcloud/vcube/v20220410/model/XMagicInfo.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 视立方license用户 应用结构
                */
                class ApplicationInfo : public AbstractModel
                {
                public:
                    ApplicationInfo();
                    ~ApplicationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用名称</p>
                     * @return AppName <p>应用名称</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>应用名称</p>
                     * @param _appName <p>应用名称</p>
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
                     * 获取<p>Ios应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId <p>Ios应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置<p>Ios应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId <p>Ios应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>应用类型，formal： 正式应用，test：测试应用</p>
                     * @return AppType <p>应用类型，formal： 正式应用，test：测试应用</p>
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置<p>应用类型，formal： 正式应用，test：测试应用</p>
                     * @param _appType <p>应用类型，formal： 正式应用，test：测试应用</p>
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取<p>license数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Licenses <p>license数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<License> GetLicenses() const;

                    /**
                     * 设置<p>license数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenses <p>license数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLicenses(const std::vector<License>& _licenses);

                    /**
                     * 判断参数 Licenses 是否已赋值
                     * @return Licenses 是否已赋值
                     * 
                     */
                    bool LicensesHasBeenSet() const;

                    /**
                     * 获取<p>license 秘钥</p>
                     * @return LicenseKey <p>license 秘钥</p>
                     * 
                     */
                    std::string GetLicenseKey() const;

                    /**
                     * 设置<p>license 秘钥</p>
                     * @param _licenseKey <p>license 秘钥</p>
                     * 
                     */
                    void SetLicenseKey(const std::string& _licenseKey);

                    /**
                     * 判断参数 LicenseKey 是否已赋值
                     * @return LicenseKey 是否已赋值
                     * 
                     */
                    bool LicenseKeyHasBeenSet() const;

                    /**
                     * 获取<p>安卓应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName <p>安卓应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>安卓应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageName <p>安卓应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdatedAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updatedAt <p>更新时间</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取<p>用户应用Id</p>
                     * @return ApplicationId <p>用户应用Id</p>
                     * 
                     */
                    uint64_t GetApplicationId() const;

                    /**
                     * 设置<p>用户应用Id</p>
                     * @param _applicationId <p>用户应用Id</p>
                     * 
                     */
                    void SetApplicationId(const uint64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>视立方下载license的url</p>
                     * @return LicenseUrl <p>视立方下载license的url</p>
                     * 
                     */
                    std::string GetLicenseUrl() const;

                    /**
                     * 设置<p>视立方下载license的url</p>
                     * @param _licenseUrl <p>视立方下载license的url</p>
                     * 
                     */
                    void SetLicenseUrl(const std::string& _licenseUrl);

                    /**
                     * 判断参数 LicenseUrl 是否已赋值
                     * @return LicenseUrl 是否已赋值
                     * 
                     */
                    bool LicenseUrlHasBeenSet() const;

                    /**
                     * 获取<p>优图美视信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return XMagics <p>优图美视信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<XMagicInfo> GetXMagics() const;

                    /**
                     * 设置<p>优图美视信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _xMagics <p>优图美视信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetXMagics(const std::vector<XMagicInfo>& _xMagics);

                    /**
                     * 判断参数 XMagics 是否已赋值
                     * @return XMagics 是否已赋值
                     * 
                     */
                    bool XMagicsHasBeenSet() const;

                    /**
                     * 获取<p>Mac  进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MacBundleId <p>Mac  进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMacBundleId() const;

                    /**
                     * 设置<p>Mac  进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _macBundleId <p>Mac  进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>windows 进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WinProcessName <p>windows 进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWinProcessName() const;

                    /**
                     * 设置<p>windows 进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _winProcessName <p>windows 进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>web端Domain列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainList <p>web端Domain列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置<p>web端Domain列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainList <p>web端Domain列表</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>账号AppId</p>
                     * @return AppId <p>账号AppId</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>账号AppId</p>
                     * @param _appId <p>账号AppId</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>扩展包名数量上限</p>
                     * @return NameLimit <p>扩展包名数量上限</p>
                     * 
                     */
                    uint64_t GetNameLimit() const;

                    /**
                     * 设置<p>扩展包名数量上限</p>
                     * @param _nameLimit <p>扩展包名数量上限</p>
                     * 
                     */
                    void SetNameLimit(const uint64_t& _nameLimit);

                    /**
                     * 判断参数 NameLimit 是否已赋值
                     * @return NameLimit 是否已赋值
                     * 
                     */
                    bool NameLimitHasBeenSet() const;

                    /**
                     * 获取<p>linux 进程名</p>
                     * @return LinuxProcessName <p>linux 进程名</p>
                     * 
                     */
                    std::string GetLinuxProcessName() const;

                    /**
                     * 设置<p>linux 进程名</p>
                     * @param _linuxProcessName <p>linux 进程名</p>
                     * 
                     */
                    void SetLinuxProcessName(const std::string& _linuxProcessName);

                    /**
                     * 判断参数 LinuxProcessName 是否已赋值
                     * @return LinuxProcessName 是否已赋值
                     * 
                     */
                    bool LinuxProcessNameHasBeenSet() const;

                private:

                    /**
                     * <p>应用名称</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>Ios应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * <p>应用类型，formal： 正式应用，test：测试应用</p>
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * <p>license数组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<License> m_licenses;
                    bool m_licensesHasBeenSet;

                    /**
                     * <p>license 秘钥</p>
                     */
                    std::string m_licenseKey;
                    bool m_licenseKeyHasBeenSet;

                    /**
                     * <p>安卓应用的唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>用户应用Id</p>
                     */
                    uint64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>视立方下载license的url</p>
                     */
                    std::string m_licenseUrl;
                    bool m_licenseUrlHasBeenSet;

                    /**
                     * <p>优图美视信息列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<XMagicInfo> m_xMagics;
                    bool m_xMagicsHasBeenSet;

                    /**
                     * <p>Mac  进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_macBundleId;
                    bool m_macBundleIdHasBeenSet;

                    /**
                     * <p>windows 进程名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_winProcessName;
                    bool m_winProcessNameHasBeenSet;

                    /**
                     * <p>web端Domain列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * <p>账号AppId</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>扩展包名数量上限</p>
                     */
                    uint64_t m_nameLimit;
                    bool m_nameLimitHasBeenSet;

                    /**
                     * <p>linux 进程名</p>
                     */
                    std::string m_linuxProcessName;
                    bool m_linuxProcessNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_APPLICATIONINFO_H_
