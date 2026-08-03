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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_STORAGEMOUNT_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_STORAGEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/StorageSource.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱工具中实例存储挂载配置
                */
                class StorageMount : public AbstractModel
                {
                public:
                    StorageMount();
                    ~StorageMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储挂载配置名称</p>
                     * @return Name <p>存储挂载配置名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>存储挂载配置名称</p>
                     * @param _name <p>存储挂载配置名称</p>
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
                     * 获取<p>存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageSource <p>存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StorageSource GetStorageSource() const;

                    /**
                     * 设置<p>存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageSource <p>存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageSource(const StorageSource& _storageSource);

                    /**
                     * 判断参数 StorageSource 是否已赋值
                     * @return StorageSource 是否已赋值
                     * 
                     */
                    bool StorageSourceHasBeenSet() const;

                    /**
                     * 获取<p>沙箱实例本地挂载路径</p>
                     * @return MountPath <p>沙箱实例本地挂载路径</p>
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置<p>沙箱实例本地挂载路径</p>
                     * @param _mountPath <p>沙箱实例本地挂载路径</p>
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
                     * 获取<p>存储挂载读写权限配置，默认为false</p>
                     * @return ReadOnly <p>存储挂载读写权限配置，默认为false</p>
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置<p>存储挂载读写权限配置，默认为false</p>
                     * @param _readOnly <p>存储挂载读写权限配置，默认为false</p>
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                private:

                    /**
                     * <p>存储挂载配置名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>存储配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StorageSource m_storageSource;
                    bool m_storageSourceHasBeenSet;

                    /**
                     * <p>沙箱实例本地挂载路径</p>
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * <p>存储挂载读写权限配置，默认为false</p>
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_STORAGEMOUNT_H_
