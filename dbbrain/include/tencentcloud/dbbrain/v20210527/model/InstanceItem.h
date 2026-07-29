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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 数据库实例基本信息
                */
                class InstanceItem : public AbstractModel
                {
                public:
                    InstanceItem();
                    ~InstanceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取数据库类型，如 mysql、cynosdb、mariadb、dcdb、mongodb、postgres、redis、dbbrain-mysql、tdstore。
                     * @return Product 数据库类型，如 mysql、cynosdb、mariadb、dcdb、mongodb、postgres、redis、dbbrain-mysql、tdstore。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置数据库类型，如 mysql、cynosdb、mariadb、dcdb、mongodb、postgres、redis、dbbrain-mysql、tdstore。
                     * @param _product 数据库类型，如 mysql、cynosdb、mariadb、dcdb、mongodb、postgres、redis、dbbrain-mysql、tdstore。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取地域英文ID。
                     * @return Region 地域英文ID。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域英文ID。
                     * @param _region 地域英文ID。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取集群ID，仅集群类产品返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID，仅集群类产品返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID，仅集群类产品返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群ID，仅集群类产品返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineVersion 引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineVersion 引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取实例状态，1表示运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 实例状态，1表示运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态，1表示运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 实例状态，1表示运行中。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 实例创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 实例创建时间。
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
                     * 获取实例到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeadlineTime 实例到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置实例到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadlineTime 实例到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库类型，如 mysql、cynosdb、mariadb、dcdb、mongodb、postgres、redis、dbbrain-mysql、tdstore。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 地域英文ID。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 集群ID，仅集群类产品返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 引擎版本。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 实例状态，1表示运行中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例到期时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_INSTANCEITEM_H_
