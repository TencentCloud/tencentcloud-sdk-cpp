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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICDATARESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeProbeMetricData返回参数结构体
                */
                class DescribeProbeMetricDataResponse : public AbstractModel
                {
                public:
                    DescribeProbeMetricDataResponse();
                    ~DescribeProbeMetricDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取 返回指标 JSON 序列化后的字符串，具体如下所示："[{\"name\":\"task_navigate_request_gauge\",\"columns\":[\"time\",\"avg(first_screen_time) / 1000\"],\"values\":[[1641571200,6.756600000000001]],\"tags\":null}]"
                     * @return MetricSet  返回指标 JSON 序列化后的字符串，具体如下所示："[{\"name\":\"task_navigate_request_gauge\",\"columns\":[\"time\",\"avg(first_screen_time) / 1000\"],\"values\":[[1641571200,6.756600000000001]],\"tags\":null}]"
                     * 
                     */
                    std::string GetMetricSet() const;

                    /**
                     * 判断参数 MetricSet 是否已赋值
                     * @return MetricSet 是否已赋值
                     * 
                     */
                    bool MetricSetHasBeenSet() const;

                private:

                    /**
                     *  返回指标 JSON 序列化后的字符串，具体如下所示："[{\"name\":\"task_navigate_request_gauge\",\"columns\":[\"time\",\"avg(first_screen_time) / 1000\"],\"values\":[[1641571200,6.756600000000001]],\"tags\":null}]"
                     */
                    std::string m_metricSet;
                    bool m_metricSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEPROBEMETRICDATARESPONSE_H_
