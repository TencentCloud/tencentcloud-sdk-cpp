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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTIDRULERESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTIDRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/BotIdDetail.h>
#include <tencentcloud/waf/v20180125/model/BotIdStat.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeBotIdRule返回参数结构体
                */
                class DescribeBotIdRuleResponse : public AbstractModel
                {
                public:
                    DescribeBotIdRuleResponse();
                    ~DescribeBotIdRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BotIdDetail> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取符合条件的规则数量
                     * @return TotalCount 符合条件的规则数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Bot规则数量统计信息
                     * @return StatInfo Bot规则数量统计信息
                     * 
                     */
                    BotIdStat GetStatInfo() const;

                    /**
                     * 判断参数 StatInfo 是否已赋值
                     * @return StatInfo 是否已赋值
                     * 
                     */
                    bool StatInfoHasBeenSet() const;

                private:

                    /**
                     * 规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BotIdDetail> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 符合条件的规则数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Bot规则数量统计信息
                     */
                    BotIdStat m_statInfo;
                    bool m_statInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEBOTIDRULERESPONSE_H_
