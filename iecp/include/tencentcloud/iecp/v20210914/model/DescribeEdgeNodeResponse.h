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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODERESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/EdgeNodeLabel.h>
#include <tencentcloud/iecp/v20210914/model/EdgeNodeResourceInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeNode返回参数结构体
                */
                class DescribeEdgeNodeResponse : public AbstractModel
                {
                public:
                    DescribeEdgeNodeResponse();
                    ~DescribeEdgeNodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Kind 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取节点状态 （1健康｜2异常｜3离线｜4未激活）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 节点状态 （1健康｜2异常｜3离线｜4未激活）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取CPU体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuArchitecture CPU体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuArchitecture() const;

                    /**
                     * 判断参数 CpuArchitecture 是否已赋值
                     * @return CpuArchitecture 是否已赋值
                     * 
                     */
                    bool CpuArchitectureHasBeenSet() const;

                    /**
                     * 获取AI处理器体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiChipArchitecture AI处理器体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAiChipArchitecture() const;

                    /**
                     * 判断参数 AiChipArchitecture 是否已赋值
                     * @return AiChipArchitecture 是否已赋值
                     * 
                     */
                    bool AiChipArchitectureHasBeenSet() const;

                    /**
                     * 获取IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取节点标签列表
                     * @return Labels 节点标签列表
                     * 
                     */
                    std::vector<EdgeNodeLabel> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取节点资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 节点资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EdgeNodeResourceInfo GetResource() const;

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * 节点ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 节点名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点状态 （1健康｜2异常｜3离线｜4未激活）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * CPU体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuArchitecture;
                    bool m_cpuArchitectureHasBeenSet;

                    /**
                     * AI处理器体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aiChipArchitecture;
                    bool m_aiChipArchitectureHasBeenSet;

                    /**
                     * IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 节点标签列表
                     */
                    std::vector<EdgeNodeLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 节点资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeNodeResourceInfo m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGENODERESPONSE_H_
