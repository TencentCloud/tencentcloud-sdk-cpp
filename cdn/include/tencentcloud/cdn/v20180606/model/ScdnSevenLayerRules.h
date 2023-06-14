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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNSEVENLAYERRULES_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNSEVENLAYERRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Scdn的七层限频配置
                */
                class ScdnSevenLayerRules : public AbstractModel
                {
                public:
                    ScdnSevenLayerRules();
                    ~ScdnSevenLayerRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取区分大小写
                     * @return CaseSensitive 区分大小写
                     * 
                     */
                    bool GetCaseSensitive() const;

                    /**
                     * 设置区分大小写
                     * @param _caseSensitive 区分大小写
                     * 
                     */
                    void SetCaseSensitive(const bool& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取规则类型：
protocol：协议，填写 HTTP/HTTPS
method：请求方法，支持 HEAD、GET、POST、PUT、OPTIONS、TRACE、DELETE、PATCH、CONNECT
all：域名 匹配内容固定为"*",不可编辑修改
ip：IP 填写 CIDR 表达式
directory：路径，以/开头，支持目录和具体路径，128字符以内
index：首页 默认固定值：/;/index.html,不可编辑修改
path：文件全路径，资源地址，如/acb/test.png，支持通配符，如/abc/*.jpg
file：文件扩展名，填写具体扩展名，如 jpg;png;css
param：请求参数，填写具体 value 值，512字符以内
referer：Referer，填写具体 value 值，512字符以内
cookie：Cookie，填写具体 value 值，512字符以内
user-agent：User-Agent，填写具体 value 值，512字符以内
head：自定义请求头，填写具体value值，512字符以内；内容为空或者不存在时，无匹配内容输入框，填写匹配参数即可
                     * @return RuleType 规则类型：
protocol：协议，填写 HTTP/HTTPS
method：请求方法，支持 HEAD、GET、POST、PUT、OPTIONS、TRACE、DELETE、PATCH、CONNECT
all：域名 匹配内容固定为"*",不可编辑修改
ip：IP 填写 CIDR 表达式
directory：路径，以/开头，支持目录和具体路径，128字符以内
index：首页 默认固定值：/;/index.html,不可编辑修改
path：文件全路径，资源地址，如/acb/test.png，支持通配符，如/abc/*.jpg
file：文件扩展名，填写具体扩展名，如 jpg;png;css
param：请求参数，填写具体 value 值，512字符以内
referer：Referer，填写具体 value 值，512字符以内
cookie：Cookie，填写具体 value 值，512字符以内
user-agent：User-Agent，填写具体 value 值，512字符以内
head：自定义请求头，填写具体value值，512字符以内；内容为空或者不存在时，无匹配内容输入框，填写匹配参数即可
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型：
protocol：协议，填写 HTTP/HTTPS
method：请求方法，支持 HEAD、GET、POST、PUT、OPTIONS、TRACE、DELETE、PATCH、CONNECT
all：域名 匹配内容固定为"*",不可编辑修改
ip：IP 填写 CIDR 表达式
directory：路径，以/开头，支持目录和具体路径，128字符以内
index：首页 默认固定值：/;/index.html,不可编辑修改
path：文件全路径，资源地址，如/acb/test.png，支持通配符，如/abc/*.jpg
file：文件扩展名，填写具体扩展名，如 jpg;png;css
param：请求参数，填写具体 value 值，512字符以内
referer：Referer，填写具体 value 值，512字符以内
cookie：Cookie，填写具体 value 值，512字符以内
user-agent：User-Agent，填写具体 value 值，512字符以内
head：自定义请求头，填写具体value值，512字符以内；内容为空或者不存在时，无匹配内容输入框，填写匹配参数即可
                     * @param _ruleType 规则类型：
protocol：协议，填写 HTTP/HTTPS
method：请求方法，支持 HEAD、GET、POST、PUT、OPTIONS、TRACE、DELETE、PATCH、CONNECT
all：域名 匹配内容固定为"*",不可编辑修改
ip：IP 填写 CIDR 表达式
directory：路径，以/开头，支持目录和具体路径，128字符以内
index：首页 默认固定值：/;/index.html,不可编辑修改
path：文件全路径，资源地址，如/acb/test.png，支持通配符，如/abc/*.jpg
file：文件扩展名，填写具体扩展名，如 jpg;png;css
param：请求参数，填写具体 value 值，512字符以内
referer：Referer，填写具体 value 值，512字符以内
cookie：Cookie，填写具体 value 值，512字符以内
user-agent：User-Agent，填写具体 value 值，512字符以内
head：自定义请求头，填写具体value值，512字符以内；内容为空或者不存在时，无匹配内容输入框，填写匹配参数即可
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
                     * 获取逻辑操作符，取值 ：
不包含：exclude, 
包含：include, 
不等于：notequal, 
等于：equal, 
前缀匹配：matching
内容为空或不存在：null
                     * @return LogicOperator 逻辑操作符，取值 ：
不包含：exclude, 
包含：include, 
不等于：notequal, 
等于：equal, 
前缀匹配：matching
内容为空或不存在：null
                     * 
                     */
                    std::string GetLogicOperator() const;

                    /**
                     * 设置逻辑操作符，取值 ：
不包含：exclude, 
包含：include, 
不等于：notequal, 
等于：equal, 
前缀匹配：matching
内容为空或不存在：null
                     * @param _logicOperator 逻辑操作符，取值 ：
不包含：exclude, 
包含：include, 
不等于：notequal, 
等于：equal, 
前缀匹配：matching
内容为空或不存在：null
                     * 
                     */
                    void SetLogicOperator(const std::string& _logicOperator);

                    /**
                     * 判断参数 LogicOperator 是否已赋值
                     * @return LogicOperator 是否已赋值
                     * 
                     */
                    bool LogicOperatorHasBeenSet() const;

                    /**
                     * 获取规则值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleValue 规则值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRuleValue() const;

                    /**
                     * 设置规则值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleValue 规则值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleValue(const std::vector<std::string>& _ruleValue);

                    /**
                     * 判断参数 RuleValue 是否已赋值
                     * @return RuleValue 是否已赋值
                     * 
                     */
                    bool RuleValueHasBeenSet() const;

                    /**
                     * 获取匹配参数，只有请求参数、Cookie、自定义请求头 有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleParam 匹配参数，只有请求参数、Cookie、自定义请求头 有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleParam() const;

                    /**
                     * 设置匹配参数，只有请求参数、Cookie、自定义请求头 有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleParam 匹配参数，只有请求参数、Cookie、自定义请求头 有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleParam(const std::string& _ruleParam);

                    /**
                     * 判断参数 RuleParam 是否已赋值
                     * @return RuleParam 是否已赋值
                     * 
                     */
                    bool RuleParamHasBeenSet() const;

                private:

                    /**
                     * 区分大小写
                     */
                    bool m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * 规则类型：
protocol：协议，填写 HTTP/HTTPS
method：请求方法，支持 HEAD、GET、POST、PUT、OPTIONS、TRACE、DELETE、PATCH、CONNECT
all：域名 匹配内容固定为"*",不可编辑修改
ip：IP 填写 CIDR 表达式
directory：路径，以/开头，支持目录和具体路径，128字符以内
index：首页 默认固定值：/;/index.html,不可编辑修改
path：文件全路径，资源地址，如/acb/test.png，支持通配符，如/abc/*.jpg
file：文件扩展名，填写具体扩展名，如 jpg;png;css
param：请求参数，填写具体 value 值，512字符以内
referer：Referer，填写具体 value 值，512字符以内
cookie：Cookie，填写具体 value 值，512字符以内
user-agent：User-Agent，填写具体 value 值，512字符以内
head：自定义请求头，填写具体value值，512字符以内；内容为空或者不存在时，无匹配内容输入框，填写匹配参数即可
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 逻辑操作符，取值 ：
不包含：exclude, 
包含：include, 
不等于：notequal, 
等于：equal, 
前缀匹配：matching
内容为空或不存在：null
                     */
                    std::string m_logicOperator;
                    bool m_logicOperatorHasBeenSet;

                    /**
                     * 规则值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleValue;
                    bool m_ruleValueHasBeenSet;

                    /**
                     * 匹配参数，只有请求参数、Cookie、自定义请求头 有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleParam;
                    bool m_ruleParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNSEVENLAYERRULES_H_
