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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONDITION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONDITION_H_

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
                * 精准防护条件
                */
                class AclCondition : public AbstractModel
                {
                public:
                    AclCondition();
                    ~AclCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配字段，取值有：
<li>host：请求域名；</li>
<li>sip：客户端IP；</li>
<li>ua：User-Agent；</li>
<li>cookie：会话 Cookie；</li>
<li>cgi：CGI 脚本；</li>
<li>xff：XFF 扩展头部；</li>
<li>url：请求 URL；</li>
<li>accept：请求内容类型；</li>
<li>method：请求方式；</li>
<li>header：请求头部；</li>
<li>app_proto：应用层协议；</li>
<li>sip_proto：网络层协议；</li>
<li>uabot：UA 特征规则，仅bot自定义规则可用；</li>
<li>idcid：IDC 规则，仅bot自定义规则可用；</li>
<li>sipbot：搜索引擎规则，仅bot自定义规则可用；</li>
<li>portrait：画像分析，仅bot自定义规则可用；</li>
<li>header_seq：请求头顺序，仅bot自定义规则可用；</li>
<li>hdr：请求正文，仅Web防护自定义规则可用。</li>
                     * @return MatchFrom 匹配字段，取值有：
<li>host：请求域名；</li>
<li>sip：客户端IP；</li>
<li>ua：User-Agent；</li>
<li>cookie：会话 Cookie；</li>
<li>cgi：CGI 脚本；</li>
<li>xff：XFF 扩展头部；</li>
<li>url：请求 URL；</li>
<li>accept：请求内容类型；</li>
<li>method：请求方式；</li>
<li>header：请求头部；</li>
<li>app_proto：应用层协议；</li>
<li>sip_proto：网络层协议；</li>
<li>uabot：UA 特征规则，仅bot自定义规则可用；</li>
<li>idcid：IDC 规则，仅bot自定义规则可用；</li>
<li>sipbot：搜索引擎规则，仅bot自定义规则可用；</li>
<li>portrait：画像分析，仅bot自定义规则可用；</li>
<li>header_seq：请求头顺序，仅bot自定义规则可用；</li>
<li>hdr：请求正文，仅Web防护自定义规则可用。</li>
                     * 
                     */
                    std::string GetMatchFrom() const;

                    /**
                     * 设置匹配字段，取值有：
<li>host：请求域名；</li>
<li>sip：客户端IP；</li>
<li>ua：User-Agent；</li>
<li>cookie：会话 Cookie；</li>
<li>cgi：CGI 脚本；</li>
<li>xff：XFF 扩展头部；</li>
<li>url：请求 URL；</li>
<li>accept：请求内容类型；</li>
<li>method：请求方式；</li>
<li>header：请求头部；</li>
<li>app_proto：应用层协议；</li>
<li>sip_proto：网络层协议；</li>
<li>uabot：UA 特征规则，仅bot自定义规则可用；</li>
<li>idcid：IDC 规则，仅bot自定义规则可用；</li>
<li>sipbot：搜索引擎规则，仅bot自定义规则可用；</li>
<li>portrait：画像分析，仅bot自定义规则可用；</li>
<li>header_seq：请求头顺序，仅bot自定义规则可用；</li>
<li>hdr：请求正文，仅Web防护自定义规则可用。</li>
                     * @param _matchFrom 匹配字段，取值有：
<li>host：请求域名；</li>
<li>sip：客户端IP；</li>
<li>ua：User-Agent；</li>
<li>cookie：会话 Cookie；</li>
<li>cgi：CGI 脚本；</li>
<li>xff：XFF 扩展头部；</li>
<li>url：请求 URL；</li>
<li>accept：请求内容类型；</li>
<li>method：请求方式；</li>
<li>header：请求头部；</li>
<li>app_proto：应用层协议；</li>
<li>sip_proto：网络层协议；</li>
<li>uabot：UA 特征规则，仅bot自定义规则可用；</li>
<li>idcid：IDC 规则，仅bot自定义规则可用；</li>
<li>sipbot：搜索引擎规则，仅bot自定义规则可用；</li>
<li>portrait：画像分析，仅bot自定义规则可用；</li>
<li>header_seq：请求头顺序，仅bot自定义规则可用；</li>
<li>hdr：请求正文，仅Web防护自定义规则可用。</li>
                     * 
                     */
                    void SetMatchFrom(const std::string& _matchFrom);

                    /**
                     * 判断参数 MatchFrom 是否已赋值
                     * @return MatchFrom 是否已赋值
                     * 
                     */
                    bool MatchFromHasBeenSet() const;

                    /**
                     * 获取匹配字符串。当 MatchFrom 为 header 时，可以填入 header 的 key 作为参数。
                     * @return MatchParam 匹配字符串。当 MatchFrom 为 header 时，可以填入 header 的 key 作为参数。
                     * 
                     */
                    std::string GetMatchParam() const;

                    /**
                     * 设置匹配字符串。当 MatchFrom 为 header 时，可以填入 header 的 key 作为参数。
                     * @param _matchParam 匹配字符串。当 MatchFrom 为 header 时，可以填入 header 的 key 作为参数。
                     * 
                     */
                    void SetMatchParam(const std::string& _matchParam);

                    /**
                     * 判断参数 MatchParam 是否已赋值
                     * @return MatchParam 是否已赋值
                     * 
                     */
                    bool MatchParamHasBeenSet() const;

                    /**
                     * 获取匹配关系，取值有：
<li>equal：字符串等于；</li>
<li>not_equal：数值不等于；</li>
<li>include：字符包含；</li>
<li>not_include：字符不包含；</li>
<li>match：ip匹配；</li>
<li>not_match：ip不匹配；</li>
<li>include_area：地域包含；</li>
<li>is_empty：存在字段但值为空；</li>
<li>not_exists：不存在关键字段；</li>
<li>regexp：正则匹配；</li>
<li>len_gt：数值大于；</li>
<li>len_lt：数值小于；</li>
<li>len_eq：数值等于；</li>
<li>match_prefix：前缀匹配；</li>
<li>match_suffix：后缀匹配；</li>
<li>wildcard：通配符。</li>
                     * @return Operator 匹配关系，取值有：
<li>equal：字符串等于；</li>
<li>not_equal：数值不等于；</li>
<li>include：字符包含；</li>
<li>not_include：字符不包含；</li>
<li>match：ip匹配；</li>
<li>not_match：ip不匹配；</li>
<li>include_area：地域包含；</li>
<li>is_empty：存在字段但值为空；</li>
<li>not_exists：不存在关键字段；</li>
<li>regexp：正则匹配；</li>
<li>len_gt：数值大于；</li>
<li>len_lt：数值小于；</li>
<li>len_eq：数值等于；</li>
<li>match_prefix：前缀匹配；</li>
<li>match_suffix：后缀匹配；</li>
<li>wildcard：通配符。</li>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置匹配关系，取值有：
<li>equal：字符串等于；</li>
<li>not_equal：数值不等于；</li>
<li>include：字符包含；</li>
<li>not_include：字符不包含；</li>
<li>match：ip匹配；</li>
<li>not_match：ip不匹配；</li>
<li>include_area：地域包含；</li>
<li>is_empty：存在字段但值为空；</li>
<li>not_exists：不存在关键字段；</li>
<li>regexp：正则匹配；</li>
<li>len_gt：数值大于；</li>
<li>len_lt：数值小于；</li>
<li>len_eq：数值等于；</li>
<li>match_prefix：前缀匹配；</li>
<li>match_suffix：后缀匹配；</li>
<li>wildcard：通配符。</li>
                     * @param _operator 匹配关系，取值有：
<li>equal：字符串等于；</li>
<li>not_equal：数值不等于；</li>
<li>include：字符包含；</li>
<li>not_include：字符不包含；</li>
<li>match：ip匹配；</li>
<li>not_match：ip不匹配；</li>
<li>include_area：地域包含；</li>
<li>is_empty：存在字段但值为空；</li>
<li>not_exists：不存在关键字段；</li>
<li>regexp：正则匹配；</li>
<li>len_gt：数值大于；</li>
<li>len_lt：数值小于；</li>
<li>len_eq：数值等于；</li>
<li>match_prefix：前缀匹配；</li>
<li>match_suffix：后缀匹配；</li>
<li>wildcard：通配符。</li>
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
                     * 获取匹配内容。
                     * @return MatchContent 匹配内容。
                     * 
                     */
                    std::string GetMatchContent() const;

                    /**
                     * 设置匹配内容。
                     * @param _matchContent 匹配内容。
                     * 
                     */
                    void SetMatchContent(const std::string& _matchContent);

                    /**
                     * 判断参数 MatchContent 是否已赋值
                     * @return MatchContent 是否已赋值
                     * 
                     */
                    bool MatchContentHasBeenSet() const;

                private:

                    /**
                     * 匹配字段，取值有：
<li>host：请求域名；</li>
<li>sip：客户端IP；</li>
<li>ua：User-Agent；</li>
<li>cookie：会话 Cookie；</li>
<li>cgi：CGI 脚本；</li>
<li>xff：XFF 扩展头部；</li>
<li>url：请求 URL；</li>
<li>accept：请求内容类型；</li>
<li>method：请求方式；</li>
<li>header：请求头部；</li>
<li>app_proto：应用层协议；</li>
<li>sip_proto：网络层协议；</li>
<li>uabot：UA 特征规则，仅bot自定义规则可用；</li>
<li>idcid：IDC 规则，仅bot自定义规则可用；</li>
<li>sipbot：搜索引擎规则，仅bot自定义规则可用；</li>
<li>portrait：画像分析，仅bot自定义规则可用；</li>
<li>header_seq：请求头顺序，仅bot自定义规则可用；</li>
<li>hdr：请求正文，仅Web防护自定义规则可用。</li>
                     */
                    std::string m_matchFrom;
                    bool m_matchFromHasBeenSet;

                    /**
                     * 匹配字符串。当 MatchFrom 为 header 时，可以填入 header 的 key 作为参数。
                     */
                    std::string m_matchParam;
                    bool m_matchParamHasBeenSet;

                    /**
                     * 匹配关系，取值有：
<li>equal：字符串等于；</li>
<li>not_equal：数值不等于；</li>
<li>include：字符包含；</li>
<li>not_include：字符不包含；</li>
<li>match：ip匹配；</li>
<li>not_match：ip不匹配；</li>
<li>include_area：地域包含；</li>
<li>is_empty：存在字段但值为空；</li>
<li>not_exists：不存在关键字段；</li>
<li>regexp：正则匹配；</li>
<li>len_gt：数值大于；</li>
<li>len_lt：数值小于；</li>
<li>len_eq：数值等于；</li>
<li>match_prefix：前缀匹配；</li>
<li>match_suffix：后缀匹配；</li>
<li>wildcard：通配符。</li>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 匹配内容。
                     */
                    std::string m_matchContent;
                    bool m_matchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACLCONDITION_H_
