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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYAUTODELETEPOLICYREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYAUTODELETEPOLICYREQUEST_H_

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
                * ModifyAutoDeletePolicy请求参数结构体
                */
                class ModifyAutoDeletePolicyRequest : public AbstractModel
                {
                public:
                    ModifyAutoDeletePolicyRequest();
                    ~ModifyAutoDeletePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件系统 ID</p>
                     * @return FileSystemId <p>文件系统 ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 ID</p>
                     * @param _fileSystemId <p>文件系统 ID</p>
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
                     * 获取<p>自动清理策略 ID</p>
                     * @return PolicyId <p>自动清理策略 ID</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>自动清理策略 ID</p>
                     * @param _policyId <p>自动清理策略 ID</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>自动清理路径列表</p>
                     * @return Paths <p>自动清理路径列表</p>
                     * 
                     */
                    std::vector<std::string> GetPaths() const;

                    /**
                     * 设置<p>自动清理路径列表</p>
                     * @param _paths <p>自动清理路径列表</p>
                     * 
                     */
                    void SetPaths(const std::vector<std::string>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                    /**
                     * 获取<p>自动清理策略名称</p>
                     * @return PolicyName <p>自动清理策略名称</p>
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置<p>自动清理策略名称</p>
                     * @param _policyName <p>自动清理策略名称</p>
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>策略状态</p><p>枚举值：</p><ul><li>enabled： 启用</li><li>disabled： 禁用</li></ul>
                     * @return Status <p>策略状态</p><p>枚举值：</p><ul><li>enabled： 启用</li><li>disabled： 禁用</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>策略状态</p><p>枚举值：</p><ul><li>enabled： 启用</li><li>disabled： 禁用</li></ul>
                     * @param _status <p>策略状态</p><p>枚举值：</p><ul><li>enabled： 启用</li><li>disabled： 禁用</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统 ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>自动清理策略 ID</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>自动清理路径列表</p>
                     */
                    std::vector<std::string> m_paths;
                    bool m_pathsHasBeenSet;

                    /**
                     * <p>自动清理策略名称</p>
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * <p>策略状态</p><p>枚举值：</p><ul><li>enabled： 启用</li><li>disabled： 禁用</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYAUTODELETEPOLICYREQUEST_H_
