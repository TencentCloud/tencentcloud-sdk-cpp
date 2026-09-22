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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITTEMPLATESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAuditTemplates请求参数结构体
                */
                class DescribeAuditTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeAuditTemplatesRequest();
                    ~DescribeAuditTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否过滤出文本审核，false不过滤，true过滤。</p>
                     * @return WithTextAudit <p>是否过滤出文本审核，false不过滤，true过滤。</p>
                     * 
                     */
                    bool GetWithTextAudit() const;

                    /**
                     * 设置<p>是否过滤出文本审核，false不过滤，true过滤。</p>
                     * @param _withTextAudit <p>是否过滤出文本审核，false不过滤，true过滤。</p>
                     * 
                     */
                    void SetWithTextAudit(const bool& _withTextAudit);

                    /**
                     * 判断参数 WithTextAudit 是否已赋值
                     * @return WithTextAudit 是否已赋值
                     * 
                     */
                    bool WithTextAuditHasBeenSet() const;

                    /**
                     * 获取<p>页码。</p>
                     * @return PageNum <p>页码。</p>
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置<p>页码。</p>
                     * @param _pageNum <p>页码。</p>
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取<p>每页数量。</p><p>取值范围：[5, 100]</p>
                     * @return PageSize <p>每页数量。</p><p>取值范围：[5, 100]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页数量。</p><p>取值范围：[5, 100]</p>
                     * @param _pageSize <p>每页数量。</p><p>取值范围：[5, 100]</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>是否过滤出文本审核，false不过滤，true过滤。</p>
                     */
                    bool m_withTextAudit;
                    bool m_withTextAuditHasBeenSet;

                    /**
                     * <p>页码。</p>
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * <p>每页数量。</p><p>取值范围：[5, 100]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITTEMPLATESREQUEST_H_
