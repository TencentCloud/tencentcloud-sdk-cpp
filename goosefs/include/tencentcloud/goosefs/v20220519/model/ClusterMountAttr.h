/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLUSTERMOUNTATTR_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLUSTERMOUNTATTR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 客户端集群挂载信息
                */
                class ClusterMountAttr : public AbstractModel
                {
                public:
                    ClusterMountAttr();
                    ~ClusterMountAttr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挂载的文件系统Id
                     * @return StorageFileSystemId 挂载的文件系统Id
                     * 
                     */
                    std::string GetStorageFileSystemId() const;

                    /**
                     * 设置挂载的文件系统Id
                     * @param _storageFileSystemId 挂载的文件系统Id
                     * 
                     */
                    void SetStorageFileSystemId(const std::string& _storageFileSystemId);

                    /**
                     * 判断参数 StorageFileSystemId 是否已赋值
                     * @return StorageFileSystemId 是否已赋值
                     * 
                     */
                    bool StorageFileSystemIdHasBeenSet() const;

                    /**
                     * 获取客户端集群挂载点。入参是节点的自定义挂载点，出参是集群的默认挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountPoint 客户端集群挂载点。入参是节点的自定义挂载点，出参是集群的默认挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountPoint() const;

                    /**
                     * 设置客户端集群挂载点。入参是节点的自定义挂载点，出参是集群的默认挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountPoint 客户端集群挂载点。入参是节点的自定义挂载点，出参是集群的默认挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMountPoint(const std::string& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                private:

                    /**
                     * 挂载的文件系统Id
                     */
                    std::string m_storageFileSystemId;
                    bool m_storageFileSystemIdHasBeenSet;

                    /**
                     * 客户端集群挂载点。入参是节点的自定义挂载点，出参是集群的默认挂载点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountPoint;
                    bool m_mountPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_CLUSTERMOUNTATTR_H_
