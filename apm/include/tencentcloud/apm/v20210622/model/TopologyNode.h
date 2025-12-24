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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Position.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>
#include <tencentcloud/apm/v20210622/model/Resource.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 拓扑图边节点
                */
                class TopologyNode : public AbstractModel
                {
                public:
                    TopologyNode();
                    ~TopologyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrRate 错误率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetErrRate() const;

                    /**
                     * 设置错误率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errRate 错误率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrRate(const double& _errRate);

                    /**
                     * 判断参数 ErrRate 是否已赋值
                     * @return ErrRate 是否已赋值
                     * 
                     */
                    bool ErrRateHasBeenSet() const;

                    /**
                     * 获取节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Kind 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kind 节点类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取节点名
                     * @return Name 节点名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名
                     * @param _name 节点名
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
                     * 获取节点权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 节点权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置节点权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 节点权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const double& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取节点颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Color 节点颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置节点颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _color 节点颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取吞吐量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qps 吞吐量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetQps() const;

                    /**
                     * 设置吞吐量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qps 吞吐量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQps(const double& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取节点ID
                     * @return Id 节点ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置节点ID
                     * @param _id 节点ID
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
                     * 获取节点大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 节点大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置节点大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 节点大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const std::string& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取节点是否为组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsModule 节点是否为组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsModule() const;

                    /**
                     * 设置节点是否为组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isModule 节点是否为组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsModule(const bool& _isModule);

                    /**
                     * 判断参数 IsModule 是否已赋值
                     * @return IsModule 是否已赋值
                     * 
                     */
                    bool IsModuleHasBeenSet() const;

                    /**
                     * 获取节点位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 节点位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Position GetPosition() const;

                    /**
                     * 设置节点位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 节点位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const Position& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取节点是否可以下钻
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanDrillDown 节点是否可以下钻
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanDrillDown() const;

                    /**
                     * 设置节点是否可以下钻
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canDrillDown 节点是否可以下钻
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCanDrillDown(const bool& _canDrillDown);

                    /**
                     * 判断参数 CanDrillDown 是否已赋值
                     * @return CanDrillDown 是否已赋值
                     * 
                     */
                    bool CanDrillDownHasBeenSet() const;

                    /**
                     * 获取资源层信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource 资源层信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置资源层信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource 资源层信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResource(const Resource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取拓扑节点视图名字
                     * @return NodeView 拓扑节点视图名字
                     * 
                     */
                    std::string GetNodeView() const;

                    /**
                     * 设置拓扑节点视图名字
                     * @param _nodeView 拓扑节点视图名字
                     * 
                     */
                    void SetNodeView(const std::string& _nodeView);

                    /**
                     * 判断参数 NodeView 是否已赋值
                     * @return NodeView 是否已赋值
                     * 
                     */
                    bool NodeViewHasBeenSet() const;

                    /**
                     * 获取MQ 消费者视角的响应时间 ms
                     * @return ConsumerDuration MQ 消费者视角的响应时间 ms
                     * 
                     */
                    double GetConsumerDuration() const;

                    /**
                     * 设置MQ 消费者视角的响应时间 ms
                     * @param _consumerDuration MQ 消费者视角的响应时间 ms
                     * 
                     */
                    void SetConsumerDuration(const double& _consumerDuration);

                    /**
                     * 判断参数 ConsumerDuration 是否已赋值
                     * @return ConsumerDuration 是否已赋值
                     * 
                     */
                    bool ConsumerDurationHasBeenSet() const;

                    /**
                     * 获取MQ 消费者视角的错误率 %
                     * @return ConsumerErrRate MQ 消费者视角的错误率 %
                     * 
                     */
                    double GetConsumerErrRate() const;

                    /**
                     * 设置MQ 消费者视角的错误率 %
                     * @param _consumerErrRate MQ 消费者视角的错误率 %
                     * 
                     */
                    void SetConsumerErrRate(const double& _consumerErrRate);

                    /**
                     * 判断参数 ConsumerErrRate 是否已赋值
                     * @return ConsumerErrRate 是否已赋值
                     * 
                     */
                    bool ConsumerErrRateHasBeenSet() const;

                    /**
                     * 获取MQ 消费者视角的吞吐量
                     * @return ConsumerQps MQ 消费者视角的吞吐量
                     * 
                     */
                    double GetConsumerQps() const;

                    /**
                     * 设置MQ 消费者视角的吞吐量
                     * @param _consumerQps MQ 消费者视角的吞吐量
                     * 
                     */
                    void SetConsumerQps(const double& _consumerQps);

                    /**
                     * 判断参数 ConsumerQps 是否已赋值
                     * @return ConsumerQps 是否已赋值
                     * 
                     */
                    bool ConsumerQpsHasBeenSet() const;

                    /**
                     * 获取应用 ID
                     * @return ServiceId 应用 ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置应用 ID
                     * @param _serviceId 应用 ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * 错误率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_errRate;
                    bool m_errRateHasBeenSet;

                    /**
                     * 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 节点名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 节点权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 节点颜色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 吞吐量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 节点ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 节点是否为组件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isModule;
                    bool m_isModuleHasBeenSet;

                    /**
                     * 节点位置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Position m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 节点标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 节点是否可以下钻
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canDrillDown;
                    bool m_canDrillDownHasBeenSet;

                    /**
                     * 资源层信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 拓扑节点视图名字
                     */
                    std::string m_nodeView;
                    bool m_nodeViewHasBeenSet;

                    /**
                     * MQ 消费者视角的响应时间 ms
                     */
                    double m_consumerDuration;
                    bool m_consumerDurationHasBeenSet;

                    /**
                     * MQ 消费者视角的错误率 %
                     */
                    double m_consumerErrRate;
                    bool m_consumerErrRateHasBeenSet;

                    /**
                     * MQ 消费者视角的吞吐量
                     */
                    double m_consumerQps;
                    bool m_consumerQpsHasBeenSet;

                    /**
                     * 应用 ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODE_H_
