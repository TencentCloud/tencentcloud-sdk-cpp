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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTSCANTASKCOUNTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTSCANTASKCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribePortScanTaskCount返回参数结构体
                */
                class DescribePortScanTaskCountResponse : public AbstractModel
                {
                public:
                    DescribePortScanTaskCountResponse();
                    ~DescribePortScanTaskCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取端口扫描任务次数
                     * @return PortScanTaskCount 端口扫描任务次数
                     * 
                     */
                    int64_t GetPortScanTaskCount() const;

                    /**
                     * 判断参数 PortScanTaskCount 是否已赋值
                     * @return PortScanTaskCount 是否已赋值
                     * 
                     */
                    bool PortScanTaskCountHasBeenSet() const;

                private:

                    /**
                     * 端口扫描任务次数
                     */
                    int64_t m_portScanTaskCount;
                    bool m_portScanTaskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEPORTSCANTASKCOUNTRESPONSE_H_
