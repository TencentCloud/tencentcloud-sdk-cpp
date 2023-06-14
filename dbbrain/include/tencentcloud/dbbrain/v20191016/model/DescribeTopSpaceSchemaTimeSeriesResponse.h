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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACESCHEMATIMESERIESRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACESCHEMATIMESERIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/SchemaSpaceTimeSeries.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeTopSpaceSchemaTimeSeries返回参数结构体
                */
                class DescribeTopSpaceSchemaTimeSeriesResponse : public AbstractModel
                {
                public:
                    DescribeTopSpaceSchemaTimeSeriesResponse();
                    ~DescribeTopSpaceSchemaTimeSeriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的Top库空间统计信息的时序数据列表。
                     * @return TopSpaceSchemaTimeSeries 返回的Top库空间统计信息的时序数据列表。
                     * 
                     */
                    std::vector<SchemaSpaceTimeSeries> GetTopSpaceSchemaTimeSeries() const;

                    /**
                     * 判断参数 TopSpaceSchemaTimeSeries 是否已赋值
                     * @return TopSpaceSchemaTimeSeries 是否已赋值
                     * 
                     */
                    bool TopSpaceSchemaTimeSeriesHasBeenSet() const;

                private:

                    /**
                     * 返回的Top库空间统计信息的时序数据列表。
                     */
                    std::vector<SchemaSpaceTimeSeries> m_topSpaceSchemaTimeSeries;
                    bool m_topSpaceSchemaTimeSeriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACESCHEMATIMESERIESRESPONSE_H_
