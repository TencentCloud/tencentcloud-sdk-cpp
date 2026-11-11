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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_READPRODUCTJSONREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_READPRODUCTJSONREQUEST_H_

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
                * ReadProductJson请求参数结构体
                */
                class ReadProductJsonRequest : public AbstractModel
                {
                public:
                    ReadProductJsonRequest();
                    ~ReadProductJsonRequest() = default;
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

                    /**
                     * 获取<p>沙盒runtimeId</p>
                     * @return RuntimeId <p>沙盒runtimeId</p>
                     * 
                     */
                    std::string GetRuntimeId() const;

                    /**
                     * 设置<p>沙盒runtimeId</p>
                     * @param _runtimeId <p>沙盒runtimeId</p>
                     * 
                     */
                    void SetRuntimeId(const std::string& _runtimeId);

                    /**
                     * 判断参数 RuntimeId 是否已赋值
                     * @return RuntimeId 是否已赋值
                     * 
                     */
                    bool RuntimeIdHasBeenSet() const;

                    /**
                     * 获取<p>沙盒sessionId</p>
                     * @return SessionId <p>沙盒sessionId</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>沙盒sessionId</p>
                     * @param _sessionId <p>沙盒sessionId</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间ID</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>沙盒runtimeId</p>
                     */
                    std::string m_runtimeId;
                    bool m_runtimeIdHasBeenSet;

                    /**
                     * <p>沙盒sessionId</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_READPRODUCTJSONREQUEST_H_
