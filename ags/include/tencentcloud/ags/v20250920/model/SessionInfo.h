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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONINFO_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 会话信息
                */
                class SessionInfo : public AbstractModel
                {
                public:
                    SessionInfo();
                    ~SessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>会话 ID。</p>
                     * @return SessionId <p>会话 ID。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话 ID。</p>
                     * @param _sessionId <p>会话 ID。</p>
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
                     * 获取<p>Session 快照状态</p>
                     * @return State <p>Session 快照状态</p>
                     * 
                     */
                    SessionState GetState() const;

                    /**
                     * 设置<p>Session 快照状态</p>
                     * @param _state <p>Session 快照状态</p>
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
                     * 获取<p>会话元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值，最多支持 64 项。</p>
                     * @return Metadata <p>会话元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值，最多支持 64 项。</p>
                     * 
                     */
                    std::vector<MetadataVar> GetMetadata() const;

                    /**
                     * 设置<p>会话元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值，最多支持 64 项。</p>
                     * @param _metadata <p>会话元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值，最多支持 64 项。</p>
                     * 
                     */
                    void SetMetadata(const std::vector<MetadataVar>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                    /**
                     * 获取<p>Agent ID。</p>
                     * @return AgentId <p>Agent ID。</p>
                     * @deprecated
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置<p>Agent ID。</p>
                     * @param _agentId <p>Agent ID。</p>
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
                     * 获取<p>用户 ID。</p>
                     * @return UserId <p>用户 ID。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户 ID。</p>
                     * @param _userId <p>用户 ID。</p>
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
                     * 获取<p>会话标题。</p>
                     * @return Title <p>会话标题。</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>会话标题。</p>
                     * @param _title <p>会话标题。</p>
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
                     * 获取<p>事件数量。</p>
                     * @return EventCount <p>事件数量。</p>
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置<p>事件数量。</p>
                     * @param _eventCount <p>事件数量。</p>
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间。</p>
                     * @return UpdateTime <p>更新时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间。</p>
                     * @param _updateTime <p>更新时间。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>会话 ID。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>会话所属空间 ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Session 快照状态</p>
                     */
                    SessionState m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>会话元数据，以键值对数组形式表示。每个元素包含 Metadata 名称和对应值，最多支持 64 项。</p>
                     */
                    std::vector<MetadataVar> m_metadata;
                    bool m_metadataHasBeenSet;

                    /**
                     * <p>Agent ID。</p>
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * <p>用户 ID。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>会话标题。</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>事件数量。</p>
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONINFO_H_
