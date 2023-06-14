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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_BARADDATA_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_BARADDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 巴拉多返回的数据
                */
                class BaradData : public AbstractModel
                {
                public:
                    BaradData();
                    ~BaradData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名（connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；）
                     * @return MetricName 指标名（connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；）
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置指标名（connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；）
                     * @param _metricName 指标名（connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；）
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
                     * 获取值数组
                     * @return Data 值数组
                     * 
                     */
                    std::vector<double> GetData() const;

                    /**
                     * 设置值数组
                     * @param _data 值数组
                     * 
                     */
                    void SetData(const std::vector<double>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取值数组的大小
                     * @return Count 值数组的大小
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置值数组的大小
                     * @param _count 值数组的大小
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 指标名（connum表示TCP活跃连接数；
new_conn表示新建TCP连接数；
inactive_conn表示非活跃连接数;
intraffic表示入流量；
outtraffic表示出流量；
alltraffic表示出流量和入流量之和；
inpkg表示入包速率；
outpkg表示出包速率；）
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 值数组
                     */
                    std::vector<double> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 值数组的大小
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_BARADDATA_H_
