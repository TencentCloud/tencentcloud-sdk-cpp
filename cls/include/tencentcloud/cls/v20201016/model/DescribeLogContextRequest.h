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
                     * 获取要查询的日志主题ID
                     * @return TopicId 要查询的日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置要查询的日志主题ID
                     * @param _topicId 要查询的日志主题ID
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
                     * 获取日志时间,  即SearchLog接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。
                     * @return BTime 日志时间,  即SearchLog接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。
                     * 
                     */
                    std::string GetBTime() const;

                    /**
                     * 设置日志时间,  即SearchLog接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。
                     * @param _bTime 日志时间,  即SearchLog接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。
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
                     * 获取日志包序号，即SearchLog接口返回信息中Results结构体中的PkgId。
                     * @return PkgId 日志包序号，即SearchLog接口返回信息中Results结构体中的PkgId。
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置日志包序号，即SearchLog接口返回信息中Results结构体中的PkgId。
                     * @param _pkgId 日志包序号，即SearchLog接口返回信息中Results结构体中的PkgId。
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
                     * 获取日志包内一条日志的序号，即SearchLog接口返回信息中Results结构中的PkgLogId。
                     * @return PkgLogId 日志包内一条日志的序号，即SearchLog接口返回信息中Results结构中的PkgLogId。
                     * 
                     */
                    int64_t GetPkgLogId() const;

                    /**
                     * 设置日志包内一条日志的序号，即SearchLog接口返回信息中Results结构中的PkgLogId。
                     * @param _pkgLogId 日志包内一条日志的序号，即SearchLog接口返回信息中Results结构中的PkgLogId。
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
                     * 获取前${PrevLogs}条日志，默认值10。
                     * @return PrevLogs 前${PrevLogs}条日志，默认值10。
                     * 
                     */
                    int64_t GetPrevLogs() const;

                    /**
                     * 设置前${PrevLogs}条日志，默认值10。
                     * @param _prevLogs 前${PrevLogs}条日志，默认值10。
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
                     * 获取后${NextLogs}条日志，默认值10。
                     * @return NextLogs 后${NextLogs}条日志，默认值10。
                     * 
                     */
                    int64_t GetNextLogs() const;

                    /**
                     * 设置后${NextLogs}条日志，默认值10。
                     * @param _nextLogs 后${NextLogs}条日志，默认值10。
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
                     * 获取检索语句，对日志上下文进行过滤，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句
                     * @return Query 检索语句，对日志上下文进行过滤，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置检索语句，对日志上下文进行过滤，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句
                     * @param _query 检索语句，对日志上下文进行过滤，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句
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
                     * 获取上下文检索的开始时间，单位：毫秒级时间戳
注意：
- From为空时，表示上下文检索的开始时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
                     * @return From 上下文检索的开始时间，单位：毫秒级时间戳
注意：
- From为空时，表示上下文检索的开始时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置上下文检索的开始时间，单位：毫秒级时间戳
注意：
- From为空时，表示上下文检索的开始时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
                     * @param _from 上下文检索的开始时间，单位：毫秒级时间戳
注意：
- From为空时，表示上下文检索的开始时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
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
                     * 获取上下文检索的结束时间，单位：毫秒级时间戳。
注意：
- To为空时，表示上下文检索的结束时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
                     * @return To 上下文检索的结束时间，单位：毫秒级时间戳。
注意：
- To为空时，表示上下文检索的结束时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
                     * 
                     */
                    uint64_t GetTo() const;

                    /**
                     * 设置上下文检索的结束时间，单位：毫秒级时间戳。
注意：
- To为空时，表示上下文检索的结束时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
                     * @param _to 上下文检索的结束时间，单位：毫秒级时间戳。
注意：
- To为空时，表示上下文检索的结束时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
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
                     * 要查询的日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志时间,  即SearchLog接口返回信息中Results结构体中的Time，需按照 UTC+8 时区将该毫秒级Unix时间戳转换为 YYYY-mm-dd HH:MM:SS.FFF 格式的字符串。
                     */
                    std::string m_bTime;
                    bool m_bTimeHasBeenSet;

                    /**
                     * 日志包序号，即SearchLog接口返回信息中Results结构体中的PkgId。
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 日志包内一条日志的序号，即SearchLog接口返回信息中Results结构中的PkgLogId。
                     */
                    int64_t m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * 前${PrevLogs}条日志，默认值10。
                     */
                    int64_t m_prevLogs;
                    bool m_prevLogsHasBeenSet;

                    /**
                     * 后${NextLogs}条日志，默认值10。
                     */
                    int64_t m_nextLogs;
                    bool m_nextLogsHasBeenSet;

                    /**
                     * 检索语句，对日志上下文进行过滤，最大长度为12KB
语句由 <a href="https://cloud.tencent.com/document/product/614/47044" target="_blank">[检索条件]</a>构成，不支持SQL语句
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 上下文检索的开始时间，单位：毫秒级时间戳
注意：
- From为空时，表示上下文检索的开始时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 上下文检索的结束时间，单位：毫秒级时间戳。
注意：
- To为空时，表示上下文检索的结束时间不做限制
- From和To非空时，From < To
- 暂时仅支持上海 / 弗吉尼亚/ 新加坡地域
                     */
                    uint64_t m_to;
                    bool m_toHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTREQUEST_H_
