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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_METRICUSAGE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_METRICUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/ValueDetail.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 指标用量明细
                */
                class MetricUsage : public AbstractModel
                {
                public:
                    MetricUsage();
                    ~MetricUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>指标名称</p>
                     * @return MetricName <p>指标名称</p>
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置<p>指标名称</p>
                     * @param _metricName <p>指标名称</p>
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
                     * 获取<p>资源类型</p>
                     * @return ResourceType <p>资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _resourceType <p>资源类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>原始资源用量</p>
                     * @return Value <p>原始资源用量</p>
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置<p>原始资源用量</p>
                     * @param _value <p>原始资源用量</p>
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点用量</p>
                     * @return CreditsValue <p>资源点用量</p>
                     * 
                     */
                    double GetCreditsValue() const;

                    /**
                     * 设置<p>资源点用量</p>
                     * @param _creditsValue <p>资源点用量</p>
                     * 
                     */
                    void SetCreditsValue(const double& _creditsValue);

                    /**
                     * 判断参数 CreditsValue 是否已赋值
                     * @return CreditsValue 是否已赋值
                     * 
                     */
                    bool CreditsValueHasBeenSet() const;

                    /**
                     * 获取<p>计费周期类型，取值为hourly/daily</p>
                     * @return BillingCycleType <p>计费周期类型，取值为hourly/daily</p>
                     * 
                     */
                    std::string GetBillingCycleType() const;

                    /**
                     * 设置<p>计费周期类型，取值为hourly/daily</p>
                     * @param _billingCycleType <p>计费周期类型，取值为hourly/daily</p>
                     * 
                     */
                    void SetBillingCycleType(const std::string& _billingCycleType);

                    /**
                     * 判断参数 BillingCycleType 是否已赋值
                     * @return BillingCycleType 是否已赋值
                     * 
                     */
                    bool BillingCycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>原始资源用量单位</p>
                     * @return Unit <p>原始资源用量单位</p>
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置<p>原始资源用量单位</p>
                     * @param _unit <p>原始资源用量单位</p>
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取<p>原始资源用量明细</p>
                     * @return ValueDetailList <p>原始资源用量明细</p>
                     * 
                     */
                    std::vector<ValueDetail> GetValueDetailList() const;

                    /**
                     * 设置<p>原始资源用量明细</p>
                     * @param _valueDetailList <p>原始资源用量明细</p>
                     * 
                     */
                    void SetValueDetailList(const std::vector<ValueDetail>& _valueDetailList);

                    /**
                     * 判断参数 ValueDetailList 是否已赋值
                     * @return ValueDetailList 是否已赋值
                     * 
                     */
                    bool ValueDetailListHasBeenSet() const;

                    /**
                     * 获取<p>资源点套餐内用量</p>
                     * @return DeductValue <p>资源点套餐内用量</p>
                     * 
                     */
                    double GetDeductValue() const;

                    /**
                     * 设置<p>资源点套餐内用量</p>
                     * @param _deductValue <p>资源点套餐内用量</p>
                     * 
                     */
                    void SetDeductValue(const double& _deductValue);

                    /**
                     * 判断参数 DeductValue 是否已赋值
                     * @return DeductValue 是否已赋值
                     * 
                     */
                    bool DeductValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点资源包用量</p>
                     * @return PackageDeductValue <p>资源点资源包用量</p>
                     * 
                     */
                    double GetPackageDeductValue() const;

                    /**
                     * 设置<p>资源点资源包用量</p>
                     * @param _packageDeductValue <p>资源点资源包用量</p>
                     * 
                     */
                    void SetPackageDeductValue(const double& _packageDeductValue);

                    /**
                     * 判断参数 PackageDeductValue 是否已赋值
                     * @return PackageDeductValue 是否已赋值
                     * 
                     */
                    bool PackageDeductValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点按量用量</p>
                     * @return ReportValue <p>资源点按量用量</p>
                     * 
                     */
                    double GetReportValue() const;

                    /**
                     * 设置<p>资源点按量用量</p>
                     * @param _reportValue <p>资源点按量用量</p>
                     * 
                     */
                    void SetReportValue(const double& _reportValue);

                    /**
                     * 判断参数 ReportValue 是否已赋值
                     * @return ReportValue 是否已赋值
                     * 
                     */
                    bool ReportValueHasBeenSet() const;

                private:

                    /**
                     * <p>指标名称</p>
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * <p>资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>原始资源用量</p>
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>资源点用量</p>
                     */
                    double m_creditsValue;
                    bool m_creditsValueHasBeenSet;

                    /**
                     * <p>计费周期类型，取值为hourly/daily</p>
                     */
                    std::string m_billingCycleType;
                    bool m_billingCycleTypeHasBeenSet;

                    /**
                     * <p>原始资源用量单位</p>
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * <p>原始资源用量明细</p>
                     */
                    std::vector<ValueDetail> m_valueDetailList;
                    bool m_valueDetailListHasBeenSet;

                    /**
                     * <p>资源点套餐内用量</p>
                     */
                    double m_deductValue;
                    bool m_deductValueHasBeenSet;

                    /**
                     * <p>资源点资源包用量</p>
                     */
                    double m_packageDeductValue;
                    bool m_packageDeductValueHasBeenSet;

                    /**
                     * <p>资源点按量用量</p>
                     */
                    double m_reportValue;
                    bool m_reportValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_METRICUSAGE_H_
