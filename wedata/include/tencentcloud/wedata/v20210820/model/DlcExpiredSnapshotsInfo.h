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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCEXPIREDSNAPSHOTSINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCEXPIREDSNAPSHOTSINFO_H_

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
                * 快照过期治理项
                */
                class DlcExpiredSnapshotsInfo : public AbstractModel
                {
                public:
                    DlcExpiredSnapshotsInfo();
                    ~DlcExpiredSnapshotsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用快照过期治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredSnapshotsEnable 是否启用快照过期治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredSnapshotsEnable() const;

                    /**
                     * 设置是否启用快照过期治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiredSnapshotsEnable 是否启用快照过期治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiredSnapshotsEnable(const std::string& _expiredSnapshotsEnable);

                    /**
                     * 判断参数 ExpiredSnapshotsEnable 是否已赋值
                     * @return ExpiredSnapshotsEnable 是否已赋值
                     * 
                     */
                    bool ExpiredSnapshotsEnableHasBeenSet() const;

                    /**
                     * 获取用于运行快照过期治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Engine 用于运行快照过期治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置用于运行快照过期治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engine 用于运行快照过期治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取需要保留的最近快照个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RetainLast 需要保留的最近快照个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRetainLast() const;

                    /**
                     * 设置需要保留的最近快照个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _retainLast 需要保留的最近快照个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRetainLast(const uint64_t& _retainLast);

                    /**
                     * 判断参数 RetainLast 是否已赋值
                     * @return RetainLast 是否已赋值
                     * 
                     */
                    bool RetainLastHasBeenSet() const;

                    /**
                     * 获取过期指定天前的快照
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeforeDays 过期指定天前的快照
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBeforeDays() const;

                    /**
                     * 设置过期指定天前的快照
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beforeDays 过期指定天前的快照
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeforeDays(const uint64_t& _beforeDays);

                    /**
                     * 判断参数 BeforeDays 是否已赋值
                     * @return BeforeDays 是否已赋值
                     * 
                     */
                    bool BeforeDaysHasBeenSet() const;

                    /**
                     * 获取清理过期快照的并行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConcurrentDeletes 清理过期快照的并行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMaxConcurrentDeletes() const;

                    /**
                     * 设置清理过期快照的并行数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxConcurrentDeletes 清理过期快照的并行数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxConcurrentDeletes(const uint64_t& _maxConcurrentDeletes);

                    /**
                     * 判断参数 MaxConcurrentDeletes 是否已赋值
                     * @return MaxConcurrentDeletes 是否已赋值
                     * 
                     */
                    bool MaxConcurrentDeletesHasBeenSet() const;

                    /**
                     * 获取快照过期治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalMin 快照过期治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntervalMin() const;

                    /**
                     * 设置快照过期治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalMin 快照过期治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntervalMin(const uint64_t& _intervalMin);

                    /**
                     * 判断参数 IntervalMin 是否已赋值
                     * @return IntervalMin 是否已赋值
                     * 
                     */
                    bool IntervalMinHasBeenSet() const;

                private:

                    /**
                     * 是否启用快照过期治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredSnapshotsEnable;
                    bool m_expiredSnapshotsEnableHasBeenSet;

                    /**
                     * 用于运行快照过期治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 需要保留的最近快照个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_retainLast;
                    bool m_retainLastHasBeenSet;

                    /**
                     * 过期指定天前的快照
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_beforeDays;
                    bool m_beforeDaysHasBeenSet;

                    /**
                     * 清理过期快照的并行数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_maxConcurrentDeletes;
                    bool m_maxConcurrentDeletesHasBeenSet;

                    /**
                     * 快照过期治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intervalMin;
                    bool m_intervalMinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCEXPIREDSNAPSHOTSINFO_H_
