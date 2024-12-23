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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYDATARULE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYDATARULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DatagovRuleExtendParameter.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 敏感数据识别规则
                */
                class DspaDiscoveryDataRule : public AbstractModel
                {
                public:
                    DspaDiscoveryDataRule();
                    ~DspaDiscoveryDataRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型；取值：
keyword 关键字, 
regex 正则
                     * @return RuleType 规则类型；取值：
keyword 关键字, 
regex 正则
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型；取值：
keyword 关键字, 
regex 正则
                     * @param _ruleType 规则类型；取值：
keyword 关键字, 
regex 正则
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
                     * 获取内容
                     * @return RuleContent 内容
                     * 
                     */
                    std::string GetRuleContent() const;

                    /**
                     * 设置内容
                     * @param _ruleContent 内容
                     * 
                     */
                    void SetRuleContent(const std::string& _ruleContent);

                    /**
                     * 判断参数 RuleContent 是否已赋值
                     * @return RuleContent 是否已赋值
                     * 
                     */
                    bool RuleContentHasBeenSet() const;

                    /**
                     * 获取该字段是针对规则类型RuleType为keyword类型时的一个扩展属性
                     * @return ExtendParameters 该字段是针对规则类型RuleType为keyword类型时的一个扩展属性
                     * 
                     */
                    std::vector<DatagovRuleExtendParameter> GetExtendParameters() const;

                    /**
                     * 设置该字段是针对规则类型RuleType为keyword类型时的一个扩展属性
                     * @param _extendParameters 该字段是针对规则类型RuleType为keyword类型时的一个扩展属性
                     * 
                     */
                    void SetExtendParameters(const std::vector<DatagovRuleExtendParameter>& _extendParameters);

                    /**
                     * 判断参数 ExtendParameters 是否已赋值
                     * @return ExtendParameters 是否已赋值
                     * 
                     */
                    bool ExtendParametersHasBeenSet() const;

                private:

                    /**
                     * 规则类型；取值：
keyword 关键字, 
regex 正则
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_ruleContent;
                    bool m_ruleContentHasBeenSet;

                    /**
                     * 该字段是针对规则类型RuleType为keyword类型时的一个扩展属性
                     */
                    std::vector<DatagovRuleExtendParameter> m_extendParameters;
                    bool m_extendParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYDATARULE_H_
