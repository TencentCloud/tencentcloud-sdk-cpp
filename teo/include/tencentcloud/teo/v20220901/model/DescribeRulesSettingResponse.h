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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERULESSETTINGRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERULESSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RulesSettingAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeRulesSetting返回参数结构体
                */
                class DescribeRulesSettingResponse : public AbstractModel
                {
                public:
                    DescribeRulesSettingResponse();
                    ~DescribeRulesSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则引擎可应用匹配请求的设置列表及其详细建议配置信息。
                     * @return Actions 规则引擎可应用匹配请求的设置列表及其详细建议配置信息。
                     * 
                     */
                    std::vector<RulesSettingAction> GetActions() const;

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                private:

                    /**
                     * 规则引擎可应用匹配请求的设置列表及其详细建议配置信息。
                     */
                    std::vector<RulesSettingAction> m_actions;
                    bool m_actionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBERULESSETTINGRESPONSE_H_
