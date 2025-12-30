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

#ifndef TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CLOUDMATEAGENTRESPONSE_H_
#define TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CLOUDMATEAGENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudmate/v20251030/model/ChatContent.h>


namespace TencentCloud
{
    namespace Cloudmate
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CloudMateAgent返回参数结构体
                */
                class CloudMateAgentResponse : public AbstractModel
                {
                public:
                    CloudMateAgentResponse();
                    ~CloudMateAgentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取会话ID，用于后续继续对话
                     * @return SessionId 会话ID，用于后续继续对话
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Unix 时间戳
                     * @return Timestamp Unix 时间戳
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取诊断内容
                     * @return Content 诊断内容
                     * 
                     */
                    ChatContent GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取是否为部分内容（流式场景）
                     * @return Partial 是否为部分内容（流式场景）
                     * 
                     */
                    bool GetPartial() const;

                    /**
                     * 判断参数 Partial 是否已赋值
                     * @return Partial 是否已赋值
                     * 
                     */
                    bool PartialHasBeenSet() const;

                    /**
                     * 获取本轮对话是否完成
                     * @return TurnComplete 本轮对话是否完成
                     * 
                     */
                    bool GetTurnComplete() const;

                    /**
                     * 判断参数 TurnComplete 是否已赋值
                     * @return TurnComplete 是否已赋值
                     * 
                     */
                    bool TurnCompleteHasBeenSet() const;

                    /**
                     * 获取错误代码，无错误时无该字段
                     * @return ErrorCode 错误代码，无错误时无该字段
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误详细信息，无错误时无该字段
                     * @return ErrorMessage 错误详细信息，无错误时无该字段
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 会话ID，用于后续继续对话
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Unix 时间戳
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 诊断内容
                     */
                    ChatContent m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 是否为部分内容（流式场景）
                     */
                    bool m_partial;
                    bool m_partialHasBeenSet;

                    /**
                     * 本轮对话是否完成
                     */
                    bool m_turnComplete;
                    bool m_turnCompleteHasBeenSet;

                    /**
                     * 错误代码，无错误时无该字段
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误详细信息，无错误时无该字段
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDMATE_V20251030_MODEL_CLOUDMATEAGENTRESPONSE_H_
