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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTHOUGHT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTHOUGHT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentProcedure.h>
#include <tencentcloud/lke/v20231130/model/FileInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent的思考过程
                */
                class AgentThought : public AbstractModel
                {
                public:
                    AgentThought();
                    ~AgentThought() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionId 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionId 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestId 请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestId 请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordId 对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordId 对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Elapsed 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetElapsed() const;

                    /**
                     * 设置当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elapsed 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElapsed(const uint64_t& _elapsed);

                    /**
                     * 判断参数 Elapsed 是否已赋值
                     * @return Elapsed 是否已赋值
                     * 
                     */
                    bool ElapsedHasBeenSet() const;

                    /**
                     * 获取当前是否为工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWorkflow 当前是否为工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsWorkflow() const;

                    /**
                     * 设置当前是否为工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isWorkflow 当前是否为工作流
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsWorkflow(const bool& _isWorkflow);

                    /**
                     * 判断参数 IsWorkflow 是否已赋值
                     * @return IsWorkflow 是否已赋值
                     * 
                     */
                    bool IsWorkflowHasBeenSet() const;

                    /**
                     * 获取如果当前是工作流，工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowName 如果当前是工作流，工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowName() const;

                    /**
                     * 设置如果当前是工作流，工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowName 如果当前是工作流，工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowName(const std::string& _workflowName);

                    /**
                     * 判断参数 WorkflowName 是否已赋值
                     * @return WorkflowName 是否已赋值
                     * 
                     */
                    bool WorkflowNameHasBeenSet() const;

                    /**
                     * 获取具体思考过程详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Procedures 具体思考过程详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentProcedure> GetProcedures() const;

                    /**
                     * 设置具体思考过程详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _procedures 具体思考过程详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcedures(const std::vector<AgentProcedure>& _procedures);

                    /**
                     * 判断参数 Procedures 是否已赋值
                     * @return Procedures 是否已赋值
                     * 
                     */
                    bool ProceduresHasBeenSet() const;

                    /**
                     * 获取TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TraceId TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _traceId TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Files 文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileInfo> GetFiles() const;

                    /**
                     * 设置文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _files 文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFiles(const std::vector<FileInfo>& _files);

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                private:

                    /**
                     * 会话 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 请求 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 对应哪条会话, 会话 ID, 用于回答的消息存储使用, 可提前生成, 保存消息时使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 当前请求执行时间, 单位 ms
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_elapsed;
                    bool m_elapsedHasBeenSet;

                    /**
                     * 当前是否为工作流
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isWorkflow;
                    bool m_isWorkflowHasBeenSet;

                    /**
                     * 如果当前是工作流，工作流名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowName;
                    bool m_workflowNameHasBeenSet;

                    /**
                     * 具体思考过程详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentProcedure> m_procedures;
                    bool m_proceduresHasBeenSet;

                    /**
                     * TraceId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * 文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileInfo> m_files;
                    bool m_filesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTHOUGHT_H_
