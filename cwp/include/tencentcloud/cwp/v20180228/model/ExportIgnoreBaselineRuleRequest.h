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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTIGNOREBASELINERULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTIGNOREBASELINERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportIgnoreBaselineRule请求参数结构体
                */
                class ExportIgnoreBaselineRuleRequest : public AbstractModel
                {
                public:
                    ExportIgnoreBaselineRuleRequest();
                    ~ExportIgnoreBaselineRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取检测项名称
                     * @return RuleName 检测项名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置检测项名称
                     * @param _ruleName 检测项名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * 检测项名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTIGNOREBASELINERULEREQUEST_H_
