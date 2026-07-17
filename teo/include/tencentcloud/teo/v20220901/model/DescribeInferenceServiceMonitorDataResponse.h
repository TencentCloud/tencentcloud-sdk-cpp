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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceServiceMonitorRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeInferenceServiceMonitorData返回参数结构体
                */
                class DescribeInferenceServiceMonitorDataResponse : public AbstractModel
                {
                public:
                    DescribeInferenceServiceMonitorDataResponse();
                    ~DescribeInferenceServiceMonitorDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询结果的总条数。</p>
                     * @return TotalCount <p>查询结果的总条数。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>推理服务监控数据。</p>
                     * @return InferenceServiceMonitorRecords <p>推理服务监控数据。</p>
                     * 
                     */
                    std::vector<InferenceServiceMonitorRecord> GetInferenceServiceMonitorRecords() const;

                    /**
                     * 判断参数 InferenceServiceMonitorRecords 是否已赋值
                     * @return InferenceServiceMonitorRecords 是否已赋值
                     * 
                     */
                    bool InferenceServiceMonitorRecordsHasBeenSet() const;

                private:

                    /**
                     * <p>查询结果的总条数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>推理服务监控数据。</p>
                     */
                    std::vector<InferenceServiceMonitorRecord> m_inferenceServiceMonitorRecords;
                    bool m_inferenceServiceMonitorRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEMONITORDATARESPONSE_H_
