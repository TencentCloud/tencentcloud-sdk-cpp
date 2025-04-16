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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceInfo.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerWrittenPolicy.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerLifecyclePolicy.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerIndexPolicy.h>
#include <tencentcloud/dlc/v20210125/model/SmartOptimizerChangeTablePolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SmartOptimizerPolicy
                */
                class SmartOptimizerPolicy : public AbstractModel
                {
                public:
                    SmartOptimizerPolicy();
                    ~SmartOptimizerPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否继承
                     * @return Inherit 是否继承
                     * 
                     */
                    std::string GetInherit() const;

                    /**
                     * 设置是否继承
                     * @param _inherit 是否继承
                     * 
                     */
                    void SetInherit(const std::string& _inherit);

                    /**
                     * 判断参数 Inherit 是否已赋值
                     * @return Inherit 是否已赋值
                     * 
                     */
                    bool InheritHasBeenSet() const;

                    /**
                     * 获取ResourceInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resources ResourceInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceInfo> GetResources() const;

                    /**
                     * 设置ResourceInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resources ResourceInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResources(const std::vector<ResourceInfo>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取SmartOptimizerWrittenPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Written SmartOptimizerWrittenPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartOptimizerWrittenPolicy GetWritten() const;

                    /**
                     * 设置SmartOptimizerWrittenPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _written SmartOptimizerWrittenPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWritten(const SmartOptimizerWrittenPolicy& _written);

                    /**
                     * 判断参数 Written 是否已赋值
                     * @return Written 是否已赋值
                     * 
                     */
                    bool WrittenHasBeenSet() const;

                    /**
                     * 获取SmartOptimizerLifecyclePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lifecycle SmartOptimizerLifecyclePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartOptimizerLifecyclePolicy GetLifecycle() const;

                    /**
                     * 设置SmartOptimizerLifecyclePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycle SmartOptimizerLifecyclePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecycle(const SmartOptimizerLifecyclePolicy& _lifecycle);

                    /**
                     * 判断参数 Lifecycle 是否已赋值
                     * @return Lifecycle 是否已赋值
                     * 
                     */
                    bool LifecycleHasBeenSet() const;

                    /**
                     * 获取SmartOptimizerIndexPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index SmartOptimizerIndexPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartOptimizerIndexPolicy GetIndex() const;

                    /**
                     * 设置SmartOptimizerIndexPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index SmartOptimizerIndexPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const SmartOptimizerIndexPolicy& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取SmartOptimizerChangeTablePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChangeTable SmartOptimizerChangeTablePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SmartOptimizerChangeTablePolicy GetChangeTable() const;

                    /**
                     * 设置SmartOptimizerChangeTablePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _changeTable SmartOptimizerChangeTablePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChangeTable(const SmartOptimizerChangeTablePolicy& _changeTable);

                    /**
                     * 判断参数 ChangeTable 是否已赋值
                     * @return ChangeTable 是否已赋值
                     * 
                     */
                    bool ChangeTableHasBeenSet() const;

                private:

                    /**
                     * 是否继承
                     */
                    std::string m_inherit;
                    bool m_inheritHasBeenSet;

                    /**
                     * ResourceInfo
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceInfo> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * SmartOptimizerWrittenPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartOptimizerWrittenPolicy m_written;
                    bool m_writtenHasBeenSet;

                    /**
                     * SmartOptimizerLifecyclePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartOptimizerLifecyclePolicy m_lifecycle;
                    bool m_lifecycleHasBeenSet;

                    /**
                     * SmartOptimizerIndexPolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartOptimizerIndexPolicy m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * SmartOptimizerChangeTablePolicy
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SmartOptimizerChangeTablePolicy m_changeTable;
                    bool m_changeTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERPOLICY_H_
