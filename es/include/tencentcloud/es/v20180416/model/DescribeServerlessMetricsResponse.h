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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSMETRICSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSMETRICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/MetricMapByIndexId.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeServerlessMetrics返回参数结构体
                */
                class DescribeServerlessMetricsResponse : public AbstractModel
                {
                public:
                    DescribeServerlessMetricsResponse();
                    ~DescribeServerlessMetricsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取storage指标值，单位byte
                     * @return Storage storage指标值，单位byte
                     * 
                     */
                    double GetStorage() const;

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取IndexTraffic指标值，单位byte
                     * @return IndexTraffic IndexTraffic指标值，单位byte
                     * 
                     */
                    double GetIndexTraffic() const;

                    /**
                     * 判断参数 IndexTraffic 是否已赋值
                     * @return IndexTraffic 是否已赋值
                     * 
                     */
                    bool IndexTrafficHasBeenSet() const;

                    /**
                     * 获取读请求数，单位次数
                     * @return ReadReqTimes 读请求数，单位次数
                     * 
                     */
                    int64_t GetReadReqTimes() const;

                    /**
                     * 判断参数 ReadReqTimes 是否已赋值
                     * @return ReadReqTimes 是否已赋值
                     * 
                     */
                    bool ReadReqTimesHasBeenSet() const;

                    /**
                     * 获取写请求数，单位次数
                     * @return WriteReqTimes 写请求数，单位次数
                     * 
                     */
                    int64_t GetWriteReqTimes() const;

                    /**
                     * 判断参数 WriteReqTimes 是否已赋值
                     * @return WriteReqTimes 是否已赋值
                     * 
                     */
                    bool WriteReqTimesHasBeenSet() const;

                    /**
                     * 获取文档数量，单位个数
                     * @return DocCount 文档数量，单位个数
                     * 
                     */
                    int64_t GetDocCount() const;

                    /**
                     * 判断参数 DocCount 是否已赋值
                     * @return DocCount 是否已赋值
                     * 
                     */
                    bool DocCountHasBeenSet() const;

                    /**
                     * 获取指标数据数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetricMapList 指标数据数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricMapByIndexId> GetMetricMapList() const;

                    /**
                     * 判断参数 MetricMapList 是否已赋值
                     * @return MetricMapList 是否已赋值
                     * 
                     */
                    bool MetricMapListHasBeenSet() const;

                private:

                    /**
                     * storage指标值，单位byte
                     */
                    double m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * IndexTraffic指标值，单位byte
                     */
                    double m_indexTraffic;
                    bool m_indexTrafficHasBeenSet;

                    /**
                     * 读请求数，单位次数
                     */
                    int64_t m_readReqTimes;
                    bool m_readReqTimesHasBeenSet;

                    /**
                     * 写请求数，单位次数
                     */
                    int64_t m_writeReqTimes;
                    bool m_writeReqTimesHasBeenSet;

                    /**
                     * 文档数量，单位个数
                     */
                    int64_t m_docCount;
                    bool m_docCountHasBeenSet;

                    /**
                     * 指标数据数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricMapByIndexId> m_metricMapList;
                    bool m_metricMapListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESERVERLESSMETRICSRESPONSE_H_
