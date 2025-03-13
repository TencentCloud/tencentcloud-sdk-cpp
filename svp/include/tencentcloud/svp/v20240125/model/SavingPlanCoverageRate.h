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

#ifndef TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANCOVERAGERATE_H_
#define TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANCOVERAGERATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Svp
    {
        namespace V20240125
        {
            namespace Model
            {
                /**
                * 节省计划覆盖率聚合数据
                */
                class SavingPlanCoverageRate : public AbstractModel
                {
                public:
                    SavingPlanCoverageRate();
                    ~SavingPlanCoverageRate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取聚合时间维度，按天聚合格式为yyyy-MM-dd，按月聚合格式为yyyy-MM
                     * @return DatePoint 聚合时间维度，按天聚合格式为yyyy-MM-dd，按月聚合格式为yyyy-MM
                     * 
                     */
                    std::string GetDatePoint() const;

                    /**
                     * 设置聚合时间维度，按天聚合格式为yyyy-MM-dd，按月聚合格式为yyyy-MM
                     * @param _datePoint 聚合时间维度，按天聚合格式为yyyy-MM-dd，按月聚合格式为yyyy-MM
                     * 
                     */
                    void SetDatePoint(const std::string& _datePoint);

                    /**
                     * 判断参数 DatePoint 是否已赋值
                     * @return DatePoint 是否已赋值
                     * 
                     */
                    bool DatePointHasBeenSet() const;

                    /**
                     * 获取覆盖率结果，取值[0, 100]
                     * @return Rate 覆盖率结果，取值[0, 100]
                     * 
                     */
                    double GetRate() const;

                    /**
                     * 设置覆盖率结果，取值[0, 100]
                     * @param _rate 覆盖率结果，取值[0, 100]
                     * 
                     */
                    void SetRate(const double& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                private:

                    /**
                     * 聚合时间维度，按天聚合格式为yyyy-MM-dd，按月聚合格式为yyyy-MM
                     */
                    std::string m_datePoint;
                    bool m_datePointHasBeenSet;

                    /**
                     * 覆盖率结果，取值[0, 100]
                     */
                    double m_rate;
                    bool m_rateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SVP_V20240125_MODEL_SAVINGPLANCOVERAGERATE_H_
