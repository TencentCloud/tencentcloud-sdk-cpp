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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_METRICLABELWITHVALUES_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_METRICLABELWITHVALUES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/LabelWithValues.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * PTS提供的指标名，指标对应的labels及values
                */
                class MetricLabelWithValues : public AbstractModel
                {
                public:
                    MetricLabelWithValues();
                    ~MetricLabelWithValues() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取metric 名字
                     * @return MetricName metric 名字
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置metric 名字
                     * @param _metricName metric 名字
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
                     * 获取label及values 数组
                     * @return LabelValuesSet label及values 数组
                     * 
                     */
                    std::vector<LabelWithValues> GetLabelValuesSet() const;

                    /**
                     * 设置label及values 数组
                     * @param _labelValuesSet label及values 数组
                     * 
                     */
                    void SetLabelValuesSet(const std::vector<LabelWithValues>& _labelValuesSet);

                    /**
                     * 判断参数 LabelValuesSet 是否已赋值
                     * @return LabelValuesSet 是否已赋值
                     * 
                     */
                    bool LabelValuesSetHasBeenSet() const;

                private:

                    /**
                     * metric 名字
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * label及values 数组
                     */
                    std::vector<LabelWithValues> m_labelValuesSet;
                    bool m_labelValuesSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_METRICLABELWITHVALUES_H_
