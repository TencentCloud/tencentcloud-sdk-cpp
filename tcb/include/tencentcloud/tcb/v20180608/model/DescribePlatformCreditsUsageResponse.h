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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMCREDITSUSAGERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMCREDITSUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/PlatformCreditsUsageDaily.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribePlatformCreditsUsage返回参数结构体
                */
                class DescribePlatformCreditsUsageResponse : public AbstractModel
                {
                public:
                    DescribePlatformCreditsUsageResponse();
                    ~DescribePlatformCreditsUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源点套餐内用量总和</p>
                     * @return DeductValueCount <p>资源点套餐内用量总和</p>
                     * 
                     */
                    double GetDeductValueCount() const;

                    /**
                     * 判断参数 DeductValueCount 是否已赋值
                     * @return DeductValueCount 是否已赋值
                     * 
                     */
                    bool DeductValueCountHasBeenSet() const;

                    /**
                     * 获取<p>资源点资源包用量总和</p>
                     * @return PackageDeductValueCount <p>资源点资源包用量总和</p>
                     * 
                     */
                    double GetPackageDeductValueCount() const;

                    /**
                     * 判断参数 PackageDeductValueCount 是否已赋值
                     * @return PackageDeductValueCount 是否已赋值
                     * 
                     */
                    bool PackageDeductValueCountHasBeenSet() const;

                    /**
                     * 获取<p>资源点按量用量总和</p>
                     * @return ReportValueCount <p>资源点按量用量总和</p>
                     * 
                     */
                    double GetReportValueCount() const;

                    /**
                     * 判断参数 ReportValueCount 是否已赋值
                     * @return ReportValueCount 是否已赋值
                     * 
                     */
                    bool ReportValueCountHasBeenSet() const;

                    /**
                     * 获取<p>每日消耗具体数据</p>
                     * @return DailyList <p>每日消耗具体数据</p>
                     * 
                     */
                    std::vector<PlatformCreditsUsageDaily> GetDailyList() const;

                    /**
                     * 判断参数 DailyList 是否已赋值
                     * @return DailyList 是否已赋值
                     * 
                     */
                    bool DailyListHasBeenSet() const;

                private:

                    /**
                     * <p>资源点套餐内用量总和</p>
                     */
                    double m_deductValueCount;
                    bool m_deductValueCountHasBeenSet;

                    /**
                     * <p>资源点资源包用量总和</p>
                     */
                    double m_packageDeductValueCount;
                    bool m_packageDeductValueCountHasBeenSet;

                    /**
                     * <p>资源点按量用量总和</p>
                     */
                    double m_reportValueCount;
                    bool m_reportValueCountHasBeenSet;

                    /**
                     * <p>每日消耗具体数据</p>
                     */
                    std::vector<PlatformCreditsUsageDaily> m_dailyList;
                    bool m_dailyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMCREDITSUSAGERESPONSE_H_
