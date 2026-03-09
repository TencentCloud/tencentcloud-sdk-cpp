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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYMOUNTPOINTREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYMOUNTPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * ModifyMountPoint请求参数结构体
                */
                class ModifyMountPointRequest : public AbstractModel
                {
                public:
                    ModifyMountPointRequest();
                    ~ModifyMountPointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>挂载点ID</p>
                     * @return MountPointId <p>挂载点ID</p>
                     * 
                     */
                    std::string GetMountPointId() const;

                    /**
                     * 设置<p>挂载点ID</p>
                     * @param _mountPointId <p>挂载点ID</p>
                     * 
                     */
                    void SetMountPointId(const std::string& _mountPointId);

                    /**
                     * 判断参数 MountPointId 是否已赋值
                     * @return MountPointId 是否已赋值
                     * 
                     */
                    bool MountPointIdHasBeenSet() const;

                    /**
                     * 获取<p>挂载点名称</p>
                     * @return MountPointName <p>挂载点名称</p>
                     * 
                     */
                    std::string GetMountPointName() const;

                    /**
                     * 设置<p>挂载点名称</p>
                     * @param _mountPointName <p>挂载点名称</p>
                     * 
                     */
                    void SetMountPointName(const std::string& _mountPointName);

                    /**
                     * 判断参数 MountPointName 是否已赋值
                     * @return MountPointName 是否已赋值
                     * 
                     */
                    bool MountPointNameHasBeenSet() const;

                    /**
                     * 获取<p>挂载点状态</p><p>枚举值：</p><ul><li>1： 打开</li><li>2： 关闭</li></ul>
                     * @return MountPointStatus <p>挂载点状态</p><p>枚举值：</p><ul><li>1： 打开</li><li>2： 关闭</li></ul>
                     * 
                     */
                    uint64_t GetMountPointStatus() const;

                    /**
                     * 设置<p>挂载点状态</p><p>枚举值：</p><ul><li>1： 打开</li><li>2： 关闭</li></ul>
                     * @param _mountPointStatus <p>挂载点状态</p><p>枚举值：</p><ul><li>1： 打开</li><li>2： 关闭</li></ul>
                     * 
                     */
                    void SetMountPointStatus(const uint64_t& _mountPointStatus);

                    /**
                     * 判断参数 MountPointStatus 是否已赋值
                     * @return MountPointStatus 是否已赋值
                     * 
                     */
                    bool MountPointStatusHasBeenSet() const;

                private:

                    /**
                     * <p>挂载点ID</p>
                     */
                    std::string m_mountPointId;
                    bool m_mountPointIdHasBeenSet;

                    /**
                     * <p>挂载点名称</p>
                     */
                    std::string m_mountPointName;
                    bool m_mountPointNameHasBeenSet;

                    /**
                     * <p>挂载点状态</p><p>枚举值：</p><ul><li>1： 打开</li><li>2： 关闭</li></ul>
                     */
                    uint64_t m_mountPointStatus;
                    bool m_mountPointStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYMOUNTPOINTREQUEST_H_
