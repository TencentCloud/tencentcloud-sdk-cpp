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
                     * 获取<p>指定配额类型，包括Uid、Gid、Dir</p>
                     * @return UserType <p>指定配额类型，包括Uid、Gid、Dir</p>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置<p>指定配额类型，包括Uid、Gid、Dir</p>
                     * @param _userType <p>指定配额类型，包括Uid、Gid、Dir</p>
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
                     * 获取<p>UID/GID信息</p>
                     * @return UserId <p>UID/GID信息</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>UID/GID信息</p>
                     * @param _userId <p>UID/GID信息</p>
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
                     * 获取<p>容量硬限制，单位GiB</p>
                     * @return CapacityHardLimit <p>容量硬限制，单位GiB</p>
                     * 
                     */
                    uint64_t GetCapacityHardLimit() const;

                    /**
                     * 设置<p>容量硬限制，单位GiB</p>
                     * @param _capacityHardLimit <p>容量硬限制，单位GiB</p>
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
                     * 获取<p>文件硬限制，单位个</p>
                     * @return FileHardLimit <p>文件硬限制，单位个</p>
                     * 
                     */
                    uint64_t GetFileHardLimit() const;

                    /**
                     * 设置<p>文件硬限制，单位个</p>
                     * @param _fileHardLimit <p>文件硬限制，单位个</p>
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
                     * 获取<p>文件系统ID</p>
                     * @return FileSystemId <p>文件系统ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统ID</p>
                     * @param _fileSystemId <p>文件系统ID</p>
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
                     * 获取<p>容量使用，单位GiB</p>
                     * @return CapacityUsed <p>容量使用，单位GiB</p>
                     * 
                     */
                    uint64_t GetCapacityUsed() const;

                    /**
                     * 设置<p>容量使用，单位GiB</p>
                     * @param _capacityUsed <p>容量使用，单位GiB</p>
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
                     * 获取<p>文件使用个数，单位个</p>
                     * @return FileUsed <p>文件使用个数，单位个</p>
                     * 
                     */
                    uint64_t GetFileUsed() const;

                    /**
                     * 设置<p>文件使用个数，单位个</p>
                     * @param _fileUsed <p>文件使用个数，单位个</p>
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
                     * 获取<p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DirectoryPath <p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置<p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _directoryPath <p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
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
                     * 获取<p>配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败</p>
                     * @return Status <p>配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败</p>
                     * @param _status <p>配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败</p>
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
                     * <p>指定配额类型，包括Uid、Gid、Dir</p>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>UID/GID信息</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>容量硬限制，单位GiB</p>
                     */
                    uint64_t m_capacityHardLimit;
                    bool m_capacityHardLimitHasBeenSet;

                    /**
                     * <p>文件硬限制，单位个</p>
                     */
                    uint64_t m_fileHardLimit;
                    bool m_fileHardLimitHasBeenSet;

                    /**
                     * <p>文件系统ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>容量使用，单位GiB</p>
                     */
                    uint64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * <p>文件使用个数，单位个</p>
                     */
                    uint64_t m_fileUsed;
                    bool m_fileUsedHasBeenSet;

                    /**
                     * <p>需设置配额的目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。不同目录之间不可存在包含关系。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需对挂载路径下的 test1/test2 设置配额，则入参值为 /cfs/subdir/test1/test2</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                    /**
                     * <p>配置规则状态，inavailable---配置中，available --已生效，deleting--删除中，deleted 已删除，failed--配置失败</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_USERQUOTA_H_
