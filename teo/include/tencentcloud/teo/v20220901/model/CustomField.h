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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_

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
                * 实时日志投递任务中的自定义日志字段。
                */
                class CustomField : public AbstractModel
                {
                public:
                    CustomField();
                    ~CustomField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义日志字段类型。从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值；</li>
<li>ReqBody: 从 HTTP 请求正文中通过 Google RE2 正则表达式提取指定内容。</li>
                     * @return Name 自定义日志字段类型。从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值；</li>
<li>ReqBody: 从 HTTP 请求正文中通过 Google RE2 正则表达式提取指定内容。</li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义日志字段类型。从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值；</li>
<li>ReqBody: 从 HTTP 请求正文中通过 Google RE2 正则表达式提取指定内容。</li>
                     * @param _name 自定义日志字段类型。从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值；</li>
<li>ReqBody: 从 HTTP 请求正文中通过 Google RE2 正则表达式提取指定内容。</li>
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
                     * 获取根据字段类型（Name）填入字段值的定义。需要区分大小写。
<li>当字段类型为 ReqHeader、RspHeader、Cookie 时，填入需要提取值的参数名称，例如：Accept-Language。可输入 1-100 个字符，允许的字符开头为字母，中间为字母、数字、-，结尾为字母、数字；</li>
<li>当字段类型为 ReqBody 时，填入 Google RE2 正则表达式，正则表达式长度上限为 4KB。</li>
                     * @return Value 根据字段类型（Name）填入字段值的定义。需要区分大小写。
<li>当字段类型为 ReqHeader、RspHeader、Cookie 时，填入需要提取值的参数名称，例如：Accept-Language。可输入 1-100 个字符，允许的字符开头为字母，中间为字母、数字、-，结尾为字母、数字；</li>
<li>当字段类型为 ReqBody 时，填入 Google RE2 正则表达式，正则表达式长度上限为 4KB。</li>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置根据字段类型（Name）填入字段值的定义。需要区分大小写。
<li>当字段类型为 ReqHeader、RspHeader、Cookie 时，填入需要提取值的参数名称，例如：Accept-Language。可输入 1-100 个字符，允许的字符开头为字母，中间为字母、数字、-，结尾为字母、数字；</li>
<li>当字段类型为 ReqBody 时，填入 Google RE2 正则表达式，正则表达式长度上限为 4KB。</li>
                     * @param _value 根据字段类型（Name）填入字段值的定义。需要区分大小写。
<li>当字段类型为 ReqHeader、RspHeader、Cookie 时，填入需要提取值的参数名称，例如：Accept-Language。可输入 1-100 个字符，允许的字符开头为字母，中间为字母、数字、-，结尾为字母、数字；</li>
<li>当字段类型为 ReqBody 时，填入 Google RE2 正则表达式，正则表达式长度上限为 4KB。</li>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取是否投递该字段，不填表示不投递此字段。
                     * @return Enabled 是否投递该字段，不填表示不投递此字段。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否投递该字段，不填表示不投递此字段。
                     * @param _enabled 是否投递该字段，不填表示不投递此字段。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 自定义日志字段类型。从 HTTP 请求和响应中的指定位置提取数据，取值有：
<li>ReqHeader：从 HTTP 请求头中提取指定字段值；</li>
<li>RspHeader：从 HTTP 响应头中提取指定字段值；</li>
<li>Cookie: 从 Cookie 中提取指定字段值；</li>
<li>ReqBody: 从 HTTP 请求正文中通过 Google RE2 正则表达式提取指定内容。</li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 根据字段类型（Name）填入字段值的定义。需要区分大小写。
<li>当字段类型为 ReqHeader、RspHeader、Cookie 时，填入需要提取值的参数名称，例如：Accept-Language。可输入 1-100 个字符，允许的字符开头为字母，中间为字母、数字、-，结尾为字母、数字；</li>
<li>当字段类型为 ReqBody 时，填入 Google RE2 正则表达式，正则表达式长度上限为 4KB。</li>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 是否投递该字段，不填表示不投递此字段。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_
