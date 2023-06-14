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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_CPUINFO_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_CPUINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * cpu信息
                */
                class CpuInfo : public AbstractModel
                {
                public:
                    CpuInfo();
                    ~CpuInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU的ID
                     * @return CpuId CPU的ID
                     * 
                     */
                    uint64_t GetCpuId() const;

                    /**
                     * 设置CPU的ID
                     * @param _cpuId CPU的ID
                     * 
                     */
                    void SetCpuId(const uint64_t& _cpuId);

                    /**
                     * 判断参数 CpuId 是否已赋值
                     * @return CpuId 是否已赋值
                     * 
                     */
                    bool CpuIdHasBeenSet() const;

                    /**
                     * 获取CPU型号描述
                     * @return CpuDescription CPU型号描述
                     * 
                     */
                    std::string GetCpuDescription() const;

                    /**
                     * 设置CPU型号描述
                     * @param _cpuDescription CPU型号描述
                     * 
                     */
                    void SetCpuDescription(const std::string& _cpuDescription);

                    /**
                     * 判断参数 CpuDescription 是否已赋值
                     * @return CpuDescription 是否已赋值
                     * 
                     */
                    bool CpuDescriptionHasBeenSet() const;

                    /**
                     * 获取机型序列
                     * @return Series 机型序列
                     * 
                     */
                    uint64_t GetSeries() const;

                    /**
                     * 设置机型序列
                     * @param _series 机型序列
                     * 
                     */
                    void SetSeries(const uint64_t& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取支持的RAID方式，0：有RAID卡，1：没有RAID卡
                     * @return ContainRaidCard 支持的RAID方式，0：有RAID卡，1：没有RAID卡
                     * 
                     */
                    std::vector<uint64_t> GetContainRaidCard() const;

                    /**
                     * 设置支持的RAID方式，0：有RAID卡，1：没有RAID卡
                     * @param _containRaidCard 支持的RAID方式，0：有RAID卡，1：没有RAID卡
                     * 
                     */
                    void SetContainRaidCard(const std::vector<uint64_t>& _containRaidCard);

                    /**
                     * 判断参数 ContainRaidCard 是否已赋值
                     * @return ContainRaidCard 是否已赋值
                     * 
                     */
                    bool ContainRaidCardHasBeenSet() const;

                private:

                    /**
                     * CPU的ID
                     */
                    uint64_t m_cpuId;
                    bool m_cpuIdHasBeenSet;

                    /**
                     * CPU型号描述
                     */
                    std::string m_cpuDescription;
                    bool m_cpuDescriptionHasBeenSet;

                    /**
                     * 机型序列
                     */
                    uint64_t m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * 支持的RAID方式，0：有RAID卡，1：没有RAID卡
                     */
                    std::vector<uint64_t> m_containRaidCard;
                    bool m_containRaidCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_CPUINFO_H_
