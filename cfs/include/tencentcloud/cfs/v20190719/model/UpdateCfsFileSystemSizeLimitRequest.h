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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMSIZELIMITREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMSIZELIMITREQUEST_H_

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
                * UpdateCfsFileSystemSizeLimit请求参数结构体
                */
                class UpdateCfsFileSystemSizeLimitRequest : public AbstractModel
                {
                public:
                    UpdateCfsFileSystemSizeLimitRequest();
                    ~UpdateCfsFileSystemSizeLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统容量限制大小，输入范围0-1073741824, 单位为GB；其中输入值为0时，表示不限制文件系统容量。
                     * @return FsLimit 文件系统容量限制大小，输入范围0-1073741824, 单位为GB；其中输入值为0时，表示不限制文件系统容量。
                     * 
                     */
                    uint64_t GetFsLimit() const;

                    /**
                     * 设置文件系统容量限制大小，输入范围0-1073741824, 单位为GB；其中输入值为0时，表示不限制文件系统容量。
                     * @param _fsLimit 文件系统容量限制大小，输入范围0-1073741824, 单位为GB；其中输入值为0时，表示不限制文件系统容量。
                     * 
                     */
                    void SetFsLimit(const uint64_t& _fsLimit);

                    /**
                     * 判断参数 FsLimit 是否已赋值
                     * @return FsLimit 是否已赋值
                     * 
                     */
                    bool FsLimitHasBeenSet() const;

                    /**
                     * 获取文件系统ID，目前仅支持标准型文件系统。该参数通过查询文件系统列表获取
                     * @return FileSystemId 文件系统ID，目前仅支持标准型文件系统。该参数通过查询文件系统列表获取
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统ID，目前仅支持标准型文件系统。该参数通过查询文件系统列表获取
                     * @param _fileSystemId 文件系统ID，目前仅支持标准型文件系统。该参数通过查询文件系统列表获取
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                private:

                    /**
                     * 文件系统容量限制大小，输入范围0-1073741824, 单位为GB；其中输入值为0时，表示不限制文件系统容量。
                     */
                    uint64_t m_fsLimit;
                    bool m_fsLimitHasBeenSet;

                    /**
                     * 文件系统ID，目前仅支持标准型文件系统。该参数通过查询文件系统列表获取
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMSIZELIMITREQUEST_H_
