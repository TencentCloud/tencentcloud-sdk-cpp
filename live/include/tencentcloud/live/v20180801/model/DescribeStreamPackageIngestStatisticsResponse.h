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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPACKAGEINGESTSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPACKAGEINGESTSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/IngestStatisticsDataInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageIngestStatistics返回参数结构体
                */
                class DescribeStreamPackageIngestStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeStreamPackageIngestStatisticsResponse();
                    ~DescribeStreamPackageIngestStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>输入流量数据</p>
                     * @return DataInfoList <p>输入流量数据</p>
                     * 
                     */
                    std::vector<IngestStatisticsDataInfo> GetDataInfoList() const;

                    /**
                     * 判断参数 DataInfoList 是否已赋值
                     * @return DataInfoList 是否已赋值
                     * 
                     */
                    bool DataInfoListHasBeenSet() const;

                    /**
                     * 获取<p>总输入用量</p>
                     * @return TotalIngest <p>总输入用量</p>
                     * 
                     */
                    int64_t GetTotalIngest() const;

                    /**
                     * 判断参数 TotalIngest 是否已赋值
                     * @return TotalIngest 是否已赋值
                     * 
                     */
                    bool TotalIngestHasBeenSet() const;

                private:

                    /**
                     * <p>输入流量数据</p>
                     */
                    std::vector<IngestStatisticsDataInfo> m_dataInfoList;
                    bool m_dataInfoListHasBeenSet;

                    /**
                     * <p>总输入用量</p>
                     */
                    int64_t m_totalIngest;
                    bool m_totalIngestHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESTREAMPACKAGEINGESTSTATISTICSRESPONSE_H_
