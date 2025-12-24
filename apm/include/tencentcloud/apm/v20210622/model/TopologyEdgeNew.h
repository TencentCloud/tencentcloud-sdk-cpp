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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYEDGENEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYEDGENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 拓扑图边定义
                */
                class TopologyEdgeNew : public AbstractModel
                {
                public:
                    TopologyEdgeNew();
                    ~TopologyEdgeNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源节点
                     * @return Source 源节点
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置源节点
                     * @param _source 源节点
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取边ID
                     * @return Id 边ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置边ID
                     * @param _id 边ID
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
                     * 获取边权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 边权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置边权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 边权重
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
                     * 获取目标节点
                     * @return Target 目标节点
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标节点
                     * @param _target 目标节点
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

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
                     * 获取边类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 边类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置边类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 边类型
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
                     * 获取边颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Color 边颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置边颜色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _color 边颜色
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
                     * 获取Sql调用数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlRequestCount Sql调用数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSqlRequestCount() const;

                    /**
                     * 设置Sql调用数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlRequestCount Sql调用数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlRequestCount(const double& _sqlRequestCount);

                    /**
                     * 判断参数 SqlRequestCount 是否已赋值
                     * @return SqlRequestCount 是否已赋值
                     * 
                     */
                    bool SqlRequestCountHasBeenSet() const;

                    /**
                     * 获取Sql调用错误数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SqlErrorRequestCount Sql调用错误数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetSqlErrorRequestCount() const;

                    /**
                     * 设置Sql调用错误数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sqlErrorRequestCount Sql调用错误数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSqlErrorRequestCount(const double& _sqlErrorRequestCount);

                    /**
                     * 判断参数 SqlErrorRequestCount 是否已赋值
                     * @return SqlErrorRequestCount 是否已赋值
                     * 
                     */
                    bool SqlErrorRequestCountHasBeenSet() const;

                    /**
                     * 获取边上源节点类型 应用/MQ/DB
                     * @return SourceComp 边上源节点类型 应用/MQ/DB
                     * 
                     */
                    std::string GetSourceComp() const;

                    /**
                     * 设置边上源节点类型 应用/MQ/DB
                     * @param _sourceComp 边上源节点类型 应用/MQ/DB
                     * 
                     */
                    void SetSourceComp(const std::string& _sourceComp);

                    /**
                     * 判断参数 SourceComp 是否已赋值
                     * @return SourceComp 是否已赋值
                     * 
                     */
                    bool SourceCompHasBeenSet() const;

                    /**
                     * 获取边上目标节点类型 应用/MQ/DB
                     * @return TargetComp 边上目标节点类型 应用/MQ/DB
                     * 
                     */
                    std::string GetTargetComp() const;

                    /**
                     * 设置边上目标节点类型 应用/MQ/DB
                     * @param _targetComp 边上目标节点类型 应用/MQ/DB
                     * 
                     */
                    void SetTargetComp(const std::string& _targetComp);

                    /**
                     * 判断参数 TargetComp 是否已赋值
                     * @return TargetComp 是否已赋值
                     * 
                     */
                    bool TargetCompHasBeenSet() const;

                private:

                    /**
                     * 源节点
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 边ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 边权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 目标节点
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 响应时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 错误率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_errRate;
                    bool m_errRateHasBeenSet;

                    /**
                     * 吞吐量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 边类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 边颜色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * Sql调用数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_sqlRequestCount;
                    bool m_sqlRequestCountHasBeenSet;

                    /**
                     * Sql调用错误数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_sqlErrorRequestCount;
                    bool m_sqlErrorRequestCountHasBeenSet;

                    /**
                     * 边上源节点类型 应用/MQ/DB
                     */
                    std::string m_sourceComp;
                    bool m_sourceCompHasBeenSet;

                    /**
                     * 边上目标节点类型 应用/MQ/DB
                     */
                    std::string m_targetComp;
                    bool m_targetCompHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_TOPOLOGYEDGENEW_H_
