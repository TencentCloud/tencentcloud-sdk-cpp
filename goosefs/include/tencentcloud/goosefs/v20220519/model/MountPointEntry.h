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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MOUNTPOINTENTRY_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MOUNTPOINTENTRY_H_

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
                * 客户端挂载点
                */
                class MountPointEntry : public AbstractModel
                {
                public:
                    MountPointEntry();
                    ~MountPointEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return StorageFileSystemId 
                     * 
                     */
                    std::string GetStorageFileSystemId() const;

                    /**
                     * 设置
                     * @param _storageFileSystemId 
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
                     * 获取
                     * @return MountDir 
                     * 
                     */
                    std::string GetMountDir() const;

                    /**
                     * 设置
                     * @param _mountDir 
                     * 
                     */
                    void SetMountDir(const std::string& _mountDir);

                    /**
                     * 判断参数 MountDir 是否已赋值
                     * @return MountDir 是否已赋值
                     * 
                     */
                    bool MountDirHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_storageFileSystemId;
                    bool m_storageFileSystemIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_mountDir;
                    bool m_mountDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_MOUNTPOINTENTRY_H_
