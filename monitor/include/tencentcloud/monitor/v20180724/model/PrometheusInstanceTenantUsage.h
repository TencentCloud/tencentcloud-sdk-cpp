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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCETENANTUSAGE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCETENANTUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus用量信息
                */
                class PrometheusInstanceTenantUsage : public AbstractModel
                {
                public:
                    PrometheusInstanceTenantUsage();
                    ~PrometheusInstanceTenantUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取计费周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcDate 计费周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalcDate() const;

                    /**
                     * 设置计费周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcDate 计费周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcDate(const std::string& _calcDate);

                    /**
                     * 判断参数 CalcDate 是否已赋值
                     * @return CalcDate 是否已赋值
                     * 
                     */
                    bool CalcDateHasBeenSet() const;

                    /**
                     * 获取总用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotal() const;

                    /**
                     * 设置总用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const double& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取基础指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Basic 基础指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetBasic() const;

                    /**
                     * 设置基础指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basic 基础指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBasic(const double& _basic);

                    /**
                     * 判断参数 Basic 是否已赋值
                     * @return Basic 是否已赋值
                     * 
                     */
                    bool BasicHasBeenSet() const;

                    /**
                     * 获取付费指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fee 付费指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFee() const;

                    /**
                     * 设置付费指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fee 付费指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFee(const double& _fee);

                    /**
                     * 判断参数 Fee 是否已赋值
                     * @return Fee 是否已赋值
                     * 
                     */
                    bool FeeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 计费周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calcDate;
                    bool m_calcDateHasBeenSet;

                    /**
                     * 总用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 基础指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_basic;
                    bool m_basicHasBeenSet;

                    /**
                     * 付费指标用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fee;
                    bool m_feeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSINSTANCETENANTUSAGE_H_
