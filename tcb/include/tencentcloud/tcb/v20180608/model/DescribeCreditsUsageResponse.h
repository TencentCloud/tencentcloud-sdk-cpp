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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGERESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCreditsUsage返回参数结构体
                */
                class DescribeCreditsUsageResponse : public AbstractModel
                {
                public:
                    DescribeCreditsUsageResponse();
                    ~DescribeCreditsUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源点套餐内用量</p>
                     * @return DeductValue <p>资源点套餐内用量</p>
                     * 
                     */
                    double GetDeductValue() const;

                    /**
                     * 判断参数 DeductValue 是否已赋值
                     * @return DeductValue 是否已赋值
                     * 
                     */
                    bool DeductValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点资源包用量</p>
                     * @return PackageDeductValue <p>资源点资源包用量</p>
                     * 
                     */
                    double GetPackageDeductValue() const;

                    /**
                     * 判断参数 PackageDeductValue 是否已赋值
                     * @return PackageDeductValue 是否已赋值
                     * 
                     */
                    bool PackageDeductValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点按量用量</p>
                     * @return ReportValue <p>资源点按量用量</p>
                     * 
                     */
                    double GetReportValue() const;

                    /**
                     * 判断参数 ReportValue 是否已赋值
                     * @return ReportValue 是否已赋值
                     * 
                     */
                    bool ReportValueHasBeenSet() const;

                    /**
                     * 获取<p>历史周期资源点用量</p>
                     * @return HistoryDeducted <p>历史周期资源点用量</p>
                     * 
                     */
                    double GetHistoryDeducted() const;

                    /**
                     * 判断参数 HistoryDeducted 是否已赋值
                     * @return HistoryDeducted 是否已赋值
                     * 
                     */
                    bool HistoryDeductedHasBeenSet() const;

                private:

                    /**
                     * <p>资源点套餐内用量</p>
                     */
                    double m_deductValue;
                    bool m_deductValueHasBeenSet;

                    /**
                     * <p>资源点资源包用量</p>
                     */
                    double m_packageDeductValue;
                    bool m_packageDeductValueHasBeenSet;

                    /**
                     * <p>资源点按量用量</p>
                     */
                    double m_reportValue;
                    bool m_reportValueHasBeenSet;

                    /**
                     * <p>历史周期资源点用量</p>
                     */
                    double m_historyDeducted;
                    bool m_historyDeductedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGERESPONSE_H_
