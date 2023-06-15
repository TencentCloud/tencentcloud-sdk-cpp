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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_AUTOMOUNTCONFIGURATION_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_AUTOMOUNTCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 自动挂载并初始化该数据盘。
                */
                class AutoMountConfiguration : public AbstractModel
                {
                public:
                    AutoMountConfiguration();
                    ~AutoMountConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待挂载的实例ID。指定的实例必须与指定的数据盘处于同一可用区，实例状态必须处于“运行中”状态，且实例必须支持[自动化助手](https://cloud.tencent.com/document/product/1340/50752)。
                     * @return InstanceId 待挂载的实例ID。指定的实例必须与指定的数据盘处于同一可用区，实例状态必须处于“运行中”状态，且实例必须支持[自动化助手](https://cloud.tencent.com/document/product/1340/50752)。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待挂载的实例ID。指定的实例必须与指定的数据盘处于同一可用区，实例状态必须处于“运行中”状态，且实例必须支持[自动化助手](https://cloud.tencent.com/document/product/1340/50752)。
                     * @param _instanceId 待挂载的实例ID。指定的实例必须与指定的数据盘处于同一可用区，实例状态必须处于“运行中”状态，且实例必须支持[自动化助手](https://cloud.tencent.com/document/product/1340/50752)。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例内的挂载点。仅Linux操作系统的实例可传入该参数, 不传则默认挂载在“/data/disk”路径下。
                     * @return MountPoint 实例内的挂载点。仅Linux操作系统的实例可传入该参数, 不传则默认挂载在“/data/disk”路径下。
                     * 
                     */
                    std::string GetMountPoint() const;

                    /**
                     * 设置实例内的挂载点。仅Linux操作系统的实例可传入该参数, 不传则默认挂载在“/data/disk”路径下。
                     * @param _mountPoint 实例内的挂载点。仅Linux操作系统的实例可传入该参数, 不传则默认挂载在“/data/disk”路径下。
                     * 
                     */
                    void SetMountPoint(const std::string& _mountPoint);

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                    /**
                     * 获取文件系统类型。取值: “ext4”、“xfs”。仅Linux操作系统的实例可传入该参数, 不传则默认为“ext4”。
                     * @return FileSystemType 文件系统类型。取值: “ext4”、“xfs”。仅Linux操作系统的实例可传入该参数, 不传则默认为“ext4”。
                     * 
                     */
                    std::string GetFileSystemType() const;

                    /**
                     * 设置文件系统类型。取值: “ext4”、“xfs”。仅Linux操作系统的实例可传入该参数, 不传则默认为“ext4”。
                     * @param _fileSystemType 文件系统类型。取值: “ext4”、“xfs”。仅Linux操作系统的实例可传入该参数, 不传则默认为“ext4”。
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
                     * 待挂载的实例ID。指定的实例必须与指定的数据盘处于同一可用区，实例状态必须处于“运行中”状态，且实例必须支持[自动化助手](https://cloud.tencent.com/document/product/1340/50752)。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例内的挂载点。仅Linux操作系统的实例可传入该参数, 不传则默认挂载在“/data/disk”路径下。
                     */
                    std::string m_mountPoint;
                    bool m_mountPointHasBeenSet;

                    /**
                     * 文件系统类型。取值: “ext4”、“xfs”。仅Linux操作系统的实例可传入该参数, 不传则默认为“ext4”。
                     */
                    std::string m_fileSystemType;
                    bool m_fileSystemTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_AUTOMOUNTCONFIGURATION_H_
