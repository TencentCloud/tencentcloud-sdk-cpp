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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_APPINFO_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_APPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 应用包名信息
                */
                class AppInfo : public AbstractModel
                {
                public:
                    AppInfo();
                    ~AppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用Id
                     * @return Id 应用Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置应用Id
                     * @param _id 应用Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
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
                     * 获取Ios 包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BundleId Ios 包名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Ios 包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bundleId Ios 包名
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
                     * 获取Andorid 包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName Andorid 包名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Andorid 包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageName Andorid 包名
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
                     * 获取应用详情
                     * @return AppType 应用详情
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用详情
                     * @param _appType 应用详情
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
                     * 获取Mac 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MacBundleId Mac 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMacBundleId() const;

                    /**
                     * 设置Mac 进程名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _macBundleId Mac 进程名
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
                     * 获取允许的web域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainList 允许的web域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置允许的web域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainList 允许的web域名列表
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

                private:

                    /**
                     * 应用Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Ios 包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Andorid 包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 应用详情
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

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
                     * Mac 进程名
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
                     * 允许的web域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_APPINFO_H_
