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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取<p>过滤条件名称。</p><p>枚举值：</p><ul><li>Timestamp： 创建时间（格式：2006-01-02 15:04:05.000）</li><li>UserName： 用户名</li><li>CacheCode： 缓存代码，后端redis节点</li><li>ClientAddr： 客户端地址</li><li>CommandDetail： 命令详情</li><li>CommandLatency： 命令延迟（毫秒）</li><li>CommandType： 命令类型</li><li>DBId： 数据库ID</li><li>ErrMsg： 错误信息</li></ul>
                     * @return Type <p>过滤条件名称。</p><p>枚举值：</p><ul><li>Timestamp： 创建时间（格式：2006-01-02 15:04:05.000）</li><li>UserName： 用户名</li><li>CacheCode： 缓存代码，后端redis节点</li><li>ClientAddr： 客户端地址</li><li>CommandDetail： 命令详情</li><li>CommandLatency： 命令延迟（毫秒）</li><li>CommandType： 命令类型</li><li>DBId： 数据库ID</li><li>ErrMsg： 错误信息</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>过滤条件名称。</p><p>枚举值：</p><ul><li>Timestamp： 创建时间（格式：2006-01-02 15:04:05.000）</li><li>UserName： 用户名</li><li>CacheCode： 缓存代码，后端redis节点</li><li>ClientAddr： 客户端地址</li><li>CommandDetail： 命令详情</li><li>CommandLatency： 命令延迟（毫秒）</li><li>CommandType： 命令类型</li><li>DBId： 数据库ID</li><li>ErrMsg： 错误信息</li></ul>
                     * @param _type <p>过滤条件名称。</p><p>枚举值：</p><ul><li>Timestamp： 创建时间（格式：2006-01-02 15:04:05.000）</li><li>UserName： 用户名</li><li>CacheCode： 缓存代码，后端redis节点</li><li>ClientAddr： 客户端地址</li><li>CommandDetail： 命令详情</li><li>CommandLatency： 命令延迟（毫秒）</li><li>CommandType： 命令类型</li><li>DBId： 数据库ID</li><li>ErrMsg： 错误信息</li></ul>
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
                     * 获取<p>过滤条件匹配类型。</p><p>枚举值：</p><ul><li>INC： 包含，多个值之前是||的关系</li><li>EXC： 不包含，多个值之前是||的关系</li><li>EQS： 等于，多个值之前是||的关系</li><li>NEQ： 不等于，多个值之前是&amp;&amp;的关系</li><li>RA： 范围</li></ul>
                     * @return Compare <p>过滤条件匹配类型。</p><p>枚举值：</p><ul><li>INC： 包含，多个值之前是||的关系</li><li>EXC： 不包含，多个值之前是||的关系</li><li>EQS： 等于，多个值之前是||的关系</li><li>NEQ： 不等于，多个值之前是&amp;&amp;的关系</li><li>RA： 范围</li></ul>
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置<p>过滤条件匹配类型。</p><p>枚举值：</p><ul><li>INC： 包含，多个值之前是||的关系</li><li>EXC： 不包含，多个值之前是||的关系</li><li>EQS： 等于，多个值之前是||的关系</li><li>NEQ： 不等于，多个值之前是&amp;&amp;的关系</li><li>RA： 范围</li></ul>
                     * @param _compare <p>过滤条件匹配类型。</p><p>枚举值：</p><ul><li>INC： 包含，多个值之前是||的关系</li><li>EXC： 不包含，多个值之前是||的关系</li><li>EQS： 等于，多个值之前是||的关系</li><li>NEQ： 不等于，多个值之前是&amp;&amp;的关系</li><li>RA： 范围</li></ul>
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
                     * 获取<p>过滤条件匹配值。当Compare=RA时，例如：[&quot;1-100&quot;,&quot;200-300&quot;]。</p>
                     * @return Value <p>过滤条件匹配值。当Compare=RA时，例如：[&quot;1-100&quot;,&quot;200-300&quot;]。</p>
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置<p>过滤条件匹配值。当Compare=RA时，例如：[&quot;1-100&quot;,&quot;200-300&quot;]。</p>
                     * @param _value <p>过滤条件匹配值。当Compare=RA时，例如：[&quot;1-100&quot;,&quot;200-300&quot;]。</p>
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
                     * <p>过滤条件名称。</p><p>枚举值：</p><ul><li>Timestamp： 创建时间（格式：2006-01-02 15:04:05.000）</li><li>UserName： 用户名</li><li>CacheCode： 缓存代码，后端redis节点</li><li>ClientAddr： 客户端地址</li><li>CommandDetail： 命令详情</li><li>CommandLatency： 命令延迟（毫秒）</li><li>CommandType： 命令类型</li><li>DBId： 数据库ID</li><li>ErrMsg： 错误信息</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>过滤条件匹配类型。</p><p>枚举值：</p><ul><li>INC： 包含，多个值之前是||的关系</li><li>EXC： 不包含，多个值之前是||的关系</li><li>EQS： 等于，多个值之前是||的关系</li><li>NEQ： 不等于，多个值之前是&amp;&amp;的关系</li><li>RA： 范围</li></ul>
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * <p>过滤条件匹配值。当Compare=RA时，例如：[&quot;1-100&quot;,&quot;200-300&quot;]。</p>
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_LOGFILTER_H_
