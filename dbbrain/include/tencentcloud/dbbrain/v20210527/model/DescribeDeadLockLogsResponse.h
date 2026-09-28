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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDEADLOCKLOGSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDEADLOCKLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/DeadLockLogItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDeadLockLogs返回参数结构体
                */
                class DescribeDeadLockLogsResponse : public AbstractModel
                {
                public:
                    DescribeDeadLockLogsResponse();
                    ~DescribeDeadLockLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否还有更多分页。true 表示 Offset+Limit &lt; TotalCount，客户端可用 Offset+Limit 与本次 ResultVersion 继续翻页。</p>
                     * @return HasMore <p>是否还有更多分页。true 表示 Offset+Limit &lt; TotalCount，客户端可用 Offset+Limit 与本次 ResultVersion 继续翻页。</p>
                     * 
                     */
                    bool GetHasMore() const;

                    /**
                     * 判断参数 HasMore 是否已赋值
                     * @return HasMore 是否已赋值
                     * 
                     */
                    bool HasMoreHasBeenSet() const;

                    /**
                     * 获取<p>当前查询窗口内可用的死锁事件总数（去重、关联、时间窗口过滤后）。</p>
                     * @return TotalCount <p>当前查询窗口内可用的死锁事件总数（去重、关联、时间窗口过滤后）。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>结果集版本号（SHA-256 十六进制）。同一批数据在同一查询条件下保持不变；数据发生变化时版本变化。翻页必须透传。</p>
                     * @return ResultVersion <p>结果集版本号（SHA-256 十六进制）。同一批数据在同一查询条件下保持不变；数据发生变化时版本变化。翻页必须透传。</p>
                     * 
                     */
                    std::string GetResultVersion() const;

                    /**
                     * 判断参数 ResultVersion 是否已赋值
                     * @return ResultVersion 是否已赋值
                     * 
                     */
                    bool ResultVersionHasBeenSet() const;

                    /**
                     * 获取<p>死锁事件列表。按事件时间倒序排列（最近的死锁在前）。</p>
                     * @return Items <p>死锁事件列表。按事件时间倒序排列（最近的死锁在前）。</p>
                     * 
                     */
                    std::vector<DeadLockLogItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>是否还有更多分页。true 表示 Offset+Limit &lt; TotalCount，客户端可用 Offset+Limit 与本次 ResultVersion 继续翻页。</p>
                     */
                    bool m_hasMore;
                    bool m_hasMoreHasBeenSet;

                    /**
                     * <p>当前查询窗口内可用的死锁事件总数（去重、关联、时间窗口过滤后）。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>结果集版本号（SHA-256 十六进制）。同一批数据在同一查询条件下保持不变；数据发生变化时版本变化。翻页必须透传。</p>
                     */
                    std::string m_resultVersion;
                    bool m_resultVersionHasBeenSet;

                    /**
                     * <p>死锁事件列表。按事件时间倒序排列（最近的死锁在前）。</p>
                     */
                    std::vector<DeadLockLogItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDEADLOCKLOGSRESPONSE_H_
