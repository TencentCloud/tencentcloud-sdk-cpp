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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONREQUEST_H_

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
                * DoDirectoryOperation请求参数结构体
                */
                class DoDirectoryOperationRequest : public AbstractModel
                {
                public:
                    DoDirectoryOperationRequest();
                    ~DoDirectoryOperationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统Id
                     * @return FileSystemId 文件系统Id
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统Id
                     * @param _fileSystemId 文件系统Id
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
                     * 获取create：创建目录，等同于mkdir。
check：确认目录是否存在，等同于stat。
move：对文件/目录进行重命名，等同于mv。
                     * @return OpetationType create：创建目录，等同于mkdir。
check：确认目录是否存在，等同于stat。
move：对文件/目录进行重命名，等同于mv。
                     * 
                     */
                    std::string GetOpetationType() const;

                    /**
                     * 设置create：创建目录，等同于mkdir。
check：确认目录是否存在，等同于stat。
move：对文件/目录进行重命名，等同于mv。
                     * @param _opetationType create：创建目录，等同于mkdir。
check：确认目录是否存在，等同于stat。
move：对文件/目录进行重命名，等同于mv。
                     * 
                     */
                    void SetOpetationType(const std::string& _opetationType);

                    /**
                     * 判断参数 OpetationType 是否已赋值
                     * @return OpetationType 是否已赋值
                     * 
                     */
                    bool OpetationTypeHasBeenSet() const;

                    /**
                     * 获取目录的绝对路径  默认递归创建（即如果目录中有子目录不存在，则先创建出对应子目录）
                     * @return DirectoryPath 目录的绝对路径  默认递归创建（即如果目录中有子目录不存在，则先创建出对应子目录）
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置目录的绝对路径  默认递归创建（即如果目录中有子目录不存在，则先创建出对应子目录）
                     * @param _directoryPath 目录的绝对路径  默认递归创建（即如果目录中有子目录不存在，则先创建出对应子目录）
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
                     * 获取创建目录的权限，若不传，默认为0755  若Operation Type为check，此值无实际意义
                     * @return Mode 创建目录的权限，若不传，默认为0755  若Operation Type为check，此值无实际意义
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置创建目录的权限，若不传，默认为0755  若Operation Type为check，此值无实际意义
                     * @param _mode 创建目录的权限，若不传，默认为0755  若Operation Type为check，此值无实际意义
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取mv操作的目标目录名称；如果是turbo文件系统必须以/cfs/开头
                     * @return DestPath mv操作的目标目录名称；如果是turbo文件系统必须以/cfs/开头
                     * 
                     */
                    std::string GetDestPath() const;

                    /**
                     * 设置mv操作的目标目录名称；如果是turbo文件系统必须以/cfs/开头
                     * @param _destPath mv操作的目标目录名称；如果是turbo文件系统必须以/cfs/开头
                     * 
                     */
                    void SetDestPath(const std::string& _destPath);

                    /**
                     * 判断参数 DestPath 是否已赋值
                     * @return DestPath 是否已赋值
                     * 
                     */
                    bool DestPathHasBeenSet() const;

                private:

                    /**
                     * 文件系统Id
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * create：创建目录，等同于mkdir。
check：确认目录是否存在，等同于stat。
move：对文件/目录进行重命名，等同于mv。
                     */
                    std::string m_opetationType;
                    bool m_opetationTypeHasBeenSet;

                    /**
                     * 目录的绝对路径  默认递归创建（即如果目录中有子目录不存在，则先创建出对应子目录）
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                    /**
                     * 创建目录的权限，若不传，默认为0755  若Operation Type为check，此值无实际意义
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * mv操作的目标目录名称；如果是turbo文件系统必须以/cfs/开头
                     */
                    std::string m_destPath;
                    bool m_destPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONREQUEST_H_
