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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKRESOURCE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/WaiterItem.h>
#include <tencentcloud/dbbrain/v20210527/model/OwnerItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 死锁涉及的锁资源节点。Owners（持有边）+ Waiters（等待边）与 Transactions[].Processes[] 关联，构成完整死锁环。
                */
                class DeadlockResource : public AbstractModel
                {
                public:
                    DeadlockResource();
                    ~DeadlockResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>锁资源对应的索引名。keylock/ridlock 尤为重要，可判断索引设计是否合理。</p>
                     * @return IndexName <p>锁资源对应的索引名。keylock/ridlock 尤为重要，可判断索引设计是否合理。</p>
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>锁资源对应的索引名。keylock/ridlock 尤为重要，可判断索引设计是否合理。</p>
                     * @param _indexName <p>锁资源对应的索引名。keylock/ridlock 尤为重要，可判断索引设计是否合理。</p>
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取<p>分区 HoBT ID（从 Attributes.hobtid 抽出）。分区表死锁排查必需字段，可定位到具体物理分区。</p>
                     * @return PartitionId <p>分区 HoBT ID（从 Attributes.hobtid 抽出）。分区表死锁排查必需字段，可定位到具体物理分区。</p>
                     * 
                     */
                    std::string GetPartitionId() const;

                    /**
                     * 设置<p>分区 HoBT ID（从 Attributes.hobtid 抽出）。分区表死锁排查必需字段，可定位到具体物理分区。</p>
                     * @param _partitionId <p>分区 HoBT ID（从 Attributes.hobtid 抽出）。分区表死锁排查必需字段，可定位到具体物理分区。</p>
                     * 
                     */
                    void SetPartitionId(const std::string& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     * 
                     */
                    bool PartitionIdHasBeenSet() const;

                    /**
                     * 获取<p>等待该锁资源的进程列表（死锁环的等待边）。</p>
                     * @return Waiters <p>等待该锁资源的进程列表（死锁环的等待边）。</p>
                     * 
                     */
                    std::vector<WaiterItem> GetWaiters() const;

                    /**
                     * 设置<p>等待该锁资源的进程列表（死锁环的等待边）。</p>
                     * @param _waiters <p>等待该锁资源的进程列表（死锁环的等待边）。</p>
                     * 
                     */
                    void SetWaiters(const std::vector<WaiterItem>& _waiters);

                    /**
                     * 判断参数 Waiters 是否已赋值
                     * @return Waiters 是否已赋值
                     * 
                     */
                    bool WaitersHasBeenSet() const;

                    /**
                     * 获取<p>锁资源类型。常见值：keylock / pagelock / objectlock / ridlock / applicationlock / exchangeEvent 等。</p>
                     * @return Kind <p>锁资源类型。常见值：keylock / pagelock / objectlock / ridlock / applicationlock / exchangeEvent 等。</p>
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>锁资源类型。常见值：keylock / pagelock / objectlock / ridlock / applicationlock / exchangeEvent 等。</p>
                     * @param _kind <p>锁资源类型。常见值：keylock / pagelock / objectlock / ridlock / applicationlock / exchangeEvent 等。</p>
                     * 
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取<p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     * @return Mode <p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     * @param _mode <p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>关联对象 ID（从 Attributes.associatedObjectId 抽出）。ObjectName 为空时可用于兜底定位对象。</p>
                     * @return AssociatedObjectId <p>关联对象 ID（从 Attributes.associatedObjectId 抽出）。ObjectName 为空时可用于兜底定位对象。</p>
                     * 
                     */
                    std::string GetAssociatedObjectId() const;

                    /**
                     * 设置<p>关联对象 ID（从 Attributes.associatedObjectId 抽出）。ObjectName 为空时可用于兜底定位对象。</p>
                     * @param _associatedObjectId <p>关联对象 ID（从 Attributes.associatedObjectId 抽出）。ObjectName 为空时可用于兜底定位对象。</p>
                     * 
                     */
                    void SetAssociatedObjectId(const std::string& _associatedObjectId);

                    /**
                     * 判断参数 AssociatedObjectId 是否已赋值
                     * @return AssociatedObjectId 是否已赋值
                     * 
                     */
                    bool AssociatedObjectIdHasBeenSet() const;

                    /**
                     * 获取<p>SQL Server 引擎内的锁资源指针，例如 lock26054644a80。环内节点唯一标识，串联 Owners/Waiters。</p>
                     * @return Id <p>SQL Server 引擎内的锁资源指针，例如 lock26054644a80。环内节点唯一标识，串联 Owners/Waiters。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>SQL Server 引擎内的锁资源指针，例如 lock26054644a80。环内节点唯一标识，串联 Owners/Waiters。</p>
                     * @param _id <p>SQL Server 引擎内的锁资源指针，例如 lock26054644a80。环内节点唯一标识，串联 Owners/Waiters。</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>锁资源对应的数据库对象名，格式 &#39;数据库.架构.表&#39;，例如 tempdb.dbo.dl_a。applicationlock 无此字段。</p>
                     * @return ObjectName <p>锁资源对应的数据库对象名，格式 &#39;数据库.架构.表&#39;，例如 tempdb.dbo.dl_a。applicationlock 无此字段。</p>
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置<p>锁资源对应的数据库对象名，格式 &#39;数据库.架构.表&#39;，例如 tempdb.dbo.dl_a。applicationlock 无此字段。</p>
                     * @param _objectName <p>锁资源对应的数据库对象名，格式 &#39;数据库.架构.表&#39;，例如 tempdb.dbo.dl_a。applicationlock 无此字段。</p>
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取<p>持有该锁资源的进程列表（死锁环的持有边）。</p>
                     * @return Owners <p>持有该锁资源的进程列表（死锁环的持有边）。</p>
                     * 
                     */
                    std::vector<OwnerItem> GetOwners() const;

                    /**
                     * 设置<p>持有该锁资源的进程列表（死锁环的持有边）。</p>
                     * @param _owners <p>持有该锁资源的进程列表（死锁环的持有边）。</p>
                     * 
                     */
                    void SetOwners(const std::vector<OwnerItem>& _owners);

                    /**
                     * 判断参数 Owners 是否已赋值
                     * @return Owners 是否已赋值
                     * 
                     */
                    bool OwnersHasBeenSet() const;

                private:

                    /**
                     * <p>锁资源对应的索引名。keylock/ridlock 尤为重要，可判断索引设计是否合理。</p>
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>分区 HoBT ID（从 Attributes.hobtid 抽出）。分区表死锁排查必需字段，可定位到具体物理分区。</p>
                     */
                    std::string m_partitionId;
                    bool m_partitionIdHasBeenSet;

                    /**
                     * <p>等待该锁资源的进程列表（死锁环的等待边）。</p>
                     */
                    std::vector<WaiterItem> m_waiters;
                    bool m_waitersHasBeenSet;

                    /**
                     * <p>锁资源类型。常见值：keylock / pagelock / objectlock / ridlock / applicationlock / exchangeEvent 等。</p>
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>锁模式。常见值：X（排他）/ U（更新）/ S（共享）/ IX / IU / RangeS-U / RangeX-X 等。</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>关联对象 ID（从 Attributes.associatedObjectId 抽出）。ObjectName 为空时可用于兜底定位对象。</p>
                     */
                    std::string m_associatedObjectId;
                    bool m_associatedObjectIdHasBeenSet;

                    /**
                     * <p>SQL Server 引擎内的锁资源指针，例如 lock26054644a80。环内节点唯一标识，串联 Owners/Waiters。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>锁资源对应的数据库对象名，格式 &#39;数据库.架构.表&#39;，例如 tempdb.dbo.dl_a。applicationlock 无此字段。</p>
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * <p>持有该锁资源的进程列表（死锁环的持有边）。</p>
                     */
                    std::vector<OwnerItem> m_owners;
                    bool m_ownersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DEADLOCKRESOURCE_H_
