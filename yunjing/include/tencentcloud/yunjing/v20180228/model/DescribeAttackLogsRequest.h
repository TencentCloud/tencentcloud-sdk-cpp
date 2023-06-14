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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEATTACKLOGSREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEATTACKLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunjing/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAttackLogs请求参数结构体
                */
                class DescribeAttackLogsRequest : public AbstractModel
                {
                public:
                    DescribeAttackLogsRequest();
                    ~DescribeAttackLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认为10，最大值为100。
                     * @return Limit 返回数量，默认为10，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为10，最大值为100。
                     * @param _limit 返回数量，默认为10，最大值为100。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>HttpMethod - String - 是否必填：否 - 攻击方法(POST|GET)</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
<li>DateRange - String - 是否必填：否 - 时间范围(存储最近3个月的数据)，如最近一个月["2019-11-17", "2019-12-17"]</li>
                     * @return Filters 过滤条件。
<li>HttpMethod - String - 是否必填：否 - 攻击方法(POST|GET)</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
<li>DateRange - String - 是否必填：否 - 时间范围(存储最近3个月的数据)，如最近一个月["2019-11-17", "2019-12-17"]</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>HttpMethod - String - 是否必填：否 - 攻击方法(POST|GET)</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
<li>DateRange - String - 是否必填：否 - 时间范围(存储最近3个月的数据)，如最近一个月["2019-11-17", "2019-12-17"]</li>
                     * @param _filters 过滤条件。
<li>HttpMethod - String - 是否必填：否 - 攻击方法(POST|GET)</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
<li>DateRange - String - 是否必填：否 - 时间范围(存储最近3个月的数据)，如最近一个月["2019-11-17", "2019-12-17"]</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取主机安全客户端ID
                     * @return Uuid 主机安全客户端ID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全客户端ID
                     * @param _uuid 主机安全客户端ID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取云主机机器ID
                     * @return Quuid 云主机机器ID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置云主机机器ID
                     * @param _quuid 云主机机器ID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                private:

                    /**
                     * 返回数量，默认为10，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>HttpMethod - String - 是否必填：否 - 攻击方法(POST|GET)</li>
<li>MachineIp - String - 是否必填：否 - 主机内网IP</li>
<li>DateRange - String - 是否必填：否 - 时间范围(存储最近3个月的数据)，如最近一个月["2019-11-17", "2019-12-17"]</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 主机安全客户端ID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 云主机机器ID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEATTACKLOGSREQUEST_H_
