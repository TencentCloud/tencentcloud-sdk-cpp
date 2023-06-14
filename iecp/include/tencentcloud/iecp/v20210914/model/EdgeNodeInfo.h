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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/EdgeNodeResourceInfo.h>
#include <tencentcloud/iecp/v20210914/model/KeyValueObj.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 边缘节点信息
                */
                class EdgeNodeInfo : public AbstractModel
                {
                public:
                    EdgeNodeInfo();
                    ~EdgeNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IECP边缘节点ID
                     * @return Id IECP边缘节点ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置IECP边缘节点ID
                     * @param _id IECP边缘节点ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return Name 节点名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名称
                     * @param _name 节点名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取节点状态 （1健康｜2异常｜3离线｜4未激活）
                     * @return Status 节点状态 （1健康｜2异常｜3离线｜4未激活）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置节点状态 （1健康｜2异常｜3离线｜4未激活）
                     * @param _status 节点状态 （1健康｜2异常｜3离线｜4未激活）
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取节点资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 节点资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EdgeNodeResourceInfo GetResource() const;

                    /**
                     * 设置节点资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 节点资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const EdgeNodeResourceInfo& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取CPU体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuArchitecture CPU体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuArchitecture() const;

                    /**
                     * 设置CPU体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuArchitecture CPU体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuArchitecture(const std::string& _cpuArchitecture);

                    /**
                     * 判断参数 CpuArchitecture 是否已赋值
                     * @return CpuArchitecture 是否已赋值
                     * 
                     */
                    bool CpuArchitectureHasBeenSet() const;

                    /**
                     * 获取IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatingSystem 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatingSystem() const;

                    /**
                     * 设置操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatingSystem 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatingSystem(const std::string& _operatingSystem);

                    /**
                     * 判断参数 OperatingSystem 是否已赋值
                     * @return OperatingSystem 是否已赋值
                     * 
                     */
                    bool OperatingSystemHasBeenSet() const;

                    /**
                     * 获取节点所属的NodeUnit
key：NodeUnit模版ID，Value：NodeUnit模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeUnits 节点所属的NodeUnit
key：NodeUnit模版ID，Value：NodeUnit模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KeyValueObj GetNodeUnits() const;

                    /**
                     * 设置节点所属的NodeUnit
key：NodeUnit模版ID，Value：NodeUnit模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeUnits 节点所属的NodeUnit
key：NodeUnit模版ID，Value：NodeUnit模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeUnits(const KeyValueObj& _nodeUnits);

                    /**
                     * 判断参数 NodeUnits 是否已赋值
                     * @return NodeUnits 是否已赋值
                     * 
                     */
                    bool NodeUnitsHasBeenSet() const;

                private:

                    /**
                     * IECP边缘节点ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点状态 （1健康｜2异常｜3离线｜4未激活）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 节点资源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EdgeNodeResourceInfo m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * CPU体系结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuArchitecture;
                    bool m_cpuArchitectureHasBeenSet;

                    /**
                     * IP地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 操作系统
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatingSystem;
                    bool m_operatingSystemHasBeenSet;

                    /**
                     * 节点所属的NodeUnit
key：NodeUnit模版ID，Value：NodeUnit模版名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KeyValueObj m_nodeUnits;
                    bool m_nodeUnitsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEINFO_H_
