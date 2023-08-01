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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_NODECONFIG_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_NODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 专家模式  计算节点的配置信息
                */
                class NodeConfig : public AbstractModel
                {
                public:
                    NodeConfig();
                    ~NodeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id Node ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Node ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id Node ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Node parallelism
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Parallelism Node parallelism
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParallelism() const;

                    /**
                     * 设置Node parallelism
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parallelism Node parallelism
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParallelism(const int64_t& _parallelism);

                    /**
                     * 判断参数 Parallelism 是否已赋值
                     * @return Parallelism 是否已赋值
                     * 
                     */
                    bool ParallelismHasBeenSet() const;

                    /**
                     * 获取Slot sharing group
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlotSharingGroup Slot sharing group
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSlotSharingGroup() const;

                    /**
                     * 设置Slot sharing group
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slotSharingGroup Slot sharing group
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlotSharingGroup(const std::string& _slotSharingGroup);

                    /**
                     * 判断参数 SlotSharingGroup 是否已赋值
                     * @return SlotSharingGroup 是否已赋值
                     * 
                     */
                    bool SlotSharingGroupHasBeenSet() const;

                    /**
                     * 获取Configuration properties
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Configuration Configuration properties
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetConfiguration() const;

                    /**
                     * 设置Configuration properties
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configuration Configuration properties
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfiguration(const std::vector<Property>& _configuration);

                    /**
                     * 判断参数 Configuration 是否已赋值
                     * @return Configuration 是否已赋值
                     * 
                     */
                    bool ConfigurationHasBeenSet() const;

                    /**
                     * 获取节点的状态ttl配置, 多个用 ; 分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateTTL 节点的状态ttl配置, 多个用 ; 分割
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStateTTL() const;

                    /**
                     * 设置节点的状态ttl配置, 多个用 ; 分割
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateTTL 节点的状态ttl配置, 多个用 ; 分割
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStateTTL(const std::string& _stateTTL);

                    /**
                     * 判断参数 StateTTL 是否已赋值
                     * @return StateTTL 是否已赋值
                     * 
                     */
                    bool StateTTLHasBeenSet() const;

                private:

                    /**
                     * Node ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Node parallelism
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parallelism;
                    bool m_parallelismHasBeenSet;

                    /**
                     * Slot sharing group
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_slotSharingGroup;
                    bool m_slotSharingGroupHasBeenSet;

                    /**
                     * Configuration properties
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_configuration;
                    bool m_configurationHasBeenSet;

                    /**
                     * 节点的状态ttl配置, 多个用 ; 分割
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateTTL;
                    bool m_stateTTLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_NODECONFIG_H_
