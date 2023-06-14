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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_FILESYSTEM_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_FILESYSTEM_H_

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
        namespace V20190718
        {
            namespace Model
            {
                /**
                * 文件系统
                */
                class FileSystem : public AbstractModel
                {
                public:
                    FileSystem();
                    ~FileSystem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取appid
                     * @return AppId appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置appid
                     * @param _appId appid
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

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
                     * 获取文件系统块大小（byte）
                     * @return BlockSize 文件系统块大小（byte）
                     * 
                     */
                    uint64_t GetBlockSize() const;

                    /**
                     * 设置文件系统块大小（byte）
                     * @param _blockSize 文件系统块大小（byte）
                     * 
                     */
                    void SetBlockSize(const uint64_t& _blockSize);

                    /**
                     * 判断参数 BlockSize 是否已赋值
                     * @return BlockSize 是否已赋值
                     * 
                     */
                    bool BlockSizeHasBeenSet() const;

                    /**
                     * 获取文件系统容量（byte）
                     * @return CapacityQuota 文件系统容量（byte）
                     * 
                     */
                    uint64_t GetCapacityQuota() const;

                    /**
                     * 设置文件系统容量（byte）
                     * @param _capacityQuota 文件系统容量（byte）
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
                     * 获取文件系统状态（1：创建中；2：创建成功；3：创建失败）
                     * @return Status 文件系统状态（1：创建中；2：创建成功；3：创建失败）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置文件系统状态（1：创建中；2：创建成功；3：创建失败）
                     * @param _status 文件系统状态（1：创建中；2：创建成功；3：创建失败）
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文件系统块大小（byte）
                     */
                    uint64_t m_blockSize;
                    bool m_blockSizeHasBeenSet;

                    /**
                     * 文件系统容量（byte）
                     */
                    uint64_t m_capacityQuota;
                    bool m_capacityQuotaHasBeenSet;

                    /**
                     * 文件系统状态（1：创建中；2：创建成功；3：创建失败）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_FILESYSTEM_H_
