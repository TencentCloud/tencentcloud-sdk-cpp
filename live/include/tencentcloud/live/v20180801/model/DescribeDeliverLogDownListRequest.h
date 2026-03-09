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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEDELIVERLOGDOWNLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEDELIVERLOGDOWNLISTREQUEST_H_

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
                * DescribeDeliverLogDownList请求参数结构体
                */
                class DescribeDeliverLogDownListRequest : public AbstractModel
                {
                public:
                    DescribeDeliverLogDownListRequest();
                    ~DescribeDeliverLogDownListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
                     * @return StartTime <p>开始时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
                     * @param _startTime <p>开始时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
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
                     * 获取<p>结束时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>结束时间 - 开始时间 &lt;=7天。</li><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
                     * @return EndTime <p>结束时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>结束时间 - 开始时间 &lt;=7天。</li><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>结束时间 - 开始时间 &lt;=7天。</li><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
                     * @param _endTime <p>结束时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>结束时间 - 开始时间 &lt;=7天。</li><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
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
                     * 获取<p>域名列表。</p>
                     * @return DeliverDomains <p>域名列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDeliverDomains() const;

                    /**
                     * 设置<p>域名列表。</p>
                     * @param _deliverDomains <p>域名列表。</p>
                     * 
                     */
                    void SetDeliverDomains(const std::vector<std::string>& _deliverDomains);

                    /**
                     * 判断参数 DeliverDomains 是否已赋值
                     * @return DeliverDomains 是否已赋值
                     * 
                     */
                    bool DeliverDomainsHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间。UTC 格式，例如：2022-02-09T12:36:42Z。<br>注意：</p><ol><li>结束时间 - 开始时间 &lt;=7天。</li><li>北京时间值为 UTC 时间值 + 8 小时，格式按照 ISO 8601 标准表示，详见 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式说明</a>。</li></ol>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>域名列表。</p>
                     */
                    std::vector<std::string> m_deliverDomains;
                    bool m_deliverDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEDELIVERLOGDOWNLISTREQUEST_H_
