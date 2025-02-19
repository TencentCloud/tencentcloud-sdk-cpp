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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SNAPSHOT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SNAPSHOT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 描述了快照相关信息。
                */
                class Snapshot : public AbstractModel
                {
                public:
                    Snapshot();
                    ~Snapshot() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取快照 ID。
                     * @return SnapshotId 快照 ID。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照 ID。
                     * @param _snapshotId 快照 ID。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取创建此快照的磁盘类型。取值：<li>SYSTEM_DISK：系统盘</li>
                     * @return DiskUsage 创建此快照的磁盘类型。取值：<li>SYSTEM_DISK：系统盘</li>
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置创建此快照的磁盘类型。取值：<li>SYSTEM_DISK：系统盘</li>
                     * @param _diskUsage 创建此快照的磁盘类型。取值：<li>SYSTEM_DISK：系统盘</li>
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取创建此快照的磁盘 ID。
                     * @return DiskId 创建此快照的磁盘 ID。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置创建此快照的磁盘 ID。
                     * @param _diskId 创建此快照的磁盘 ID。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取创建此快照的磁盘大小，单位 GB。
                     * @return DiskSize 创建此快照的磁盘大小，单位 GB。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置创建此快照的磁盘大小，单位 GB。
                     * @param _diskSize 创建此快照的磁盘大小，单位 GB。
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取快照名称，用户自定义的快照别名。
                     * @return SnapshotName 快照名称，用户自定义的快照别名。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称，用户自定义的快照别名。
                     * @param _snapshotName 快照名称，用户自定义的快照别名。
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取快照的状态。取值范围：
<li>NORMAL：正常 </li>
<li>CREATING：创建中</li>
<li>ROLLBACKING：回滚中。</li>
                     * @return SnapshotState 快照的状态。取值范围：
<li>NORMAL：正常 </li>
<li>CREATING：创建中</li>
<li>ROLLBACKING：回滚中。</li>
                     * 
                     */
                    std::string GetSnapshotState() const;

                    /**
                     * 设置快照的状态。取值范围：
<li>NORMAL：正常 </li>
<li>CREATING：创建中</li>
<li>ROLLBACKING：回滚中。</li>
                     * @param _snapshotState 快照的状态。取值范围：
<li>NORMAL：正常 </li>
<li>CREATING：创建中</li>
<li>ROLLBACKING：回滚中。</li>
                     * 
                     */
                    void SetSnapshotState(const std::string& _snapshotState);

                    /**
                     * 判断参数 SnapshotState 是否已赋值
                     * @return SnapshotState 是否已赋值
                     * 
                     */
                    bool SnapshotStateHasBeenSet() const;

                    /**
                     * 获取创建或回滚快照进度百分比，成功后此字段取值为 100。
                     * @return Percent 创建或回滚快照进度百分比，成功后此字段取值为 100。
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置创建或回滚快照进度百分比，成功后此字段取值为 100。
                     * @param _percent 创建或回滚快照进度百分比，成功后此字段取值为 100。
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取快照的最新操作，只有创建、回滚快照时记录。
取值如 CreateInstanceSnapshot，RollbackInstanceSnapshot。
                     * @return LatestOperation 快照的最新操作，只有创建、回滚快照时记录。
取值如 CreateInstanceSnapshot，RollbackInstanceSnapshot。
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置快照的最新操作，只有创建、回滚快照时记录。
取值如 CreateInstanceSnapshot，RollbackInstanceSnapshot。
                     * @param _latestOperation 快照的最新操作，只有创建、回滚快照时记录。
取值如 CreateInstanceSnapshot，RollbackInstanceSnapshot。
                     * 
                     */
                    void SetLatestOperation(const std::string& _latestOperation);

                    /**
                     * 判断参数 LatestOperation 是否已赋值
                     * @return LatestOperation 是否已赋值
                     * 
                     */
                    bool LatestOperationHasBeenSet() const;

                    /**
                     * 获取快照的最新操作状态，只有创建、回滚快照时记录。
取值范围：
<li>SUCCESS：表示操作成功</li>
<li>OPERATING：表示操作执行中</li>
<li>FAILED：表示操作失败</li>
                     * @return LatestOperationState 快照的最新操作状态，只有创建、回滚快照时记录。
取值范围：
<li>SUCCESS：表示操作成功</li>
<li>OPERATING：表示操作执行中</li>
<li>FAILED：表示操作失败</li>
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置快照的最新操作状态，只有创建、回滚快照时记录。
取值范围：
<li>SUCCESS：表示操作成功</li>
<li>OPERATING：表示操作执行中</li>
<li>FAILED：表示操作失败</li>
                     * @param _latestOperationState 快照的最新操作状态，只有创建、回滚快照时记录。
取值范围：
<li>SUCCESS：表示操作成功</li>
<li>OPERATING：表示操作执行中</li>
<li>FAILED：表示操作失败</li>
                     * 
                     */
                    void SetLatestOperationState(const std::string& _latestOperationState);

                    /**
                     * 判断参数 LatestOperationState 是否已赋值
                     * @return LatestOperationState 是否已赋值
                     * 
                     */
                    bool LatestOperationStateHasBeenSet() const;

                    /**
                     * 获取快照最新操作的唯一请求 ID，只有创建、回滚快照时记录。
                     * @return LatestOperationRequestId 快照最新操作的唯一请求 ID，只有创建、回滚快照时记录。
                     * 
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置快照最新操作的唯一请求 ID，只有创建、回滚快照时记录。
                     * @param _latestOperationRequestId 快照最新操作的唯一请求 ID，只有创建、回滚快照时记录。
                     * 
                     */
                    void SetLatestOperationRequestId(const std::string& _latestOperationRequestId);

                    /**
                     * 判断参数 LatestOperationRequestId 是否已赋值
                     * @return LatestOperationRequestId 是否已赋值
                     * 
                     */
                    bool LatestOperationRequestIdHasBeenSet() const;

                    /**
                     * 获取快照的创建时间。
                     * @return CreatedTime 快照的创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置快照的创建时间。
                     * @param _createdTime 快照的创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * 快照 ID。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 创建此快照的磁盘类型。取值：<li>SYSTEM_DISK：系统盘</li>
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 创建此快照的磁盘 ID。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 创建此快照的磁盘大小，单位 GB。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 快照名称，用户自定义的快照别名。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 快照的状态。取值范围：
<li>NORMAL：正常 </li>
<li>CREATING：创建中</li>
<li>ROLLBACKING：回滚中。</li>
                     */
                    std::string m_snapshotState;
                    bool m_snapshotStateHasBeenSet;

                    /**
                     * 创建或回滚快照进度百分比，成功后此字段取值为 100。
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 快照的最新操作，只有创建、回滚快照时记录。
取值如 CreateInstanceSnapshot，RollbackInstanceSnapshot。
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 快照的最新操作状态，只有创建、回滚快照时记录。
取值范围：
<li>SUCCESS：表示操作成功</li>
<li>OPERATING：表示操作执行中</li>
<li>FAILED：表示操作失败</li>
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * 快照最新操作的唯一请求 ID，只有创建、回滚快照时记录。
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * 快照的创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SNAPSHOT_H_
