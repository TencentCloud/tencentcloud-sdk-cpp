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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATETRASHCONFIGREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATETRASHCONFIGREQUEST_H_

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
                * CreateTrashConfig请求参数结构体
                */
                class CreateTrashConfigRequest : public AbstractModel
                {
                public:
                    CreateTrashConfigRequest();
                    ~CreateTrashConfigRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>数据保留时间（天）</p>
                     * @return ReservedDays <p>数据保留时间（天）</p>
                     * 
                     */
                    uint64_t GetReservedDays() const;

                    /**
                     * 设置<p>数据保留时间（天）</p>
                     * @param _reservedDays <p>数据保留时间（天）</p>
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
                     * 获取<p>规则状态（1：打开；2：关闭）</p>
                     * @return Status <p>规则状态（1：打开；2：关闭）</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>规则状态（1：打开；2：关闭）</p>
                     * @param _status <p>规则状态（1：打开；2：关闭）</p>
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
                     * 获取<ol><li>字段为空表示开启普通用户回收站 </li><li>字段不为空表示开启HDFS原生回收站，且值必须为/user/* /.Trash</li></ol>
                     * @return Path <ol><li>字段为空表示开启普通用户回收站 </li><li>字段不为空表示开启HDFS原生回收站，且值必须为/user/* /.Trash</li></ol>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<ol><li>字段为空表示开启普通用户回收站 </li><li>字段不为空表示开启HDFS原生回收站，且值必须为/user/* /.Trash</li></ol>
                     * @param _path <ol><li>字段为空表示开启普通用户回收站 </li><li>字段不为空表示开启HDFS原生回收站，且值必须为/user/* /.Trash</li></ol>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>数据保留时间（天）</p>
                     */
                    uint64_t m_reservedDays;
                    bool m_reservedDaysHasBeenSet;

                    /**
                     * <p>规则状态（1：打开；2：关闭）</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <ol><li>字段为空表示开启普通用户回收站 </li><li>字段不为空表示开启HDFS原生回收站，且值必须为/user/* /.Trash</li></ol>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATETRASHCONFIGREQUEST_H_
