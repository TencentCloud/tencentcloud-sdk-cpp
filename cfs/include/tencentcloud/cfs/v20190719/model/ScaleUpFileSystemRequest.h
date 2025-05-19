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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMREQUEST_H_

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
                * ScaleUpFileSystem请求参数结构体
                */
                class ScaleUpFileSystemRequest : public AbstractModel
                {
                public:
                    ScaleUpFileSystemRequest();
                    ~ScaleUpFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统Id,该参数通过查询文件系统列表接口获取
                     * @return FileSystemId 文件系统Id,该参数通过查询文件系统列表接口获取
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统Id,该参数通过查询文件系统列表接口获取
                     * @param _fileSystemId 文件系统Id,该参数通过查询文件系统列表接口获取
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
                     * 获取扩容的目标容量（单位GiB）
                     * @return TargetCapacity 扩容的目标容量（单位GiB）
                     * 
                     */
                    uint64_t GetTargetCapacity() const;

                    /**
                     * 设置扩容的目标容量（单位GiB）
                     * @param _targetCapacity 扩容的目标容量（单位GiB）
                     * 
                     */
                    void SetTargetCapacity(const uint64_t& _targetCapacity);

                    /**
                     * 判断参数 TargetCapacity 是否已赋值
                     * @return TargetCapacity 是否已赋值
                     * 
                     */
                    bool TargetCapacityHasBeenSet() const;

                private:

                    /**
                     * 文件系统Id,该参数通过查询文件系统列表接口获取
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 扩容的目标容量（单位GiB）
                     */
                    uint64_t m_targetCapacity;
                    bool m_targetCapacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMREQUEST_H_
