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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CPUSUMMARYITEM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CPUSUMMARYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CPU resource summary item aggregated from all running deployments.
                */
                class CpuSummaryItem : public AbstractModel
                {
                public:
                    CpuSummaryItem();
                    ~CpuSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CPU 总核数（headCpu + cpu × replicas 的总和）</p>
                     * @return TotalCpuCores <p>CPU 总核数（headCpu + cpu × replicas 的总和）</p>
                     * 
                     */
                    int64_t GetTotalCpuCores() const;

                    /**
                     * 设置<p>CPU 总核数（headCpu + cpu × replicas 的总和）</p>
                     * @param _totalCpuCores <p>CPU 总核数（headCpu + cpu × replicas 的总和）</p>
                     * 
                     */
                    void SetTotalCpuCores(const int64_t& _totalCpuCores);

                    /**
                     * 判断参数 TotalCpuCores 是否已赋值
                     * @return TotalCpuCores 是否已赋值
                     * 
                     */
                    bool TotalCpuCoresHasBeenSet() const;

                    /**
                     * 获取<p>内存总量（headMem + mem × replicas 的总和，单位 GB）</p>
                     * @return TotalMemoryGB <p>内存总量（headMem + mem × replicas 的总和，单位 GB）</p>
                     * 
                     */
                    int64_t GetTotalMemoryGB() const;

                    /**
                     * 设置<p>内存总量（headMem + mem × replicas 的总和，单位 GB）</p>
                     * @param _totalMemoryGB <p>内存总量（headMem + mem × replicas 的总和，单位 GB）</p>
                     * 
                     */
                    void SetTotalMemoryGB(const int64_t& _totalMemoryGB);

                    /**
                     * 判断参数 TotalMemoryGB 是否已赋值
                     * @return TotalMemoryGB 是否已赋值
                     * 
                     */
                    bool TotalMemoryGBHasBeenSet() const;

                    /**
                     * 获取<p>运行中的副本总数</p>
                     * @return Replicas <p>运行中的副本总数</p>
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置<p>运行中的副本总数</p>
                     * @param _replicas <p>运行中的副本总数</p>
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                private:

                    /**
                     * <p>CPU 总核数（headCpu + cpu × replicas 的总和）</p>
                     */
                    int64_t m_totalCpuCores;
                    bool m_totalCpuCoresHasBeenSet;

                    /**
                     * <p>内存总量（headMem + mem × replicas 的总和，单位 GB）</p>
                     */
                    int64_t m_totalMemoryGB;
                    bool m_totalMemoryGBHasBeenSet;

                    /**
                     * <p>运行中的副本总数</p>
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CPUSUMMARYITEM_H_
