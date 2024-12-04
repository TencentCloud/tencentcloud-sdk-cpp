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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_

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
                * 规则引擎条件参数
                */
                class RuleCondition : public AbstractModel
                {
                public:
                    RuleCondition();
                    ~RuleCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运算符，取值有：
<li> equal: 等于； </li>
<li> notequal: 不等于；</li>
<li> exist: 存在； </li>
<li> notexist: 不存在。</li>
                     * @return Operator 运算符，取值有：
<li> equal: 等于； </li>
<li> notequal: 不等于；</li>
<li> exist: 存在； </li>
<li> notexist: 不存在。</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置运算符，取值有：
<li> equal: 等于； </li>
<li> notequal: 不等于；</li>
<li> exist: 存在； </li>
<li> notexist: 不存在。</li>
                     * @param _operator 运算符，取值有：
<li> equal: 等于； </li>
<li> notequal: 不等于；</li>
<li> exist: 存在； </li>
<li> notexist: 不存在。</li>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取匹配类型，取值有： <li> filename：文件名； </li> <li> extension：文件后缀； </li> <li> host：HOST； </li> <li> full_url：URL Full，当前站点下完整 URL 路径，必须包含 HTTP 协议，Host 和 路径； </li> <li> url：URL Path，当前站点下 URL 路径的请求； </li><li>client_country：客户端国家/地区；</li> <li> query_string：查询字符串，当前站点下请求 URL 的查询字符串； </li> <li> request_header：HTTP 请求头部。 </li><li> client_ip：客户端 IP。 </li><li> request_protocol：请求协议。 </li><li> request_method：HTTP 请求方法。 </li>
                     * @return Target 匹配类型，取值有： <li> filename：文件名； </li> <li> extension：文件后缀； </li> <li> host：HOST； </li> <li> full_url：URL Full，当前站点下完整 URL 路径，必须包含 HTTP 协议，Host 和 路径； </li> <li> url：URL Path，当前站点下 URL 路径的请求； </li><li>client_country：客户端国家/地区；</li> <li> query_string：查询字符串，当前站点下请求 URL 的查询字符串； </li> <li> request_header：HTTP 请求头部。 </li><li> client_ip：客户端 IP。 </li><li> request_protocol：请求协议。 </li><li> request_method：HTTP 请求方法。 </li>
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置匹配类型，取值有： <li> filename：文件名； </li> <li> extension：文件后缀； </li> <li> host：HOST； </li> <li> full_url：URL Full，当前站点下完整 URL 路径，必须包含 HTTP 协议，Host 和 路径； </li> <li> url：URL Path，当前站点下 URL 路径的请求； </li><li>client_country：客户端国家/地区；</li> <li> query_string：查询字符串，当前站点下请求 URL 的查询字符串； </li> <li> request_header：HTTP 请求头部。 </li><li> client_ip：客户端 IP。 </li><li> request_protocol：请求协议。 </li><li> request_method：HTTP 请求方法。 </li>
                     * @param _target 匹配类型，取值有： <li> filename：文件名； </li> <li> extension：文件后缀； </li> <li> host：HOST； </li> <li> full_url：URL Full，当前站点下完整 URL 路径，必须包含 HTTP 协议，Host 和 路径； </li> <li> url：URL Path，当前站点下 URL 路径的请求； </li><li>client_country：客户端国家/地区；</li> <li> query_string：查询字符串，当前站点下请求 URL 的查询字符串； </li> <li> request_header：HTTP 请求头部。 </li><li> client_ip：客户端 IP。 </li><li> request_protocol：请求协议。 </li><li> request_method：HTTP 请求方法。 </li>
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取对应匹配类型的参数值，仅在匹配类型为查询字符串或HTTP请求头并且运算符取值为存在或不存在时允许传空数组，对应匹配类型有：
<li> 文件后缀：jpg、txt 等文件后缀；</li>
<li> 文件名称：例如 foo.jpg 中的 foo；</li>
<li> 全部（站点任意请求）：all；</li>
<li> HOST：当前站点下的 host ，例如www.maxx55.com；</li>
<li> URL Path：当前站点下 URL 路径的请求，例如：/example；</li>
<li> URL Full：当前站点下完整 URL 请求，必须包含 HTTP 协议，Host 和 路径，例如：https://www.maxx55.cn/example；</li>
<li> 客户端国家/地区：符合 ISO3166 标准的国家/地区标识；</li>
<li> 查询字符串: 当前站点下 URL 请求中查询字符串的参数值，例如 lang=cn&version=1 中的 cn 和 1； </li>
<li> HTTP 请求头: HTTP 请求头部字段值，例如 Accept-Language:zh-CN,zh;q=0.9中的zh-CN,zh;q=0.9 ；</li>
<li> 客户端 IP: 当前请求携带的客户端请求 IP，支持 IPv4/IPv6, 支持 IP 段； </li>
<li> 请求协议: 当前请求的协议，取值范围为：HTTP、HTTPS；</li>
<li> HTTP 请求方法: 当前请求的方法，取值范围为：GET、HEAD、POST、PUT、DELETE、TRACE、CONNECT、OPTIONS、PATCH、COPY、LOCK、MKCOL、MOVE、PROPFIND、PROPPATCH、UNLOCK。 </li>
                     * @return Values 对应匹配类型的参数值，仅在匹配类型为查询字符串或HTTP请求头并且运算符取值为存在或不存在时允许传空数组，对应匹配类型有：
<li> 文件后缀：jpg、txt 等文件后缀；</li>
<li> 文件名称：例如 foo.jpg 中的 foo；</li>
<li> 全部（站点任意请求）：all；</li>
<li> HOST：当前站点下的 host ，例如www.maxx55.com；</li>
<li> URL Path：当前站点下 URL 路径的请求，例如：/example；</li>
<li> URL Full：当前站点下完整 URL 请求，必须包含 HTTP 协议，Host 和 路径，例如：https://www.maxx55.cn/example；</li>
<li> 客户端国家/地区：符合 ISO3166 标准的国家/地区标识；</li>
<li> 查询字符串: 当前站点下 URL 请求中查询字符串的参数值，例如 lang=cn&version=1 中的 cn 和 1； </li>
<li> HTTP 请求头: HTTP 请求头部字段值，例如 Accept-Language:zh-CN,zh;q=0.9中的zh-CN,zh;q=0.9 ；</li>
<li> 客户端 IP: 当前请求携带的客户端请求 IP，支持 IPv4/IPv6, 支持 IP 段； </li>
<li> 请求协议: 当前请求的协议，取值范围为：HTTP、HTTPS；</li>
<li> HTTP 请求方法: 当前请求的方法，取值范围为：GET、HEAD、POST、PUT、DELETE、TRACE、CONNECT、OPTIONS、PATCH、COPY、LOCK、MKCOL、MOVE、PROPFIND、PROPPATCH、UNLOCK。 </li>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置对应匹配类型的参数值，仅在匹配类型为查询字符串或HTTP请求头并且运算符取值为存在或不存在时允许传空数组，对应匹配类型有：
<li> 文件后缀：jpg、txt 等文件后缀；</li>
<li> 文件名称：例如 foo.jpg 中的 foo；</li>
<li> 全部（站点任意请求）：all；</li>
<li> HOST：当前站点下的 host ，例如www.maxx55.com；</li>
<li> URL Path：当前站点下 URL 路径的请求，例如：/example；</li>
<li> URL Full：当前站点下完整 URL 请求，必须包含 HTTP 协议，Host 和 路径，例如：https://www.maxx55.cn/example；</li>
<li> 客户端国家/地区：符合 ISO3166 标准的国家/地区标识；</li>
<li> 查询字符串: 当前站点下 URL 请求中查询字符串的参数值，例如 lang=cn&version=1 中的 cn 和 1； </li>
<li> HTTP 请求头: HTTP 请求头部字段值，例如 Accept-Language:zh-CN,zh;q=0.9中的zh-CN,zh;q=0.9 ；</li>
<li> 客户端 IP: 当前请求携带的客户端请求 IP，支持 IPv4/IPv6, 支持 IP 段； </li>
<li> 请求协议: 当前请求的协议，取值范围为：HTTP、HTTPS；</li>
<li> HTTP 请求方法: 当前请求的方法，取值范围为：GET、HEAD、POST、PUT、DELETE、TRACE、CONNECT、OPTIONS、PATCH、COPY、LOCK、MKCOL、MOVE、PROPFIND、PROPPATCH、UNLOCK。 </li>
                     * @param _values 对应匹配类型的参数值，仅在匹配类型为查询字符串或HTTP请求头并且运算符取值为存在或不存在时允许传空数组，对应匹配类型有：
<li> 文件后缀：jpg、txt 等文件后缀；</li>
<li> 文件名称：例如 foo.jpg 中的 foo；</li>
<li> 全部（站点任意请求）：all；</li>
<li> HOST：当前站点下的 host ，例如www.maxx55.com；</li>
<li> URL Path：当前站点下 URL 路径的请求，例如：/example；</li>
<li> URL Full：当前站点下完整 URL 请求，必须包含 HTTP 协议，Host 和 路径，例如：https://www.maxx55.cn/example；</li>
<li> 客户端国家/地区：符合 ISO3166 标准的国家/地区标识；</li>
<li> 查询字符串: 当前站点下 URL 请求中查询字符串的参数值，例如 lang=cn&version=1 中的 cn 和 1； </li>
<li> HTTP 请求头: HTTP 请求头部字段值，例如 Accept-Language:zh-CN,zh;q=0.9中的zh-CN,zh;q=0.9 ；</li>
<li> 客户端 IP: 当前请求携带的客户端请求 IP，支持 IPv4/IPv6, 支持 IP 段； </li>
<li> 请求协议: 当前请求的协议，取值范围为：HTTP、HTTPS；</li>
<li> HTTP 请求方法: 当前请求的方法，取值范围为：GET、HEAD、POST、PUT、DELETE、TRACE、CONNECT、OPTIONS、PATCH、COPY、LOCK、MKCOL、MOVE、PROPFIND、PROPPATCH、UNLOCK。 </li>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取是否忽略参数值的大小写，默认值为 false。
                     * @return IgnoreCase 是否忽略参数值的大小写，默认值为 false。
                     * 
                     */
                    bool GetIgnoreCase() const;

                    /**
                     * 设置是否忽略参数值的大小写，默认值为 false。
                     * @param _ignoreCase 是否忽略参数值的大小写，默认值为 false。
                     * 
                     */
                    void SetIgnoreCase(const bool& _ignoreCase);

                    /**
                     * 判断参数 IgnoreCase 是否已赋值
                     * @return IgnoreCase 是否已赋值
                     * 
                     */
                    bool IgnoreCaseHasBeenSet() const;

                    /**
                     * 获取对应匹配类型的参数名称，在 Target 值为以下取值时有效，有效时值不能为空：
<li> query_string（查询字符串）: 当前站点下URL请求中查询字符串的参数名称，例如lang=cn&version=1中的lang和version； </li>
<li> request_header（HTTP 请求头）: HTTP请求头部字段名，例如Accept-Language:zh-CN,zh;q=0.9中的Accept-Language。 </li>
                     * @return Name 对应匹配类型的参数名称，在 Target 值为以下取值时有效，有效时值不能为空：
<li> query_string（查询字符串）: 当前站点下URL请求中查询字符串的参数名称，例如lang=cn&version=1中的lang和version； </li>
<li> request_header（HTTP 请求头）: HTTP请求头部字段名，例如Accept-Language:zh-CN,zh;q=0.9中的Accept-Language。 </li>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置对应匹配类型的参数名称，在 Target 值为以下取值时有效，有效时值不能为空：
<li> query_string（查询字符串）: 当前站点下URL请求中查询字符串的参数名称，例如lang=cn&version=1中的lang和version； </li>
<li> request_header（HTTP 请求头）: HTTP请求头部字段名，例如Accept-Language:zh-CN,zh;q=0.9中的Accept-Language。 </li>
                     * @param _name 对应匹配类型的参数名称，在 Target 值为以下取值时有效，有效时值不能为空：
<li> query_string（查询字符串）: 当前站点下URL请求中查询字符串的参数名称，例如lang=cn&version=1中的lang和version； </li>
<li> request_header（HTTP 请求头）: HTTP请求头部字段名，例如Accept-Language:zh-CN,zh;q=0.9中的Accept-Language。 </li>
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
                     * 获取是否忽略参数名称的大小写，默认值为 false。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IgnoreNameCase 是否忽略参数名称的大小写，默认值为 false。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetIgnoreNameCase() const;

                    /**
                     * 设置是否忽略参数名称的大小写，默认值为 false。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ignoreNameCase 是否忽略参数名称的大小写，默认值为 false。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetIgnoreNameCase(const bool& _ignoreNameCase);

                    /**
                     * 判断参数 IgnoreNameCase 是否已赋值
                     * @return IgnoreNameCase 是否已赋值
                     * @deprecated
                     */
                    bool IgnoreNameCaseHasBeenSet() const;

                private:

                    /**
                     * 运算符，取值有：
<li> equal: 等于； </li>
<li> notequal: 不等于；</li>
<li> exist: 存在； </li>
<li> notexist: 不存在。</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 匹配类型，取值有： <li> filename：文件名； </li> <li> extension：文件后缀； </li> <li> host：HOST； </li> <li> full_url：URL Full，当前站点下完整 URL 路径，必须包含 HTTP 协议，Host 和 路径； </li> <li> url：URL Path，当前站点下 URL 路径的请求； </li><li>client_country：客户端国家/地区；</li> <li> query_string：查询字符串，当前站点下请求 URL 的查询字符串； </li> <li> request_header：HTTP 请求头部。 </li><li> client_ip：客户端 IP。 </li><li> request_protocol：请求协议。 </li><li> request_method：HTTP 请求方法。 </li>
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 对应匹配类型的参数值，仅在匹配类型为查询字符串或HTTP请求头并且运算符取值为存在或不存在时允许传空数组，对应匹配类型有：
<li> 文件后缀：jpg、txt 等文件后缀；</li>
<li> 文件名称：例如 foo.jpg 中的 foo；</li>
<li> 全部（站点任意请求）：all；</li>
<li> HOST：当前站点下的 host ，例如www.maxx55.com；</li>
<li> URL Path：当前站点下 URL 路径的请求，例如：/example；</li>
<li> URL Full：当前站点下完整 URL 请求，必须包含 HTTP 协议，Host 和 路径，例如：https://www.maxx55.cn/example；</li>
<li> 客户端国家/地区：符合 ISO3166 标准的国家/地区标识；</li>
<li> 查询字符串: 当前站点下 URL 请求中查询字符串的参数值，例如 lang=cn&version=1 中的 cn 和 1； </li>
<li> HTTP 请求头: HTTP 请求头部字段值，例如 Accept-Language:zh-CN,zh;q=0.9中的zh-CN,zh;q=0.9 ；</li>
<li> 客户端 IP: 当前请求携带的客户端请求 IP，支持 IPv4/IPv6, 支持 IP 段； </li>
<li> 请求协议: 当前请求的协议，取值范围为：HTTP、HTTPS；</li>
<li> HTTP 请求方法: 当前请求的方法，取值范围为：GET、HEAD、POST、PUT、DELETE、TRACE、CONNECT、OPTIONS、PATCH、COPY、LOCK、MKCOL、MOVE、PROPFIND、PROPPATCH、UNLOCK。 </li>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否忽略参数值的大小写，默认值为 false。
                     */
                    bool m_ignoreCase;
                    bool m_ignoreCaseHasBeenSet;

                    /**
                     * 对应匹配类型的参数名称，在 Target 值为以下取值时有效，有效时值不能为空：
<li> query_string（查询字符串）: 当前站点下URL请求中查询字符串的参数名称，例如lang=cn&version=1中的lang和version； </li>
<li> request_header（HTTP 请求头）: HTTP请求头部字段名，例如Accept-Language:zh-CN,zh;q=0.9中的Accept-Language。 </li>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否忽略参数名称的大小写，默认值为 false。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_ignoreNameCase;
                    bool m_ignoreNameCaseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULECONDITION_H_
