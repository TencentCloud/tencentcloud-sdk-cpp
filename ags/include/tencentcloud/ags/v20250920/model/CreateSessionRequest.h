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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CREATESESSIONREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CREATESESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/SessionState.h>
#include <tencentcloud/ags/v20250920/model/MetadataVar.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * CreateSession请求参数结构体
                */
                class CreateSessionRequest : public AbstractModel
                {
                public:
                    CreateSessionRequest();
                    ~CreateSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话所属空间 ID。</p>
                     * @return SpaceId <p>会话所属空间 ID。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>会话所属空间 ID。</p>
                     * @param _spaceId <p>会话所属空间 ID。</p>
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
                     * 获取<p>用户 ID。可通过调用方业务系统接口获取。</p>
                     * @return UserId <p>用户 ID。可通过调用方业务系统接口获取。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户 ID。可通过调用方业务系统接口获取。</p>
                     * @param _userId <p>用户 ID。可通过调用方业务系统接口获取。</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>Agent ID。可选。</p>
                     * @return AgentId <p>Agent ID。可选。</p>
                     * @deprecated
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent ID。可选。</p>
                     * @param _agentId <p>Agent ID。可选。</p>
                     * @deprecated
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * @deprecated
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取<p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     * @return SessionId <p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     * @param _sessionId <p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
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
                     * 获取<p>会话标题，最大长度 256 字符。</p>
                     * @return Title <p>会话标题，最大长度 256 字符。</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>会话标题，最大长度 256 字符。</p>
                     * @param _title <p>会话标题，最大长度 256 字符。</p>
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取<p>初始会话状态。</p>
                     * @return State <p>初始会话状态。</p>
                     * 
                     */
                    SessionState GetState() const;

                    /**
                     * 设置<p>初始会话状态。</p>
                     * @param _state <p>初始会话状态。</p>
                     * 
                     */
                    void SetState(const SessionState& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>创建会话时设置的初始元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p>
                     * @return Metadata <p>创建会话时设置的初始元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p>
                     * 
                     */
                    std::vector<MetadataVar> GetMetadata() const;

                    /**
                     * 设置<p>创建会话时设置的初始元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p>
                     * @param _metadata <p>创建会话时设置的初始元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p>
                     * 
                     */
                    void SetMetadata(const std::vector<MetadataVar>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>会话所属空间 ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>用户 ID。可通过调用方业务系统接口获取。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>Agent ID。可选。</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>会话 ID。可通过 CreateSession 或 DescribeSessions 接口获取。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>会话标题，最大长度 256 字符。</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>初始会话状态。</p>
                     */
                    SessionState m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>创建会话时设置的初始元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p>
                     */
                    std::vector<MetadataVar> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CREATESESSIONREQUEST_H_
