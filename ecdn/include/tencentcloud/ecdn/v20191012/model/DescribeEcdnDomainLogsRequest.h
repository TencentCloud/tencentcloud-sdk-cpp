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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSREQUEST_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeEcdnDomainLogs请求参数结构体
                */
                class DescribeEcdnDomainLogsRequest : public AbstractModel
                {
                public:
                    DescribeEcdnDomainLogsRequest();
                    ~DescribeEcdnDomainLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待查询域名。
                     * @return Domain 待查询域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置待查询域名。
                     * @param _domain 待查询域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取日志起始时间。如：2019-10-01 00:00:00
                     * @return StartTime 日志起始时间。如：2019-10-01 00:00:00
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志起始时间。如：2019-10-01 00:00:00
                     * @param _startTime 日志起始时间。如：2019-10-01 00:00:00
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
                     * 获取日志结束时间，只支持最近30天内日志查询。2019-10-02 00:00:00
                     * @return EndTime 日志结束时间，只支持最近30天内日志查询。2019-10-02 00:00:00
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志结束时间，只支持最近30天内日志查询。2019-10-02 00:00:00
                     * @param _endTime 日志结束时间，只支持最近30天内日志查询。2019-10-02 00:00:00
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
                     * 获取日志链接列表分页起始地址，默认0。
                     * @return Offset 日志链接列表分页起始地址，默认0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置日志链接列表分页起始地址，默认0。
                     * @param _offset 日志链接列表分页起始地址，默认0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取日志链接列表分页记录条数，默认100，最大1000。
                     * @return Limit 日志链接列表分页记录条数，默认100，最大1000。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置日志链接列表分页记录条数，默认100，最大1000。
                     * @param _limit 日志链接列表分页记录条数，默认100，最大1000。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 待查询域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 日志起始时间。如：2019-10-01 00:00:00
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志结束时间，只支持最近30天内日志查询。2019-10-02 00:00:00
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志链接列表分页起始地址，默认0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 日志链接列表分页记录条数，默认100，最大1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSREQUEST_H_
