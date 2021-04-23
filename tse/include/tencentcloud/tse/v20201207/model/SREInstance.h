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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_SREINSTANCE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_SREINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 微服务注册引擎实例
                */
                class SREInstance : public AbstractModel
                {
                public:
                    SREInstance();
                    ~SREInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param Name 名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return Edition 版本号
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置版本号
                     * @param Edition 版本号
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     * @return Status 状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     * @param Status 状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规格ID
                     * @return SpecId 规格ID
                     */
                    std::string GetSpecId() const;

                    /**
                     * 设置规格ID
                     * @param SpecId 规格ID
                     */
                    void SetSpecId(const std::string& _specId);

                    /**
                     * 判断参数 SpecId 是否已赋值
                     * @return SpecId 是否已赋值
                     */
                    bool SpecIdHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return Replica 副本数
                     */
                    int64_t GetReplica() const;

                    /**
                     * 设置副本数
                     * @param Replica 副本数
                     */
                    void SetReplica(const int64_t& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     */
                    bool ReplicaHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param Type 类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Vpc iD
                     * @return VpcId Vpc iD
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Vpc iD
                     * @param VpcId Vpc iD
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetIds 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetIds 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableStorage 是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableStorage() const;

                    /**
                     * 设置是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableStorage 是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableStorage(const bool& _enableStorage);

                    /**
                     * 判断参数 EnableStorage 是否已赋值
                     * @return EnableStorage 是否已赋值
                     */
                    bool EnableStorageHasBeenSet() const;

                    /**
                     * 获取数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageType 数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageCapacity 云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStorageCapacity() const;

                    /**
                     * 设置云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StorageCapacity 云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStorageCapacity(const int64_t& _storageCapacity);

                    /**
                     * 判断参数 StorageCapacity 是否已赋值
                     * @return StorageCapacity 是否已赋值
                     */
                    bool StorageCapacityHasBeenSet() const;

                    /**
                     * 获取计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Paymode 计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPaymode() const;

                    /**
                     * 设置计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Paymode 计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPaymode(const std::string& _paymode);

                    /**
                     * 判断参数 Paymode 是否已赋值
                     * @return Paymode 是否已赋值
                     */
                    bool PaymodeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 版本号
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 状态, 枚举值:creating/create_fail/running/updating/update_fail/restarting/restart_fail/destroying/destroy_fail
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规格ID
                     */
                    std::string m_specId;
                    bool m_specIdHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Vpc iD
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 是否开启持久化存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableStorage;
                    bool m_enableStorageHasBeenSet;

                    /**
                     * 数据存储方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 云硬盘容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageCapacity;
                    bool m_storageCapacityHasBeenSet;

                    /**
                     * 计费方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paymode;
                    bool m_paymodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_SREINSTANCE_H_
