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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEK8SAPIABNORMALRULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEK8SAPIABNORMALRULEREQUEST_H_

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
                * DeleteK8sApiAbnormalRule请求参数结构体
                */
                class DeleteK8sApiAbnormalRuleRequest : public AbstractModel
                {
                public:
                    DeleteK8sApiAbnormalRuleRequest();
                    ~DeleteK8sApiAbnormalRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID集合
                     * @return RuleIDSet 规则ID集合
                     * 
                     */
                    std::vector<std::string> GetRuleIDSet() const;

                    /**
                     * 设置规则ID集合
                     * @param _ruleIDSet 规则ID集合
                     * 
                     */
                    void SetRuleIDSet(const std::vector<std::string>& _ruleIDSet);

                    /**
                     * 判断参数 RuleIDSet 是否已赋值
                     * @return RuleIDSet 是否已赋值
                     * 
                     */
                    bool RuleIDSetHasBeenSet() const;

                private:

                    /**
                     * 规则ID集合
                     */
                    std::vector<std::string> m_ruleIDSet;
                    bool m_ruleIDSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DELETEK8SAPIABNORMALRULEREQUEST_H_
