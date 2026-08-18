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
                     * 获取<p>文件系统 ID。当前仅 Turbo 系列文件系统支持调用此接口，通用系列文件系统（含增强型）不支持调用。</p>
                     * @return FileSystemId <p>文件系统 ID。当前仅 Turbo 系列文件系统支持调用此接口，通用系列文件系统（含增强型）不支持调用。</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 ID。当前仅 Turbo 系列文件系统支持调用此接口，通用系列文件系统（含增强型）不支持调用。</p>
                     * @param _fileSystemId <p>文件系统 ID。当前仅 Turbo 系列文件系统支持调用此接口，通用系列文件系统（含增强型）不支持调用。</p>
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
                     * 获取<p>create：创建目录，等同于mkdir。<br>check：确认目录是否存在，等同于stat。<br>move：对文件/目录进行重命名，等同于mv。</p>
                     * @return OpetationType <p>create：创建目录，等同于mkdir。<br>check：确认目录是否存在，等同于stat。<br>move：对文件/目录进行重命名，等同于mv。</p>
                     * 
                     */
                    std::string GetOpetationType() const;

                    /**
                     * 设置<p>create：创建目录，等同于mkdir。<br>check：确认目录是否存在，等同于stat。<br>move：对文件/目录进行重命名，等同于mv。</p>
                     * @param _opetationType <p>create：创建目录，等同于mkdir。<br>check：确认目录是否存在，等同于stat。<br>move：对文件/目录进行重命名，等同于mv。</p>
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
                     * 获取<p>系统会默认递归创建路径中的所有父级目录。路径必须从 /cfs/ 开始，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li><p>若操作为 create/check</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul></li><li><p>若操作为 move</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/subdir/test1/test2</li></ul></li></ul>
                     * @return DirectoryPath <p>系统会默认递归创建路径中的所有父级目录。路径必须从 /cfs/ 开始，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li><p>若操作为 create/check</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul></li><li><p>若操作为 move</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/subdir/test1/test2</li></ul></li></ul>
                     * 
                     */
                    std::string GetDirectoryPath() const;

                    /**
                     * 设置<p>系统会默认递归创建路径中的所有父级目录。路径必须从 /cfs/ 开始，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li><p>若操作为 create/check</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul></li><li><p>若操作为 move</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/subdir/test1/test2</li></ul></li></ul>
                     * @param _directoryPath <p>系统会默认递归创建路径中的所有父级目录。路径必须从 /cfs/ 开始，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li><p>若操作为 create/check</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul></li><li><p>若操作为 move</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/subdir/test1/test2</li></ul></li></ul>
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
                     * 获取<p>创建目录的权限，若不传，默认为0755。若OperationType为 check，此值无实际意义。</p>
                     * @return Mode <p>创建目录的权限，若不传，默认为0755。若OperationType为 check，此值无实际意义。</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>创建目录的权限，若不传，默认为0755。若OperationType为 check，此值无实际意义。</p>
                     * @param _mode <p>创建目录的权限，若不传，默认为0755。若OperationType为 check，此值无实际意义。</p>
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
                     * 获取<p>mv 操作的目标目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/test3/test4</li><li>若挂载的是CFS子目录 /subdir，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/subdir/ test3/test4</li></ul>
                     * @return DestPath <p>mv 操作的目标目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/test3/test4</li><li>若挂载的是CFS子目录 /subdir，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/subdir/ test3/test4</li></ul>
                     * 
                     */
                    std::string GetDestPath() const;

                    /**
                     * 设置<p>mv 操作的目标目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/test3/test4</li><li>若挂载的是CFS子目录 /subdir，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/subdir/ test3/test4</li></ul>
                     * @param _destPath <p>mv 操作的目标目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/test3/test4</li><li>若挂载的是CFS子目录 /subdir，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/subdir/ test3/test4</li></ul>
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
                     * <p>文件系统 ID。当前仅 Turbo 系列文件系统支持调用此接口，通用系列文件系统（含增强型）不支持调用。</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>create：创建目录，等同于mkdir。<br>check：确认目录是否存在，等同于stat。<br>move：对文件/目录进行重命名，等同于mv。</p>
                     */
                    std::string m_opetationType;
                    bool m_opetationTypeHasBeenSet;

                    /**
                     * <p>系统会默认递归创建路径中的所有父级目录。路径必须从 /cfs/ 开始，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li><p>若操作为 create/check</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下创建/检查是否存在 test1/test2，则入参值为 /cfs/subdir/test1/test2</li></ul></li><li><p>若操作为 move</p><ul><li>若挂载的是CFS根目录 /，需在挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需在挂载路径下挂载路径下移动 test1/test2 下的文件到 DestPath，则入参值为 /cfs/subdir/test1/test2</li></ul></li></ul>
                     */
                    std::string m_directoryPath;
                    bool m_directoryPathHasBeenSet;

                    /**
                     * <p>创建目录的权限，若不传，默认为0755。若OperationType为 check，此值无实际意义。</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>mv 操作的目标目录路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/test3/test4</li><li>若挂载的是CFS子目录 /subdir，需将 DirectoryPath 下的文件移动到挂载路径下的 test3/test4，则入参值为 /cfs/subdir/ test3/test4</li></ul>
                     */
                    std::string m_destPath;
                    bool m_destPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DODIRECTORYOPERATIONREQUEST_H_
