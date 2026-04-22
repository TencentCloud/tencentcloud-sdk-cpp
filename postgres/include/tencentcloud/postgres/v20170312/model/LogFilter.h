/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 日志过滤条件
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤条件名称。</p><p>如：sql - SQL命令详情</p><p>host – 客户端 IP；<br>user – 数据库账户。</p>
                     * @return Type <p>过滤条件名称。</p><p>如：sql - SQL命令详情</p><p>host – 客户端 IP；<br>user – 数据库账户。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>过滤条件名称。</p><p>如：sql - SQL命令详情</p><p>host – 客户端 IP；<br>user – 数据库账户。</p>
                     * @param _type <p>过滤条件名称。</p><p>如：sql - SQL命令详情</p><p>host – 客户端 IP；<br>user – 数据库账户。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件匹配类型。支持：<br>INC – 包含；     （多个值之间是||的关系）<br>EXC – 不包含； （多个值之间是&amp;&amp;的关系）<br>EQS – 等于；     （多个值之间是||的关系）<br>NEQ – 不等于；（多个值之间是&amp;&amp;的关系）<br>RG – 范围；</p>
                     * @return Compare <p>过滤条件匹配类型。支持：<br>INC – 包含；     （多个值之间是||的关系）<br>EXC – 不包含； （多个值之间是&amp;&amp;的关系）<br>EQS – 等于；     （多个值之间是||的关系）<br>NEQ – 不等于；（多个值之间是&amp;&amp;的关系）<br>RG – 范围；</p>
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置<p>过滤条件匹配类型。支持：<br>INC – 包含；     （多个值之间是||的关系）<br>EXC – 不包含； （多个值之间是&amp;&amp;的关系）<br>EQS – 等于；     （多个值之间是||的关系）<br>NEQ – 不等于；（多个值之间是&amp;&amp;的关系）<br>RG – 范围；</p>
                     * @param _compare <p>过滤条件匹配类型。支持：<br>INC – 包含；     （多个值之间是||的关系）<br>EXC – 不包含； （多个值之间是&amp;&amp;的关系）<br>EQS – 等于；     （多个值之间是||的关系）<br>NEQ – 不等于；（多个值之间是&amp;&amp;的关系）<br>RG – 范围；</p>
                     * 
                     */
                    void SetCompare(const std::string& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                    /**
                     * 获取<p>过滤条件匹配值。当Compare=RG时，例：[&quot;1-100&quot;,&quot;200-300&quot;]</p>
                     * @return Value <p>过滤条件匹配值。当Compare=RG时，例：[&quot;1-100&quot;,&quot;200-300&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置<p>过滤条件匹配值。当Compare=RG时，例：[&quot;1-100&quot;,&quot;200-300&quot;]</p>
                     * @param _value <p>过滤条件匹配值。当Compare=RG时，例：[&quot;1-100&quot;,&quot;200-300&quot;]</p>
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>过滤条件名称。</p><p>如：sql - SQL命令详情</p><p>host – 客户端 IP；<br>user – 数据库账户。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>过滤条件匹配类型。支持：<br>INC – 包含；     （多个值之间是||的关系）<br>EXC – 不包含； （多个值之间是&amp;&amp;的关系）<br>EQS – 等于；     （多个值之间是||的关系）<br>NEQ – 不等于；（多个值之间是&amp;&amp;的关系）<br>RG – 范围；</p>
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * <p>过滤条件匹配值。当Compare=RG时，例：[&quot;1-100&quot;,&quot;200-300&quot;]</p>
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_LOGFILTER_H_
