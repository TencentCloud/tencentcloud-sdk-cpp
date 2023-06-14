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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZTRENDRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZTRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBizTrend返回参数结构体
                */
                class DescribeBizTrendResponse : public AbstractModel
                {
                public:
                    DescribeBizTrendResponse();
                    ~DescribeBizTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取曲线图各个时间点的值
                     * @return DataList 曲线图各个时间点的值
                     * 
                     */
                    std::vector<double> GetDataList() const;

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取统计纬度
                     * @return MetricName 统计纬度
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                private:

                    /**
                     * 曲线图各个时间点的值
                     */
                    std::vector<double> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * 统计纬度
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZTRENDRESPONSE_H_
