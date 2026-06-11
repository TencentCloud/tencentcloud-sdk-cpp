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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_HIVEMETASTOREINFO_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_HIVEMETASTOREINFO_H_

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
                * HiveMetastoreInfo
                */
                class HiveMetastoreInfo : public AbstractModel
                {
                public:
                    HiveMetastoreInfo();
                    ~HiveMetastoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>hms serialId</p>
                     * @return HiveMetastoreSerialId <p>hms serialId</p>
                     * 
                     */
                    std::string GetHiveMetastoreSerialId() const;

                    /**
                     * 设置<p>hms serialId</p>
                     * @param _hiveMetastoreSerialId <p>hms serialId</p>
                     * 
                     */
                    void SetHiveMetastoreSerialId(const std::string& _hiveMetastoreSerialId);

                    /**
                     * 判断参数 HiveMetastoreSerialId 是否已赋值
                     * @return HiveMetastoreSerialId 是否已赋值
                     * 
                     */
                    bool HiveMetastoreSerialIdHasBeenSet() const;

                    /**
                     * 获取<p>集群SerialId</p>
                     * @return ClusterGroupSerialId <p>集群SerialId</p>
                     * 
                     */
                    std::string GetClusterGroupSerialId() const;

                    /**
                     * 设置<p>集群SerialId</p>
                     * @param _clusterGroupSerialId <p>集群SerialId</p>
                     * 
                     */
                    void SetClusterGroupSerialId(const std::string& _clusterGroupSerialId);

                    /**
                     * 判断参数 ClusterGroupSerialId 是否已赋值
                     * @return ClusterGroupSerialId 是否已赋值
                     * 
                     */
                    bool ClusterGroupSerialIdHasBeenSet() const;

                    /**
                     * 获取<p>状态枚举</p><p>枚举值：</p><ul><li>3： 运行中</li><li>1： 初始化中</li><li>2： 部署中</li><li>-2： 已删除</li></ul>
                     * @return Status <p>状态枚举</p><p>枚举值：</p><ul><li>3： 运行中</li><li>1： 初始化中</li><li>2： 部署中</li><li>-2： 已删除</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态枚举</p><p>枚举值：</p><ul><li>3： 运行中</li><li>1： 初始化中</li><li>2： 部署中</li><li>-2： 已删除</li></ul>
                     * @param _status <p>状态枚举</p><p>枚举值：</p><ul><li>3： 运行中</li><li>1： 初始化中</li><li>2： 部署中</li><li>-2： 已删除</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>使用核数</p><p>单位：cu</p>
                     * @return Cpu <p>使用核数</p><p>单位：cu</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>使用核数</p><p>单位：cu</p>
                     * @param _cpu <p>使用核数</p><p>单位：cu</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>使用内存资源</p><p>单位：GB</p>
                     * @return MemGB <p>使用内存资源</p><p>单位：GB</p>
                     * 
                     */
                    int64_t GetMemGB() const;

                    /**
                     * 设置<p>使用内存资源</p><p>单位：GB</p>
                     * @param _memGB <p>使用内存资源</p><p>单位：GB</p>
                     * 
                     */
                    void SetMemGB(const int64_t& _memGB);

                    /**
                     * 判断参数 MemGB 是否已赋值
                     * @return MemGB 是否已赋值
                     * 
                     */
                    bool MemGBHasBeenSet() const;

                    /**
                     * 获取<p>副本数</p>
                     * @return Replica <p>副本数</p>
                     * 
                     */
                    int64_t GetReplica() const;

                    /**
                     * 设置<p>副本数</p>
                     * @param _replica <p>副本数</p>
                     * 
                     */
                    void SetReplica(const int64_t& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     * 
                     */
                    bool ReplicaHasBeenSet() const;

                    /**
                     * 获取<p>hms 访问uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HiveUri <p>hms 访问uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHiveUri() const;

                    /**
                     * 设置<p>hms 访问uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hiveUri <p>hms 访问uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHiveUri(const std::string& _hiveUri);

                    /**
                     * 判断参数 HiveUri 是否已赋值
                     * @return HiveUri 是否已赋值
                     * 
                     */
                    bool HiveUriHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HiveNamespace <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHiveNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hiveNamespace <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHiveNamespace(const std::string& _hiveNamespace);

                    /**
                     * 判断参数 HiveNamespace 是否已赋值
                     * @return HiveNamespace 是否已赋值
                     * 
                     */
                    bool HiveNamespaceHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Warehouse地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HiveMetastoreWarehouseDir <p>Warehouse地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHiveMetastoreWarehouseDir() const;

                    /**
                     * 设置<p>Warehouse地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hiveMetastoreWarehouseDir <p>Warehouse地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHiveMetastoreWarehouseDir(const std::string& _hiveMetastoreWarehouseDir);

                    /**
                     * 判断参数 HiveMetastoreWarehouseDir 是否已赋值
                     * @return HiveMetastoreWarehouseDir 是否已赋值
                     * 
                     */
                    bool HiveMetastoreWarehouseDirHasBeenSet() const;

                    /**
                     * 获取<p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config <p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetConfig() const;

                    /**
                     * 设置<p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _config <p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfig(const std::vector<Property>& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * <p>hms serialId</p>
                     */
                    std::string m_hiveMetastoreSerialId;
                    bool m_hiveMetastoreSerialIdHasBeenSet;

                    /**
                     * <p>集群SerialId</p>
                     */
                    std::string m_clusterGroupSerialId;
                    bool m_clusterGroupSerialIdHasBeenSet;

                    /**
                     * <p>状态枚举</p><p>枚举值：</p><ul><li>3： 运行中</li><li>1： 初始化中</li><li>2： 部署中</li><li>-2： 已删除</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>使用核数</p><p>单位：cu</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>使用内存资源</p><p>单位：GB</p>
                     */
                    int64_t m_memGB;
                    bool m_memGBHasBeenSet;

                    /**
                     * <p>副本数</p>
                     */
                    int64_t m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * <p>hms 访问uri</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hiveUri;
                    bool m_hiveUriHasBeenSet;

                    /**
                     * <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hiveNamespace;
                    bool m_hiveNamespaceHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Warehouse地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hiveMetastoreWarehouseDir;
                    bool m_hiveMetastoreWarehouseDirHasBeenSet;

                    /**
                     * <p>高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_HIVEMETASTOREINFO_H_
