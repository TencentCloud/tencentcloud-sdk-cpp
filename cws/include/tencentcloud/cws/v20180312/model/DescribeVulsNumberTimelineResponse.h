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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEVULSNUMBERTIMELINERESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEVULSNUMBERTIMELINERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cws/v20180312/model/VulsTimeline.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * DescribeVulsNumberTimeline返回参数结构体
                */
                class DescribeVulsNumberTimelineResponse : public AbstractModel
                {
                public:
                    DescribeVulsNumberTimelineResponse();
                    ~DescribeVulsNumberTimelineResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统计数据记录数量。
                     * @return TotalCount 统计数据记录数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取用户漏洞数随时间变化统计数据。
                     * @return VulsTimeline 用户漏洞数随时间变化统计数据。
                     * 
                     */
                    std::vector<VulsTimeline> GetVulsTimeline() const;

                    /**
                     * 判断参数 VulsTimeline 是否已赋值
                     * @return VulsTimeline 是否已赋值
                     * 
                     */
                    bool VulsTimelineHasBeenSet() const;

                private:

                    /**
                     * 统计数据记录数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 用户漏洞数随时间变化统计数据。
                     */
                    std::vector<VulsTimeline> m_vulsTimeline;
                    bool m_vulsTimelineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_DESCRIBEVULSNUMBERTIMELINERESPONSE_H_
