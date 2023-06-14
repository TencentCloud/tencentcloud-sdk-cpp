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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSCANRESULTRESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSCANRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulScanResult返回参数结构体
                */
                class DescribeVulScanResultResponse : public AbstractModel
                {
                public:
                    DescribeVulScanResultResponse();
                    ~DescribeVulScanResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞数量。
                     * @return VulNum 漏洞数量。
                     * 
                     */
                    uint64_t GetVulNum() const;

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取专业版机器数。
                     * @return ProVersionNum 专业版机器数。
                     * 
                     */
                    uint64_t GetProVersionNum() const;

                    /**
                     * 判断参数 ProVersionNum 是否已赋值
                     * @return ProVersionNum 是否已赋值
                     * 
                     */
                    bool ProVersionNumHasBeenSet() const;

                    /**
                     * 获取受影响的专业版主机数。
                     * @return ImpactedHostNum 受影响的专业版主机数。
                     * 
                     */
                    uint64_t GetImpactedHostNum() const;

                    /**
                     * 判断参数 ImpactedHostNum 是否已赋值
                     * @return ImpactedHostNum 是否已赋值
                     * 
                     */
                    bool ImpactedHostNumHasBeenSet() const;

                    /**
                     * 获取主机总数。
                     * @return HostNum 主机总数。
                     * 
                     */
                    uint64_t GetHostNum() const;

                    /**
                     * 判断参数 HostNum 是否已赋值
                     * @return HostNum 是否已赋值
                     * 
                     */
                    bool HostNumHasBeenSet() const;

                    /**
                     * 获取基础版机器数。
                     * @return BasicVersionNum 基础版机器数。
                     * 
                     */
                    uint64_t GetBasicVersionNum() const;

                    /**
                     * 判断参数 BasicVersionNum 是否已赋值
                     * @return BasicVersionNum 是否已赋值
                     * 
                     */
                    bool BasicVersionNumHasBeenSet() const;

                private:

                    /**
                     * 漏洞数量。
                     */
                    uint64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * 专业版机器数。
                     */
                    uint64_t m_proVersionNum;
                    bool m_proVersionNumHasBeenSet;

                    /**
                     * 受影响的专业版主机数。
                     */
                    uint64_t m_impactedHostNum;
                    bool m_impactedHostNumHasBeenSet;

                    /**
                     * 主机总数。
                     */
                    uint64_t m_hostNum;
                    bool m_hostNumHasBeenSet;

                    /**
                     * 基础版机器数。
                     */
                    uint64_t m_basicVersionNum;
                    bool m_basicVersionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULSCANRESULTRESPONSE_H_
