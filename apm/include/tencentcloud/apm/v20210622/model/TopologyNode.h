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
                     * 获取<p>错误率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrRate <p>错误率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetErrRate() const;

                    /**
                     * 设置<p>错误率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errRate <p>错误率</p>
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
                     * 获取<p>节点类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Kind <p>节点类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKind() const;

                    /**
                     * 设置<p>节点类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kind <p>节点类型</p>
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
                     * 获取<p>节点名</p>
                     * @return Name <p>节点名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>节点名</p>
                     * @param _name <p>节点名</p>
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
                     * 获取<p>节点权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight <p>节点权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置<p>节点权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight <p>节点权重</p>
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
                     * 获取<p>节点颜色</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Color <p>节点颜色</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置<p>节点颜色</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _color <p>节点颜色</p>
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
                     * 获取<p>响应时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration <p>响应时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置<p>响应时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration <p>响应时间</p>
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
                     * 获取<p>吞吐量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qps <p>吞吐量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetQps() const;

                    /**
                     * 设置<p>吞吐量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qps <p>吞吐量</p>
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
                     * 获取<p>节点类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>节点类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>节点类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>节点类型</p>
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
                     * 获取<p>节点ID</p>
                     * @return Id <p>节点ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>节点ID</p>
                     * @param _id <p>节点ID</p>
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
                     * 获取<p>节点大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size <p>节点大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSize() const;

                    /**
                     * 设置<p>节点大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size <p>节点大小</p>
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
                     * 获取<p>节点是否为组件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsModule <p>节点是否为组件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsModule() const;

                    /**
                     * 设置<p>节点是否为组件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isModule <p>节点是否为组件类型</p>
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
                     * 获取<p>节点位置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position <p>节点位置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Position GetPosition() const;

                    /**
                     * 设置<p>节点位置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position <p>节点位置信息</p>
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
                     * 获取<p>节点标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>节点标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置<p>节点标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>节点标签</p>
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
                     * 获取<p>节点是否可以下钻</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanDrillDown <p>节点是否可以下钻</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetCanDrillDown() const;

                    /**
                     * 设置<p>节点是否可以下钻</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _canDrillDown <p>节点是否可以下钻</p>
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
                     * 获取<p>资源层信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource <p>资源层信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Resource GetResource() const;

                    /**
                     * 设置<p>资源层信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resource <p>资源层信息</p>
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
                     * 获取<p>拓扑节点视图名字</p>
                     * @return NodeView <p>拓扑节点视图名字</p>
                     * 
                     */
                    std::string GetNodeView() const;

                    /**
                     * 设置<p>拓扑节点视图名字</p>
                     * @param _nodeView <p>拓扑节点视图名字</p>
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
                     * 获取<p>MQ 消费者视角的响应时间 ms</p>
                     * @return ConsumerDuration <p>MQ 消费者视角的响应时间 ms</p>
                     * 
                     */
                    double GetConsumerDuration() const;

                    /**
                     * 设置<p>MQ 消费者视角的响应时间 ms</p>
                     * @param _consumerDuration <p>MQ 消费者视角的响应时间 ms</p>
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
                     * 获取<p>MQ 消费者视角的错误率 %</p>
                     * @return ConsumerErrRate <p>MQ 消费者视角的错误率 %</p>
                     * 
                     */
                    double GetConsumerErrRate() const;

                    /**
                     * 设置<p>MQ 消费者视角的错误率 %</p>
                     * @param _consumerErrRate <p>MQ 消费者视角的错误率 %</p>
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
                     * 获取<p>MQ 消费者视角的吞吐量</p>
                     * @return ConsumerQps <p>MQ 消费者视角的吞吐量</p>
                     * 
                     */
                    double GetConsumerQps() const;

                    /**
                     * 设置<p>MQ 消费者视角的吞吐量</p>
                     * @param _consumerQps <p>MQ 消费者视角的吞吐量</p>
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
                     * 获取<p>应用 ID</p>
                     * @return ServiceId <p>应用 ID</p>
                     * @deprecated
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _serviceId <p>应用 ID</p>
                     * @deprecated
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * @deprecated
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>调用次数</p>
                     * @return ReqCnt <p>调用次数</p>
                     * 
                     */
                    int64_t GetReqCnt() const;

                    /**
                     * 设置<p>调用次数</p>
                     * @param _reqCnt <p>调用次数</p>
                     * 
                     */
                    void SetReqCnt(const int64_t& _reqCnt);

                    /**
                     * 判断参数 ReqCnt 是否已赋值
                     * @return ReqCnt 是否已赋值
                     * 
                     */
                    bool ReqCntHasBeenSet() const;

                    /**
                     * 获取<p>消息队列消费者视角的调用次数</p>
                     * @return ConsumerReqCnt <p>消息队列消费者视角的调用次数</p>
                     * 
                     */
                    int64_t GetConsumerReqCnt() const;

                    /**
                     * 设置<p>消息队列消费者视角的调用次数</p>
                     * @param _consumerReqCnt <p>消息队列消费者视角的调用次数</p>
                     * 
                     */
                    void SetConsumerReqCnt(const int64_t& _consumerReqCnt);

                    /**
                     * 判断参数 ConsumerReqCnt 是否已赋值
                     * @return ConsumerReqCnt 是否已赋值
                     * 
                     */
                    bool ConsumerReqCntHasBeenSet() const;

                    /**
                     * 获取<p>应用 ID</p>
                     * @return ServiceID <p>应用 ID</p>
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _serviceID <p>应用 ID</p>
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

                private:

                    /**
                     * <p>错误率</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_errRate;
                    bool m_errRateHasBeenSet;

                    /**
                     * <p>节点类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * <p>节点名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>节点权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>节点颜色</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * <p>响应时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>吞吐量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * <p>节点类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>节点ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>节点大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>节点是否为组件类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isModule;
                    bool m_isModuleHasBeenSet;

                    /**
                     * <p>节点位置信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Position m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * <p>节点标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>节点是否可以下钻</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canDrillDown;
                    bool m_canDrillDownHasBeenSet;

                    /**
                     * <p>资源层信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Resource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>拓扑节点视图名字</p>
                     */
                    std::string m_nodeView;
                    bool m_nodeViewHasBeenSet;

                    /**
                     * <p>MQ 消费者视角的响应时间 ms</p>
                     */
                    double m_consumerDuration;
                    bool m_consumerDurationHasBeenSet;

                    /**
                     * <p>MQ 消费者视角的错误率 %</p>
                     */
                    double m_consumerErrRate;
                    bool m_consumerErrRateHasBeenSet;

                    /**
                     * <p>MQ 消费者视角的吞吐量</p>
                     */
                    double m_consumerQps;
                    bool m_consumerQpsHasBeenSet;

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>调用次数</p>
                     */
                    int64_t m_reqCnt;
                    bool m_reqCntHasBeenSet;

                    /**
                     * <p>消息队列消费者视角的调用次数</p>
                     */
                    int64_t m_consumerReqCnt;
                    bool m_consumerReqCntHasBeenSet;

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYNODE_H_
