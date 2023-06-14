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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DEVICECPURATEINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DEVICECPURATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 实例CPU平均使用率
                */
                class DeviceCpuRateInfo : public AbstractModel
                {
                public:
                    DeviceCpuRateInfo();
                    ~DeviceCpuRateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cpu核编号
                     * @return CpuCore Cpu核编号
                     * 
                     */
                    int64_t GetCpuCore() const;

                    /**
                     * 设置Cpu核编号
                     * @param _cpuCore Cpu核编号
                     * 
                     */
                    void SetCpuCore(const int64_t& _cpuCore);

                    /**
                     * 判断参数 CpuCore 是否已赋值
                     * @return CpuCore 是否已赋值
                     * 
                     */
                    bool CpuCoreHasBeenSet() const;

                    /**
                     * 获取Cpu使用率
                     * @return Rate Cpu使用率
                     * 
                     */
                    std::vector<int64_t> GetRate() const;

                    /**
                     * 设置Cpu使用率
                     * @param _rate Cpu使用率
                     * 
                     */
                    void SetRate(const std::vector<int64_t>& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                private:

                    /**
                     * Cpu核编号
                     */
                    int64_t m_cpuCore;
                    bool m_cpuCoreHasBeenSet;

                    /**
                     * Cpu使用率
                     */
                    std::vector<int64_t> m_rate;
                    bool m_rateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DEVICECPURATEINFO_H_
