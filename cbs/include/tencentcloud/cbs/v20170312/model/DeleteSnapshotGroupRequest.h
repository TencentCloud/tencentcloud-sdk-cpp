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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DELETESNAPSHOTGROUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DELETESNAPSHOTGROUPREQUEST_H_

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
                * DeleteSnapshotGroup请求参数结构体
                */
                class DeleteSnapshotGroupRequest : public AbstractModel
                {
                public:
                    DeleteSnapshotGroupRequest();
                    ~DeleteSnapshotGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照组ID。
                     * @return SnapshotGroupId 快照组ID。
                     * 
                     */
                    std::string GetSnapshotGroupId() const;

                    /**
                     * 设置快照组ID。
                     * @param _snapshotGroupId 快照组ID。
                     * 
                     */
                    void SetSnapshotGroupId(const std::string& _snapshotGroupId);

                    /**
                     * 判断参数 SnapshotGroupId 是否已赋值
                     * @return SnapshotGroupId 是否已赋值
                     * 
                     */
                    bool SnapshotGroupIdHasBeenSet() const;

                    /**
                     * 获取快照组ID 列表。此参数与快照组 ID 至少传 1 个，同时传会与快照组 ID 合并。
                     * @return SnapshotGroupIds 快照组ID 列表。此参数与快照组 ID 至少传 1 个，同时传会与快照组 ID 合并。
                     * 
                     */
                    std::vector<std::string> GetSnapshotGroupIds() const;

                    /**
                     * 设置快照组ID 列表。此参数与快照组 ID 至少传 1 个，同时传会与快照组 ID 合并。
                     * @param _snapshotGroupIds 快照组ID 列表。此参数与快照组 ID 至少传 1 个，同时传会与快照组 ID 合并。
                     * 
                     */
                    void SetSnapshotGroupIds(const std::vector<std::string>& _snapshotGroupIds);

                    /**
                     * 判断参数 SnapshotGroupIds 是否已赋值
                     * @return SnapshotGroupIds 是否已赋值
                     * 
                     */
                    bool SnapshotGroupIdsHasBeenSet() const;

                    /**
                     * 获取是否同时删除快照组关联的镜像；取值为false，表示不删除快照组绑定的镜像，此时，如果快照组有绑定的镜像，删除会失败；取值为true，表示同时删除快照组绑定的镜像；默认值为false。
                     * @return DeleteBindImages 是否同时删除快照组关联的镜像；取值为false，表示不删除快照组绑定的镜像，此时，如果快照组有绑定的镜像，删除会失败；取值为true，表示同时删除快照组绑定的镜像；默认值为false。
                     * 
                     */
                    bool GetDeleteBindImages() const;

                    /**
                     * 设置是否同时删除快照组关联的镜像；取值为false，表示不删除快照组绑定的镜像，此时，如果快照组有绑定的镜像，删除会失败；取值为true，表示同时删除快照组绑定的镜像；默认值为false。
                     * @param _deleteBindImages 是否同时删除快照组关联的镜像；取值为false，表示不删除快照组绑定的镜像，此时，如果快照组有绑定的镜像，删除会失败；取值为true，表示同时删除快照组绑定的镜像；默认值为false。
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
                     * 快照组ID。
                     */
                    std::string m_snapshotGroupId;
                    bool m_snapshotGroupIdHasBeenSet;

                    /**
                     * 快照组ID 列表。此参数与快照组 ID 至少传 1 个，同时传会与快照组 ID 合并。
                     */
                    std::vector<std::string> m_snapshotGroupIds;
                    bool m_snapshotGroupIdsHasBeenSet;

                    /**
                     * 是否同时删除快照组关联的镜像；取值为false，表示不删除快照组绑定的镜像，此时，如果快照组有绑定的镜像，删除会失败；取值为true，表示同时删除快照组绑定的镜像；默认值为false。
                     */
                    bool m_deleteBindImages;
                    bool m_deleteBindImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DELETESNAPSHOTGROUPREQUEST_H_
