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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEWORKSPACEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEWORKSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeWorkspace请求参数结构体
                */
                class DescribeWorkspaceRequest : public AbstractModel
                {
                public:
                    DescribeWorkspaceRequest();
                    ~DescribeWorkspaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>是否包含运行中的任务</p>
                     * @return WithRunningTasks <p>是否包含运行中的任务</p>
                     * 
                     */
                    bool GetWithRunningTasks() const;

                    /**
                     * 设置<p>是否包含运行中的任务</p>
                     * @param _withRunningTasks <p>是否包含运行中的任务</p>
                     * 
                     */
                    void SetWithRunningTasks(const bool& _withRunningTasks);

                    /**
                     * 判断参数 WithRunningTasks 是否已赋值
                     * @return WithRunningTasks 是否已赋值
                     * 
                     */
                    bool WithRunningTasksHasBeenSet() const;

                    /**
                     * 获取<p>是否包含有管理权限的人员信息</p>
                     * @return WithMembers <p>是否包含有管理权限的人员信息</p>
                     * 
                     */
                    bool GetWithMembers() const;

                    /**
                     * 设置<p>是否包含有管理权限的人员信息</p>
                     * @param _withMembers <p>是否包含有管理权限的人员信息</p>
                     * 
                     */
                    void SetWithMembers(const bool& _withMembers);

                    /**
                     * 判断参数 WithMembers 是否已赋值
                     * @return WithMembers 是否已赋值
                     * 
                     */
                    bool WithMembersHasBeenSet() const;

                private:

                    /**
                     * <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>是否包含运行中的任务</p>
                     */
                    bool m_withRunningTasks;
                    bool m_withRunningTasksHasBeenSet;

                    /**
                     * <p>是否包含有管理权限的人员信息</p>
                     */
                    bool m_withMembers;
                    bool m_withMembersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEWORKSPACEREQUEST_H_
