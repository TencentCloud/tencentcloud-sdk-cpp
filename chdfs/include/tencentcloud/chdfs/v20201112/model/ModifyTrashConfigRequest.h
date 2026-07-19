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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYTRASHCONFIGREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYTRASHCONFIGREQUEST_H_

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
                * ModifyTrashConfig请求参数结构体
                */
                class ModifyTrashConfigRequest : public AbstractModel
                {
                public:
                    ModifyTrashConfigRequest();
                    ~ModifyTrashConfigRequest() = default;
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
                     * 获取数据保留时间（天）
                     * @return ReservedDays 数据保留时间（天）
                     * 
                     */
                    uint64_t GetReservedDays() const;

                    /**
                     * 设置数据保留时间（天）
                     * @param _reservedDays 数据保留时间（天）
                     * 
                     */
                    void SetReservedDays(const uint64_t& _reservedDays);

                    /**
                     * 判断参数 ReservedDays 是否已赋值
                     * @return ReservedDays 是否已赋值
                     * 
                     */
                    bool ReservedDaysHasBeenSet() const;

                    /**
                     * 获取规则状态（1：打开；2：关闭）
                     * @return Status 规则状态（1：打开；2：关闭）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置规则状态（1：打开；2：关闭）
                     * @param _status 规则状态（1：打开；2：关闭）
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
                     * 文件系统ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 数据保留时间（天）
                     */
                    uint64_t m_reservedDays;
                    bool m_reservedDaysHasBeenSet;

                    /**
                     * 规则状态（1：打开；2：关闭）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYTRASHCONFIGREQUEST_H_
