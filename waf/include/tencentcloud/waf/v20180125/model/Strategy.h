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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGY_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGY_H_

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
                * 规则的匹配条件结构体
                */
                class Strategy : public AbstractModel
                {
                public:
                    Strategy();
                    ~Strategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配字段

    匹配字段不同，相应的匹配参数、逻辑符号、匹配内容有所不同具体如下所示：
<table><thead><tr><th>匹配字段</th><th>匹配参数</th><th>逻辑符号</th><th>匹配内容</th></tr></thead><tbody><tr><td>IP（来源IP）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>多个IP以英文逗号隔开,最多20个</td></tr><tr><td>IPV6（来源IPv6）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>支持单个IPV6地址</td></tr><tr><td>Referer（Referer）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>URL（请求路径）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）<br/></td><td>请以/开头,512个字符以内</td></tr><tr><td>UserAgent（UserAgent）</td><td>不支持参数</td><td>同匹配字段<font color="Red">Referer</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>HTTP_METHOD（HTTP请求方法）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）</td><td>请输入方法名称,建议大写</td></tr><tr><td>QUERY_STRING（请求字符串）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET（GET参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_PARAMS_NAMES（GET参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST（POST参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_POST_NAMES（POST参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST_BODY（完整BODY）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入BODY内容,512个字符以内</td></tr><tr><td>COOKIE（Cookie）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>rematch（正则匹配）</td><td><font color="Red">暂不支持</font></td></tr><tr><td>GET_COOKIES_NAMES（Cookie参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>ARGS_COOKIE（Cookie参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_HEADERS_NAMES（Header参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,建议小写,512个字符以内</td></tr><tr><td>ARGS_HEADER（Header参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>CONTENT_LENGTH（Content-length）</td><td>支持参数录入</td><td>numgt（数值大于）<br/>numlt（数值小于）<br/>numeq（数值等于）<br/></td><td>请输入0-9999999999999之间的整数</td></tr><tr><td>IP_GEO（来源IP归属地）</td><td>支持参数录入</td><td>geo_in（属于）<br/>geo_not_in（不属于）<br/></td><td>请输入内容,10240字符以内，格式为序列化的JSON，格式为：[{"Country":"中国","Region":"广东","City":"深圳"}]</td></tr>
</tbody></table>
                     * @return Field 匹配字段

    匹配字段不同，相应的匹配参数、逻辑符号、匹配内容有所不同具体如下所示：
<table><thead><tr><th>匹配字段</th><th>匹配参数</th><th>逻辑符号</th><th>匹配内容</th></tr></thead><tbody><tr><td>IP（来源IP）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>多个IP以英文逗号隔开,最多20个</td></tr><tr><td>IPV6（来源IPv6）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>支持单个IPV6地址</td></tr><tr><td>Referer（Referer）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>URL（请求路径）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）<br/></td><td>请以/开头,512个字符以内</td></tr><tr><td>UserAgent（UserAgent）</td><td>不支持参数</td><td>同匹配字段<font color="Red">Referer</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>HTTP_METHOD（HTTP请求方法）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）</td><td>请输入方法名称,建议大写</td></tr><tr><td>QUERY_STRING（请求字符串）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET（GET参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_PARAMS_NAMES（GET参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST（POST参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_POST_NAMES（POST参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST_BODY（完整BODY）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入BODY内容,512个字符以内</td></tr><tr><td>COOKIE（Cookie）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>rematch（正则匹配）</td><td><font color="Red">暂不支持</font></td></tr><tr><td>GET_COOKIES_NAMES（Cookie参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>ARGS_COOKIE（Cookie参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_HEADERS_NAMES（Header参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,建议小写,512个字符以内</td></tr><tr><td>ARGS_HEADER（Header参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>CONTENT_LENGTH（Content-length）</td><td>支持参数录入</td><td>numgt（数值大于）<br/>numlt（数值小于）<br/>numeq（数值等于）<br/></td><td>请输入0-9999999999999之间的整数</td></tr><tr><td>IP_GEO（来源IP归属地）</td><td>支持参数录入</td><td>geo_in（属于）<br/>geo_not_in（不属于）<br/></td><td>请输入内容,10240字符以内，格式为序列化的JSON，格式为：[{"Country":"中国","Region":"广东","City":"深圳"}]</td></tr>
</tbody></table>
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置匹配字段

    匹配字段不同，相应的匹配参数、逻辑符号、匹配内容有所不同具体如下所示：
<table><thead><tr><th>匹配字段</th><th>匹配参数</th><th>逻辑符号</th><th>匹配内容</th></tr></thead><tbody><tr><td>IP（来源IP）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>多个IP以英文逗号隔开,最多20个</td></tr><tr><td>IPV6（来源IPv6）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>支持单个IPV6地址</td></tr><tr><td>Referer（Referer）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>URL（请求路径）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）<br/></td><td>请以/开头,512个字符以内</td></tr><tr><td>UserAgent（UserAgent）</td><td>不支持参数</td><td>同匹配字段<font color="Red">Referer</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>HTTP_METHOD（HTTP请求方法）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）</td><td>请输入方法名称,建议大写</td></tr><tr><td>QUERY_STRING（请求字符串）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET（GET参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_PARAMS_NAMES（GET参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST（POST参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_POST_NAMES（POST参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST_BODY（完整BODY）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入BODY内容,512个字符以内</td></tr><tr><td>COOKIE（Cookie）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>rematch（正则匹配）</td><td><font color="Red">暂不支持</font></td></tr><tr><td>GET_COOKIES_NAMES（Cookie参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>ARGS_COOKIE（Cookie参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_HEADERS_NAMES（Header参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,建议小写,512个字符以内</td></tr><tr><td>ARGS_HEADER（Header参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>CONTENT_LENGTH（Content-length）</td><td>支持参数录入</td><td>numgt（数值大于）<br/>numlt（数值小于）<br/>numeq（数值等于）<br/></td><td>请输入0-9999999999999之间的整数</td></tr><tr><td>IP_GEO（来源IP归属地）</td><td>支持参数录入</td><td>geo_in（属于）<br/>geo_not_in（不属于）<br/></td><td>请输入内容,10240字符以内，格式为序列化的JSON，格式为：[{"Country":"中国","Region":"广东","City":"深圳"}]</td></tr>
</tbody></table>
                     * @param _field 匹配字段

    匹配字段不同，相应的匹配参数、逻辑符号、匹配内容有所不同具体如下所示：
<table><thead><tr><th>匹配字段</th><th>匹配参数</th><th>逻辑符号</th><th>匹配内容</th></tr></thead><tbody><tr><td>IP（来源IP）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>多个IP以英文逗号隔开,最多20个</td></tr><tr><td>IPV6（来源IPv6）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>支持单个IPV6地址</td></tr><tr><td>Referer（Referer）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>URL（请求路径）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）<br/></td><td>请以/开头,512个字符以内</td></tr><tr><td>UserAgent（UserAgent）</td><td>不支持参数</td><td>同匹配字段<font color="Red">Referer</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>HTTP_METHOD（HTTP请求方法）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）</td><td>请输入方法名称,建议大写</td></tr><tr><td>QUERY_STRING（请求字符串）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET（GET参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_PARAMS_NAMES（GET参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST（POST参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_POST_NAMES（POST参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST_BODY（完整BODY）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入BODY内容,512个字符以内</td></tr><tr><td>COOKIE（Cookie）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>rematch（正则匹配）</td><td><font color="Red">暂不支持</font></td></tr><tr><td>GET_COOKIES_NAMES（Cookie参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>ARGS_COOKIE（Cookie参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_HEADERS_NAMES（Header参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,建议小写,512个字符以内</td></tr><tr><td>ARGS_HEADER（Header参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>CONTENT_LENGTH（Content-length）</td><td>支持参数录入</td><td>numgt（数值大于）<br/>numlt（数值小于）<br/>numeq（数值等于）<br/></td><td>请输入0-9999999999999之间的整数</td></tr><tr><td>IP_GEO（来源IP归属地）</td><td>支持参数录入</td><td>geo_in（属于）<br/>geo_not_in（不属于）<br/></td><td>请输入内容,10240字符以内，格式为序列化的JSON，格式为：[{"Country":"中国","Region":"广东","City":"深圳"}]</td></tr>
</tbody></table>
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
                     * 获取逻辑符号 

    逻辑符号一共分为以下几种类型：
        empty （ 内容为空）
        null （不存在）
        eq （ 等于）
        neq （ 不等于）
        contains （ 包含）
        ncontains （ 不包含）
        strprefix （ 前缀匹配）
        strsuffix （ 后缀匹配）
        len_eq （ 长度等于）
        len_gt （ 长度大于）
        len_lt （ 长度小于）
        ipmatch （ 属于）
        ipnmatch （ 不属于）
        numgt （ 数值大于）
        numlt （ 数值小于）
        numeq （ 数值等于）
        geo_in （ IP地理属于）
        geo_not_in （ IP地理不属于）
    各匹配字段对应的逻辑符号不同，详见上述匹配字段表格

                     * @return CompareFunc 逻辑符号 

    逻辑符号一共分为以下几种类型：
        empty （ 内容为空）
        null （不存在）
        eq （ 等于）
        neq （ 不等于）
        contains （ 包含）
        ncontains （ 不包含）
        strprefix （ 前缀匹配）
        strsuffix （ 后缀匹配）
        len_eq （ 长度等于）
        len_gt （ 长度大于）
        len_lt （ 长度小于）
        ipmatch （ 属于）
        ipnmatch （ 不属于）
        numgt （ 数值大于）
        numlt （ 数值小于）
        numeq （ 数值等于）
        geo_in （ IP地理属于）
        geo_not_in （ IP地理不属于）
    各匹配字段对应的逻辑符号不同，详见上述匹配字段表格

                     * 
                     */
                    std::string GetCompareFunc() const;

                    /**
                     * 设置逻辑符号 

    逻辑符号一共分为以下几种类型：
        empty （ 内容为空）
        null （不存在）
        eq （ 等于）
        neq （ 不等于）
        contains （ 包含）
        ncontains （ 不包含）
        strprefix （ 前缀匹配）
        strsuffix （ 后缀匹配）
        len_eq （ 长度等于）
        len_gt （ 长度大于）
        len_lt （ 长度小于）
        ipmatch （ 属于）
        ipnmatch （ 不属于）
        numgt （ 数值大于）
        numlt （ 数值小于）
        numeq （ 数值等于）
        geo_in （ IP地理属于）
        geo_not_in （ IP地理不属于）
    各匹配字段对应的逻辑符号不同，详见上述匹配字段表格

                     * @param _compareFunc 逻辑符号 

    逻辑符号一共分为以下几种类型：
        empty （ 内容为空）
        null （不存在）
        eq （ 等于）
        neq （ 不等于）
        contains （ 包含）
        ncontains （ 不包含）
        strprefix （ 前缀匹配）
        strsuffix （ 后缀匹配）
        len_eq （ 长度等于）
        len_gt （ 长度大于）
        len_lt （ 长度小于）
        ipmatch （ 属于）
        ipnmatch （ 不属于）
        numgt （ 数值大于）
        numlt （ 数值小于）
        numeq （ 数值等于）
        geo_in （ IP地理属于）
        geo_not_in （ IP地理不属于）
    各匹配字段对应的逻辑符号不同，详见上述匹配字段表格

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
                     * 获取匹配内容

    目前 当匹配字段为COOKIE（Cookie）时，不需要输入 匹配内容其他都需要

                     * @return Content 匹配内容

    目前 当匹配字段为COOKIE（Cookie）时，不需要输入 匹配内容其他都需要

                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置匹配内容

    目前 当匹配字段为COOKIE（Cookie）时，不需要输入 匹配内容其他都需要

                     * @param _content 匹配内容

    目前 当匹配字段为COOKIE（Cookie）时，不需要输入 匹配内容其他都需要

                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取匹配参数

    配置参数一共分2种类型 不支持参数与支持参数
    当匹配字段为以下4个时，匹配参数才能录入，否则不支持该参数
        GET（GET参数值）		
        POST（POST参数值）		
        ARGS_COOKIE（Cookie参数值）		
        ARGS_HEADER（Header参数值）

                     * @return Arg 匹配参数

    配置参数一共分2种类型 不支持参数与支持参数
    当匹配字段为以下4个时，匹配参数才能录入，否则不支持该参数
        GET（GET参数值）		
        POST（POST参数值）		
        ARGS_COOKIE（Cookie参数值）		
        ARGS_HEADER（Header参数值）

                     * 
                     */
                    std::string GetArg() const;

                    /**
                     * 设置匹配参数

    配置参数一共分2种类型 不支持参数与支持参数
    当匹配字段为以下4个时，匹配参数才能录入，否则不支持该参数
        GET（GET参数值）		
        POST（POST参数值）		
        ARGS_COOKIE（Cookie参数值）		
        ARGS_HEADER（Header参数值）

                     * @param _arg 匹配参数

    配置参数一共分2种类型 不支持参数与支持参数
    当匹配字段为以下4个时，匹配参数才能录入，否则不支持该参数
        GET（GET参数值）		
        POST（POST参数值）		
        ARGS_COOKIE（Cookie参数值）		
        ARGS_HEADER（Header参数值）

                     * 
                     */
                    void SetArg(const std::string& _arg);

                    /**
                     * 判断参数 Arg 是否已赋值
                     * @return Arg 是否已赋值
                     * 
                     */
                    bool ArgHasBeenSet() const;

                    /**
                     * 获取0：大小写敏感
1：大小写不敏感
                     * @return CaseNotSensitive 0：大小写敏感
1：大小写不敏感
                     * 
                     */
                    uint64_t GetCaseNotSensitive() const;

                    /**
                     * 设置0：大小写敏感
1：大小写不敏感
                     * @param _caseNotSensitive 0：大小写敏感
1：大小写不敏感
                     * 
                     */
                    void SetCaseNotSensitive(const uint64_t& _caseNotSensitive);

                    /**
                     * 判断参数 CaseNotSensitive 是否已赋值
                     * @return CaseNotSensitive 是否已赋值
                     * 
                     */
                    bool CaseNotSensitiveHasBeenSet() const;

                private:

                    /**
                     * 匹配字段

    匹配字段不同，相应的匹配参数、逻辑符号、匹配内容有所不同具体如下所示：
<table><thead><tr><th>匹配字段</th><th>匹配参数</th><th>逻辑符号</th><th>匹配内容</th></tr></thead><tbody><tr><td>IP（来源IP）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>多个IP以英文逗号隔开,最多20个</td></tr><tr><td>IPV6（来源IPv6）</td><td>不支持参数</td><td>ipmatch（匹配）<br/>ipnmatch（不匹配）</td><td>支持单个IPV6地址</td></tr><tr><td>Referer（Referer）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>URL（请求路径）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）<br/>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）<br/></td><td>请以/开头,512个字符以内</td></tr><tr><td>UserAgent（UserAgent）</td><td>不支持参数</td><td>同匹配字段<font color="Red">Referer</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>HTTP_METHOD（HTTP请求方法）</td><td>不支持参数</td><td>eq（等于）<br/>neq（不等于）</td><td>请输入方法名称,建议大写</td></tr><tr><td>QUERY_STRING（请求字符串）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET（GET参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_PARAMS_NAMES（GET参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST（POST参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_POST_NAMES（POST参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>POST_BODY（完整BODY）</td><td>不支持参数</td><td>同匹配字段<font color="Red">请求路径</font>逻辑符号</td><td>请输入BODY内容,512个字符以内</td></tr><tr><td>COOKIE（Cookie）</td><td>不支持参数</td><td>empty（内容为空）<br/>null（不存在）<br/>rematch（正则匹配）</td><td><font color="Red">暂不支持</font></td></tr><tr><td>GET_COOKIES_NAMES（Cookie参数名）</td><td>不支持参数</td><td>同匹配字段<font color="Red">GET参数名</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>ARGS_COOKIE（Cookie参数值）</td><td>支持参数录入</td><td>同匹配字段<font color="Red">GET参数值</font>逻辑符号</td><td>请输入内容,512个字符以内</td></tr><tr><td>GET_HEADERS_NAMES（Header参数名）</td><td>不支持参数</td><td>exsit（存在参数）<br/>nexsit（不存在参数）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,建议小写,512个字符以内</td></tr><tr><td>ARGS_HEADER（Header参数值）</td><td>支持参数录入</td><td>contains（包含）<br/>ncontains（不包含）<br/>len_eq（长度等于）<br/>len_gt（长度大于）<br/>len_lt（长度小于）<br/>strprefix（前缀匹配）<br/>strsuffix（后缀匹配）<br/>rematch（正则匹配）</td><td>请输入内容,512个字符以内</td></tr><tr><td>CONTENT_LENGTH（Content-length）</td><td>支持参数录入</td><td>numgt（数值大于）<br/>numlt（数值小于）<br/>numeq（数值等于）<br/></td><td>请输入0-9999999999999之间的整数</td></tr><tr><td>IP_GEO（来源IP归属地）</td><td>支持参数录入</td><td>geo_in（属于）<br/>geo_not_in（不属于）<br/></td><td>请输入内容,10240字符以内，格式为序列化的JSON，格式为：[{"Country":"中国","Region":"广东","City":"深圳"}]</td></tr>
</tbody></table>
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 逻辑符号 

    逻辑符号一共分为以下几种类型：
        empty （ 内容为空）
        null （不存在）
        eq （ 等于）
        neq （ 不等于）
        contains （ 包含）
        ncontains （ 不包含）
        strprefix （ 前缀匹配）
        strsuffix （ 后缀匹配）
        len_eq （ 长度等于）
        len_gt （ 长度大于）
        len_lt （ 长度小于）
        ipmatch （ 属于）
        ipnmatch （ 不属于）
        numgt （ 数值大于）
        numlt （ 数值小于）
        numeq （ 数值等于）
        geo_in （ IP地理属于）
        geo_not_in （ IP地理不属于）
    各匹配字段对应的逻辑符号不同，详见上述匹配字段表格

                     */
                    std::string m_compareFunc;
                    bool m_compareFuncHasBeenSet;

                    /**
                     * 匹配内容

    目前 当匹配字段为COOKIE（Cookie）时，不需要输入 匹配内容其他都需要

                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 匹配参数

    配置参数一共分2种类型 不支持参数与支持参数
    当匹配字段为以下4个时，匹配参数才能录入，否则不支持该参数
        GET（GET参数值）		
        POST（POST参数值）		
        ARGS_COOKIE（Cookie参数值）		
        ARGS_HEADER（Header参数值）

                     */
                    std::string m_arg;
                    bool m_argHasBeenSet;

                    /**
                     * 0：大小写敏感
1：大小写不敏感
                     */
                    uint64_t m_caseNotSensitive;
                    bool m_caseNotSensitiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_STRATEGY_H_
