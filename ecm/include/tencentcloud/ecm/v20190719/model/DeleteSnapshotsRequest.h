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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DELETESNAPSHOTSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DELETESNAPSHOTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取要删除的快照ID列表，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * @return SnapshotIds 要删除的快照ID列表，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * 
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置要删除的快照ID列表，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * @param _snapshotIds 要删除的快照ID列表，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * 
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     * 
                     */
                    bool SnapshotIdsHasBeenSet() const;

                    /**
                     * 获取是否强制删除快照关联的镜像
                     * @return DeleteBindImages 是否强制删除快照关联的镜像
                     * 
                     */
                    bool GetDeleteBindImages() const;

                    /**
                     * 设置是否强制删除快照关联的镜像
                     * @param _deleteBindImages 是否强制删除快照关联的镜像
                     * 
                     */
                    void SetDeleteBindImages(const bool& _deleteBindImages);

                    /**
                     * 判断参数 DeleteBindImages 是否已赋值
                     * @return DeleteBindImages 是否已赋值
                     * 
                     */
                    bool DeleteBindImagesHasBeenSet() const;

                private:

                    /**
                     * 要删除的快照ID列表，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                    /**
                     * 是否强制删除快照关联的镜像
                     */
                    bool m_deleteBindImages;
                    bool m_deleteBindImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DELETESNAPSHOTSREQUEST_H_
