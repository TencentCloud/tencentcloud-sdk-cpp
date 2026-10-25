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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMUSAGESUMMARYRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMUSAGESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/UsageTimePoint.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMUsageSummary返回参数结构体
                */
                class DescribeTDEMUsageSummaryResponse : public AbstractModel
                {
                public:
                    DescribeTDEMUsageSummaryResponse();
                    ~DescribeTDEMUsageSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>上报总量</p>
                     * @return ReportVolume <p>上报总量</p>
                     * 
                     */
                    int64_t GetReportVolume() const;

                    /**
                     * 判断参数 ReportVolume 是否已赋值
                     * @return ReportVolume 是否已赋值
                     * 
                     */
                    bool ReportVolumeHasBeenSet() const;

                    /**
                     * 获取<p>窗口内有量应用数</p>
                     * @return ResourceCount <p>窗口内有量应用数</p>
                     * 
                     */
                    int64_t GetResourceCount() const;

                    /**
                     * 判断参数 ResourceCount 是否已赋值
                     * @return ResourceCount 是否已赋值
                     * 
                     */
                    bool ResourceCountHasBeenSet() const;

                    /**
                     * 获取<p>hour 或 day</p>
                     * @return Granularity <p>hour 或 day</p>
                     * 
                     */
                    std::string GetGranularity() const;

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     * 
                     */
                    bool GranularityHasBeenSet() const;

                    /**
                     * 获取<p>趋势</p>
                     * @return ByDate <p>趋势</p>
                     * 
                     */
                    std::vector<UsageTimePoint> GetByDate() const;

                    /**
                     * 判断参数 ByDate 是否已赋值
                     * @return ByDate 是否已赋值
                     * 
                     */
                    bool ByDateHasBeenSet() const;

                private:

                    /**
                     * <p>上报总量</p>
                     */
                    int64_t m_reportVolume;
                    bool m_reportVolumeHasBeenSet;

                    /**
                     * <p>窗口内有量应用数</p>
                     */
                    int64_t m_resourceCount;
                    bool m_resourceCountHasBeenSet;

                    /**
                     * <p>hour 或 day</p>
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                    /**
                     * <p>趋势</p>
                     */
                    std::vector<UsageTimePoint> m_byDate;
                    bool m_byDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMUSAGESUMMARYRESPONSE_H_
