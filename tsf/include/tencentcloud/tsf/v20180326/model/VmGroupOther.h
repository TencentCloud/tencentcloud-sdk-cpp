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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUPOTHER_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUPOTHER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 虚拟机部署组其他字段
                */
                class VmGroupOther : public AbstractModel
                {
                public:
                    VmGroupOther();
                    ~VmGroupOther() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署组ID
                     * @return GroupId 部署组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
                     * @param _groupId 部署组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageId 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageName 程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageName 程序包名称
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
                     * 获取程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageVersion 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageVersion 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取部署组实例数
                     * @return InstanceCount 部署组实例数
                     * 
                     */
                    int64_t GetInstanceCount() const;

                    /**
                     * 设置部署组实例数
                     * @param _instanceCount 部署组实例数
                     * 
                     */
                    void SetInstanceCount(const int64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取部署组运行中实例数
                     * @return RunInstanceCount 部署组运行中实例数
                     * 
                     */
                    int64_t GetRunInstanceCount() const;

                    /**
                     * 设置部署组运行中实例数
                     * @param _runInstanceCount 部署组运行中实例数
                     * 
                     */
                    void SetRunInstanceCount(const int64_t& _runInstanceCount);

                    /**
                     * 判断参数 RunInstanceCount 是否已赋值
                     * @return RunInstanceCount 是否已赋值
                     * 
                     */
                    bool RunInstanceCountHasBeenSet() const;

                    /**
                     * 获取部署组中停止实例数
                     * @return OffInstanceCount 部署组中停止实例数
                     * 
                     */
                    int64_t GetOffInstanceCount() const;

                    /**
                     * 设置部署组中停止实例数
                     * @param _offInstanceCount 部署组中停止实例数
                     * 
                     */
                    void SetOffInstanceCount(const int64_t& _offInstanceCount);

                    /**
                     * 判断参数 OffInstanceCount 是否已赋值
                     * @return OffInstanceCount 是否已赋值
                     * 
                     */
                    bool OffInstanceCountHasBeenSet() const;

                    /**
                     * 获取部署组状态
                     * @return GroupStatus 部署组状态
                     * 
                     */
                    std::string GetGroupStatus() const;

                    /**
                     * 设置部署组状态
                     * @param _groupStatus 部署组状态
                     * 
                     */
                    void SetGroupStatus(const std::string& _groupStatus);

                    /**
                     * 判断参数 GroupStatus 是否已赋值
                     * @return GroupStatus 是否已赋值
                     * 
                     */
                    bool GroupStatusHasBeenSet() const;

                    /**
                     * 获取服务配置信息是否匹配
                     * @return IsNotEqualServiceConfig 服务配置信息是否匹配
                     * 
                     */
                    bool GetIsNotEqualServiceConfig() const;

                    /**
                     * 设置服务配置信息是否匹配
                     * @param _isNotEqualServiceConfig 服务配置信息是否匹配
                     * 
                     */
                    void SetIsNotEqualServiceConfig(const bool& _isNotEqualServiceConfig);

                    /**
                     * 判断参数 IsNotEqualServiceConfig 是否已赋值
                     * @return IsNotEqualServiceConfig 是否已赋值
                     * 
                     */
                    bool IsNotEqualServiceConfigHasBeenSet() const;

                    /**
                     * 获取HealthCheckSettings
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckSettings HealthCheckSettings
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置HealthCheckSettings
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckSettings HealthCheckSettings
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings);

                    /**
                     * 判断参数 HealthCheckSettings 是否已赋值
                     * @return HealthCheckSettings 是否已赋值
                     * 
                     */
                    bool HealthCheckSettingsHasBeenSet() const;

                private:

                    /**
                     * 部署组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 程序包ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 程序包名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 程序包版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 部署组实例数
                     */
                    int64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 部署组运行中实例数
                     */
                    int64_t m_runInstanceCount;
                    bool m_runInstanceCountHasBeenSet;

                    /**
                     * 部署组中停止实例数
                     */
                    int64_t m_offInstanceCount;
                    bool m_offInstanceCountHasBeenSet;

                    /**
                     * 部署组状态
                     */
                    std::string m_groupStatus;
                    bool m_groupStatusHasBeenSet;

                    /**
                     * 服务配置信息是否匹配
                     */
                    bool m_isNotEqualServiceConfig;
                    bool m_isNotEqualServiceConfigHasBeenSet;

                    /**
                     * HealthCheckSettings
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_VMGROUPOTHER_H_
