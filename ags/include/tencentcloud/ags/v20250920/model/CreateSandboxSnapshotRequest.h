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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/Tag.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateSandboxSnapshot请求参数结构体
                */
                class CreateSandboxSnapshotRequest : public AbstractModel
                {
                public:
                    CreateSandboxSnapshotRequest();
                    ~CreateSandboxSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待制作快照的沙箱实例 ID</p>
                     * @return InstanceId <p>待制作快照的沙箱实例 ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>待制作快照的沙箱实例 ID</p>
                     * @param _instanceId <p>待制作快照的沙箱实例 ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>快照名称</p>
                     * @return SnapshotName <p>快照名称</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>快照名称</p>
                     * @param _snapshotName <p>快照名称</p>
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取<p>制作快照时是否包含内存状态</p>
                     * @return Memory <p>制作快照时是否包含内存状态</p>
                     * 
                     */
                    bool GetMemory() const;

                    /**
                     * 设置<p>制作快照时是否包含内存状态</p>
                     * @param _memory <p>制作快照时是否包含内存状态</p>
                     * 
                     */
                    void SetMemory(const bool& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>云资源标签</p>
                     * @return Tags <p>云资源标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>云资源标签</p>
                     * @param _tags <p>云资源标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>幂等 token</p>
                     * @return ClientToken <p>幂等 token</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>幂等 token</p>
                     * @param _clientToken <p>幂等 token</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * <p>待制作快照的沙箱实例 ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>快照名称</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>制作快照时是否包含内存状态</p>
                     */
                    bool m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>云资源标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>幂等 token</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATESANDBOXSNAPSHOTREQUEST_H_
