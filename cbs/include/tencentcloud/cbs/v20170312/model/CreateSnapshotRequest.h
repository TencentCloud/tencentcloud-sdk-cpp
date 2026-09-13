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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateSnapshot请求参数结构体
                */
                class CreateSnapshotRequest : public AbstractModel
                {
                public:
                    CreateSnapshotRequest();
                    ~CreateSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要创建快照的云硬盘ID，可通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     * @return DiskId <p>需要创建快照的云硬盘ID，可通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>需要创建快照的云硬盘ID，可通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     * @param _diskId <p>需要创建快照的云硬盘ID，可通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
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
                     * 获取<p>快照名称，不传则新快照名称默认为“未命名”。</p>
                     * @return SnapshotName <p>快照名称，不传则新快照名称默认为“未命名”。</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>快照名称，不传则新快照名称默认为“未命名”。</p>
                     * @param _snapshotName <p>快照名称，不传则新快照名称默认为“未命名”。</p>
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
                     * 获取<p>快照的到期时间，到期后该快照将会自动删除，需要传入UTC时间下的ISO-8601标准时间格式，例如:2022-01-08T09:47:55+00:00。到期时间最小可设置为一天后的当前时间。</p>
                     * @return Deadline <p>快照的到期时间，到期后该快照将会自动删除，需要传入UTC时间下的ISO-8601标准时间格式，例如:2022-01-08T09:47:55+00:00。到期时间最小可设置为一天后的当前时间。</p>
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置<p>快照的到期时间，到期后该快照将会自动删除，需要传入UTC时间下的ISO-8601标准时间格式，例如:2022-01-08T09:47:55+00:00。到期时间最小可设置为一天后的当前时间。</p>
                     * @param _deadline <p>快照的到期时间，到期后该快照将会自动删除，需要传入UTC时间下的ISO-8601标准时间格式，例如:2022-01-08T09:47:55+00:00。到期时间最小可设置为一天后的当前时间。</p>
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取<p>云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过<a href="/document/product/362/80278">DescribeDiskBackups</a>接口查询。</p>
                     * @return DiskBackupId <p>云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过<a href="/document/product/362/80278">DescribeDiskBackups</a>接口查询。</p>
                     * 
                     */
                    std::string GetDiskBackupId() const;

                    /**
                     * 设置<p>云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过<a href="/document/product/362/80278">DescribeDiskBackups</a>接口查询。</p>
                     * @param _diskBackupId <p>云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过<a href="/document/product/362/80278">DescribeDiskBackups</a>接口查询。</p>
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
                     * 获取<p>快照绑定的标签。</p>
                     * @return Tags <p>快照绑定的标签。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>快照绑定的标签。</p>
                     * @param _tags <p>快照绑定的标签。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>是否创建极速快照。</p><p>极速快照数据存储在云硬盘所在的存储集群上，可实现秒级创建和回滚。该功能当前通过白名单控制开放。</p>
                     * @return LocalSnap <p>是否创建极速快照。</p><p>极速快照数据存储在云硬盘所在的存储集群上，可实现秒级创建和回滚。该功能当前通过白名单控制开放。</p>
                     * 
                     */
                    bool GetLocalSnap() const;

                    /**
                     * 设置<p>是否创建极速快照。</p><p>极速快照数据存储在云硬盘所在的存储集群上，可实现秒级创建和回滚。该功能当前通过白名单控制开放。</p>
                     * @param _localSnap <p>是否创建极速快照。</p><p>极速快照数据存储在云硬盘所在的存储集群上，可实现秒级创建和回滚。该功能当前通过白名单控制开放。</p>
                     * 
                     */
                    void SetLocalSnap(const bool& _localSnap);

                    /**
                     * 判断参数 LocalSnap 是否已赋值
                     * @return LocalSnap 是否已赋值
                     * 
                     */
                    bool LocalSnapHasBeenSet() const;

                    /**
                     * 获取<p>快照关联云硬盘类型, SYSTEM_DISK: 系统盘, DATA_DISK: 数据盘,非必填参数，不填时快照类型与云盘类型保持一致， 该参数基于某些场景用户需要将系统盘创建出数据盘快照共享使用。</p>
                     * @return DiskUsage <p>快照关联云硬盘类型, SYSTEM_DISK: 系统盘, DATA_DISK: 数据盘,非必填参数，不填时快照类型与云盘类型保持一致， 该参数基于某些场景用户需要将系统盘创建出数据盘快照共享使用。</p>
                     * 
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置<p>快照关联云硬盘类型, SYSTEM_DISK: 系统盘, DATA_DISK: 数据盘,非必填参数，不填时快照类型与云盘类型保持一致， 该参数基于某些场景用户需要将系统盘创建出数据盘快照共享使用。</p>
                     * @param _diskUsage <p>快照关联云硬盘类型, SYSTEM_DISK: 系统盘, DATA_DISK: 数据盘,非必填参数，不填时快照类型与云盘类型保持一致， 该参数基于某些场景用户需要将系统盘创建出数据盘快照共享使用。</p>
                     * 
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     * 
                     */
                    bool DiskUsageHasBeenSet() const;

                private:

                    /**
                     * <p>需要创建快照的云硬盘ID，可通过<a href="/document/product/362/16315">DescribeDisks</a>接口查询。</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>快照名称，不传则新快照名称默认为“未命名”。</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>快照的到期时间，到期后该快照将会自动删除，需要传入UTC时间下的ISO-8601标准时间格式，例如:2022-01-08T09:47:55+00:00。到期时间最小可设置为一天后的当前时间。</p>
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过<a href="/document/product/362/80278">DescribeDiskBackups</a>接口查询。</p>
                     */
                    std::string m_diskBackupId;
                    bool m_diskBackupIdHasBeenSet;

                    /**
                     * <p>快照绑定的标签。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否创建极速快照。</p><p>极速快照数据存储在云硬盘所在的存储集群上，可实现秒级创建和回滚。该功能当前通过白名单控制开放。</p>
                     */
                    bool m_localSnap;
                    bool m_localSnapHasBeenSet;

                    /**
                     * <p>快照关联云硬盘类型, SYSTEM_DISK: 系统盘, DATA_DISK: 数据盘,非必填参数，不填时快照类型与云盘类型保持一致， 该参数基于某些场景用户需要将系统盘创建出数据盘快照共享使用。</p>
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_
