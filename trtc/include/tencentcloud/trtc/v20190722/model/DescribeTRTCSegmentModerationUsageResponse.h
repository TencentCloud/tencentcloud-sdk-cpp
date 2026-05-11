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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCSEGMENTMODERATIONUSAGERESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCSEGMENTMODERATIONUSAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/UsageList.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeTRTCSegmentModerationUsage返回参数结构体
                */
                class DescribeTRTCSegmentModerationUsageResponse : public AbstractModel
                {
                public:
                    DescribeTRTCSegmentModerationUsageResponse();
                    ~DescribeTRTCSegmentModerationUsageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用量指标名列表
                     * @return UsageKey 用量指标名列表
                     * 
                     */
                    std::vector<std::string> GetUsageKey() const;

                    /**
                     * 判断参数 UsageKey 是否已赋值
                     * @return UsageKey 是否已赋值
                     * 
                     */
                    bool UsageKeyHasBeenSet() const;

                    /**
                     * 获取用量明细列表
                     * @return UsageList 用量明细列表
                     * 
                     */
                    std::vector<UsageList> GetUsageList() const;

                    /**
                     * 判断参数 UsageList 是否已赋值
                     * @return UsageList 是否已赋值
                     * 
                     */
                    bool UsageListHasBeenSet() const;

                    /**
                     * 获取汇总用量列表
                     * @return TotalUsage 汇总用量列表
                     * 
                     */
                    std::vector<uint64_t> GetTotalUsage() const;

                    /**
                     * 判断参数 TotalUsage 是否已赋值
                     * @return TotalUsage 是否已赋值
                     * 
                     */
                    bool TotalUsageHasBeenSet() const;

                private:

                    /**
                     * 用量指标名列表
                     */
                    std::vector<std::string> m_usageKey;
                    bool m_usageKeyHasBeenSet;

                    /**
                     * 用量明细列表
                     */
                    std::vector<UsageList> m_usageList;
                    bool m_usageListHasBeenSet;

                    /**
                     * 汇总用量列表
                     */
                    std::vector<uint64_t> m_totalUsage;
                    bool m_totalUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBETRTCSEGMENTMODERATIONUSAGERESPONSE_H_
