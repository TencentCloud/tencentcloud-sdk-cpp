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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_USERQUOTA_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_USERQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 文件系统配额信息
                */
                class UserQuota : public AbstractModel
                {
                public:
                    UserQuota();
                    ~UserQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定配额类型，包括Uid、Gid、Dir
                     * @return UserType 指定配额类型，包括Uid、Gid、Dir
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置指定配额类型，包括Uid、Gid、Dir
                     * @param _userType 指定配额类型，包括Uid、Gid、Dir
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取UID/GID信息
                     * @return UserId UID/GID信息
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置UID/GID信息
                     * @param _userId UID/GID信息
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取容量硬限制，单位GiB
                     * @return CapacityHardLimit 容量硬限制，单位GiB
                     * 
                     */
                    uint64_t GetCapacityHardLimit() const;

                    /**
                     * 设置容量硬限制，单位GiB
                     * @param _capacityHardLimit 容量硬限制，单位GiB
                     * 
                     */
                    void SetCapacityHardLimit(const uint64_t& _capacityHardLimit);

                    /**
                     * 判断参数 CapacityHardLimit 是否已赋值
                     * @return CapacityHardLimit 是否已赋值
                     * 
                     */
                    bool CapacityHardLimitHasBeenSet() const;

                    /**
                     * 获取文件硬限制，单位个
                     * @return FileHardLimit 文件硬限制，单位个
                     * 
                     */
                    uint64_t GetFileHardLimit() const;

                    /**
                     * 设置文件硬限制，单位个
                     * @param _fileHardLimit 文件硬限制，单位个
                     * 
                     */
                    void SetFileHardLimit(const uint64_t& _fileHardLimit);

                    /**
                     * 判断参数 FileHardLimit 是否已赋值
                     * @return FileHardLimit 是否已赋值
                     * 
                     */
                    bool FileHardLimitHasBeenSet() const;

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
                     * 获取容量使用，单位GiB
                     * @return CapacityUsed 容量使用，单位GiB
                     * 
                     */
                    uint64_t GetCapacityUsed() const;

                    /**
                     * 设置容量使用，单位GiB
                     * @param _capacityUsed 容量使用，单位GiB
                     * 
                     */
                    void SetCapacityUsed(const uint64_t& _capacityUsed);

                    /**
                     * 判断参数 CapacityUsed 是否已赋值
                     * @return CapacityUsed 是否已赋值
                     * 
                     */
                    bool CapacityUsedHasBeenSet() const;

                    /**
                     * 获取文件使用个数，单位个
                     * @return FileUsed 文件使用个数，单位个
                     * 
                     */
                    uint64_t GetFileUsed() const;

                    /**
                     * 设置文件使用个数，单位个
                     * @param _fileUsed 文件使用个数，单位个
                     * 
                     */
                    void SetFileUsed(const uint64_t& _fileUsed);

                    /**
                     * 判断参数 FileUsed 是否已赋值
                     * @return FileUsed 是否已赋值
                     * 
                     */
                    bool FileUsedHasBeenSet() const;

                    /**
                     * 获取目录配额的目录绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DirectoryPath 目录配额的目录绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置目录配额的目录绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _directoryPath 目录配额的目录绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDirectoryPath(const std::string& _directoryPath);

                    /**
                     * 判断参数 DirectoryPath 是否已赋值
                     * @return DirectoryPath 是否已赋值
                     * 
                     */
                    bool DirectoryPathHasBeenSet() const;

                    /**
                     * 获取配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败
                     * @return Status 配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败
                     * @param _status 配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 指定配额类型，包括Uid、Gid、Dir
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * UID/GID信息
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 容量硬限制，单位GiB
                     */
                    uint64_t m_capacityHardLimit;
                    bool m_capacityHardLimitHasBeenSet;

                    /**
                     * 文件硬限制，单位个
                     */
                    uint64_t m_fileHardLimit;
                    bool m_fileHardLimitHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 容量使用，单位GiB
                     */
                    uint64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * 文件使用个数，单位个
                     */
                    uint64_t m_fileUsed;
                    bool m_fileUsedHasBeenSet;

                    /**
                     * 目录配额的目录绝对路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                    /**
                     * 配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_USERQUOTA_H_
