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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WRITTENADVANCEPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WRITTENADVANCEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/SortOrder.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Smart Optimizer高级参数配置数据结构
                */
                class WrittenAdvancePolicy : public AbstractModel
                {
                public:
                    WrittenAdvancePolicy();
                    ~WrittenAdvancePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用合并
                     * @return CompactEnable 是否启用合并
                     * 
                     */
                    std::string GetCompactEnable() const;

                    /**
                     * 设置是否启用合并
                     * @param _compactEnable 是否启用合并
                     * 
                     */
                    void SetCompactEnable(const std::string& _compactEnable);

                    /**
                     * 判断参数 CompactEnable 是否已赋值
                     * @return CompactEnable 是否已赋值
                     * 
                     */
                    bool CompactEnableHasBeenSet() const;

                    /**
                     * 获取是否启用历史数据清理
                     * @return DeleteEnable 是否启用历史数据清理
                     * 
                     */
                    std::string GetDeleteEnable() const;

                    /**
                     * 设置是否启用历史数据清理
                     * @param _deleteEnable 是否启用历史数据清理
                     * 
                     */
                    void SetDeleteEnable(const std::string& _deleteEnable);

                    /**
                     * 判断参数 DeleteEnable 是否已赋值
                     * @return DeleteEnable 是否已赋值
                     * 
                     */
                    bool DeleteEnableHasBeenSet() const;

                    /**
                     * 获取合并最新文件数量
                     * @return MinInputFiles 合并最新文件数量
                     * 
                     */
                    int64_t GetMinInputFiles() const;

                    /**
                     * 设置合并最新文件数量
                     * @param _minInputFiles 合并最新文件数量
                     * 
                     */
                    void SetMinInputFiles(const int64_t& _minInputFiles);

                    /**
                     * 判断参数 MinInputFiles 是否已赋值
                     * @return MinInputFiles 是否已赋值
                     * 
                     */
                    bool MinInputFilesHasBeenSet() const;

                    /**
                     * 获取合并文件目录文件大小
                     * @return TargetFileSizeBytes 合并文件目录文件大小
                     * 
                     */
                    int64_t GetTargetFileSizeBytes() const;

                    /**
                     * 设置合并文件目录文件大小
                     * @param _targetFileSizeBytes 合并文件目录文件大小
                     * 
                     */
                    void SetTargetFileSizeBytes(const int64_t& _targetFileSizeBytes);

                    /**
                     * 判断参数 TargetFileSizeBytes 是否已赋值
                     * @return TargetFileSizeBytes 是否已赋值
                     * 
                     */
                    bool TargetFileSizeBytesHasBeenSet() const;

                    /**
                     * 获取保留过期时间的快照数量
                     * @return RetainLast 保留过期时间的快照数量
                     * 
                     */
                    int64_t GetRetainLast() const;

                    /**
                     * 设置保留过期时间的快照数量
                     * @param _retainLast 保留过期时间的快照数量
                     * 
                     */
                    void SetRetainLast(const int64_t& _retainLast);

                    /**
                     * 判断参数 RetainLast 是否已赋值
                     * @return RetainLast 是否已赋值
                     * 
                     */
                    bool RetainLastHasBeenSet() const;

                    /**
                     * 获取快照过期时间
                     * @return BeforeDays 快照过期时间
                     * 
                     */
                    int64_t GetBeforeDays() const;

                    /**
                     * 设置快照过期时间
                     * @param _beforeDays 快照过期时间
                     * 
                     */
                    void SetBeforeDays(const int64_t& _beforeDays);

                    /**
                     * 判断参数 BeforeDays 是否已赋值
                     * @return BeforeDays 是否已赋值
                     * 
                     */
                    bool BeforeDaysHasBeenSet() const;

                    /**
                     * 获取快照过期执行周期
                     * @return ExpiredSnapshotsIntervalMin 快照过期执行周期
                     * 
                     */
                    int64_t GetExpiredSnapshotsIntervalMin() const;

                    /**
                     * 设置快照过期执行周期
                     * @param _expiredSnapshotsIntervalMin 快照过期执行周期
                     * 
                     */
                    void SetExpiredSnapshotsIntervalMin(const int64_t& _expiredSnapshotsIntervalMin);

                    /**
                     * 判断参数 ExpiredSnapshotsIntervalMin 是否已赋值
                     * @return ExpiredSnapshotsIntervalMin 是否已赋值
                     * 
                     */
                    bool ExpiredSnapshotsIntervalMinHasBeenSet() const;

                    /**
                     * 获取移除孤立文件执行周期
                     * @return RemoveOrphanIntervalMin 移除孤立文件执行周期
                     * 
                     */
                    int64_t GetRemoveOrphanIntervalMin() const;

                    /**
                     * 设置移除孤立文件执行周期
                     * @param _removeOrphanIntervalMin 移除孤立文件执行周期
                     * 
                     */
                    void SetRemoveOrphanIntervalMin(const int64_t& _removeOrphanIntervalMin);

                    /**
                     * 判断参数 RemoveOrphanIntervalMin 是否已赋值
                     * @return RemoveOrphanIntervalMin 是否已赋值
                     * 
                     */
                    bool RemoveOrphanIntervalMinHasBeenSet() const;

                    /**
                     * 获取是否开启COW表合并
                     * @return CowCompactEnable 是否开启COW表合并
                     * 
                     */
                    std::string GetCowCompactEnable() const;

                    /**
                     * 设置是否开启COW表合并
                     * @param _cowCompactEnable 是否开启COW表合并
                     * 
                     */
                    void SetCowCompactEnable(const std::string& _cowCompactEnable);

                    /**
                     * 判断参数 CowCompactEnable 是否已赋值
                     * @return CowCompactEnable 是否已赋值
                     * 
                     */
                    bool CowCompactEnableHasBeenSet() const;

                    /**
                     * 获取文件合并策略
                     * @return CompactStrategy 文件合并策略
                     * 
                     */
                    std::string GetCompactStrategy() const;

                    /**
                     * 设置文件合并策略
                     * @param _compactStrategy 文件合并策略
                     * 
                     */
                    void SetCompactStrategy(const std::string& _compactStrategy);

                    /**
                     * 判断参数 CompactStrategy 是否已赋值
                     * @return CompactStrategy 是否已赋值
                     * 
                     */
                    bool CompactStrategyHasBeenSet() const;

                    /**
                     * 获取sort合并策略的规则定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SortOrders sort合并策略的规则定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SortOrder> GetSortOrders() const;

                    /**
                     * 设置sort合并策略的规则定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sortOrders sort合并策略的规则定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSortOrders(const std::vector<SortOrder>& _sortOrders);

                    /**
                     * 判断参数 SortOrders 是否已赋值
                     * @return SortOrders 是否已赋值
                     * 
                     */
                    bool SortOrdersHasBeenSet() const;

                private:

                    /**
                     * 是否启用合并
                     */
                    std::string m_compactEnable;
                    bool m_compactEnableHasBeenSet;

                    /**
                     * 是否启用历史数据清理
                     */
                    std::string m_deleteEnable;
                    bool m_deleteEnableHasBeenSet;

                    /**
                     * 合并最新文件数量
                     */
                    int64_t m_minInputFiles;
                    bool m_minInputFilesHasBeenSet;

                    /**
                     * 合并文件目录文件大小
                     */
                    int64_t m_targetFileSizeBytes;
                    bool m_targetFileSizeBytesHasBeenSet;

                    /**
                     * 保留过期时间的快照数量
                     */
                    int64_t m_retainLast;
                    bool m_retainLastHasBeenSet;

                    /**
                     * 快照过期时间
                     */
                    int64_t m_beforeDays;
                    bool m_beforeDaysHasBeenSet;

                    /**
                     * 快照过期执行周期
                     */
                    int64_t m_expiredSnapshotsIntervalMin;
                    bool m_expiredSnapshotsIntervalMinHasBeenSet;

                    /**
                     * 移除孤立文件执行周期
                     */
                    int64_t m_removeOrphanIntervalMin;
                    bool m_removeOrphanIntervalMinHasBeenSet;

                    /**
                     * 是否开启COW表合并
                     */
                    std::string m_cowCompactEnable;
                    bool m_cowCompactEnableHasBeenSet;

                    /**
                     * 文件合并策略
                     */
                    std::string m_compactStrategy;
                    bool m_compactStrategyHasBeenSet;

                    /**
                     * sort合并策略的规则定义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SortOrder> m_sortOrders;
                    bool m_sortOrdersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WRITTENADVANCEPOLICY_H_
