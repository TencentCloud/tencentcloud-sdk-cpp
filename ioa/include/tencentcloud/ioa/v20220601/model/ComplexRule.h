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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_COMPLEXRULE_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_COMPLEXRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/SimpleRule.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 自动划分规则数据
                */
                class ComplexRule : public AbstractModel
                {
                public:
                    ComplexRule();
                    ~ComplexRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取简单规则表达式
                     * @return SimpleRules 简单规则表达式
                     * 
                     */
                    std::vector<SimpleRule> GetSimpleRules() const;

                    /**
                     * 设置简单规则表达式
                     * @param _simpleRules 简单规则表达式
                     * 
                     */
                    void SetSimpleRules(const std::vector<SimpleRule>& _simpleRules);

                    /**
                     * 判断参数 SimpleRules 是否已赋值
                     * @return SimpleRules 是否已赋值
                     * 
                     */
                    bool SimpleRulesHasBeenSet() const;

                    /**
                     * 获取表达式间逻辑关系
                     * @return Relation 表达式间逻辑关系
                     * 
                     */
                    std::string GetRelation() const;

                    /**
                     * 设置表达式间逻辑关系
                     * @param _relation 表达式间逻辑关系
                     * 
                     */
                    void SetRelation(const std::string& _relation);

                    /**
                     * 判断参数 Relation 是否已赋值
                     * @return Relation 是否已赋值
                     * 
                     */
                    bool RelationHasBeenSet() const;

                private:

                    /**
                     * 简单规则表达式
                     */
                    std::vector<SimpleRule> m_simpleRules;
                    bool m_simpleRulesHasBeenSet;

                    /**
                     * 表达式间逻辑关系
                     */
                    std::string m_relation;
                    bool m_relationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_COMPLEXRULE_H_
