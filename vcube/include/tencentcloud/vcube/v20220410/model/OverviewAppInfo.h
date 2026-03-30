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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEWAPPINFO_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEWAPPINFO_H_

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
                class OverviewAppInfo : public AbstractModel
                {
                public:
                    OverviewAppInfo();
                    ~OverviewAppInfo() = default;
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
                     * 获取域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainList 域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainList 域名列表
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
                     * 域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_OVERVIEWAPPINFO_H_
