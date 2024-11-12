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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulCountByDates返回参数结构体
                */
                class DescribeVulCountByDatesResponse : public AbstractModel
                {
                public:
                    DescribeVulCountByDatesResponse();
                    ~DescribeVulCountByDatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量获得对应天数的漏洞数量
                     * @return VulCount 批量获得对应天数的漏洞数量
                     * 
                     */
                    std::vector<uint64_t> GetVulCount() const;

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取批量获得对应天数的主机数量
                     * @return HostCount 批量获得对应天数的主机数量
                     * 
                     */
                    std::vector<uint64_t> GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                private:

                    /**
                     * 批量获得对应天数的漏洞数量
                     */
                    std::vector<uint64_t> m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * 批量获得对应天数的主机数量
                     */
                    std::vector<uint64_t> m_hostCount;
                    bool m_hostCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULCOUNTBYDATESRESPONSE_H_
