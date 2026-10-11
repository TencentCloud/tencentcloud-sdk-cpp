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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_CHARTDATA_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_CHARTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Series.h>
#include <tencentcloud/apm/v20210622/model/YAxis.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 接口参数列表
                */
                class ChartData : public AbstractModel
                {
                public:
                    ChartData();
                    ~ChartData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接口参数id列表</p>
                     * @return Series <p>接口参数id列表</p>
                     * 
                     */
                    std::vector<Series> GetSeries() const;

                    /**
                     * 设置<p>接口参数id列表</p>
                     * @param _series <p>接口参数id列表</p>
                     * 
                     */
                    void SetSeries(const std::vector<Series>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取<p>接口参数列表</p>
                     * @return YAxis <p>接口参数列表</p>
                     * 
                     */
                    std::vector<YAxis> GetYAxis() const;

                    /**
                     * 设置<p>接口参数列表</p>
                     * @param _yAxis <p>接口参数列表</p>
                     * 
                     */
                    void SetYAxis(const std::vector<YAxis>& _yAxis);

                    /**
                     * 判断参数 YAxis 是否已赋值
                     * @return YAxis 是否已赋值
                     * 
                     */
                    bool YAxisHasBeenSet() const;

                private:

                    /**
                     * <p>接口参数id列表</p>
                     */
                    std::vector<Series> m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * <p>接口参数列表</p>
                     */
                    std::vector<YAxis> m_yAxis;
                    bool m_yAxisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_CHARTDATA_H_
