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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 检测长度限制配置条件。
                */
                class DetectLengthLimitCondition : public AbstractModel
                {
                public:
                    DetectLengthLimitCondition();
                    ~DetectLengthLimitCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配条件的参数名称，取值有：
<li>body_depth：请求正文包部分的检测深度。</li>
                     * @return Name 匹配条件的参数名称，取值有：
<li>body_depth：请求正文包部分的检测深度。</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置匹配条件的参数名称，取值有：
<li>body_depth：请求正文包部分的检测深度。</li>
                     * @param _name 匹配条件的参数名称，取值有：
<li>body_depth：请求正文包部分的检测深度。</li>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取匹配条件的参数值，取值与 Name 成对使用。
当 Name 值为 body_depth 时， Values 只支持传入单个值，取值有：
<li>10KB；</li>
<li>64KB；</li>
<li>128KB。</li>
                     * @return Values 匹配条件的参数值，取值与 Name 成对使用。
当 Name 值为 body_depth 时， Values 只支持传入单个值，取值有：
<li>10KB；</li>
<li>64KB；</li>
<li>128KB。</li>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置匹配条件的参数值，取值与 Name 成对使用。
当 Name 值为 body_depth 时， Values 只支持传入单个值，取值有：
<li>10KB；</li>
<li>64KB；</li>
<li>128KB。</li>
                     * @param _values 匹配条件的参数值，取值与 Name 成对使用。
当 Name 值为 body_depth 时， Values 只支持传入单个值，取值有：
<li>10KB；</li>
<li>64KB；</li>
<li>128KB。</li>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 匹配条件的参数名称，取值有：
<li>body_depth：请求正文包部分的检测深度。</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 匹配条件的参数值，取值与 Name 成对使用。
当 Name 值为 body_depth 时， Values 只支持传入单个值，取值有：
<li>10KB；</li>
<li>64KB；</li>
<li>128KB。</li>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DETECTLENGTHLIMITCONDITION_H_
