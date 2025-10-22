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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONRES_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/UploadChoice.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 对话接口出参
                */
                class CreateChatCompletionRes : public AbstractModel
                {
                public:
                    CreateChatCompletionRes();
                    ~CreateChatCompletionRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取枚举值，返回的数据类型
                     * @return Object 枚举值，返回的数据类型
                     * 
                     */
                    std::string GetObject() const;

                    /**
                     * 设置枚举值，返回的数据类型
                     * @param _object 枚举值，返回的数据类型
                     * 
                     */
                    void SetObject(const std::string& _object);

                    /**
                     * 判断参数 Object 是否已赋值
                     * @return Object 是否已赋值
                     * 
                     */
                    bool ObjectHasBeenSet() const;

                    /**
                     * 获取消息时间戳
                     * @return Created 消息时间戳
                     * 
                     */
                    int64_t GetCreated() const;

                    /**
                     * 设置消息时间戳
                     * @param _created 消息时间戳
                     * 
                     */
                    void SetCreated(const int64_t& _created);

                    /**
                     * 判断参数 Created 是否已赋值
                     * @return Created 是否已赋值
                     * 
                     */
                    bool CreatedHasBeenSet() const;

                    /**
                     * 获取输出模型
                     * @return Model 输出模型
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置输出模型
                     * @param _model 输出模型
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取用户标识
                     * @return AppId 用户标识
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户标识
                     * @param _appId 用户标识
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取主账户标识
                     * @return OwnerUin 主账户标识
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账户标识
                     * @param _ownerUin 主账户标识
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取当前账户标识
                     * @return Uin 当前账户标识
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置当前账户标识
                     * @param _uin 当前账户标识
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取Request ID

                     * @return RequestId Request ID

                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置Request ID

                     * @param _requestId Request ID

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
                     * 获取当前会话ID
                     * @return ChatId 当前会话ID
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置当前会话ID
                     * @param _chatId 当前会话ID
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取当前流ID
                     * @return StreamingId 当前流ID
                     * 
                     */
                    std::string GetStreamingId() const;

                    /**
                     * 设置当前流ID
                     * @param _streamingId 当前流ID
                     * 
                     */
                    void SetStreamingId(const std::string& _streamingId);

                    /**
                     * 判断参数 StreamingId 是否已赋值
                     * @return StreamingId 是否已赋值
                     * 
                     */
                    bool StreamingIdHasBeenSet() const;

                    /**
                     * 获取当前任务ID
                     * @return TaskId 当前任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置当前任务ID
                     * @param _taskId 当前任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取消息的数据详情
                     * @return Choices 消息的数据详情
                     * 
                     */
                    std::vector<UploadChoice> GetChoices() const;

                    /**
                     * 设置消息的数据详情
                     * @param _choices 消息的数据详情
                     * 
                     */
                    void SetChoices(const std::vector<UploadChoice>& _choices);

                    /**
                     * 判断参数 Choices 是否已赋值
                     * @return Choices 是否已赋值
                     * 
                     */
                    bool ChoicesHasBeenSet() const;

                private:

                    /**
                     * 枚举值，返回的数据类型
                     */
                    std::string m_object;
                    bool m_objectHasBeenSet;

                    /**
                     * 消息时间戳
                     */
                    int64_t m_created;
                    bool m_createdHasBeenSet;

                    /**
                     * 输出模型
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 用户标识
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账户标识
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 当前账户标识
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Request ID

                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 当前会话ID
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 当前流ID
                     */
                    std::string m_streamingId;
                    bool m_streamingIdHasBeenSet;

                    /**
                     * 当前任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 消息的数据详情
                     */
                    std::vector<UploadChoice> m_choices;
                    bool m_choicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CREATECHATCOMPLETIONRES_H_
