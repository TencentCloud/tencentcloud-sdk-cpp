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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HEADERACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HEADERACTION_H_

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
                * HTTP 头部设置规则。
                */
                class HeaderAction : public AbstractModel
                {
                public:
                    HeaderAction();
                    ~HeaderAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP 头部设置方式。取值有：
<li>set：设置。变更指定头部参数的取值为设置后的值；</li>
<li>del：删除。删除指定的头部参数；</li>
<li>add：增加。增加指定的头部参数。</li>
                     * @return Action HTTP 头部设置方式。取值有：
<li>set：设置。变更指定头部参数的取值为设置后的值；</li>
<li>del：删除。删除指定的头部参数；</li>
<li>add：增加。增加指定的头部参数。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置HTTP 头部设置方式。取值有：
<li>set：设置。变更指定头部参数的取值为设置后的值；</li>
<li>del：删除。删除指定的头部参数；</li>
<li>add：增加。增加指定的头部参数。</li>
                     * @param _action HTTP 头部设置方式。取值有：
<li>set：设置。变更指定头部参数的取值为设置后的值；</li>
<li>del：删除。删除指定的头部参数；</li>
<li>add：增加。增加指定的头部参数。</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取HTTP 头部名称。
                     * @return Name HTTP 头部名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置HTTP 头部名称。
                     * @param _name HTTP 头部名称。
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
                     * 获取HTTP 头部值。当 Action 取值为 set 或者 add 时，该参数必填；当 Action 取值为 del 时，该参数无需填写。
                     * @return Value HTTP 头部值。当 Action 取值为 set 或者 add 时，该参数必填；当 Action 取值为 del 时，该参数无需填写。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置HTTP 头部值。当 Action 取值为 set 或者 add 时，该参数必填；当 Action 取值为 del 时，该参数无需填写。
                     * @param _value HTTP 头部值。当 Action 取值为 set 或者 add 时，该参数必填；当 Action 取值为 del 时，该参数无需填写。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * HTTP 头部设置方式。取值有：
<li>set：设置。变更指定头部参数的取值为设置后的值；</li>
<li>del：删除。删除指定的头部参数；</li>
<li>add：增加。增加指定的头部参数。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * HTTP 头部名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * HTTP 头部值。当 Action 取值为 set 或者 add 时，该参数必填；当 Action 取值为 del 时，该参数无需填写。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HEADERACTION_H_
