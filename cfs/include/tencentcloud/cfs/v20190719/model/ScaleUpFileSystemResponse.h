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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMRESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMRESPONSE_H_

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
                * ScaleUpFileSystem返回参数结构体
                */
                class ScaleUpFileSystemResponse : public AbstractModel
                {
                public:
                    ScaleUpFileSystemResponse();
                    ~ScaleUpFileSystemResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统Id
                     * @return FileSystemId 文件系统Id
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
                     * 获取扩容的目标容量（单位GiB）
                     * @return TargetCapacity 扩容的目标容量（单位GiB）
                     * 
                     */
                    uint64_t GetTargetCapacity() const;

                    /**
                     * 判断参数 TargetCapacity 是否已赋值
                     * @return TargetCapacity 是否已赋值
                     * 
                     */
                    bool TargetCapacityHasBeenSet() const;

                private:

                    /**
                     * 文件系统Id
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

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_SCALEUPFILESYSTEMRESPONSE_H_
