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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVOLUMEMOUNT_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVOLUMEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/CloudBaseRunNfsVolumeSource.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * cfs挂载点
                */
                class CloudBaseRunVolumeMount : public AbstractModel
                {
                public:
                    CloudBaseRunVolumeMount();
                    ~CloudBaseRunVolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源名
                     * @return Name 资源名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名
                     * @param _name 资源名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取挂载路径
                     * @return MountPath 挂载路径
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置挂载路径
                     * @param _mountPath 挂载路径
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取是否只读
                     * @return ReadOnly 是否只读
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否只读
                     * @param _readOnly 是否只读
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取Nfs挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NfsVolumes Nfs挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudBaseRunNfsVolumeSource> GetNfsVolumes() const;

                    /**
                     * 设置Nfs挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nfsVolumes Nfs挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNfsVolumes(const std::vector<CloudBaseRunNfsVolumeSource>& _nfsVolumes);

                    /**
                     * 判断参数 NfsVolumes 是否已赋值
                     * @return NfsVolumes 是否已赋值
                     * 
                     */
                    bool NfsVolumesHasBeenSet() const;

                    /**
                     * 获取挂载配置
                     * @return MountPropagation 挂载配置
                     * 
                     */
                    std::string GetMountPropagation() const;

                    /**
                     * 设置挂载配置
                     * @param _mountPropagation 挂载配置
                     * 
                     */
                    void SetMountPropagation(const std::string& _mountPropagation);

                    /**
                     * 判断参数 MountPropagation 是否已赋值
                     * @return MountPropagation 是否已赋值
                     * 
                     */
                    bool MountPropagationHasBeenSet() const;

                private:

                    /**
                     * 资源名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 挂载路径
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * 是否只读
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * Nfs挂载信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudBaseRunNfsVolumeSource> m_nfsVolumes;
                    bool m_nfsVolumesHasBeenSet;

                    /**
                     * 挂载配置
                     */
                    std::string m_mountPropagation;
                    bool m_mountPropagationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASERUNVOLUMEMOUNT_H_
