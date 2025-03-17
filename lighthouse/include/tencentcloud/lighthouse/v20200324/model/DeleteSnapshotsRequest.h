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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETESNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteSnapshots请求参数结构体
                */
                class DeleteSnapshotsRequest : public AbstractModel
                {
                public:
                    DeleteSnapshotsRequest();
                    ~DeleteSnapshotsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的快照 ID 列表，每次请求批量快照的上限为10个，可通过 <a href="https://cloud.tencent.com/document/product/1207/54388" target="_blank">DescribeSnapshots</a>查询。
                     * @return SnapshotIds 要删除的快照 ID 列表，每次请求批量快照的上限为10个，可通过 <a href="https://cloud.tencent.com/document/product/1207/54388" target="_blank">DescribeSnapshots</a>查询。
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置要删除的快照 ID 列表，每次请求批量快照的上限为10个，可通过 <a href="https://cloud.tencent.com/document/product/1207/54388" target="_blank">DescribeSnapshots</a>查询。
                     * @param _snapshotIds 要删除的快照 ID 列表，每次请求批量快照的上限为10个，可通过 <a href="https://cloud.tencent.com/document/product/1207/54388" target="_blank">DescribeSnapshots</a>查询。
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                private:

                    /**
                     * 要删除的快照 ID 列表，每次请求批量快照的上限为10个，可通过 <a href="https://cloud.tencent.com/document/product/1207/54388" target="_blank">DescribeSnapshots</a>查询。
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETESNAPSHOTSREQUEST_H_
