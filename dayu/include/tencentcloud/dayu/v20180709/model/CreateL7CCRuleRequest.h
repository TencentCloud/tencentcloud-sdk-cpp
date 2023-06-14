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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7CCRULEREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7CCRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/CCRuleConfig.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateL7CCRule请求参数结构体
                */
                class CreateL7CCRuleRequest : public AbstractModel
                {
                public:
                    CreateL7CCRuleRequest();
                    ~CreateL7CCRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源ID
                     * @param _id 资源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取操作码，取值[query(表示查询)，add(表示添加)，del(表示删除)]
                     * @return Method 操作码，取值[query(表示查询)，add(表示添加)，del(表示删除)]
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置操作码，取值[query(表示查询)，add(表示添加)，del(表示删除)]
                     * @param _method 操作码，取值[query(表示查询)，add(表示添加)，del(表示删除)]
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取7层转发规则ID，例如：rule-0000001
                     * @return RuleId 7层转发规则ID，例如：rule-0000001
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置7层转发规则ID，例如：rule-0000001
                     * @param _ruleId 7层转发规则ID，例如：rule-0000001
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取7层CC自定义规则参数，当操作码为query时，可以不用填写；当操作码为add或del时，必须填写，且数组长度只能为1；
                     * @return RuleConfig 7层CC自定义规则参数，当操作码为query时，可以不用填写；当操作码为add或del时，必须填写，且数组长度只能为1；
                     * 
                     */
                    std::vector<CCRuleConfig> GetRuleConfig() const;

                    /**
                     * 设置7层CC自定义规则参数，当操作码为query时，可以不用填写；当操作码为add或del时，必须填写，且数组长度只能为1；
                     * @param _ruleConfig 7层CC自定义规则参数，当操作码为query时，可以不用填写；当操作码为add或del时，必须填写，且数组长度只能为1；
                     * 
                     */
                    void SetRuleConfig(const std::vector<CCRuleConfig>& _ruleConfig);

                    /**
                     * 判断参数 RuleConfig 是否已赋值
                     * @return RuleConfig 是否已赋值
                     * 
                     */
                    bool RuleConfigHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 操作码，取值[query(表示查询)，add(表示添加)，del(表示删除)]
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 7层转发规则ID，例如：rule-0000001
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 7层CC自定义规则参数，当操作码为query时，可以不用填写；当操作码为add或del时，必须填写，且数组长度只能为1；
                     */
                    std::vector<CCRuleConfig> m_ruleConfig;
                    bool m_ruleConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEL7CCRULEREQUEST_H_
