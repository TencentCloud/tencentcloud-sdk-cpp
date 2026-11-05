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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_DELETEDATAAGENTSESSIONREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_DELETEDATAAGENTSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/SurfaceContext.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * DeleteDataAgentSession请求参数结构体
                */
                class DeleteDataAgentSessionRequest : public AbstractModel
                {
                public:
                    DeleteDataAgentSessionRequest();
                    ~DeleteDataAgentSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>会话ID</p>
                     * @return SessionId <p>会话ID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话ID</p>
                     * @param _sessionId <p>会话ID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>批量删除 会话id 列表</p>
                     * @return SessionIds <p>批量删除 会话id 列表</p>
                     * 
                     */
                    std::vector<std::string> GetSessionIds() const;

                    /**
                     * 设置<p>批量删除 会话id 列表</p>
                     * @param _sessionIds <p>批量删除 会话id 列表</p>
                     * 
                     */
                    void SetSessionIds(const std::vector<std::string>& _sessionIds);

                    /**
                     * 判断参数 SessionIds 是否已赋值
                     * @return SessionIds 是否已赋值
                     * 
                     */
                    bool SessionIdsHasBeenSet() const;

                    /**
                     * 获取<p>上下文</p>
                     * @return SurfaceContext <p>上下文</p>
                     * 
                     */
                    SurfaceContext GetSurfaceContext() const;

                    /**
                     * 设置<p>上下文</p>
                     * @param _surfaceContext <p>上下文</p>
                     * 
                     */
                    void SetSurfaceContext(const SurfaceContext& _surfaceContext);

                    /**
                     * 判断参数 SurfaceContext 是否已赋值
                     * @return SurfaceContext 是否已赋值
                     * 
                     */
                    bool SurfaceContextHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>会话ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>批量删除 会话id 列表</p>
                     */
                    std::vector<std::string> m_sessionIds;
                    bool m_sessionIdsHasBeenSet;

                    /**
                     * <p>上下文</p>
                     */
                    SurfaceContext m_surfaceContext;
                    bool m_surfaceContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_DELETEDATAAGENTSESSIONREQUEST_H_
