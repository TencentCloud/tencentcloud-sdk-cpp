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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTIINFOLEAKRULESSTRATEGYITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTIINFOLEAKRULESSTRATEGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAntiInfoLeakRules返回的规则元素中的具体的规则元素
                */
                class DescribeAntiInfoLeakRulesStrategyItem : public AbstractModel
                {
                public:
                    DescribeAntiInfoLeakRulesStrategyItem();
                    ~DescribeAntiInfoLeakRulesStrategyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段
                     * @return Field 字段
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置字段
                     * @param _field 字段
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取条件
                     * @return CompareFunc 条件
                     * 
                     */
                    std::string GetCompareFunc() const;

                    /**
                     * 设置条件
                     * @param _compareFunc 条件
                     * 
                     */
                    void SetCompareFunc(const std::string& _compareFunc);

                    /**
                     * 判断参数 CompareFunc 是否已赋值
                     * @return CompareFunc 是否已赋值
                     * 
                     */
                    bool CompareFuncHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Content 内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置内容
                     * @param _content 内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 字段
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 条件
                     */
                    std::string m_compareFunc;
                    bool m_compareFuncHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTIINFOLEAKRULESSTRATEGYITEM_H_
