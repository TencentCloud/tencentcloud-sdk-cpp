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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/HostRecord.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeHosts返回参数结构体
                */
                class DescribeHostsResponse : public AbstractModel
                {
                public:
                    DescribeHostsResponse();
                    ~DescribeHostsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防护域名列表的长度
                     * @return TotalCount 防护域名列表的长度
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取防护域名的列表
                     * @return HostList 防护域名的列表
                     * 
                     */
                    std::vector<HostRecord> GetHostList() const;

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                private:

                    /**
                     * 防护域名列表的长度
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 防护域名的列表
                     */
                    std::vector<HostRecord> m_hostList;
                    bool m_hostListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEHOSTSRESPONSE_H_
