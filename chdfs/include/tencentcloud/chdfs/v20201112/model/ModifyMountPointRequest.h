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
                     * 获取挂载点ID
                     * @return MountPointId 挂载点ID
                     * 
                     */
                    std::string GetMountPointId() const;

                    /**
                     * 设置挂载点ID
                     * @param _mountPointId 挂载点ID
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
                     * 获取挂载点名称
                     * @return MountPointName 挂载点名称
                     * 
                     */
                    std::string GetMountPointName() const;

                    /**
                     * 设置挂载点名称
                     * @param _mountPointName 挂载点名称
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
                     * 获取挂载点状态
                     * @return MountPointStatus 挂载点状态
                     * 
                     */
                    uint64_t GetMountPointStatus() const;

                    /**
                     * 设置挂载点状态
                     * @param _mountPointStatus 挂载点状态
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
                     * 挂载点ID
                     */
                    std::string m_mountPointId;
                    bool m_mountPointIdHasBeenSet;

                    /**
                     * 挂载点名称
                     */
                    std::string m_mountPointName;
                    bool m_mountPointNameHasBeenSet;

                    /**
                     * 挂载点状态
                     */
                    uint64_t m_mountPointStatus;
                    bool m_mountPointStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_MODIFYMOUNTPOINTREQUEST_H_
