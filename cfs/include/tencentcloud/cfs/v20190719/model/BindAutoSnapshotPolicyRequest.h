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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_BINDAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_BINDAUTOSNAPSHOTPOLICYREQUEST_H_

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
                * BindAutoSnapshotPolicy请求参数结构体
                */
                class BindAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    BindAutoSnapshotPolicyRequest();
                    ~BindAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照策略ID，通过快照策略列表获取
                     * @return AutoSnapshotPolicyId 快照策略ID，通过快照策略列表获取
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置快照策略ID，通过快照策略列表获取
                     * @param _autoSnapshotPolicyId 快照策略ID，通过快照策略列表获取
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                    /**
                     * 获取文件系统id列表，用“,”分隔，文件系统id通过查询文件系统列表获得
                     * @return FileSystemIds 文件系统id列表，用“,”分隔，文件系统id通过查询文件系统列表获得
                     * 
                     */
                    std::string GetFileSystemIds() const;

                    /**
                     * 设置文件系统id列表，用“,”分隔，文件系统id通过查询文件系统列表获得
                     * @param _fileSystemIds 文件系统id列表，用“,”分隔，文件系统id通过查询文件系统列表获得
                     * 
                     */
                    void SetFileSystemIds(const std::string& _fileSystemIds);

                    /**
                     * 判断参数 FileSystemIds 是否已赋值
                     * @return FileSystemIds 是否已赋值
                     * 
                     */
                    bool FileSystemIdsHasBeenSet() const;

                private:

                    /**
                     * 快照策略ID，通过快照策略列表获取
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                    /**
                     * 文件系统id列表，用“,”分隔，文件系统id通过查询文件系统列表获得
                     */
                    std::string m_fileSystemIds;
                    bool m_fileSystemIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_BINDAUTOSNAPSHOTPOLICYREQUEST_H_
