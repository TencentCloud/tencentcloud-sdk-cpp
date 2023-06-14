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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCEADVANCEDSETTINGS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCEADVANCEDSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器导入实例高级设置
                */
                class InstanceAdvancedSettings : public AbstractModel
                {
                public:
                    InstanceAdvancedSettings();
                    ~InstanceAdvancedSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountTarget 数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountTarget() const;

                    /**
                     * 设置数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountTarget 数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMountTarget(const std::string& _mountTarget);

                    /**
                     * 判断参数 MountTarget 是否已赋值
                     * @return MountTarget 是否已赋值
                     * 
                     */
                    bool MountTargetHasBeenSet() const;

                    /**
                     * 获取dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DockerGraphPath dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDockerGraphPath() const;

                    /**
                     * 设置dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dockerGraphPath dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDockerGraphPath(const std::string& _dockerGraphPath);

                    /**
                     * 判断参数 DockerGraphPath 是否已赋值
                     * @return DockerGraphPath 是否已赋值
                     * 
                     */
                    bool DockerGraphPathHasBeenSet() const;

                private:

                    /**
                     * 数据盘挂载点, 默认不挂载数据盘. 已格式化的 ext3，ext4，xfs 文件系统的数据盘将直接挂载，其他文件系统或未格式化的数据盘将自动格式化为ext4 并挂载，请注意备份数据! 无数据盘或有多块数据盘的云主机此设置不生效。
注意，注意，多盘场景请使用下方的DataDisks数据结构，设置对应的云盘类型、云盘大小、挂载路径、是否格式化等信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountTarget;
                    bool m_mountTargetHasBeenSet;

                    /**
                     * dockerd --graph 指定值, 默认为 /var/lib/docker
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dockerGraphPath;
                    bool m_dockerGraphPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_INSTANCEADVANCEDSETTINGS_H_
