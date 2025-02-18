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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKBACKUP_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKBACKUP_H_

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
                * 描述了云硬盘备份点相关信息。
                */
                class DiskBackup : public AbstractModel
                {
                public:
                    DiskBackup();
                    ~DiskBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云硬盘备份点ID。
                     * @return DiskBackupId 云硬盘备份点ID。
                     * 
                     */
                    std::string GetDiskBackupId() const;

                    /**
                     * 设置云硬盘备份点ID。
                     * @param _diskBackupId 云硬盘备份点ID。
                     * 
                     */
                    void SetDiskBackupId(const std::string& _diskBackupId);

                    /**
                     * 判断参数 DiskBackupId 是否已赋值
                     * @return DiskBackupId 是否已赋值
                     * 
                     */
                    bool DiskBackupIdHasBeenSet() const;

                    /**
                     * 获取创建此云硬盘备份点的云硬盘类型。取值：<li>DATA_DISK：数据盘</li>
                     * @return DiskUsage 创建此云硬盘备份点的云硬盘类型。取值：<li>DATA_DISK：数据盘</li>
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置创建此云硬盘备份点的云硬盘类型。取值：<li>DATA_DISK：数据盘</li>
                     * @param _diskUsage 创建此云硬盘备份点的云硬盘类型。取值：<li>DATA_DISK：数据盘</li>
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
                     * 获取创建此云硬盘备份点的云硬盘 ID。
                     * @return DiskId 创建此云硬盘备份点的云硬盘 ID。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置创建此云硬盘备份点的云硬盘 ID。
                     * @param _diskId 创建此云硬盘备份点的云硬盘 ID。
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
                     * 获取创建此云硬盘备份点的云硬盘大小，单位 GB。
                     * @return DiskSize 创建此云硬盘备份点的云硬盘大小，单位 GB。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置创建此云硬盘备份点的云硬盘大小，单位 GB。
                     * @param _diskSize 创建此云硬盘备份点的云硬盘大小，单位 GB。
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
                     * 获取云硬盘备份点名称，用户自定义的云硬盘备份点别名。
                     * @return DiskBackupName 云硬盘备份点名称，用户自定义的云硬盘备份点别名。
                     * 
                     */
                    std::string GetDiskBackupName() const;

                    /**
                     * 设置云硬盘备份点名称，用户自定义的云硬盘备份点别名。
                     * @param _diskBackupName 云硬盘备份点名称，用户自定义的云硬盘备份点别名。
                     * 
                     */
                    void SetDiskBackupName(const std::string& _diskBackupName);

                    /**
                     * 判断参数 DiskBackupName 是否已赋值
                     * @return DiskBackupName 是否已赋值
                     * 
                     */
                    bool DiskBackupNameHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点的状态。取值范围：
<li>NORMAL：正常。 </li>
<li>CREATING：创建中。</li>
<li>ROLLBACKING：回滚中。</li>
<li>DELETING：删除中。</li>
                     * @return DiskBackupState 云硬盘备份点的状态。取值范围：
<li>NORMAL：正常。 </li>
<li>CREATING：创建中。</li>
<li>ROLLBACKING：回滚中。</li>
<li>DELETING：删除中。</li>
                     * 
                     */
                    std::string GetDiskBackupState() const;

                    /**
                     * 设置云硬盘备份点的状态。取值范围：
<li>NORMAL：正常。 </li>
<li>CREATING：创建中。</li>
<li>ROLLBACKING：回滚中。</li>
<li>DELETING：删除中。</li>
                     * @param _diskBackupState 云硬盘备份点的状态。取值范围：
<li>NORMAL：正常。 </li>
<li>CREATING：创建中。</li>
<li>ROLLBACKING：回滚中。</li>
<li>DELETING：删除中。</li>
                     * 
                     */
                    void SetDiskBackupState(const std::string& _diskBackupState);

                    /**
                     * 判断参数 DiskBackupState 是否已赋值
                     * @return DiskBackupState 是否已赋值
                     * 
                     */
                    bool DiskBackupStateHasBeenSet() const;

                    /**
                     * 获取创建或回滚云硬盘备份点进度百分比，成功后此字段取值为 100。
                     * @return Percent 创建或回滚云硬盘备份点进度百分比，成功后此字段取值为 100。
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置创建或回滚云硬盘备份点进度百分比，成功后此字段取值为 100。
                     * @param _percent 创建或回滚云硬盘备份点进度百分比，成功后此字段取值为 100。
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
                     * 获取上一次操作
                     * @return LatestOperation 上一次操作
                     * 
                     */
                    std::string GetLatestOperation() const;

                    /**
                     * 设置上一次操作
                     * @param _latestOperation 上一次操作
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
                     * 获取上一次操作状态
                     * @return LatestOperationState 上一次操作状态
                     * 
                     */
                    std::string GetLatestOperationState() const;

                    /**
                     * 设置上一次操作状态
                     * @param _latestOperationState 上一次操作状态
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
                     * 获取上一次请求ID
                     * @return LatestOperationRequestId 上一次请求ID
                     * 
                     */
                    std::string GetLatestOperationRequestId() const;

                    /**
                     * 设置上一次请求ID
                     * @param _latestOperationRequestId 上一次请求ID
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
                     * 获取创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @return CreatedTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @param _createdTime 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
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
                     * 云硬盘备份点ID。
                     */
                    std::string m_diskBackupId;
                    bool m_diskBackupIdHasBeenSet;

                    /**
                     * 创建此云硬盘备份点的云硬盘类型。取值：<li>DATA_DISK：数据盘</li>
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 创建此云硬盘备份点的云硬盘 ID。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 创建此云硬盘备份点的云硬盘大小，单位 GB。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云硬盘备份点名称，用户自定义的云硬盘备份点别名。
                     */
                    std::string m_diskBackupName;
                    bool m_diskBackupNameHasBeenSet;

                    /**
                     * 云硬盘备份点的状态。取值范围：
<li>NORMAL：正常。 </li>
<li>CREATING：创建中。</li>
<li>ROLLBACKING：回滚中。</li>
<li>DELETING：删除中。</li>
                     */
                    std::string m_diskBackupState;
                    bool m_diskBackupStateHasBeenSet;

                    /**
                     * 创建或回滚云硬盘备份点进度百分比，成功后此字段取值为 100。
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 上一次操作
                     */
                    std::string m_latestOperation;
                    bool m_latestOperationHasBeenSet;

                    /**
                     * 上一次操作状态
                     */
                    std::string m_latestOperationState;
                    bool m_latestOperationStateHasBeenSet;

                    /**
                     * 上一次请求ID
                     */
                    std::string m_latestOperationRequestId;
                    bool m_latestOperationRequestIdHasBeenSet;

                    /**
                     * 创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKBACKUP_H_
