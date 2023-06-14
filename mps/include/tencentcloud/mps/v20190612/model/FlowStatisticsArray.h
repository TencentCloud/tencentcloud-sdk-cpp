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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSTATISTICSARRAY_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSTATISTICSARRAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FlowStatistics.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 流的统计数据列表。
                */
                class FlowStatisticsArray : public AbstractModel
                {
                public:
                    FlowStatisticsArray();
                    ~FlowStatisticsArray() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳。
                     * @return Timestamp 时间戳。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置时间戳。
                     * @param _timestamp 时间戳。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取每个会话的统计数据。
                     * @return FlowStatistics 每个会话的统计数据。
                     * 
                     */
                    std::vector<FlowStatistics> GetFlowStatistics() const;

                    /**
                     * 设置每个会话的统计数据。
                     * @param _flowStatistics 每个会话的统计数据。
                     * 
                     */
                    void SetFlowStatistics(const std::vector<FlowStatistics>& _flowStatistics);

                    /**
                     * 判断参数 FlowStatistics 是否已赋值
                     * @return FlowStatistics 是否已赋值
                     * 
                     */
                    bool FlowStatisticsHasBeenSet() const;

                private:

                    /**
                     * 时间戳。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 每个会话的统计数据。
                     */
                    std::vector<FlowStatistics> m_flowStatistics;
                    bool m_flowStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_FLOWSTATISTICSARRAY_H_
