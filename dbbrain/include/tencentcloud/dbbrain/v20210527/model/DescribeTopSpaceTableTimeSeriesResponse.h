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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLETIMESERIESRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLETIMESERIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/TableSpaceTimeSeries.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeTopSpaceTableTimeSeries返回参数结构体
                */
                class DescribeTopSpaceTableTimeSeriesResponse : public AbstractModel
                {
                public:
                    DescribeTopSpaceTableTimeSeriesResponse();
                    ~DescribeTopSpaceTableTimeSeriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的Top表空间统计信息的时序数据列表。
                     * @return TopSpaceTableTimeSeries 返回的Top表空间统计信息的时序数据列表。
                     * 
                     */
                    std::vector<TableSpaceTimeSeries> GetTopSpaceTableTimeSeries() const;

                    /**
                     * 判断参数 TopSpaceTableTimeSeries 是否已赋值
                     * @return TopSpaceTableTimeSeries 是否已赋值
                     * 
                     */
                    bool TopSpaceTableTimeSeriesHasBeenSet() const;

                private:

                    /**
                     * 返回的Top表空间统计信息的时序数据列表。
                     */
                    std::vector<TableSpaceTimeSeries> m_topSpaceTableTimeSeries;
                    bool m_topSpaceTableTimeSeriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBETOPSPACETABLETIMESERIESRESPONSE_H_
