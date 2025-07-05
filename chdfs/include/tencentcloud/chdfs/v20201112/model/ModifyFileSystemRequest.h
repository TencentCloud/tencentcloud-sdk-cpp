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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyFileSystem请求参数结构体
                */
                class ModifyFileSystemRequest : public AbstractModel
                {
                public:
                    ModifyFileSystemRequest();
                    ~ModifyFileSystemRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取文件系统名称
                     * @return FileSystemName 文件系统名称
                     * 
                     */
                    std::string GetFileSystemName() const;

                    /**
                     * 设置文件系统名称
                     * @param _fileSystemName 文件系统名称
                     * 
                     */
                    void SetFileSystemName(const std::string& _fileSystemName);

                    /**
                     * 判断参数 FileSystemName 是否已赋值
                     * @return FileSystemName 是否已赋值
                     * 
                     */
                    bool FileSystemNameHasBeenSet() const;

                    /**
                     * 获取文件系统描述
                     * @return Description 文件系统描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件系统描述
                     * @param _description 文件系统描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取文件系统容量（byte），下限为1GB，上限为1PB，且必须是1GB的整数倍
注意：修改的文件系统容量不能小于当前使用量
                     * @return CapacityQuota 文件系统容量（byte），下限为1GB，上限为1PB，且必须是1GB的整数倍
注意：修改的文件系统容量不能小于当前使用量
                     * 
                     */
                    uint64_t GetCapacityQuota() const;

                    /**
                     * 设置文件系统容量（byte），下限为1GB，上限为1PB，且必须是1GB的整数倍
注意：修改的文件系统容量不能小于当前使用量
                     * @param _capacityQuota 文件系统容量（byte），下限为1GB，上限为1PB，且必须是1GB的整数倍
注意：修改的文件系统容量不能小于当前使用量
                     * 
                     */
                    void SetCapacityQuota(const uint64_t& _capacityQuota);

                    /**
                     * 判断参数 CapacityQuota 是否已赋值
                     * @return CapacityQuota 是否已赋值
                     * 
                     */
                    bool CapacityQuotaHasBeenSet() const;

                    /**
                     * 获取超级用户名列表，可以为空数组
                     * @return SuperUsers 超级用户名列表，可以为空数组
                     * 
                     */
                    std::vector<std::string> GetSuperUsers() const;

                    /**
                     * 设置超级用户名列表，可以为空数组
                     * @param _superUsers 超级用户名列表，可以为空数组
                     * 
                     */
                    void SetSuperUsers(const std::vector<std::string>& _superUsers);

                    /**
                     * 判断参数 SuperUsers 是否已赋值
                     * @return SuperUsers 是否已赋值
                     * 
                     */
                    bool SuperUsersHasBeenSet() const;

                    /**
                     * 获取是否校验POSIX ACL
                     * @return PosixAcl 是否校验POSIX ACL
                     * 
                     */
                    bool GetPosixAcl() const;

                    /**
                     * 设置是否校验POSIX ACL
                     * @param _posixAcl 是否校验POSIX ACL
                     * 
                     */
                    void SetPosixAcl(const bool& _posixAcl);

                    /**
                     * 判断参数 PosixAcl 是否已赋值
                     * @return PosixAcl 是否已赋值
                     * 
                     */
                    bool PosixAclHasBeenSet() const;

                    /**
                     * 获取是否打开Ranger地址校验
                     * @return EnableRanger 是否打开Ranger地址校验
                     * 
                     */
                    bool GetEnableRanger() const;

                    /**
                     * 设置是否打开Ranger地址校验
                     * @param _enableRanger 是否打开Ranger地址校验
                     * 
                     */
                    void SetEnableRanger(const bool& _enableRanger);

                    /**
                     * 判断参数 EnableRanger 是否已赋值
                     * @return EnableRanger 是否已赋值
                     * 
                     */
                    bool EnableRangerHasBeenSet() const;

                    /**
                     * 获取Ranger地址列表，可以为空数组
                     * @return RangerServiceAddresses Ranger地址列表，可以为空数组
                     * 
                     */
                    std::vector<std::string> GetRangerServiceAddresses() const;

                    /**
                     * 设置Ranger地址列表，可以为空数组
                     * @param _rangerServiceAddresses Ranger地址列表，可以为空数组
                     * 
                     */
                    void SetRangerServiceAddresses(const std::vector<std::string>& _rangerServiceAddresses);

                    /**
                     * 判断参数 RangerServiceAddresses 是否已赋值
                     * @return RangerServiceAddresses 是否已赋值
                     * 
                     */
                    bool RangerServiceAddressesHasBeenSet() const;

                private:

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 文件系统名称
                     */
                    std::string m_fileSystemName;
                    bool m_fileSystemNameHasBeenSet;

                    /**
                     * 文件系统描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 文件系统容量（byte），下限为1GB，上限为1PB，且必须是1GB的整数倍
注意：修改的文件系统容量不能小于当前使用量
                     */
                    uint64_t m_capacityQuota;
                    bool m_capacityQuotaHasBeenSet;

                    /**
                     * 超级用户名列表，可以为空数组
                     */
                    std::vector<std::string> m_superUsers;
                    bool m_superUsersHasBeenSet;

                    /**
                     * 是否校验POSIX ACL
                     */
                    bool m_posixAcl;
                    bool m_posixAclHasBeenSet;

                    /**
                     * 是否打开Ranger地址校验
                     */
                    bool m_enableRanger;
                    bool m_enableRangerHasBeenSet;

                    /**
                     * Ranger地址列表，可以为空数组
                     */
                    std::vector<std::string> m_rangerServiceAddresses;
                    bool m_rangerServiceAddressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYFILESYSTEMREQUEST_H_
