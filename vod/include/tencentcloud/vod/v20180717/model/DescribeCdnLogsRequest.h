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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCdnLogs请求参数结构体
                */
                class DescribeCdnLogsRequest : public AbstractModel
                {
                public:
                    DescribeCdnLogsRequest();
                    ~DescribeCdnLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>域名。</p>
                     * @return DomainName <p>域名。</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>域名。</p>
                     * @param _domainName <p>域名。</p>
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取<p>获取日志起始时间点，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @return StartTime <p>获取日志起始时间点，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>获取日志起始时间点，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _startTime <p>获取日志起始时间点，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间需大于起始时间；使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @return EndTime <p>结束时间需大于起始时间；使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间需大于起始时间；使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * @param _endTime <p>结束时间需大于起始时间；使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>分页拉取的最大返回结果数。默认值：100；最大值：1000。</p>
                     * @return Limit <p>分页拉取的最大返回结果数。默认值：100；最大值：1000。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页拉取的最大返回结果数。默认值：100；最大值：1000。</p>
                     * @param _limit <p>分页拉取的最大返回结果数。默认值：100；最大值：1000。</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>分页拉取的起始偏移量。默认值：0。</p>
                     * @return Offset <p>分页拉取的起始偏移量。默认值：0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页拉取的起始偏移量。默认值：0。</p>
                     * @param _offset <p>分页拉取的起始偏移量。默认值：0。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>域名。</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>获取日志起始时间点，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间需大于起始时间；使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p><p>参数格式：YYYY-MM-DDThh:mm:ssZ</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>分页拉取的最大返回结果数。默认值：100；最大值：1000。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页拉取的起始偏移量。默认值：0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSREQUEST_H_
