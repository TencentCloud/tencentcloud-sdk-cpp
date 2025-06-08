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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORUSAGETRENDINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORUSAGETRENDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 资源组/资源包使用趋势
                */
                class ExecutorUsageTrendInfo : public AbstractModel
                {
                public:
                    ExecutorUsageTrendInfo();
                    ~ExecutorUsageTrendInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间戳，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 时间戳，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置时间戳，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestamp 时间戳，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuUsagePercent CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCpuUsagePercent() const;

                    /**
                     * 设置CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuUsagePercent CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuUsagePercent(const double& _cpuUsagePercent);

                    /**
                     * 判断参数 CpuUsagePercent 是否已赋值
                     * @return CpuUsagePercent 是否已赋值
                     * 
                     */
                    bool CpuUsagePercentHasBeenSet() const;

                    /**
                     * 获取内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemUsagePercent 内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMemUsagePercent() const;

                    /**
                     * 设置内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memUsagePercent 内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemUsagePercent(const double& _memUsagePercent);

                    /**
                     * 判断参数 MemUsagePercent 是否已赋值
                     * @return MemUsagePercent 是否已赋值
                     * 
                     */
                    bool MemUsagePercentHasBeenSet() const;

                    /**
                     * 获取当前并发度使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcurrencyUsage 当前并发度使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetConcurrencyUsage() const;

                    /**
                     * 设置当前并发度使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _concurrencyUsage 当前并发度使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConcurrencyUsage(const double& _concurrencyUsage);

                    /**
                     * 判断参数 ConcurrencyUsage 是否已赋值
                     * @return ConcurrencyUsage 是否已赋值
                     * 
                     */
                    bool ConcurrencyUsageHasBeenSet() const;

                    /**
                     * 获取oceanus CU使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OceanusCuUsage oceanus CU使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOceanusCuUsage() const;

                    /**
                     * 设置oceanus CU使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oceanusCuUsage oceanus CU使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOceanusCuUsage(const double& _oceanusCuUsage);

                    /**
                     * 判断参数 OceanusCuUsage 是否已赋值
                     * @return OceanusCuUsage 是否已赋值
                     * 
                     */
                    bool OceanusCuUsageHasBeenSet() const;

                private:

                    /**
                     * 时间戳，单位：毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * CPU占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cpuUsagePercent;
                    bool m_cpuUsagePercentHasBeenSet;

                    /**
                     * 内存占用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_memUsagePercent;
                    bool m_memUsagePercentHasBeenSet;

                    /**
                     * 当前并发度使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_concurrencyUsage;
                    bool m_concurrencyUsageHasBeenSet;

                    /**
                     * oceanus CU使用百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_oceanusCuUsage;
                    bool m_oceanusCuUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORUSAGETRENDINFO_H_
