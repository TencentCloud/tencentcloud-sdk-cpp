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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIRULETYPEZHITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIRULETYPEZHITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * k8s告警类型和中文映射
                */
                class K8SAPIRuleTypeZhItem : public AbstractModel
                {
                public:
                    K8SAPIRuleTypeZhItem();
                    ~K8SAPIRuleTypeZhItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则类型</p><p>枚举值：</p><ul><li>&quot;rule_type&quot;: &quot;ABNORMAL_CREATE_POD&quot;,： 可疑容器创建</li></ul>
                     * @return RuleType <p>规则类型</p><p>枚举值：</p><ul><li>&quot;rule_type&quot;: &quot;ABNORMAL_CREATE_POD&quot;,： 可疑容器创建</li></ul>
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置<p>规则类型</p><p>枚举值：</p><ul><li>&quot;rule_type&quot;: &quot;ABNORMAL_CREATE_POD&quot;,： 可疑容器创建</li></ul>
                     * @param _ruleType <p>规则类型</p><p>枚举值：</p><ul><li>&quot;rule_type&quot;: &quot;ABNORMAL_CREATE_POD&quot;,： 可疑容器创建</li></ul>
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>规则类型对应中文</p>
                     * @return RuleTypeZh <p>规则类型对应中文</p>
                     * 
                     */
                    std::string GetRuleTypeZh() const;

                    /**
                     * 设置<p>规则类型对应中文</p>
                     * @param _ruleTypeZh <p>规则类型对应中文</p>
                     * 
                     */
                    void SetRuleTypeZh(const std::string& _ruleTypeZh);

                    /**
                     * 判断参数 RuleTypeZh 是否已赋值
                     * @return RuleTypeZh 是否已赋值
                     * 
                     */
                    bool RuleTypeZhHasBeenSet() const;

                private:

                    /**
                     * <p>规则类型</p><p>枚举值：</p><ul><li>&quot;rule_type&quot;: &quot;ABNORMAL_CREATE_POD&quot;,： 可疑容器创建</li></ul>
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>规则类型对应中文</p>
                     */
                    std::string m_ruleTypeZh;
                    bool m_ruleTypeZhHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIRULETYPEZHITEM_H_
