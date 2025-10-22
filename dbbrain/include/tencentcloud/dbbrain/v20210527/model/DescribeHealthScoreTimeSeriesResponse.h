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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEHEALTHSCORETIMESERIESRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEHEALTHSCORETIMESERIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/HealthScoreTimeSeriesData.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeHealthScoreTimeSeries返回参数结构体
                */
                class DescribeHealthScoreTimeSeriesResponse : public AbstractModel
                {
                public:
                    DescribeHealthScoreTimeSeriesResponse();
                    ~DescribeHealthScoreTimeSeriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取健康得分趋势数据
                     * @return Data 健康得分趋势数据
                     * 
                     */
                    HealthScoreTimeSeriesData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 健康得分趋势数据
                     */
                    HealthScoreTimeSeriesData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEHEALTHSCORETIMESERIESRESPONSE_H_
