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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_GETRESPTIMETRENDEXRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_GETRESPTIMETRENDEXRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cat/v20180409/model/DataPointMetric.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * GetRespTimeTrendEx返回参数结构体
                */
                class GetRespTimeTrendExResponse : public AbstractModel
                {
                public:
                    GetRespTimeTrendExResponse();
                    ~GetRespTimeTrendExResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取数据点集合，时延等走势数据
                     * @return DataPoints 数据点集合，时延等走势数据
                     */
                    std::vector<DataPointMetric> GetDataPoints() const;

                    /**
                     * 判断参数 DataPoints 是否已赋值
                     * @return DataPoints 是否已赋值
                     */
                    bool DataPointsHasBeenSet() const;

                private:

                    /**
                     * 数据点集合，时延等走势数据
                     */
                    std::vector<DataPointMetric> m_dataPoints;
                    bool m_dataPointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_GETRESPTIMETRENDEXRESPONSE_H_
