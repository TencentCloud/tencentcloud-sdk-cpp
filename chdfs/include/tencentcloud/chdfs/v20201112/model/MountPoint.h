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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_MOUNTPOINT_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_MOUNTPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * 挂载点
                */
                class MountPoint : public AbstractModel
                {
                public:
                    MountPoint();
                    ~MountPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挂载点ID
                     * @return MountPointId 挂载点ID
                     * 
                     */
                    std::string GetMountPointId() const;

                    /**
                     * 设置挂载点ID
                     * @param _mountPointId 挂载点ID
                     * 
                     */
                    void SetMountPointId(const std::string& _mountPointId);

                    /**
                     * 判断参数 MountPointId 是否已赋值
                     * @return MountPointId 是否已赋值
                     * 
                     */
                    bool MountPointIdHasBeenSet() const;

                    /**
                     * 获取挂载点名称
                     * @return MountPointName 挂载点名称
                     * 
                     */
                    std::string GetMountPointName() const;

                    /**
                     * 设置挂载点名称
                     * @param _mountPointName 挂载点名称
                     * 
                     */
                    void SetMountPointName(const std::string& _mountPointName);

                    /**
                     * 判断参数 MountPointName 是否已赋值
                     * @return MountPointName 是否已赋值
                     * 
                     */
                    bool MountPointNameHasBeenSet() const;

                    /**
                     * 获取文件系统ID
                     * @return FileSystemId 文件系统ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID
                     * @param _fileSystemId 文件系统ID
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取挂载点状态（1：打开；2：关闭）
                     * @return Status 挂载点状态（1：打开；2：关闭）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置挂载点状态（1：打开；2：关闭）
                     * @param _status 挂载点状态（1：打开；2：关闭）
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取绑定的权限组ID列表
                     * @return AccessGroupIds 绑定的权限组ID列表
                     * 
                     */
                    std::vector<std::string> GetAccessGroupIds() const;

                    /**
                     * 设置绑定的权限组ID列表
                     * @param _accessGroupIds 绑定的权限组ID列表
                     * 
                     */
                    void SetAccessGroupIds(const std::vector<std::string>& _accessGroupIds);

                    /**
                     * 判断参数 AccessGroupIds 是否已赋值
                     * @return AccessGroupIds 是否已赋值
                     * 
                     */
                    bool AccessGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 挂载点ID
                     */
                    std::string m_mountPointId;
                    bool m_mountPointIdHasBeenSet;

                    /**
                     * 挂载点名称
                     */
                    std::string m_mountPointName;
                    bool m_mountPointNameHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 挂载点状态（1：打开；2：关闭）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 绑定的权限组ID列表
                     */
                    std::vector<std::string> m_accessGroupIds;
                    bool m_accessGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_MOUNTPOINT_H_
