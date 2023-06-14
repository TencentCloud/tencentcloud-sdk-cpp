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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBESQLLOGSRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBESQLLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/SqlLogItem.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeSqlLogs返回参数结构体
                */
                class DescribeSqlLogsResponse : public AbstractModel
                {
                public:
                    DescribeSqlLogsResponse();
                    ~DescribeSqlLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前消息队列中的sql日志条目数。
                     * @return TotalCount 当前消息队列中的sql日志条目数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取消息队列中的sql日志起始偏移。
                     * @return StartOffset 消息队列中的sql日志起始偏移。
                     * 
                     */
                    uint64_t GetStartOffset() const;

                    /**
                     * 判断参数 StartOffset 是否已赋值
                     * @return StartOffset 是否已赋值
                     * 
                     */
                    bool StartOffsetHasBeenSet() const;

                    /**
                     * 获取消息队列中的sql日志结束偏移。
                     * @return EndOffset 消息队列中的sql日志结束偏移。
                     * 
                     */
                    uint64_t GetEndOffset() const;

                    /**
                     * 判断参数 EndOffset 是否已赋值
                     * @return EndOffset 是否已赋值
                     * 
                     */
                    bool EndOffsetHasBeenSet() const;

                    /**
                     * 获取返回的第一条sql日志的偏移。
                     * @return Offset 返回的第一条sql日志的偏移。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回的sql日志数量。
                     * @return Count 返回的sql日志数量。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Sql日志列表。
                     * @return SqlItems Sql日志列表。
                     * 
                     */
                    std::vector<SqlLogItem> GetSqlItems() const;

                    /**
                     * 判断参数 SqlItems 是否已赋值
                     * @return SqlItems 是否已赋值
                     * 
                     */
                    bool SqlItemsHasBeenSet() const;

                private:

                    /**
                     * 当前消息队列中的sql日志条目数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 消息队列中的sql日志起始偏移。
                     */
                    uint64_t m_startOffset;
                    bool m_startOffsetHasBeenSet;

                    /**
                     * 消息队列中的sql日志结束偏移。
                     */
                    uint64_t m_endOffset;
                    bool m_endOffsetHasBeenSet;

                    /**
                     * 返回的第一条sql日志的偏移。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回的sql日志数量。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Sql日志列表。
                     */
                    std::vector<SqlLogItem> m_sqlItems;
                    bool m_sqlItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBESQLLOGSRESPONSE_H_
