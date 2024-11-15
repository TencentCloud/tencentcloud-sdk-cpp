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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_HOSTDETAILINFO_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_HOSTDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * 宿主机资源的概览详细信息。
                */
                class HostDetailInfo : public AbstractModel
                {
                public:
                    HostDetailInfo();
                    ~HostDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型族
                     * @return HostTypeFamily 类型族
                     * 
                     */
                    std::string GetHostTypeFamily() const;

                    /**
                     * 设置类型族
                     * @param _hostTypeFamily 类型族
                     * 
                     */
                    void SetHostTypeFamily(const std::string& _hostTypeFamily);

                    /**
                     * 判断参数 HostTypeFamily 是否已赋值
                     * @return HostTypeFamily 是否已赋值
                     * 
                     */
                    bool HostTypeFamilyHasBeenSet() const;

                    /**
                     * 获取总CPU
                     * @return CpuTotal 总CPU
                     * 
                     */
                    double GetCpuTotal() const;

                    /**
                     * 设置总CPU
                     * @param _cpuTotal 总CPU
                     * 
                     */
                    void SetCpuTotal(const double& _cpuTotal);

                    /**
                     * 判断参数 CpuTotal 是否已赋值
                     * @return CpuTotal 是否已赋值
                     * 
                     */
                    bool CpuTotalHasBeenSet() const;

                    /**
                     * 获取可用CPU
                     * @return CpuAvailable 可用CPU
                     * 
                     */
                    double GetCpuAvailable() const;

                    /**
                     * 设置可用CPU
                     * @param _cpuAvailable 可用CPU
                     * 
                     */
                    void SetCpuAvailable(const double& _cpuAvailable);

                    /**
                     * 判断参数 CpuAvailable 是否已赋值
                     * @return CpuAvailable 是否已赋值
                     * 
                     */
                    bool CpuAvailableHasBeenSet() const;

                    /**
                     * 获取总内存
                     * @return MemTotal 总内存
                     * 
                     */
                    double GetMemTotal() const;

                    /**
                     * 设置总内存
                     * @param _memTotal 总内存
                     * 
                     */
                    void SetMemTotal(const double& _memTotal);

                    /**
                     * 判断参数 MemTotal 是否已赋值
                     * @return MemTotal 是否已赋值
                     * 
                     */
                    bool MemTotalHasBeenSet() const;

                    /**
                     * 获取可用内存
                     * @return MemAvailable 可用内存
                     * 
                     */
                    double GetMemAvailable() const;

                    /**
                     * 设置可用内存
                     * @param _memAvailable 可用内存
                     * 
                     */
                    void SetMemAvailable(const double& _memAvailable);

                    /**
                     * 判断参数 MemAvailable 是否已赋值
                     * @return MemAvailable 是否已赋值
                     * 
                     */
                    bool MemAvailableHasBeenSet() const;

                private:

                    /**
                     * 类型族
                     */
                    std::string m_hostTypeFamily;
                    bool m_hostTypeFamilyHasBeenSet;

                    /**
                     * 总CPU
                     */
                    double m_cpuTotal;
                    bool m_cpuTotalHasBeenSet;

                    /**
                     * 可用CPU
                     */
                    double m_cpuAvailable;
                    bool m_cpuAvailableHasBeenSet;

                    /**
                     * 总内存
                     */
                    double m_memTotal;
                    bool m_memTotalHasBeenSet;

                    /**
                     * 可用内存
                     */
                    double m_memAvailable;
                    bool m_memAvailableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_HOSTDETAILINFO_H_
