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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSLEVELSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSLEVELSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAbnormalProcessLevelSummary返回参数结构体
                */
                class DescribeAbnormalProcessLevelSummaryResponse : public AbstractModel
                {
                public:
                    DescribeAbnormalProcessLevelSummaryResponse();
                    ~DescribeAbnormalProcessLevelSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异常进程高危待处理事件数
                     * @return HighLevelEventCount 异常进程高危待处理事件数
                     * 
                     */
                    int64_t GetHighLevelEventCount() const;

                    /**
                     * 判断参数 HighLevelEventCount 是否已赋值
                     * @return HighLevelEventCount 是否已赋值
                     * 
                     */
                    bool HighLevelEventCountHasBeenSet() const;

                    /**
                     * 获取异常进程中危待处理事件数
                     * @return MediumLevelEventCount 异常进程中危待处理事件数
                     * 
                     */
                    int64_t GetMediumLevelEventCount() const;

                    /**
                     * 判断参数 MediumLevelEventCount 是否已赋值
                     * @return MediumLevelEventCount 是否已赋值
                     * 
                     */
                    bool MediumLevelEventCountHasBeenSet() const;

                    /**
                     * 获取异常进程低危待处理事件数
                     * @return LowLevelEventCount 异常进程低危待处理事件数
                     * 
                     */
                    int64_t GetLowLevelEventCount() const;

                    /**
                     * 判断参数 LowLevelEventCount 是否已赋值
                     * @return LowLevelEventCount 是否已赋值
                     * 
                     */
                    bool LowLevelEventCountHasBeenSet() const;

                private:

                    /**
                     * 异常进程高危待处理事件数
                     */
                    int64_t m_highLevelEventCount;
                    bool m_highLevelEventCountHasBeenSet;

                    /**
                     * 异常进程中危待处理事件数
                     */
                    int64_t m_mediumLevelEventCount;
                    bool m_mediumLevelEventCountHasBeenSet;

                    /**
                     * 异常进程低危待处理事件数
                     */
                    int64_t m_lowLevelEventCount;
                    bool m_lowLevelEventCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEABNORMALPROCESSLEVELSUMMARYRESPONSE_H_
