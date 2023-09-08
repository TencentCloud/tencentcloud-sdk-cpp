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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCACRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/VpcRuleItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyVpcAcRule请求参数结构体
                */
                class ModifyVpcAcRuleRequest : public AbstractModel
                {
                public:
                    ModifyVpcAcRuleRequest();
                    ~ModifyVpcAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要编辑的规则数组
                     * @return Rules 需要编辑的规则数组
                     * 
                     */
                    std::vector<VpcRuleItem> GetRules() const;

                    /**
                     * 设置需要编辑的规则数组
                     * @param _rules 需要编辑的规则数组
                     * 
                     */
                    void SetRules(const std::vector<VpcRuleItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 需要编辑的规则数组
                     */
                    std::vector<VpcRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYVPCACRULEREQUEST_H_
