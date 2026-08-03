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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_AGENTBUCKETSTORAGESOURCE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_AGENTBUCKETSTORAGESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 用于记录 Agent Bucket 的 Storage Source
                */
                class AgentBucketStorageSource : public AbstractModel
                {
                public:
                    AgentBucketStorageSource();
                    ~AgentBucketStorageSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用于传入 AgentBucket 的 LibraryID</p>
                     * @return LibraryId <p>用于传入 AgentBucket 的 LibraryID</p>
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置<p>用于传入 AgentBucket 的 LibraryID</p>
                     * @param _libraryId <p>用于传入 AgentBucket 的 LibraryID</p>
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取<p>用于传入 AgentBucket 的 spaceId</p>
                     * @return SpaceId <p>用于传入 AgentBucket 的 spaceId</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>用于传入 AgentBucket 的 spaceId</p>
                     * @param _spaceId <p>用于传入 AgentBucket 的 spaceId</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>用于传入 AgentBucket 的 AccessDomain</p>
                     * @return AccessDomain <p>用于传入 AgentBucket 的 AccessDomain</p>
                     * 
                     */
                    std::string GetAccessDomain() const;

                    /**
                     * 设置<p>用于传入 AgentBucket 的 AccessDomain</p>
                     * @param _accessDomain <p>用于传入 AgentBucket 的 AccessDomain</p>
                     * 
                     */
                    void SetAccessDomain(const std::string& _accessDomain);

                    /**
                     * 判断参数 AccessDomain 是否已赋值
                     * @return AccessDomain 是否已赋值
                     * 
                     */
                    bool AccessDomainHasBeenSet() const;

                private:

                    /**
                     * <p>用于传入 AgentBucket 的 LibraryID</p>
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * <p>用于传入 AgentBucket 的 spaceId</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>用于传入 AgentBucket 的 AccessDomain</p>
                     */
                    std::string m_accessDomain;
                    bool m_accessDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_AGENTBUCKETSTORAGESOURCE_H_
