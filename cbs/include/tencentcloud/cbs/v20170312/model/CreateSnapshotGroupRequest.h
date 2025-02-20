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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTGROUPREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTGROUPREQUEST_H_

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
                * CreateSnapshotGroup请求参数结构体
                */
                class CreateSnapshotGroupRequest : public AbstractModel
                {
                public:
                    CreateSnapshotGroupRequest();
                    ~CreateSnapshotGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要创建快照组的云硬盘ID列表，必须选择挂载在同一实例上的盘列表。
                     * @return DiskIds 需要创建快照组的云硬盘ID列表，必须选择挂载在同一实例上的盘列表。
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置需要创建快照组的云硬盘ID列表，必须选择挂载在同一实例上的盘列表。
                     * @param _diskIds 需要创建快照组的云硬盘ID列表，必须选择挂载在同一实例上的盘列表。
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取快照组名称，快照组关联的快照也会继承快照组的名称。例如：快照组名称为testSnapshotGroup，快照组关联两个快照，则两个快照的名称分别为testSnapshotGroup_0，testSnapshotGroup_1。
                     * @return SnapshotGroupName 快照组名称，快照组关联的快照也会继承快照组的名称。例如：快照组名称为testSnapshotGroup，快照组关联两个快照，则两个快照的名称分别为testSnapshotGroup_0，testSnapshotGroup_1。
                     * 
                     */
                    std::string GetSnapshotGroupName() const;

                    /**
                     * 设置快照组名称，快照组关联的快照也会继承快照组的名称。例如：快照组名称为testSnapshotGroup，快照组关联两个快照，则两个快照的名称分别为testSnapshotGroup_0，testSnapshotGroup_1。
                     * @param _snapshotGroupName 快照组名称，快照组关联的快照也会继承快照组的名称。例如：快照组名称为testSnapshotGroup，快照组关联两个快照，则两个快照的名称分别为testSnapshotGroup_0，testSnapshotGroup_1。
                     * 
                     */
                    void SetSnapshotGroupName(const std::string& _snapshotGroupName);

                    /**
                     * 判断参数 SnapshotGroupName 是否已赋值
                     * @return SnapshotGroupName 是否已赋值
                     * 
                     */
                    bool SnapshotGroupNameHasBeenSet() const;

                    /**
                     * 获取快照组需要绑定的标签列表。
                     * @return Tags 快照组需要绑定的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置快照组需要绑定的标签列表。
                     * @param _tags 快照组需要绑定的标签列表。
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
                     * 需要创建快照组的云硬盘ID列表，必须选择挂载在同一实例上的盘列表。
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 快照组名称，快照组关联的快照也会继承快照组的名称。例如：快照组名称为testSnapshotGroup，快照组关联两个快照，则两个快照的名称分别为testSnapshotGroup_0，testSnapshotGroup_1。
                     */
                    std::string m_snapshotGroupName;
                    bool m_snapshotGroupNameHasBeenSet;

                    /**
                     * 快照组需要绑定的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_CREATESNAPSHOTGROUPREQUEST_H_
