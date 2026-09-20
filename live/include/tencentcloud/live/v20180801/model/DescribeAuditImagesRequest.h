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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITIMAGESREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITIMAGESREQUEST_H_

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
                * DescribeAuditImages请求参数结构体
                */
                class DescribeAuditImagesRequest : public AbstractModel
                {
                public:
                    DescribeAuditImagesRequest();
                    ~DescribeAuditImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * @return Label <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * @param _label <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>查询页码。</p>
                     * @return PageIndex <p>查询页码。</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>查询页码。</p>
                     * @param _pageIndex <p>查询页码。</p>
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取<p>查询条目数。</p>
                     * @return PageSize <p>查询条目数。</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>查询条目数。</p>
                     * @param _pageSize <p>查询条目数。</p>
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
                     * <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>查询页码。</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * <p>查询条目数。</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITIMAGESREQUEST_H_
