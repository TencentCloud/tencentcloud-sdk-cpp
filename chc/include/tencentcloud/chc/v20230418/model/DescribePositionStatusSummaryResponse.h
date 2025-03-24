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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEPOSITIONSTATUSSUMMARYRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEPOSITIONSTATUSSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/PositionStatusItem.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribePositionStatusSummary返回参数结构体
                */
                class DescribePositionStatusSummaryResponse : public AbstractModel
                {
                public:
                    DescribePositionStatusSummaryResponse();
                    ~DescribePositionStatusSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取状态及对应数量
                     * @return StatusCountSet 状态及对应数量
                     * 
                     */
                    std::vector<PositionStatusItem> GetStatusCountSet() const;

                    /**
                     * 判断参数 StatusCountSet 是否已赋值
                     * @return StatusCountSet 是否已赋值
                     * 
                     */
                    bool StatusCountSetHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 状态及对应数量
                     */
                    std::vector<PositionStatusItem> m_statusCountSet;
                    bool m_statusCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEPOSITIONSTATUSSUMMARYRESPONSE_H_
