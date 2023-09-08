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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/CreateRuleItem.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * AddAclRule请求参数结构体
                */
                class AddAclRuleRequest : public AbstractModel
                {
                public:
                    AddAclRuleRequest();
                    ~AddAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要添加的访问控制规则列表
                     * @return Rules 需要添加的访问控制规则列表
                     * 
                     */
                    std::vector<CreateRuleItem> GetRules() const;

                    /**
                     * 设置需要添加的访问控制规则列表
                     * @param _rules 需要添加的访问控制规则列表
                     * 
                     */
                    void SetRules(const std::vector<CreateRuleItem>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取添加规则的来源，一般不需要使用，值insert_rule 表示插入指定位置的规则；值batch_import 表示批量导入规则；为空时表示添加规则
                     * @return From 添加规则的来源，一般不需要使用，值insert_rule 表示插入指定位置的规则；值batch_import 表示批量导入规则；为空时表示添加规则
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置添加规则的来源，一般不需要使用，值insert_rule 表示插入指定位置的规则；值batch_import 表示批量导入规则；为空时表示添加规则
                     * @param _from 添加规则的来源，一般不需要使用，值insert_rule 表示插入指定位置的规则；值batch_import 表示批量导入规则；为空时表示添加规则
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                private:

                    /**
                     * 需要添加的访问控制规则列表
                     */
                    std::vector<CreateRuleItem> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 添加规则的来源，一般不需要使用，值insert_rule 表示插入指定位置的规则；值batch_import 表示批量导入规则；为空时表示添加规则
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_ADDACLRULEREQUEST_H_
