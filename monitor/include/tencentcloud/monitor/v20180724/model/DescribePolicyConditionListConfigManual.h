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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUAL_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualCalcType.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualCalcValue.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualContinueTime.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualPeriod.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualPeriodNum.h>
#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualStatType.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyConditionList.ConfigManual
                */
                class DescribePolicyConditionListConfigManual : public AbstractModel
                {
                public:
                    DescribePolicyConditionListConfigManual();
                    ~DescribePolicyConditionListConfigManual() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcType 检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyConditionListConfigManualCalcType GetCalcType() const;

                    /**
                     * 设置检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcType 检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcType(const DescribePolicyConditionListConfigManualCalcType& _calcType);

                    /**
                     * 判断参数 CalcType 是否已赋值
                     * @return CalcType 是否已赋值
                     * 
                     */
                    bool CalcTypeHasBeenSet() const;

                    /**
                     * 获取检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalcValue 检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyConditionListConfigManualCalcValue GetCalcValue() const;

                    /**
                     * 设置检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calcValue 检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalcValue(const DescribePolicyConditionListConfigManualCalcValue& _calcValue);

                    /**
                     * 判断参数 CalcValue 是否已赋值
                     * @return CalcValue 是否已赋值
                     * 
                     */
                    bool CalcValueHasBeenSet() const;

                    /**
                     * 获取持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContinueTime 持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyConditionListConfigManualContinueTime GetContinueTime() const;

                    /**
                     * 设置持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _continueTime 持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContinueTime(const DescribePolicyConditionListConfigManualContinueTime& _continueTime);

                    /**
                     * 判断参数 ContinueTime 是否已赋值
                     * @return ContinueTime 是否已赋值
                     * 
                     */
                    bool ContinueTimeHasBeenSet() const;

                    /**
                     * 获取数据周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Period 数据周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyConditionListConfigManualPeriod GetPeriod() const;

                    /**
                     * 设置数据周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _period 数据周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriod(const DescribePolicyConditionListConfigManualPeriod& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取持续周期个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PeriodNum 持续周期个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyConditionListConfigManualPeriodNum GetPeriodNum() const;

                    /**
                     * 设置持续周期个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _periodNum 持续周期个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPeriodNum(const DescribePolicyConditionListConfigManualPeriodNum& _periodNum);

                    /**
                     * 判断参数 PeriodNum 是否已赋值
                     * @return PeriodNum 是否已赋值
                     * 
                     */
                    bool PeriodNumHasBeenSet() const;

                    /**
                     * 获取聚合方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatType 聚合方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribePolicyConditionListConfigManualStatType GetStatType() const;

                    /**
                     * 设置聚合方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statType 聚合方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatType(const DescribePolicyConditionListConfigManualStatType& _statType);

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                private:

                    /**
                     * 检测方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyConditionListConfigManualCalcType m_calcType;
                    bool m_calcTypeHasBeenSet;

                    /**
                     * 检测阈值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyConditionListConfigManualCalcValue m_calcValue;
                    bool m_calcValueHasBeenSet;

                    /**
                     * 持续时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyConditionListConfigManualContinueTime m_continueTime;
                    bool m_continueTimeHasBeenSet;

                    /**
                     * 数据周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyConditionListConfigManualPeriod m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 持续周期个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyConditionListConfigManualPeriodNum m_periodNum;
                    bool m_periodNumHasBeenSet;

                    /**
                     * 聚合方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribePolicyConditionListConfigManualStatType m_statType;
                    bool m_statTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYCONDITIONLISTCONFIGMANUAL_H_
