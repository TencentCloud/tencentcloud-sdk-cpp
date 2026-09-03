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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeLogContext请求参数结构体
                */
                class DescribeLogContextRequest : public AbstractModel
                {
                public:
                    DescribeLogContextRequest();
                    ~DescribeLogContextRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>要查询的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * @return TopicId <p>要查询的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>要查询的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * @param _topicId <p>要查询的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>日志时间,  即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。</p>
                     * @return BTime <p>日志时间,  即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。</p>
                     * 
                     */
                    std::string GetBTime() const;

                    /**
                     * 设置<p>日志时间,  即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。</p>
                     * @param _bTime <p>日志时间,  即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。</p>
                     * 
                     */
                    void SetBTime(const std::string& _bTime);

                    /**
                     * 判断参数 BTime 是否已赋值
                     * @return BTime 是否已赋值
                     * 
                     */
                    bool BTimeHasBeenSet() const;

                    /**
                     * 获取<p>日志包序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的PkgId。</p>
                     * @return PkgId <p>日志包序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的PkgId。</p>
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置<p>日志包序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的PkgId。</p>
                     * @param _pkgId <p>日志包序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的PkgId。</p>
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取<p>日志包内一条日志的序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构中的PkgLogId。</p>
                     * @return PkgLogId <p>日志包内一条日志的序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构中的PkgLogId。</p>
                     * 
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置<p>日志包内一条日志的序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构中的PkgLogId。</p>
                     * @param _pkgLogId <p>日志包内一条日志的序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构中的PkgLogId。</p>
                     * 
                     */
                    void SetPkgLogId(const int64_t& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取<p>前${PrevLogs}条日志，默认值10，最大100。</p>
                     * @return PrevLogs <p>前${PrevLogs}条日志，默认值10，最大100。</p>
                     * 
                     */
                    int64_t GetPrevLogs() const;

                    /**
                     * 设置<p>前${PrevLogs}条日志，默认值10，最大100。</p>
                     * @param _prevLogs <p>前${PrevLogs}条日志，默认值10，最大100。</p>
                     * 
                     */
                    void SetPrevLogs(const int64_t& _prevLogs);

                    /**
                     * 判断参数 PrevLogs 是否已赋值
                     * @return PrevLogs 是否已赋值
                     * 
                     */
                    bool PrevLogsHasBeenSet() const;

                    /**
                     * 获取<p>后${NextLogs}条日志，默认值10，最大100。</p>
                     * @return NextLogs <p>后${NextLogs}条日志，默认值10，最大100。</p>
                     * 
                     */
                    int64_t GetNextLogs() const;

                    /**
                     * 设置<p>后${NextLogs}条日志，默认值10，最大100。</p>
                     * @param _nextLogs <p>后${NextLogs}条日志，默认值10，最大100。</p>
                     * 
                     */
                    void SetNextLogs(const int64_t& _nextLogs);

                    /**
                     * 判断参数 NextLogs 是否已赋值
                     * @return NextLogs 是否已赋值
                     * 
                     */
                    bool NextLogsHasBeenSet() const;

                    /**
                     * 获取<p>检索语句，对日志上下文进行过滤，最大长度为12KB<br>语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句</p>
                     * @return Query <p>检索语句，对日志上下文进行过滤，最大长度为12KB<br>语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句</p>
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置<p>检索语句，对日志上下文进行过滤，最大长度为12KB<br>语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句</p>
                     * @param _query <p>检索语句，对日志上下文进行过滤，最大长度为12KB<br>语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句</p>
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取<p>上下文检索的开始时间，单位：毫秒级时间戳<br>注意：</p><ul><li>From为空时，表示上下文检索的开始时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     * @return From <p>上下文检索的开始时间，单位：毫秒级时间戳<br>注意：</p><ul><li>From为空时，表示上下文检索的开始时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置<p>上下文检索的开始时间，单位：毫秒级时间戳<br>注意：</p><ul><li>From为空时，表示上下文检索的开始时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     * @param _from <p>上下文检索的开始时间，单位：毫秒级时间戳<br>注意：</p><ul><li>From为空时，表示上下文检索的开始时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     * 
                     */
                    void SetFrom(const uint64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>上下文检索的结束时间，单位：毫秒级时间戳。<br>注意：</p><ul><li>To为空时，表示上下文检索的结束时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     * @return To <p>上下文检索的结束时间，单位：毫秒级时间戳。<br>注意：</p><ul><li>To为空时，表示上下文检索的结束时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     * 
                     */
                    uint64_t GetTo() const;

                    /**
                     * 设置<p>上下文检索的结束时间，单位：毫秒级时间戳。<br>注意：</p><ul><li>To为空时，表示上下文检索的结束时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     * @param _to <p>上下文检索的结束时间，单位：毫秒级时间戳。<br>注意：</p><ul><li>To为空时，表示上下文检索的结束时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     * 
                     */
                    void SetTo(const uint64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                private:

                    /**
                     * <p>要查询的日志主题Id。</p><ul><li>通过 <a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a> 获取日志主题Id。</li><li>通过 <a href="https://cloud.tencent.com/document/product/614/56456">创建日志主题</a> 获取日志主题Id。</li></ul>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>日志时间,  即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。</p>
                     */
                    std::string m_bTime;
                    bool m_bTimeHasBeenSet;

                    /**
                     * <p>日志包序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构体中的PkgId。</p>
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * <p>日志包内一条日志的序号，即 <a href="https://cloud.tencent.com/document/product/614/56447">检索分析日志</a> 接口返回信息中Results结构中的PkgLogId。</p>
                     */
                    int64_t m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * <p>前${PrevLogs}条日志，默认值10，最大100。</p>
                     */
                    int64_t m_prevLogs;
                    bool m_prevLogsHasBeenSet;

                    /**
                     * <p>后${NextLogs}条日志，默认值10，最大100。</p>
                     */
                    int64_t m_nextLogs;
                    bool m_nextLogsHasBeenSet;

                    /**
                     * <p>检索语句，对日志上下文进行过滤，最大长度为12KB<br>语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>上下文检索的开始时间，单位：毫秒级时间戳<br>注意：</p><ul><li>From为空时，表示上下文检索的开始时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>上下文检索的结束时间，单位：毫秒级时间戳。<br>注意：</p><ul><li>To为空时，表示上下文检索的结束时间不做限制</li><li>From和To非空时，From &lt; To</li></ul>
                     */
                    uint64_t m_to;
                    bool m_toHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_
