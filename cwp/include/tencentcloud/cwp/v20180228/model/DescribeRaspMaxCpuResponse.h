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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPMAXCPURESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPMAXCPURESPONSE_H_

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
                * DescribeRaspMaxCpu返回参数结构体
                */
                class DescribeRaspMaxCpuResponse : public AbstractModel
                {
                public:
                    DescribeRaspMaxCpuResponse();
                    ~DescribeRaspMaxCpuResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取rasp当前最大cpu限制，0<cpu<=100，默认100表示不限制
                     * @return RaspMaxCpu rasp当前最大cpu限制，0<cpu<=100，默认100表示不限制
                     * 
                     */
                    uint64_t GetRaspMaxCpu() const;

                    /**
                     * 判断参数 RaspMaxCpu 是否已赋值
                     * @return RaspMaxCpu 是否已赋值
                     * 
                     */
                    bool RaspMaxCpuHasBeenSet() const;

                private:

                    /**
                     * rasp当前最大cpu限制，0<cpu<=100，默认100表示不限制
                     */
                    uint64_t m_raspMaxCpu;
                    bool m_raspMaxCpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERASPMAXCPURESPONSE_H_
