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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFLOWTRENDREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFLOWTRENDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeFlowTrend请求参数结构体
                */
                class DescribeFlowTrendRequest : public AbstractModel
                {
                public:
                    DescribeFlowTrendRequest();
                    ~DescribeFlowTrendRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要获取流量趋势的域名, all表示所有域名
                     * @return Domain 需要获取流量趋势的域名, all表示所有域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置需要获取流量趋势的域名, all表示所有域名
                     * @param _domain 需要获取流量趋势的域名, all表示所有域名
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
                     * 获取起始时间戳，精度秒
                     * @return StartTs 起始时间戳，精度秒
                     * 
                     */
                    int64_t GetStartTs() const;

                    /**
                     * 设置起始时间戳，精度秒
                     * @param _startTs 起始时间戳，精度秒
                     * 
                     */
                    void SetStartTs(const int64_t& _startTs);

                    /**
                     * 判断参数 StartTs 是否已赋值
                     * @return StartTs 是否已赋值
                     * 
                     */
                    bool StartTsHasBeenSet() const;

                    /**
                     * 获取结束时间戳，精度秒
                     * @return EndTs 结束时间戳，精度秒
                     * 
                     */
                    int64_t GetEndTs() const;

                    /**
                     * 设置结束时间戳，精度秒
                     * @param _endTs 结束时间戳，精度秒
                     * 
                     */
                    void SetEndTs(const int64_t& _endTs);

                    /**
                     * 判断参数 EndTs 是否已赋值
                     * @return EndTs 是否已赋值
                     * 
                     */
                    bool EndTsHasBeenSet() const;

                private:

                    /**
                     * 需要获取流量趋势的域名, all表示所有域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 起始时间戳，精度秒
                     */
                    int64_t m_startTs;
                    bool m_startTsHasBeenSet;

                    /**
                     * 结束时间戳，精度秒
                     */
                    int64_t m_endTs;
                    bool m_endTsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEFLOWTRENDREQUEST_H_
