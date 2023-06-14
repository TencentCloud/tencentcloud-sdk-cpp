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

#ifndef TENCENTCLOUD_CIS_V20180408_MODEL_INQUIRYPRICECREATECISREQUEST_H_
#define TENCENTCLOUD_CIS_V20180408_MODEL_INQUIRYPRICECREATECISREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cis
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateCis请求参数结构体
                */
                class InquiryPriceCreateCisRequest : public AbstractModel
                {
                public:
                    InquiryPriceCreateCisRequest();
                    ~InquiryPriceCreateCisRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取CPU，单位：核
                     * @return Cpu CPU，单位：核
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置CPU，单位：核
                     * @param _cpu CPU，单位：核
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存，单位：Gi
                     * @return Memory 内存，单位：Gi
                     * 
                     */
                    double GetMemory() const;

                    /**
                     * 设置内存，单位：Gi
                     * @param _memory 内存，单位：Gi
                     * 
                     */
                    void SetMemory(const double& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * CPU，单位：核
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存，单位：Gi
                     */
                    double m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIS_V20180408_MODEL_INQUIRYPRICECREATECISREQUEST_H_
