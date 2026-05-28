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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/IpAccessControlData.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeIpAccessControl返回参数结构体
                */
                class DescribeIpAccessControlResponse : public AbstractModel
                {
                public:
                    DescribeIpAccessControlResponse();
                    ~DescribeIpAccessControlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>输出</p>
                     * @return Data <p>输出</p>
                     * 
                     */
                    IpAccessControlData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>已经使用的IP黑白名单的IP总数</p>
                     * @return UsedTotal <p>已经使用的IP黑白名单的IP总数</p>
                     * 
                     */
                    uint64_t GetUsedTotal() const;

                    /**
                     * 判断参数 UsedTotal 是否已赋值
                     * @return UsedTotal 是否已赋值
                     * 
                     */
                    bool UsedTotalHasBeenSet() const;

                private:

                    /**
                     * <p>输出</p>
                     */
                    IpAccessControlData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>已经使用的IP黑白名单的IP总数</p>
                     */
                    uint64_t m_usedTotal;
                    bool m_usedTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEIPACCESSCONTROLRESPONSE_H_
