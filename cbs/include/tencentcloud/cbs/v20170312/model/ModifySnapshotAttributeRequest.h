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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_

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
                * ModifySnapshotAttribute请求参数结构体
                */
                class ModifySnapshotAttributeRequest : public AbstractModel
                {
                public:
                    ModifySnapshotAttributeRequest();
                    ~ModifySnapshotAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询。
                     * @return SnapshotId 快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询。
                     * @param _snapshotId 快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询。
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
                     * 获取快照的保留方式，FALSE表示非永久保留，TRUE表示永久保留。
                     * @return IsPermanent 快照的保留方式，FALSE表示非永久保留，TRUE表示永久保留。
                     * 
                     */
                    bool GetIsPermanent() const;

                    /**
                     * 设置快照的保留方式，FALSE表示非永久保留，TRUE表示永久保留。
                     * @param _isPermanent 快照的保留方式，FALSE表示非永久保留，TRUE表示永久保留。
                     * 
                     */
                    void SetIsPermanent(const bool& _isPermanent);

                    /**
                     * 判断参数 IsPermanent 是否已赋值
                     * @return IsPermanent 是否已赋值
                     * 
                     */
                    bool IsPermanentHasBeenSet() const;

                    /**
                     * 获取新的快照名称。最长为60个字符。
                     * @return SnapshotName 新的快照名称。最长为60个字符。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置新的快照名称。最长为60个字符。
                     * @param _snapshotName 新的快照名称。最长为60个字符。
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
                     * 获取快照的到期时间；设置好快照将会被同时设置为非永久保留方式；超过到期时间后快照将会被自动删除。注：该参数仅在参数IsPermanent为False时生效。
                     * @return Deadline 快照的到期时间；设置好快照将会被同时设置为非永久保留方式；超过到期时间后快照将会被自动删除。注：该参数仅在参数IsPermanent为False时生效。
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置快照的到期时间；设置好快照将会被同时设置为非永久保留方式；超过到期时间后快照将会被自动删除。注：该参数仅在参数IsPermanent为False时生效。
                     * @param _deadline 快照的到期时间；设置好快照将会被同时设置为非永久保留方式；超过到期时间后快照将会被自动删除。注：该参数仅在参数IsPermanent为False时生效。
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                private:

                    /**
                     * 快照ID, 可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 快照的保留方式，FALSE表示非永久保留，TRUE表示永久保留。
                     */
                    bool m_isPermanent;
                    bool m_isPermanentHasBeenSet;

                    /**
                     * 新的快照名称。最长为60个字符。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 快照的到期时间；设置好快照将会被同时设置为非永久保留方式；超过到期时间后快照将会被自动删除。注：该参数仅在参数IsPermanent为False时生效。
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_MODIFYSNAPSHOTATTRIBUTEREQUEST_H_
