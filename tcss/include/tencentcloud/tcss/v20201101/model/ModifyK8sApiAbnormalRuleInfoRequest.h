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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULEINFOREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyK8sApiAbnormalRuleInfo请求参数结构体
                */
                class ModifyK8sApiAbnormalRuleInfoRequest : public AbstractModel
                {
                public:
                    ModifyK8sApiAbnormalRuleInfoRequest();
                    ~ModifyK8sApiAbnormalRuleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则详情
                     * @return RuleInfo 规则详情
                     * 
                     */
                    K8sApiAbnormalRuleInfo GetRuleInfo() const;

                    /**
                     * 设置规则详情
                     * @param _ruleInfo 规则详情
                     * 
                     */
                    void SetRuleInfo(const K8sApiAbnormalRuleInfo& _ruleInfo);

                    /**
                     * 判断参数 RuleInfo 是否已赋值
                     * @return RuleInfo 是否已赋值
                     * 
                     */
                    bool RuleInfoHasBeenSet() const;

                private:

                    /**
                     * 规则详情
                     */
                    K8sApiAbnormalRuleInfo m_ruleInfo;
                    bool m_ruleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYK8SAPIABNORMALRULEINFOREQUEST_H_
