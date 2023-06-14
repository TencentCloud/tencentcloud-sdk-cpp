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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSHAREPERMISSIONREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSHAREPERMISSIONREQUEST_H_

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
                * DescribeSnapshotSharePermission请求参数结构体
                */
                class DescribeSnapshotSharePermissionRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotSharePermissionRequest();
                    ~DescribeSnapshotSharePermissionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询快照的ID。可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     * @return SnapshotId 要查询快照的ID。可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置要查询快照的ID。可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     * @param _snapshotId 要查询快照的ID。可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                private:

                    /**
                     * 要查询快照的ID。可通过[DescribeSnapshots](https://cloud.tencent.com/document/api/362/15647)查询获取。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBESNAPSHOTSHAREPERMISSIONREQUEST_H_
