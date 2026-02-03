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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLICATIONOBJECT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLICATIONOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/MigrateOpt.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 分析引擎同步对象
                */
                class ReplicationObject : public AbstractModel
                {
                public:
                    ReplicationObject();
                    ~ReplicationObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源端实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcInstanceType 源端实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcInstanceType() const;

                    /**
                     * 设置源端实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcInstanceType 源端实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcInstanceType(const std::string& _srcInstanceType);

                    /**
                     * 判断参数 SrcInstanceType 是否已赋值
                     * @return SrcInstanceType 是否已赋值
                     * 
                     */
                    bool SrcInstanceTypeHasBeenSet() const;

                    /**
                     * 获取源端集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcClusterId 源端集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcClusterId() const;

                    /**
                     * 设置源端集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcClusterId 源端集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcClusterId(const std::string& _srcClusterId);

                    /**
                     * 判断参数 SrcClusterId 是否已赋值
                     * @return SrcClusterId 是否已赋值
                     * 
                     */
                    bool SrcClusterIdHasBeenSet() const;

                    /**
                     * 获取源端实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcInstanceId 源端实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置源端实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcInstanceId 源端实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取复制任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicationJobId 复制任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReplicationJobId() const;

                    /**
                     * 设置复制任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicationJobId 复制任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicationJobId(const std::string& _replicationJobId);

                    /**
                     * 判断参数 ReplicationJobId 是否已赋值
                     * @return ReplicationJobId 是否已赋值
                     * 
                     */
                    bool ReplicationJobIdHasBeenSet() const;

                    /**
                     * 获取同步对象详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrateObjects 同步对象详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MigrateOpt GetMigrateObjects() const;

                    /**
                     * 设置同步对象详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrateObjects 同步对象详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigrateObjects(const MigrateOpt& _migrateObjects);

                    /**
                     * 判断参数 MigrateObjects 是否已赋值
                     * @return MigrateObjects 是否已赋值
                     * 
                     */
                    bool MigrateObjectsHasBeenSet() const;

                private:

                    /**
                     * 源端实例类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcInstanceType;
                    bool m_srcInstanceTypeHasBeenSet;

                    /**
                     * 源端集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcClusterId;
                    bool m_srcClusterIdHasBeenSet;

                    /**
                     * 源端实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * 复制任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_replicationJobId;
                    bool m_replicationJobIdHasBeenSet;

                    /**
                     * 同步对象详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MigrateOpt m_migrateObjects;
                    bool m_migrateObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_REPLICATIONOBJECT_H_
