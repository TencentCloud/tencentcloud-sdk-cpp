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
                     * 获取需要创建快照的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @return DiskId 需要创建快照的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置需要创建快照的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @param _diskId 需要创建快照的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
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
                     * 获取快照名称，不传则新快照名称默认为“未命名”。
                     * @return SnapshotName 快照名称，不传则新快照名称默认为“未命名”。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称，不传则新快照名称默认为“未命名”。
                     * @param _snapshotName 快照名称，不传则新快照名称默认为“未命名”。
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
                     * 获取快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00,。到期时间最小可设置为一天后的当前时间。
                     * @return Deadline 快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00,。到期时间最小可设置为一天后的当前时间。
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00,。到期时间最小可设置为一天后的当前时间。
                     * @param _deadline 快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00,。到期时间最小可设置为一天后的当前时间。
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
                     * 获取云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     * @return DiskBackupId 云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     * 
                     */
                    std::string GetDiskBackupId() const;

                    /**
                     * 设置云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     * @param _diskBackupId 云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
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
                     * 获取快照绑定的标签。
                     * @return Tags 快照绑定的标签。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置快照绑定的标签。
                     * @param _tags 快照绑定的标签。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 需要创建快照的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 快照名称，不传则新快照名称默认为“未命名”。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00,。到期时间最小可设置为一天后的当前时间。
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 云硬盘备份点ID。传入此参数时，将通过备份点创建快照。备份点 ID 可以通过[DescribeDiskBackups](/document/product/362/80278)接口查询。
                     */
                    std::string m_diskBackupId;
                    bool m_diskBackupIdHasBeenSet;

                    /**
                     * 快照绑定的标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_
