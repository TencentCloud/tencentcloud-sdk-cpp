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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 弹性扩缩容规格配置
                */
                class AutoScaleResourceConf : public AbstractModel
                {
                public:
                    AutoScaleResourceConf();
                    ~AutoScaleResourceConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取集群实例ID。
                     * @return ClusterId 集群实例ID。
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置集群实例ID。
                     * @param _clusterId 集群实例ID。
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取自动扩缩容保留最小实例数。
                     * @return ScaleLowerBound 自动扩缩容保留最小实例数。
                     * 
                     */
                    int64_t GetScaleLowerBound() const;

                    /**
                     * 设置自动扩缩容保留最小实例数。
                     * @param _scaleLowerBound 自动扩缩容保留最小实例数。
                     * 
                     */
                    void SetScaleLowerBound(const int64_t& _scaleLowerBound);

                    /**
                     * 判断参数 ScaleLowerBound 是否已赋值
                     * @return ScaleLowerBound 是否已赋值
                     * 
                     */
                    bool ScaleLowerBoundHasBeenSet() const;

                    /**
                     * 获取自动扩缩容最大实例数。
                     * @return ScaleUpperBound 自动扩缩容最大实例数。
                     * 
                     */
                    int64_t GetScaleUpperBound() const;

                    /**
                     * 设置自动扩缩容最大实例数。
                     * @param _scaleUpperBound 自动扩缩容最大实例数。
                     * 
                     */
                    void SetScaleUpperBound(const int64_t& _scaleUpperBound);

                    /**
                     * 判断参数 ScaleUpperBound 是否已赋值
                     * @return ScaleUpperBound 是否已赋值
                     * 
                     */
                    bool ScaleUpperBoundHasBeenSet() const;

                    /**
                     * 获取扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     * @return StrategyType 扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     * 
                     */
                    int64_t GetStrategyType() const;

                    /**
                     * 设置扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     * @param _strategyType 扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     * 
                     */
                    void SetStrategyType(const int64_t& _strategyType);

                    /**
                     * 判断参数 StrategyType 是否已赋值
                     * @return StrategyType 是否已赋值
                     * 
                     */
                    bool StrategyTypeHasBeenSet() const;

                    /**
                     * 获取下次能可扩容时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextTimeCanScale 下次能可扩容时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNextTimeCanScale() const;

                    /**
                     * 设置下次能可扩容时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextTimeCanScale 下次能可扩容时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextTimeCanScale(const uint64_t& _nextTimeCanScale);

                    /**
                     * 判断参数 NextTimeCanScale 是否已赋值
                     * @return NextTimeCanScale 是否已赋值
                     * 
                     */
                    bool NextTimeCanScaleHasBeenSet() const;

                    /**
                     * 获取优雅缩容开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GraceDownFlag 优雅缩容开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetGraceDownFlag() const;

                    /**
                     * 设置优雅缩容开关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _graceDownFlag 优雅缩容开关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGraceDownFlag(const bool& _graceDownFlag);

                    /**
                     * 判断参数 GraceDownFlag 是否已赋值
                     * @return GraceDownFlag 是否已赋值
                     * 
                     */
                    bool GraceDownFlagHasBeenSet() const;

                private:

                    /**
                     * 配置ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 集群实例ID。
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 自动扩缩容保留最小实例数。
                     */
                    int64_t m_scaleLowerBound;
                    bool m_scaleLowerBoundHasBeenSet;

                    /**
                     * 自动扩缩容最大实例数。
                     */
                    int64_t m_scaleUpperBound;
                    bool m_scaleUpperBoundHasBeenSet;

                    /**
                     * 扩容规则类型，1为按负载指标扩容规则，2为按时间扩容规则
                     */
                    int64_t m_strategyType;
                    bool m_strategyTypeHasBeenSet;

                    /**
                     * 下次能可扩容时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nextTimeCanScale;
                    bool m_nextTimeCanScaleHasBeenSet;

                    /**
                     * 优雅缩容开关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_graceDownFlag;
                    bool m_graceDownFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_AUTOSCALERESOURCECONF_H_
