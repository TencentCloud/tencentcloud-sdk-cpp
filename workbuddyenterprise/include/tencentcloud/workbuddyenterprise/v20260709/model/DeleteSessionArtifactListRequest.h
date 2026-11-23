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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DELETESESSIONARTIFACTLISTREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DELETESESSIONARTIFACTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DeleteSessionArtifactList请求参数结构体
                */
                class DeleteSessionArtifactListRequest : public AbstractModel
                {
                public:
                    DeleteSessionArtifactListRequest();
                    ~DeleteSessionArtifactListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>需要删除的物料ID集合</p>
                     * @return ArtifactIds <p>需要删除的物料ID集合</p>
                     * 
                     */
                    std::vector<std::string> GetArtifactIds() const;

                    /**
                     * 设置<p>需要删除的物料ID集合</p>
                     * @param _artifactIds <p>需要删除的物料ID集合</p>
                     * 
                     */
                    void SetArtifactIds(const std::vector<std::string>& _artifactIds);

                    /**
                     * 判断参数 ArtifactIds 是否已赋值
                     * @return ArtifactIds 是否已赋值
                     * 
                     */
                    bool ArtifactIdsHasBeenSet() const;

                private:

                    /**
                     * <p>会话ID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>需要删除的物料ID集合</p>
                     */
                    std::vector<std::string> m_artifactIds;
                    bool m_artifactIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DELETESESSIONARTIFACTLISTREQUEST_H_
