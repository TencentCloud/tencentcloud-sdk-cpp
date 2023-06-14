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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_AUTOMOUNTCONFIGURATION_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_AUTOMOUNTCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 描述了新购云硬盘时自动将云硬盘初始化并挂载至云服务器内部的配置。
                */
                class AutoMountConfiguration : public AbstractModel
                {
                public:
                    AutoMountConfiguration();
                    ~AutoMountConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要挂载到的实例ID。
                     * @return InstanceId 要挂载到的实例ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceId() const;

                    /**
                     * 设置要挂载到的实例ID。
                     * @param _instanceId 要挂载到的实例ID。
                     * 
                     */
                    void SetInstanceId(const std::vector<std::string>& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取子机内的挂载点。
                     * @return MountPoint 子机内的挂载点。
                     * 
                     */
                    std::vector<std::string> GetMountPoint() const;

                    /**
                     * 设置子机内的挂载点。
                     * @param _mountPoint 子机内的挂载点。
                     * 
                     */
                    void SetMountPoint(const std::vector<std::string>& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                    /**
                     * 获取文件系统类型，支持的有 ext4、xfs。
                     * @return FileSystemType 文件系统类型，支持的有 ext4、xfs。
                     * 
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置文件系统类型，支持的有 ext4、xfs。
                     * @param _fileSystemType 文件系统类型，支持的有 ext4、xfs。
                     * 
                     */
                    void SetFileSystemType(const std::string& _fileSystemType);

                    /**
                     * 判断参数 FileSystemType 是否已赋值
                     * @return FileSystemType 是否已赋值
                     * 
                     */
                    bool FileSystemTypeHasBeenSet() const;

                private:

                    /**
                     * 要挂载到的实例ID。
                     */
                    std::vector<std::string> m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 子机内的挂载点。
                     */
                    std::vector<std::string> m_mountPoint;
                    bool m_mountPointHasBeenSet;

                    /**
                     * 文件系统类型，支持的有 ext4、xfs。
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_AUTOMOUNTCONFIGURATION_H_
