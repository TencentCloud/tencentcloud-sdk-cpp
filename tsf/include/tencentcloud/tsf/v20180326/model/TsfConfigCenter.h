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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFCONFIGCENTER_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFCONFIGCENTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 配置中心
                */
                class TsfConfigCenter : public AbstractModel
                {
                public:
                    TsfConfigCenter();
                    ~TsfConfigCenter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置中心类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigType 配置中心类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigType() const;

                    /**
                     * 设置配置中心类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configType 配置中心类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigType(const std::string& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取配置中心实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigCenterInstanceId 配置中心实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigCenterInstanceId() const;

                    /**
                     * 设置配置中心实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configCenterInstanceId 配置中心实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigCenterInstanceId(const std::string& _configCenterInstanceId);

                    /**
                     * 判断参数 ConfigCenterInstanceId 是否已赋值
                     * @return ConfigCenterInstanceId 是否已赋值
                     * 
                     */
                    bool ConfigCenterInstanceIdHasBeenSet() const;

                    /**
                     * 获取配置中心实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigCenterInstanceName 配置中心实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigCenterInstanceName() const;

                    /**
                     * 设置配置中心实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configCenterInstanceName 配置中心实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigCenterInstanceName(const std::string& _configCenterInstanceName);

                    /**
                     * 判断参数 ConfigCenterInstanceName 是否已赋值
                     * @return ConfigCenterInstanceName 是否已赋值
                     * 
                     */
                    bool ConfigCenterInstanceNameHasBeenSet() const;

                    /**
                     * 获取实例地域id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 实例地域id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置实例地域id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionId 实例地域id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceId 命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentVersion 当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCurrentVersion() const;

                    /**
                     * 设置当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currentVersion 当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrentVersion(const std::string& _currentVersion);

                    /**
                     * 判断参数 CurrentVersion 是否已赋值
                     * @return CurrentVersion 是否已赋值
                     * 
                     */
                    bool CurrentVersionHasBeenSet() const;

                    /**
                     * 获取需要升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetVersion 需要升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetVersion() const;

                    /**
                     * 设置需要升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetVersion 需要升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetVersion(const std::string& _targetVersion);

                    /**
                     * 判断参数 TargetVersion 是否已赋值
                     * @return TargetVersion 是否已赋值
                     * 
                     */
                    bool TargetVersionHasBeenSet() const;

                private:

                    /**
                     * 配置中心类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * 配置中心实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configCenterInstanceId;
                    bool m_configCenterInstanceIdHasBeenSet;

                    /**
                     * 配置中心实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configCenterInstanceName;
                    bool m_configCenterInstanceNameHasBeenSet;

                    /**
                     * 实例地域id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 命名空间id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentVersion;
                    bool m_currentVersionHasBeenSet;

                    /**
                     * 需要升级的版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetVersion;
                    bool m_targetVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFCONFIGCENTER_H_
