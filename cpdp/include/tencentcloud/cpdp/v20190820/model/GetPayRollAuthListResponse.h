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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHLISTRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/PayRollAuthResult.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * GetPayRollAuthList返回参数结构体
                */
                class GetPayRollAuthListResponse : public AbstractModel
                {
                public:
                    GetPayRollAuthListResponse();
                    ~GetPayRollAuthListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取核身结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Results 核身结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PayRollAuthResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取总记录条数
                     * @return Total 总记录条数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取记录起始位置，该次请求资源的起始位置，请求中包含偏移量时应答消息返回相同偏移量，否则返回默认值0
                     * @return Offset 记录起始位置，该次请求资源的起始位置，请求中包含偏移量时应答消息返回相同偏移量，否则返回默认值0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取本次返回条数
                     * @return Limit 本次返回条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 核身结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PayRollAuthResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 总记录条数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 记录起始位置，该次请求资源的起始位置，请求中包含偏移量时应答消息返回相同偏移量，否则返回默认值0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 本次返回条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHLISTRESPONSE_H_
