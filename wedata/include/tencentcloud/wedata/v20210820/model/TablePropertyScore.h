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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPROPERTYSCORE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPROPERTYSCORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 按天更新的表的资产评分
                */
                class TablePropertyScore : public AbstractModel
                {
                public:
                    TablePropertyScore();
                    ~TablePropertyScore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表ID
                     * @return TableId 表ID
                     * 
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置表ID
                     * @param _tableId 表ID
                     * 
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取统计日期
                     * @return DayTime 统计日期
                     * 
                     */
                    std::string GetDayTime() const;

                    /**
                     * 设置统计日期
                     * @param _dayTime 统计日期
                     * 
                     */
                    void SetDayTime(const std::string& _dayTime);

                    /**
                     * 判断参数 DayTime 是否已赋值
                     * @return DayTime 是否已赋值
                     * 
                     */
                    bool DayTimeHasBeenSet() const;

                    /**
                     * 获取表完整性评分
                     * @return Integrity 表完整性评分
                     * 
                     */
                    double GetIntegrity() const;

                    /**
                     * 设置表完整性评分
                     * @param _integrity 表完整性评分
                     * 
                     */
                    void SetIntegrity(const double& _integrity);

                    /**
                     * 判断参数 Integrity 是否已赋值
                     * @return Integrity 是否已赋值
                     * 
                     */
                    bool IntegrityHasBeenSet() const;

                    /**
                     * 获取表保障性评分
                     * @return Safety 表保障性评分
                     * 
                     */
                    double GetSafety() const;

                    /**
                     * 设置表保障性评分
                     * @param _safety 表保障性评分
                     * 
                     */
                    void SetSafety(const double& _safety);

                    /**
                     * 判断参数 Safety 是否已赋值
                     * @return Safety 是否已赋值
                     * 
                     */
                    bool SafetyHasBeenSet() const;

                    /**
                     * 获取表及时性评分
                     * @return Timeliness 表及时性评分
                     * 
                     */
                    double GetTimeliness() const;

                    /**
                     * 设置表及时性评分
                     * @param _timeliness 表及时性评分
                     * 
                     */
                    void SetTimeliness(const double& _timeliness);

                    /**
                     * 判断参数 Timeliness 是否已赋值
                     * @return Timeliness 是否已赋值
                     * 
                     */
                    bool TimelinessHasBeenSet() const;

                    /**
                     * 获取表稳定性评分
                     * @return Stability 表稳定性评分
                     * 
                     */
                    double GetStability() const;

                    /**
                     * 设置表稳定性评分
                     * @param _stability 表稳定性评分
                     * 
                     */
                    void SetStability(const double& _stability);

                    /**
                     * 判断参数 Stability 是否已赋值
                     * @return Stability 是否已赋值
                     * 
                     */
                    bool StabilityHasBeenSet() const;

                    /**
                     * 获取表规范性评分
                     * @return Normative 表规范性评分
                     * 
                     */
                    double GetNormative() const;

                    /**
                     * 设置表规范性评分
                     * @param _normative 表规范性评分
                     * 
                     */
                    void SetNormative(const double& _normative);

                    /**
                     * 判断参数 Normative 是否已赋值
                     * @return Normative 是否已赋值
                     * 
                     */
                    bool NormativeHasBeenSet() const;

                    /**
                     * 获取资产评分平均分
                     * @return Average 资产评分平均分
                     * 
                     */
                    double GetAverage() const;

                    /**
                     * 设置资产评分平均分
                     * @param _average 资产评分平均分
                     * 
                     */
                    void SetAverage(const double& _average);

                    /**
                     * 判断参数 Average 是否已赋值
                     * @return Average 是否已赋值
                     * 
                     */
                    bool AverageHasBeenSet() const;

                private:

                    /**
                     * 表ID
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 统计日期
                     */
                    std::string m_dayTime;
                    bool m_dayTimeHasBeenSet;

                    /**
                     * 表完整性评分
                     */
                    double m_integrity;
                    bool m_integrityHasBeenSet;

                    /**
                     * 表保障性评分
                     */
                    double m_safety;
                    bool m_safetyHasBeenSet;

                    /**
                     * 表及时性评分
                     */
                    double m_timeliness;
                    bool m_timelinessHasBeenSet;

                    /**
                     * 表稳定性评分
                     */
                    double m_stability;
                    bool m_stabilityHasBeenSet;

                    /**
                     * 表规范性评分
                     */
                    double m_normative;
                    bool m_normativeHasBeenSet;

                    /**
                     * 资产评分平均分
                     */
                    double m_average;
                    bool m_averageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TABLEPROPERTYSCORE_H_
