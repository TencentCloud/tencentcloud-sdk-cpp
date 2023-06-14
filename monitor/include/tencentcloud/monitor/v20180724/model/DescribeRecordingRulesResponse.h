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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBERECORDINGRULESRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBERECORDINGRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/RecordingRuleSet.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeRecordingRules返回参数结构体
                */
                class DescribeRecordingRulesResponse : public AbstractModel
                {
                public:
                    DescribeRecordingRulesResponse();
                    ~DescribeRecordingRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则组数量
                     * @return TotalCount 规则组数量
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
                     * 获取规则组详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordingRuleSet 规则组详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RecordingRuleSet> GetRecordingRuleSet() const;

                    /**
                     * 判断参数 RecordingRuleSet 是否已赋值
                     * @return RecordingRuleSet 是否已赋值
                     * 
                     */
                    bool RecordingRuleSetHasBeenSet() const;

                private:

                    /**
                     * 规则组数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 规则组详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RecordingRuleSet> m_recordingRuleSet;
                    bool m_recordingRuleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBERECORDINGRULESRESPONSE_H_
