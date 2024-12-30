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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_LINE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_LINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 指标曲线数据
                */
                class Line : public AbstractModel
                {
                public:
                    Line();
                    ~Line() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名
                     * @param _metricName 指标名
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
                     * 获取指标中文名
                     * @return MetricNameCN 指标中文名
                     * 
                     */
                    std::string GetMetricNameCN() const;

                    /**
                     * 设置指标中文名
                     * @param _metricNameCN 指标中文名
                     * 
                     */
                    void SetMetricNameCN(const std::string& _metricNameCN);

                    /**
                     * 判断参数 MetricNameCN 是否已赋值
                     * @return MetricNameCN 是否已赋值
                     * 
                     */
                    bool MetricNameCNHasBeenSet() const;

                    /**
                     * 获取时间序列
                     * @return TimeSerial 时间序列
                     * 
                     */
                    std::vector<int64_t> GetTimeSerial() const;

                    /**
                     * 设置时间序列
                     * @param _timeSerial 时间序列
                     * 
                     */
                    void SetTimeSerial(const std::vector<int64_t>& _timeSerial);

                    /**
                     * 判断参数 TimeSerial 是否已赋值
                     * @return TimeSerial 是否已赋值
                     * 
                     */
                    bool TimeSerialHasBeenSet() const;

                    /**
                     * 获取数据序列
                     * @return DataSerial 数据序列
                     * 
                     */
                    std::vector<double> GetDataSerial() const;

                    /**
                     * 设置数据序列
                     * @param _dataSerial 数据序列
                     * 
                     */
                    void SetDataSerial(const std::vector<double>& _dataSerial);

                    /**
                     * 判断参数 DataSerial 是否已赋值
                     * @return DataSerial 是否已赋值
                     * 
                     */
                    bool DataSerialHasBeenSet() const;

                    /**
                     * 获取维度列表
                     * @return Tags 维度列表
                     * 
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置维度列表
                     * @param _tags 维度列表
                     * 
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标中文名
                     */
                    std::string m_metricNameCN;
                    bool m_metricNameCNHasBeenSet;

                    /**
                     * 时间序列
                     */
                    std::vector<int64_t> m_timeSerial;
                    bool m_timeSerialHasBeenSet;

                    /**
                     * 数据序列
                     */
                    std::vector<double> m_dataSerial;
                    bool m_dataSerialHasBeenSet;

                    /**
                     * 维度列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_LINE_H_
