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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CLUSTERVIEW_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CLUSTERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 集群维度视图数据
                */
                class ClusterView : public AbstractModel
                {
                public:
                    ClusterView();
                    ~ClusterView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群健康状态
                     * @return Health 集群健康状态
                     * 
                     */
                    double GetHealth() const;

                    /**
                     * 设置集群健康状态
                     * @param _health 集群健康状态
                     * 
                     */
                    void SetHealth(const double& _health);

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     * 
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取集群是否可见
                     * @return Visible 集群是否可见
                     * 
                     */
                    double GetVisible() const;

                    /**
                     * 设置集群是否可见
                     * @param _visible 集群是否可见
                     * 
                     */
                    void SetVisible(const double& _visible);

                    /**
                     * 判断参数 Visible 是否已赋值
                     * @return Visible 是否已赋值
                     * 
                     */
                    bool VisibleHasBeenSet() const;

                    /**
                     * 获取集群是否熔断
                     * @return Break 集群是否熔断
                     * 
                     */
                    double GetBreak() const;

                    /**
                     * 设置集群是否熔断
                     * @param _break 集群是否熔断
                     * 
                     */
                    void SetBreak(const double& _break);

                    /**
                     * 判断参数 Break 是否已赋值
                     * @return Break 是否已赋值
                     * 
                     */
                    bool BreakHasBeenSet() const;

                    /**
                     * 获取平均磁盘使用率
                     * @return AvgDiskUsage 平均磁盘使用率
                     * 
                     */
                    double GetAvgDiskUsage() const;

                    /**
                     * 设置平均磁盘使用率
                     * @param _avgDiskUsage 平均磁盘使用率
                     * 
                     */
                    void SetAvgDiskUsage(const double& _avgDiskUsage);

                    /**
                     * 判断参数 AvgDiskUsage 是否已赋值
                     * @return AvgDiskUsage 是否已赋值
                     * 
                     */
                    bool AvgDiskUsageHasBeenSet() const;

                    /**
                     * 获取平均内存使用率
                     * @return AvgMemUsage 平均内存使用率
                     * 
                     */
                    double GetAvgMemUsage() const;

                    /**
                     * 设置平均内存使用率
                     * @param _avgMemUsage 平均内存使用率
                     * 
                     */
                    void SetAvgMemUsage(const double& _avgMemUsage);

                    /**
                     * 判断参数 AvgMemUsage 是否已赋值
                     * @return AvgMemUsage 是否已赋值
                     * 
                     */
                    bool AvgMemUsageHasBeenSet() const;

                    /**
                     * 获取平均cpu使用率
                     * @return AvgCpuUsage 平均cpu使用率
                     * 
                     */
                    double GetAvgCpuUsage() const;

                    /**
                     * 设置平均cpu使用率
                     * @param _avgCpuUsage 平均cpu使用率
                     * 
                     */
                    void SetAvgCpuUsage(const double& _avgCpuUsage);

                    /**
                     * 判断参数 AvgCpuUsage 是否已赋值
                     * @return AvgCpuUsage 是否已赋值
                     * 
                     */
                    bool AvgCpuUsageHasBeenSet() const;

                    /**
                     * 获取集群总存储大小
                     * @return TotalDiskSize 集群总存储大小
                     * 
                     */
                    uint64_t GetTotalDiskSize() const;

                    /**
                     * 设置集群总存储大小
                     * @param _totalDiskSize 集群总存储大小
                     * 
                     */
                    void SetTotalDiskSize(const uint64_t& _totalDiskSize);

                    /**
                     * 判断参数 TotalDiskSize 是否已赋值
                     * @return TotalDiskSize 是否已赋值
                     * 
                     */
                    bool TotalDiskSizeHasBeenSet() const;

                    /**
                     * 获取客户端请求节点
                     * @return TargetNodeTypes 客户端请求节点
                     * 
                     */
                    std::vector<std::string> GetTargetNodeTypes() const;

                    /**
                     * 设置客户端请求节点
                     * @param _targetNodeTypes 客户端请求节点
                     * 
                     */
                    void SetTargetNodeTypes(const std::vector<std::string>& _targetNodeTypes);

                    /**
                     * 判断参数 TargetNodeTypes 是否已赋值
                     * @return TargetNodeTypes 是否已赋值
                     * 
                     */
                    bool TargetNodeTypesHasBeenSet() const;

                    /**
                     * 获取在线节点数
                     * @return NodeNum 在线节点数
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置在线节点数
                     * @param _nodeNum 在线节点数
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取总节点数
                     * @return TotalNodeNum 总节点数
                     * 
                     */
                    int64_t GetTotalNodeNum() const;

                    /**
                     * 设置总节点数
                     * @param _totalNodeNum 总节点数
                     * 
                     */
                    void SetTotalNodeNum(const int64_t& _totalNodeNum);

                    /**
                     * 判断参数 TotalNodeNum 是否已赋值
                     * @return TotalNodeNum 是否已赋值
                     * 
                     */
                    bool TotalNodeNumHasBeenSet() const;

                    /**
                     * 获取数据节点数
                     * @return DataNodeNum 数据节点数
                     * 
                     */
                    int64_t GetDataNodeNum() const;

                    /**
                     * 设置数据节点数
                     * @param _dataNodeNum 数据节点数
                     * 
                     */
                    void SetDataNodeNum(const int64_t& _dataNodeNum);

                    /**
                     * 判断参数 DataNodeNum 是否已赋值
                     * @return DataNodeNum 是否已赋值
                     * 
                     */
                    bool DataNodeNumHasBeenSet() const;

                    /**
                     * 获取索引数
                     * @return IndexNum 索引数
                     * 
                     */
                    int64_t GetIndexNum() const;

                    /**
                     * 设置索引数
                     * @param _indexNum 索引数
                     * 
                     */
                    void SetIndexNum(const int64_t& _indexNum);

                    /**
                     * 判断参数 IndexNum 是否已赋值
                     * @return IndexNum 是否已赋值
                     * 
                     */
                    bool IndexNumHasBeenSet() const;

                    /**
                     * 获取文档数
                     * @return DocNum 文档数
                     * 
                     */
                    int64_t GetDocNum() const;

                    /**
                     * 设置文档数
                     * @param _docNum 文档数
                     * 
                     */
                    void SetDocNum(const int64_t& _docNum);

                    /**
                     * 判断参数 DocNum 是否已赋值
                     * @return DocNum 是否已赋值
                     * 
                     */
                    bool DocNumHasBeenSet() const;

                    /**
                     * 获取磁盘已使用字节数
                     * @return DiskUsedInBytes 磁盘已使用字节数
                     * 
                     */
                    int64_t GetDiskUsedInBytes() const;

                    /**
                     * 设置磁盘已使用字节数
                     * @param _diskUsedInBytes 磁盘已使用字节数
                     * 
                     */
                    void SetDiskUsedInBytes(const int64_t& _diskUsedInBytes);

                    /**
                     * 判断参数 DiskUsedInBytes 是否已赋值
                     * @return DiskUsedInBytes 是否已赋值
                     * 
                     */
                    bool DiskUsedInBytesHasBeenSet() const;

                    /**
                     * 获取分片个数
                     * @return ShardNum 分片个数
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置分片个数
                     * @param _shardNum 分片个数
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取主分片个数
                     * @return PrimaryShardNum 主分片个数
                     * 
                     */
                    int64_t GetPrimaryShardNum() const;

                    /**
                     * 设置主分片个数
                     * @param _primaryShardNum 主分片个数
                     * 
                     */
                    void SetPrimaryShardNum(const int64_t& _primaryShardNum);

                    /**
                     * 判断参数 PrimaryShardNum 是否已赋值
                     * @return PrimaryShardNum 是否已赋值
                     * 
                     */
                    bool PrimaryShardNumHasBeenSet() const;

                    /**
                     * 获取迁移中的分片个数
                     * @return RelocatingShardNum 迁移中的分片个数
                     * 
                     */
                    int64_t GetRelocatingShardNum() const;

                    /**
                     * 设置迁移中的分片个数
                     * @param _relocatingShardNum 迁移中的分片个数
                     * 
                     */
                    void SetRelocatingShardNum(const int64_t& _relocatingShardNum);

                    /**
                     * 判断参数 RelocatingShardNum 是否已赋值
                     * @return RelocatingShardNum 是否已赋值
                     * 
                     */
                    bool RelocatingShardNumHasBeenSet() const;

                    /**
                     * 获取初始化中的分片个数
                     * @return InitializingShardNum 初始化中的分片个数
                     * 
                     */
                    int64_t GetInitializingShardNum() const;

                    /**
                     * 设置初始化中的分片个数
                     * @param _initializingShardNum 初始化中的分片个数
                     * 
                     */
                    void SetInitializingShardNum(const int64_t& _initializingShardNum);

                    /**
                     * 判断参数 InitializingShardNum 是否已赋值
                     * @return InitializingShardNum 是否已赋值
                     * 
                     */
                    bool InitializingShardNumHasBeenSet() const;

                    /**
                     * 获取未分配的分片个数
                     * @return UnassignedShardNum 未分配的分片个数
                     * 
                     */
                    int64_t GetUnassignedShardNum() const;

                    /**
                     * 设置未分配的分片个数
                     * @param _unassignedShardNum 未分配的分片个数
                     * 
                     */
                    void SetUnassignedShardNum(const int64_t& _unassignedShardNum);

                    /**
                     * 判断参数 UnassignedShardNum 是否已赋值
                     * @return UnassignedShardNum 是否已赋值
                     * 
                     */
                    bool UnassignedShardNumHasBeenSet() const;

                    /**
                     * 获取企业版COS存储容量大小，单位GB
                     * @return TotalCosStorage 企业版COS存储容量大小，单位GB
                     * 
                     */
                    int64_t GetTotalCosStorage() const;

                    /**
                     * 设置企业版COS存储容量大小，单位GB
                     * @param _totalCosStorage 企业版COS存储容量大小，单位GB
                     * 
                     */
                    void SetTotalCosStorage(const int64_t& _totalCosStorage);

                    /**
                     * 判断参数 TotalCosStorage 是否已赋值
                     * @return TotalCosStorage 是否已赋值
                     * 
                     */
                    bool TotalCosStorageHasBeenSet() const;

                    /**
                     * 获取企业版集群可搜索快照cos存放的bucket名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchableSnapshotCosBucket 企业版集群可搜索快照cos存放的bucket名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSearchableSnapshotCosBucket() const;

                    /**
                     * 设置企业版集群可搜索快照cos存放的bucket名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchableSnapshotCosBucket 企业版集群可搜索快照cos存放的bucket名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchableSnapshotCosBucket(const std::string& _searchableSnapshotCosBucket);

                    /**
                     * 判断参数 SearchableSnapshotCosBucket 是否已赋值
                     * @return SearchableSnapshotCosBucket 是否已赋值
                     * 
                     */
                    bool SearchableSnapshotCosBucketHasBeenSet() const;

                    /**
                     * 获取企业版集群可搜索快照cos所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchableSnapshotCosAppId 企业版集群可搜索快照cos所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSearchableSnapshotCosAppId() const;

                    /**
                     * 设置企业版集群可搜索快照cos所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchableSnapshotCosAppId 企业版集群可搜索快照cos所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchableSnapshotCosAppId(const std::string& _searchableSnapshotCosAppId);

                    /**
                     * 判断参数 SearchableSnapshotCosAppId 是否已赋值
                     * @return SearchableSnapshotCosAppId 是否已赋值
                     * 
                     */
                    bool SearchableSnapshotCosAppIdHasBeenSet() const;

                private:

                    /**
                     * 集群健康状态
                     */
                    double m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * 集群是否可见
                     */
                    double m_visible;
                    bool m_visibleHasBeenSet;

                    /**
                     * 集群是否熔断
                     */
                    double m_break;
                    bool m_breakHasBeenSet;

                    /**
                     * 平均磁盘使用率
                     */
                    double m_avgDiskUsage;
                    bool m_avgDiskUsageHasBeenSet;

                    /**
                     * 平均内存使用率
                     */
                    double m_avgMemUsage;
                    bool m_avgMemUsageHasBeenSet;

                    /**
                     * 平均cpu使用率
                     */
                    double m_avgCpuUsage;
                    bool m_avgCpuUsageHasBeenSet;

                    /**
                     * 集群总存储大小
                     */
                    uint64_t m_totalDiskSize;
                    bool m_totalDiskSizeHasBeenSet;

                    /**
                     * 客户端请求节点
                     */
                    std::vector<std::string> m_targetNodeTypes;
                    bool m_targetNodeTypesHasBeenSet;

                    /**
                     * 在线节点数
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 总节点数
                     */
                    int64_t m_totalNodeNum;
                    bool m_totalNodeNumHasBeenSet;

                    /**
                     * 数据节点数
                     */
                    int64_t m_dataNodeNum;
                    bool m_dataNodeNumHasBeenSet;

                    /**
                     * 索引数
                     */
                    int64_t m_indexNum;
                    bool m_indexNumHasBeenSet;

                    /**
                     * 文档数
                     */
                    int64_t m_docNum;
                    bool m_docNumHasBeenSet;

                    /**
                     * 磁盘已使用字节数
                     */
                    int64_t m_diskUsedInBytes;
                    bool m_diskUsedInBytesHasBeenSet;

                    /**
                     * 分片个数
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 主分片个数
                     */
                    int64_t m_primaryShardNum;
                    bool m_primaryShardNumHasBeenSet;

                    /**
                     * 迁移中的分片个数
                     */
                    int64_t m_relocatingShardNum;
                    bool m_relocatingShardNumHasBeenSet;

                    /**
                     * 初始化中的分片个数
                     */
                    int64_t m_initializingShardNum;
                    bool m_initializingShardNumHasBeenSet;

                    /**
                     * 未分配的分片个数
                     */
                    int64_t m_unassignedShardNum;
                    bool m_unassignedShardNumHasBeenSet;

                    /**
                     * 企业版COS存储容量大小，单位GB
                     */
                    int64_t m_totalCosStorage;
                    bool m_totalCosStorageHasBeenSet;

                    /**
                     * 企业版集群可搜索快照cos存放的bucket名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_searchableSnapshotCosBucket;
                    bool m_searchableSnapshotCosBucketHasBeenSet;

                    /**
                     * 企业版集群可搜索快照cos所属appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_searchableSnapshotCosAppId;
                    bool m_searchableSnapshotCosAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CLUSTERVIEW_H_
