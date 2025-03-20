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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_MACHINEUPGRADESETTINGS_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_MACHINEUPGRADESETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20220501/model/AutoUpgradeOptions.h>
#include <tencentcloud/tke/v20220501/model/IntOrString.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 托管节点池自动升级配置
                */
                class MachineUpgradeSettings : public AbstractModel
                {
                public:
                    MachineUpgradeSettings();
                    ~MachineUpgradeSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启自动升级
                     * @return AutoUpgrade 是否开启自动升级
                     * 
                     */
                    bool GetAutoUpgrade() const;

                    /**
                     * 设置是否开启自动升级
                     * @param _autoUpgrade 是否开启自动升级
                     * 
                     */
                    void SetAutoUpgrade(const bool& _autoUpgrade);

                    /**
                     * 判断参数 AutoUpgrade 是否已赋值
                     * @return AutoUpgrade 是否已赋值
                     * 
                     */
                    bool AutoUpgradeHasBeenSet() const;

                    /**
                     * 获取运维窗口
                     * @return UpgradeOptions 运维窗口
                     * 
                     */
                    AutoUpgradeOptions GetUpgradeOptions() const;

                    /**
                     * 设置运维窗口
                     * @param _upgradeOptions 运维窗口
                     * 
                     */
                    void SetUpgradeOptions(const AutoUpgradeOptions& _upgradeOptions);

                    /**
                     * 判断参数 UpgradeOptions 是否已赋值
                     * @return UpgradeOptions 是否已赋值
                     * 
                     */
                    bool UpgradeOptionsHasBeenSet() const;

                    /**
                     * 获取升级项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Components 升级项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetComponents() const;

                    /**
                     * 设置升级项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _components 升级项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponents(const std::vector<std::string>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取升级时，最大不可升级的节点数
                     * @return MaxUnavailable 升级时，最大不可升级的节点数
                     * 
                     */
                    IntOrString GetMaxUnavailable() const;

                    /**
                     * 设置升级时，最大不可升级的节点数
                     * @param _maxUnavailable 升级时，最大不可升级的节点数
                     * 
                     */
                    void SetMaxUnavailable(const IntOrString& _maxUnavailable);

                    /**
                     * 判断参数 MaxUnavailable 是否已赋值
                     * @return MaxUnavailable 是否已赋值
                     * 
                     */
                    bool MaxUnavailableHasBeenSet() const;

                private:

                    /**
                     * 是否开启自动升级
                     */
                    bool m_autoUpgrade;
                    bool m_autoUpgradeHasBeenSet;

                    /**
                     * 运维窗口
                     */
                    AutoUpgradeOptions m_upgradeOptions;
                    bool m_upgradeOptionsHasBeenSet;

                    /**
                     * 升级项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 升级时，最大不可升级的节点数
                     */
                    IntOrString m_maxUnavailable;
                    bool m_maxUnavailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_MACHINEUPGRADESETTINGS_H_
