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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCEDATA_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Dimension.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 云产品指标订阅预览结果实例信息
                */
                class InstanceData : public AbstractModel
                {
                public:
                    InstanceData();
                    ~InstanceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云监控指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricName 云监控指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置云监控指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metricName 云监控指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取CLS指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLSMetricName CLS指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCLSMetricName() const;

                    /**
                     * 设置CLS指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cLSMetricName CLS指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCLSMetricName(const std::string& _cLSMetricName);

                    /**
                     * 判断参数 CLSMetricName 是否已赋值
                     * @return CLSMetricName 是否已赋值
                     * 
                     */
                    bool CLSMetricNameHasBeenSet() const;

                    /**
                     * 获取云产品命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 云产品命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置云产品命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 云产品命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dimensions 实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Dimension> GetDimensions() const;

                    /**
                     * 设置实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensions 实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimensions(const std::vector<Dimension>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取周期,单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Period 周期,单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置周期,单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _period 周期,单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取指标统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 指标统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置指标统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 指标统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errMsg 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 云监控指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * CLS指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cLSMetricName;
                    bool m_cLSMetricNameHasBeenSet;

                    /**
                     * 云产品命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 实例信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Dimension> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 周期,单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 指标统计值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_INSTANCEDATA_H_
