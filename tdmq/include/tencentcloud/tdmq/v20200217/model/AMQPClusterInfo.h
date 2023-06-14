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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * AMQP集群基本信息
                */
                class AMQPClusterInfo : public AbstractModel
                {
                public:
                    AMQPClusterInfo();
                    ~AMQPClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取地域信息
                     * @return Region 地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param _region 地域信息
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
                     * 获取创建时间，毫秒为单位
                     * @return CreateTime 创建时间，毫秒为单位
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，毫秒为单位
                     * @param _createTime 创建时间，毫秒为单位
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicEndPoint 公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicEndPoint() const;

                    /**
                     * 设置公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicEndPoint 公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicEndPoint(const std::string& _publicEndPoint);

                    /**
                     * 判断参数 PublicEndPoint 是否已赋值
                     * @return PublicEndPoint 是否已赋值
                     * 
                     */
                    bool PublicEndPointHasBeenSet() const;

                    /**
                     * 获取VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcEndPoint VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcEndPoint() const;

                    /**
                     * 设置VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcEndPoint VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcEndPoint(const std::string& _vpcEndPoint);

                    /**
                     * 判断参数 VpcEndPoint 是否已赋值
                     * @return VpcEndPoint 是否已赋值
                     * 
                     */
                    bool VpcEndPointHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 创建时间，毫秒为单位
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicEndPoint;
                    bool m_publicEndPointHasBeenSet;

                    /**
                     * VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcEndPoint;
                    bool m_vpcEndPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPCLUSTERINFO_H_
