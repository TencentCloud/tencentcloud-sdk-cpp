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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMPGROUPREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMPGROUPREQUEST_H_

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
                * UpdateCfsFileSystemPGroup请求参数结构体
                */
                class UpdateCfsFileSystemPGroupRequest : public AbstractModel
                {
                public:
                    UpdateCfsFileSystemPGroupRequest();
                    ~UpdateCfsFileSystemPGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     * @return PGroupId 权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     * 
                     */
                    std::string GetPGroupId() const;

                    /**
                     * 设置权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     * @param _pGroupId 权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     * 
                     */
                    void SetPGroupId(const std::string& _pGroupId);

                    /**
                     * 判断参数 PGroupId 是否已赋值
                     * @return PGroupId 是否已赋值
                     * 
                     */
                    bool PGroupIdHasBeenSet() const;

                    /**
                     * 获取文件系统 ID，通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     * @return FileSystemId 文件系统 ID，通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID，通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     * @param _fileSystemId 文件系统 ID，通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
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
                     * 权限组 ID，可通过[DescribeCfsPGroups接口](https://cloud.tencent.com/document/api/582/38157)获取
                     */
                    std::string m_pGroupId;
                    bool m_pGroupIdHasBeenSet;

                    /**
                     * 文件系统 ID，通过[查询文件系统接口](https://cloud.tencent.com/document/api/582/38170)获取
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UPDATECFSFILESYSTEMPGROUPREQUEST_H_
