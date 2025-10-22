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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPCONTENTRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPCONTENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityIPGroupContent返回参数结构体
                */
                class DescribeSecurityIPGroupContentResponse : public AbstractModel
                {
                public:
                    DescribeSecurityIPGroupContentResponse();
                    ~DescribeSecurityIPGroupContentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IP 组中正在生效的 IP 或网段个数。
                     * @return IPTotalCount IP 组中正在生效的 IP 或网段个数。
                     * 
                     */
                    int64_t GetIPTotalCount() const;

                    /**
                     * 判断参数 IPTotalCount 是否已赋值
                     * @return IPTotalCount 是否已赋值
                     * 
                     */
                    bool IPTotalCountHasBeenSet() const;

                    /**
                     * 获取满足查询条件的 IP 或网段列表。受 Limit 和 Offset 参数限制。
                     * @return IPList 满足查询条件的 IP 或网段列表。受 Limit 和 Offset 参数限制。
                     * 
                     */
                    std::vector<std::string> GetIPList() const;

                    /**
                     * 判断参数 IPList 是否已赋值
                     * @return IPList 是否已赋值
                     * 
                     */
                    bool IPListHasBeenSet() const;

                private:

                    /**
                     * IP 组中正在生效的 IP 或网段个数。
                     */
                    int64_t m_iPTotalCount;
                    bool m_iPTotalCountHasBeenSet;

                    /**
                     * 满足查询条件的 IP 或网段列表。受 Limit 和 Offset 参数限制。
                     */
                    std::vector<std::string> m_iPList;
                    bool m_iPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYIPGROUPCONTENTRESPONSE_H_
