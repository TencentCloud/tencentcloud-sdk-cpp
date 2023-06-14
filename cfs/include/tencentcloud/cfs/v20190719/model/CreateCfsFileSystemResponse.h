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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCfsFileSystem返回参数结构体
                */
                class CreateCfsFileSystemResponse : public AbstractModel
                {
                public:
                    CreateCfsFileSystemResponse();
                    ~CreateCfsFileSystemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统创建时间
                     * @return CreationTime 文件系统创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取用户自定义文件系统名称
                     * @return CreationToken 用户自定义文件系统名称
                     * 
                     */
                    std::string GetCreationToken() const;

                    /**
                     * 判断参数 CreationToken 是否已赋值
                     * @return CreationToken 是否已赋值
                     * 
                     */
                    bool CreationTokenHasBeenSet() const;

                    /**
                     * 获取文件系统 ID
                     * @return FileSystemId 文件系统 ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取文件系统状态，可能出现状态包括：“creating”  创建中, “create_failed” 创建失败, “available” 可用, “unserviced” 不可用, “upgrading” 升级中， “deleting” 删除中。
                     * @return LifeCycleState 文件系统状态，可能出现状态包括：“creating”  创建中, “create_failed” 创建失败, “available” 可用, “unserviced” 不可用, “upgrading” 升级中， “deleting” 删除中。
                     * 
                     */
                    std::string GetLifeCycleState() const;

                    /**
                     * 判断参数 LifeCycleState 是否已赋值
                     * @return LifeCycleState 是否已赋值
                     * 
                     */
                    bool LifeCycleStateHasBeenSet() const;

                    /**
                     * 获取文件系统已使用容量大小，单位为 Byte
                     * @return SizeByte 文件系统已使用容量大小，单位为 Byte
                     * 
                     */
                    uint64_t GetSizeByte() const;

                    /**
                     * 判断参数 SizeByte 是否已赋值
                     * @return SizeByte 是否已赋值
                     * 
                     */
                    bool SizeByteHasBeenSet() const;

                    /**
                     * 获取可用区 ID
                     * @return ZoneId 可用区 ID
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取用户自定义文件系统名称
                     * @return FsName 用户自定义文件系统名称
                     * 
                     */
                    std::string GetFsName() const;

                    /**
                     * 判断参数 FsName 是否已赋值
                     * @return FsName 是否已赋值
                     * 
                     */
                    bool FsNameHasBeenSet() const;

                    /**
                     * 获取文件系统是否加密
                     * @return Encrypted 文件系统是否加密
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                private:

                    /**
                     * 文件系统创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 用户自定义文件系统名称
                     */
                    std::string m_creationToken;
                    bool m_creationTokenHasBeenSet;

                    /**
                     * 文件系统 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 文件系统状态，可能出现状态包括：“creating”  创建中, “create_failed” 创建失败, “available” 可用, “unserviced” 不可用, “upgrading” 升级中， “deleting” 删除中。
                     */
                    std::string m_lifeCycleState;
                    bool m_lifeCycleStateHasBeenSet;

                    /**
                     * 文件系统已使用容量大小，单位为 Byte
                     */
                    uint64_t m_sizeByte;
                    bool m_sizeByteHasBeenSet;

                    /**
                     * 可用区 ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 用户自定义文件系统名称
                     */
                    std::string m_fsName;
                    bool m_fsNameHasBeenSet;

                    /**
                     * 文件系统是否加密
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATECFSFILESYSTEMRESPONSE_H_
