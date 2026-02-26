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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBENOTICECONTENTTMPLRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBENOTICECONTENTTMPLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20230616/model/NoticeContentTmpl.h>
#include <tencentcloud/monitor/v20230616/model/NoticeContentTmplBindPolicyCount.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeNoticeContentTmpl返回参数结构体
                */
                class DescribeNoticeContentTmplResponse : public AbstractModel
                {
                public:
                    DescribeNoticeContentTmplResponse();
                    ~DescribeNoticeContentTmplResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义通知内容模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoticeContentTmpls 自定义通知内容模板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NoticeContentTmpl> GetNoticeContentTmpls() const;

                    /**
                     * 判断参数 NoticeContentTmpls 是否已赋值
                     * @return NoticeContentTmpls 是否已赋值
                     * 
                     */
                    bool NoticeContentTmplsHasBeenSet() const;

                    /**
                     * 获取通知内容模板绑定的告警策略数量
                     * @return NoticeContentTmplBindPolicyCounts 通知内容模板绑定的告警策略数量
                     * 
                     */
                    std::vector<NoticeContentTmplBindPolicyCount> GetNoticeContentTmplBindPolicyCounts() const;

                    /**
                     * 判断参数 NoticeContentTmplBindPolicyCounts 是否已赋值
                     * @return NoticeContentTmplBindPolicyCounts 是否已赋值
                     * 
                     */
                    bool NoticeContentTmplBindPolicyCountsHasBeenSet() const;

                    /**
                     * 获取分页数
                     * @return PageNumber 分页数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取结果总数
                     * @return TotalCount 结果总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 自定义通知内容模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NoticeContentTmpl> m_noticeContentTmpls;
                    bool m_noticeContentTmplsHasBeenSet;

                    /**
                     * 通知内容模板绑定的告警策略数量
                     */
                    std::vector<NoticeContentTmplBindPolicyCount> m_noticeContentTmplBindPolicyCounts;
                    bool m_noticeContentTmplBindPolicyCountsHasBeenSet;

                    /**
                     * 分页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 结果总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBENOTICECONTENTTMPLRESPONSE_H_
