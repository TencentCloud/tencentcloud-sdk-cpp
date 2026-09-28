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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKSPACEREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetWorkspace请求参数结构体
                */
                class GetWorkspaceRequest : public AbstractModel
                {
                public:
                    GetWorkspaceRequest();
                    ~GetWorkspaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间ID</p>
                     * @return WorkspaceId <p>工作空间ID</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID</p>
                     * @param _workspaceId <p>工作空间ID</p>
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETWORKSPACEREQUEST_H_
