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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_LICENSERESOURCEINFO_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_LICENSERESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/Package.h>
#include <tencentcloud/vcube/v20220410/model/AppInfo.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * license 资源信息
                */
                class LicenseResourceInfo : public AbstractModel
                {
                public:
                    LicenseResourceInfo();
                    ~LicenseResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权功能Id
                     * @return Id 授权功能Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置授权功能Id
                     * @param _id 授权功能Id
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
                     * 获取有效期时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 有效期时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置有效期时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 有效期时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取功能Id
                     * @return FeatureId 功能Id
                     * 
                     */
                    uint64_t GetFeatureId() const;

                    /**
                     * 设置功能Id
                     * @param _featureId 功能Id
                     * 
                     */
                    void SetFeatureId(const uint64_t& _featureId);

                    /**
                     * 判断参数 FeatureId 是否已赋值
                     * @return FeatureId 是否已赋值
                     * 
                     */
                    bool FeatureIdHasBeenSet() const;

                    /**
                     * 获取此license资源的开始生效时间
                     * @return StartTime 此license资源的开始生效时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置此license资源的开始生效时间
                     * @param _startTime 此license资源的开始生效时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取此license资源的生效结束时间
                     * @return EndTime 此license资源的生效结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置此license资源的生效结束时间
                     * @param _endTime 此license资源的生效结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

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
                     * 获取此资源是否可用于续期和更新有效期
                     * @return IsUse 此资源是否可用于续期和更新有效期
                     * 
                     */
                    bool GetIsUse() const;

                    /**
                     * 设置此资源是否可用于续期和更新有效期
                     * @param _isUse 此资源是否可用于续期和更新有效期
                     * 
                     */
                    void SetIsUse(const bool& _isUse);

                    /**
                     * 判断参数 IsUse 是否已赋值
                     * @return IsUse 是否已赋值
                     * 
                     */
                    bool IsUseHasBeenSet() const;

                    /**
                     * 获取此资源的状态
                     * @return Status 此资源的状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置此资源的状态
                     * @param _status 此资源的状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取销毁时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolatedTimestamp 销毁时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsolatedTimestamp() const;

                    /**
                     * 设置销毁时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isolatedTimestamp 销毁时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsolatedTimestamp(const std::string& _isolatedTimestamp);

                    /**
                     * 判断参数 IsolatedTimestamp 是否已赋值
                     * @return IsolatedTimestamp 是否已赋值
                     * 
                     */
                    bool IsolatedTimestampHasBeenSet() const;

                    /**
                     * 获取功能模块名称
                     * @return Name 功能模块名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置功能模块名称
                     * @param _name 功能模块名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取功能模块类型
                     * @return Type 功能模块类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置功能模块类型
                     * @param _type 功能模块类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取资源包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Package 资源包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Package GetPackage() const;

                    /**
                     * 设置资源包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _package 资源包信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackage(const Package& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Application 应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppInfo GetApplication() const;

                    /**
                     * 设置应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _application 应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplication(const AppInfo& _application);

                    /**
                     * 判断参数 Application 是否已赋值
                     * @return Application 是否已赋值
                     * 
                     */
                    bool ApplicationHasBeenSet() const;

                    /**
                     * 获取资源Id
                     * @return ResourceId 资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源Id
                     * @param _resourceId 资源Id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取自动续费状态
                     * @return AutoRenewFlag 自动续费状态
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费状态
                     * @param _autoRenewFlag 自动续费状态
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 授权功能Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 用户appid
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 有效期时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 功能Id
                     */
                    uint64_t m_featureId;
                    bool m_featureIdHasBeenSet;

                    /**
                     * 此license资源的开始生效时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 此license资源的生效结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

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
                     * 此资源是否可用于续期和更新有效期
                     */
                    bool m_isUse;
                    bool m_isUseHasBeenSet;

                    /**
                     * 此资源的状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 销毁时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isolatedTimestamp;
                    bool m_isolatedTimestampHasBeenSet;

                    /**
                     * 功能模块名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 功能模块类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资源包信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Package m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 应用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppInfo m_application;
                    bool m_applicationHasBeenSet;

                    /**
                     * 资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 自动续费状态
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_LICENSERESOURCEINFO_H_
