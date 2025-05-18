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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_

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
                * UnbindAutoSnapshotPolicy请求参数结构体
                */
                class UnbindAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    UnbindAutoSnapshotPolicyRequest();
                    ~UnbindAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要解绑的文件系统ID列表，用"," 分割，文件系统id 通创建文件系统接口获得
                     * @return FileSystemIds 需要解绑的文件系统ID列表，用"," 分割，文件系统id 通创建文件系统接口获得
                     * 
                     */
                    std::string GetFileSystemIds() const;

                    /**
                     * 设置需要解绑的文件系统ID列表，用"," 分割，文件系统id 通创建文件系统接口获得
                     * @param _fileSystemIds 需要解绑的文件系统ID列表，用"," 分割，文件系统id 通创建文件系统接口获得
                     * 
                     */
                    void SetFileSystemIds(const std::string& _fileSystemIds);

                    /**
                     * 判断参数 FileSystemIds 是否已赋值
                     * @return FileSystemIds 是否已赋值
                     * 
                     */
                    bool FileSystemIdsHasBeenSet() const;

                    /**
                     * 获取解绑的快照ID，通过创建快照策略接口获得
                     * @return AutoSnapshotPolicyId 解绑的快照ID，通过创建快照策略接口获得
                     * 
                     */
                    std::string GetAutoSnapshotPolicyId() const;

                    /**
                     * 设置解绑的快照ID，通过创建快照策略接口获得
                     * @param _autoSnapshotPolicyId 解绑的快照ID，通过创建快照策略接口获得
                     * 
                     */
                    void SetAutoSnapshotPolicyId(const std::string& _autoSnapshotPolicyId);

                    /**
                     * 判断参数 AutoSnapshotPolicyId 是否已赋值
                     * @return AutoSnapshotPolicyId 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdHasBeenSet() const;

                private:

                    /**
                     * 需要解绑的文件系统ID列表，用"," 分割，文件系统id 通创建文件系统接口获得
                     */
                    std::string m_fileSystemIds;
                    bool m_fileSystemIdsHasBeenSet;

                    /**
                     * 解绑的快照ID，通过创建快照策略接口获得
                     */
                    std::string m_autoSnapshotPolicyId;
                    bool m_autoSnapshotPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_UNBINDAUTOSNAPSHOTPOLICYREQUEST_H_
