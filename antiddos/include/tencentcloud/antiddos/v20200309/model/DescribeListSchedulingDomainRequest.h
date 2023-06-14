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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTSCHEDULINGDOMAINREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTSCHEDULINGDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListSchedulingDomain请求参数结构体
                */
                class DescribeListSchedulingDomainRequest : public AbstractModel
                {
                public:
                    DescribeListSchedulingDomainRequest();
                    ~DescribeListSchedulingDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页起始偏移，取值为(页码-1)*一页条数
                     * @return Offset 页起始偏移，取值为(页码-1)*一页条数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页起始偏移，取值为(页码-1)*一页条数
                     * @param _offset 页起始偏移，取值为(页码-1)*一页条数
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
                     * 获取一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     * @return Limit 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     * @param _limit 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
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
                     * 获取调度域名搜索
                     * @return FilterDomain 调度域名搜索
                     * 
                     */
                    std::string GetFilterDomain() const;

                    /**
                     * 设置调度域名搜索
                     * @param _filterDomain 调度域名搜索
                     * 
                     */
                    void SetFilterDomain(const std::string& _filterDomain);

                    /**
                     * 判断参数 FilterDomain 是否已赋值
                     * @return FilterDomain 是否已赋值
                     * 
                     */
                    bool FilterDomainHasBeenSet() const;

                    /**
                     * 获取运行状态 0 代表未运行  1 正在运行  2 运行异常 
                     * @return Status 运行状态 0 代表未运行  1 正在运行  2 运行异常 
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置运行状态 0 代表未运行  1 正在运行  2 运行异常 
                     * @param _status 运行状态 0 代表未运行  1 正在运行  2 运行异常 
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 页起始偏移，取值为(页码-1)*一页条数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 一页条数，当Limit=0时，默认一页条数为20;最大取值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 调度域名搜索
                     */
                    std::string m_filterDomain;
                    bool m_filterDomainHasBeenSet;

                    /**
                     * 运行状态 0 代表未运行  1 正在运行  2 运行异常 
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTSCHEDULINGDOMAINREQUEST_H_
