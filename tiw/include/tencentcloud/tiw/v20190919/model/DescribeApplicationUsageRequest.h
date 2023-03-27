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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONUSAGEREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeApplicationUsage请求参数结构体
                */
                class DescribeApplicationUsageRequest : public AbstractModel
                {
                public:
                    DescribeApplicationUsageRequest();
                    ~DescribeApplicationUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用量开始时间（包括该时间点）
                     * @return BeginTime 用量开始时间（包括该时间点）
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置用量开始时间（包括该时间点）
                     * @param BeginTime 用量开始时间（包括该时间点）
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取用量结束时间（不包括该时间点）
                     * @return EndTime 用量结束时间（不包括该时间点）
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置用量结束时间（不包括该时间点）
                     * @param EndTime 用量结束时间（不包括该时间点）
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取白板子产品名
                     * @return SubProduct 白板子产品名
                     */
                    std::string GetSubProduct() const;

                    /**
                     * 设置白板子产品名
                     * @param SubProduct 白板子产品名
                     */
                    void SetSubProduct(const std::string& _subProduct);

                    /**
                     * 判断参数 SubProduct 是否已赋值
                     * @return SubProduct 是否已赋值
                     */
                    bool SubProductHasBeenSet() const;

                    /**
                     * 获取时间跨度单位
- MONTHLY：月
- DAILY：天
- MINUTELY：分钟
                     * @return TimeLevel 时间跨度单位
- MONTHLY：月
- DAILY：天
- MINUTELY：分钟
                     */
                    std::string GetTimeLevel() const;

                    /**
                     * 设置时间跨度单位
- MONTHLY：月
- DAILY：天
- MINUTELY：分钟
                     * @param TimeLevel 时间跨度单位
- MONTHLY：月
- DAILY：天
- MINUTELY：分钟
                     */
                    void SetTimeLevel(const std::string& _timeLevel);

                    /**
                     * 判断参数 TimeLevel 是否已赋值
                     * @return TimeLevel 是否已赋值
                     */
                    bool TimeLevelHasBeenSet() const;

                    /**
                     * 获取白板应用的SdkAppId
                     * @return SdkAppId 白板应用的SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置白板应用的SdkAppId
                     * @param SdkAppId 白板应用的SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取true: 返回加权求和后的用量数据
false: 返回原始用量数据
                     * @return IsWeighted true: 返回加权求和后的用量数据
false: 返回原始用量数据
                     */
                    bool GetIsWeighted() const;

                    /**
                     * 设置true: 返回加权求和后的用量数据
false: 返回原始用量数据
                     * @param IsWeighted true: 返回加权求和后的用量数据
false: 返回原始用量数据
                     */
                    void SetIsWeighted(const bool& _isWeighted);

                    /**
                     * 判断参数 IsWeighted 是否已赋值
                     * @return IsWeighted 是否已赋值
                     */
                    bool IsWeightedHasBeenSet() const;

                private:

                    /**
                     * 用量开始时间（包括该时间点）
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 用量结束时间（不包括该时间点）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 白板子产品名
                     */
                    std::string m_subProduct;
                    bool m_subProductHasBeenSet;

                    /**
                     * 时间跨度单位
- MONTHLY：月
- DAILY：天
- MINUTELY：分钟
                     */
                    std::string m_timeLevel;
                    bool m_timeLevelHasBeenSet;

                    /**
                     * 白板应用的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * true: 返回加权求和后的用量数据
false: 返回原始用量数据
                     */
                    bool m_isWeighted;
                    bool m_isWeightedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEAPPLICATIONUSAGEREQUEST_H_
