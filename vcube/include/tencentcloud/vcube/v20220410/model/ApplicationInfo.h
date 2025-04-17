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
                     * 获取应用名称
                     * @return AppName 应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称
                     * @param _appName 应用名称
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
                     * 获取Ios应用的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId Ios应用的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Ios应用的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId Ios应用的唯一标识
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
                     * 获取应用类型，formal： 正式应用，test：测试应用
                     * @return AppType 应用类型，formal： 正式应用，test：测试应用
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型，formal： 正式应用，test：测试应用
                     * @param _appType 应用类型，formal： 正式应用，test：测试应用
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
                     * 获取license数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Licenses license数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<License> GetLicenses() const;

                    /**
                     * 设置license数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _licenses license数组
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
                     * 获取license 秘钥
                     * @return LicenseKey license 秘钥
                     * 
                     */
                    std::string GetLicenseKey() const;

                    /**
                     * 设置license 秘钥
                     * @param _licenseKey license 秘钥
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
                     * 获取安卓应用的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName 安卓应用的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置安卓应用的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageName 安卓应用的唯一标识
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
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
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
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
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
                     * 获取用户应用Id
                     * @return ApplicationId 用户应用Id
                     * 
                     */
                    uint64_t GetApplicationId() const;

                    /**
                     * 设置用户应用Id
                     * @param _applicationId 用户应用Id
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
                     * 获取视立方下载license的url
                     * @return LicenseUrl 视立方下载license的url
                     * 
                     */
                    std::string GetLicenseUrl() const;

                    /**
                     * 设置视立方下载license的url
                     * @param _licenseUrl 视立方下载license的url
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
                     * 获取优图美视信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return XMagics 优图美视信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<XMagicInfo> GetXMagics() const;

                    /**
                     * 设置优图美视信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _xMagics 优图美视信息列表
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
                     * 获取Mac  进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MacBundleId Mac  进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMacBundleId() const;

                    /**
                     * 设置Mac  进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _macBundleId Mac  进程名
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
                     * 获取windows 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WinProcessName windows 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWinProcessName() const;

                    /**
                     * 设置windows 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _winProcessName windows 进程名
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
                     * 获取web端Domain列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainList web端Domain列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置web端Domain列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainList web端Domain列表
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
                     * 获取账号AppId
                     * @return AppId 账号AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置账号AppId
                     * @param _appId 账号AppId
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
                     * 获取扩展包名数量上限
                     * @return NameLimit 扩展包名数量上限
                     * 
                     */
                    uint64_t GetNameLimit() const;

                    /**
                     * 设置扩展包名数量上限
                     * @param _nameLimit 扩展包名数量上限
                     * 
                     */
                    void SetNameLimit(const uint64_t& _nameLimit);

                    /**
                     * 判断参数 NameLimit 是否已赋值
                     * @return NameLimit 是否已赋值
                     * 
                     */
                    bool NameLimitHasBeenSet() const;

                private:

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Ios应用的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 应用类型，formal： 正式应用，test：测试应用
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * license数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<License> m_licenses;
                    bool m_licensesHasBeenSet;

                    /**
                     * license 秘钥
                     */
                    std::string m_licenseKey;
                    bool m_licenseKeyHasBeenSet;

                    /**
                     * 安卓应用的唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 用户应用Id
                     */
                    uint64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 视立方下载license的url
                     */
                    std::string m_licenseUrl;
                    bool m_licenseUrlHasBeenSet;

                    /**
                     * 优图美视信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<XMagicInfo> m_xMagics;
                    bool m_xMagicsHasBeenSet;

                    /**
                     * Mac  进程名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_macBundleId;
                    bool m_macBundleIdHasBeenSet;

                    /**
                     * windows 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_winProcessName;
                    bool m_winProcessNameHasBeenSet;

                    /**
                     * web端Domain列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * 账号AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 扩展包名数量上限
                     */
                    uint64_t m_nameLimit;
                    bool m_nameLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_APPLICATIONINFO_H_
