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
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置需要创建快照的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @param DiskId 需要创建快照的云硬盘ID，可通过[DescribeDisks](/document/product/362/16315)接口查询。
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取快照名称，不传则新快照名称默认为“未命名”。
                     * @return SnapshotName 快照名称，不传则新快照名称默认为“未命名”。
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名称，不传则新快照名称默认为“未命名”。
                     * @param SnapshotName 快照名称，不传则新快照名称默认为“未命名”。
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00
                     * @return Deadline 快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00
                     * @param Deadline 快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

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
                     * 快照的到期时间，到期后该快照将会自动删除,需要传入UTC时间下的ISO-8601标准时间格式,例如:2022-01-08T09:47:55+00:00
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTREQUEST_H_
