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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULERESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/RuleInfo.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeRule返回参数结构体
                */
                class DescribeRuleResponse : public AbstractModel
                {
                public:
                    DescribeRuleResponse();
                    ~DescribeRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleInfo 规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RuleInfo GetRuleInfo() const;

                    /**
                     * 判断参数 RuleInfo 是否已赋值
                     * @return RuleInfo 是否已赋值
                     * 
                     */
                    bool RuleInfoHasBeenSet() const;

                private:

                    /**
                     * 规则信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleInfo m_ruleInfo;
                    bool m_ruleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBERULERESPONSE_H_
