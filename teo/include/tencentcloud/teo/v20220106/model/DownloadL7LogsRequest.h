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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DownloadL7Logs请求参数结构体
                */
                class DownloadL7LogsRequest : public AbstractModel
                {
                public:
                    DownloadL7LogsRequest();
                    ~DownloadL7LogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间(需严格按照RFC3339标准传参)
                     * @return StartTime 起始时间(需严格按照RFC3339标准传参)
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间(需严格按照RFC3339标准传参)
                     * @param StartTime 起始时间(需严格按照RFC3339标准传参)
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间(需严格按照RFC3339标准传参)
                     * @return EndTime 结束时间(需严格按照RFC3339标准传参)
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间(需严格按照RFC3339标准传参)
                     * @param EndTime 结束时间(需严格按照RFC3339标准传参)
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取每页展示条数
                     * @return PageSize 每页展示条数
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页展示条数
                     * @param PageSize 每页展示条数
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取当前页
                     * @return PageNo 当前页
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置当前页
                     * @param PageNo 当前页
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取站点名集合
                     * @return Zones 站点名集合
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置站点名集合
                     * @param Zones 站点名集合
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取子域名集合
                     * @return Domains 子域名集合
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置子域名集合
                     * @param Domains 子域名集合
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                private:

                    /**
                     * 起始时间(需严格按照RFC3339标准传参)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间(需严格按照RFC3339标准传参)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 每页展示条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前页
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 站点名集合
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 子域名集合
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DOWNLOADL7LOGSREQUEST_H_
