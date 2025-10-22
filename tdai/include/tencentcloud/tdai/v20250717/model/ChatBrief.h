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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_CHATBRIEF_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_CHATBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * 会话信息
                */
                class ChatBrief : public AbstractModel
                {
                public:
                    ChatBrief();
                    ~ChatBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主账号Id
                     * @return AppId 主账号Id
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置主账号Id
                     * @param _appId 主账号Id
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
                     * 获取主账号uin
                     * @return Uin 主账号uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号uin
                     * @param _uin 主账号uin
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
                     * 获取子账号uin
                     * @return OwnerUin 子账号uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置子账号uin
                     * @param _ownerUin 子账号uin
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
                     * 获取智能体实例ID
                     * @return InstanceId 智能体实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置智能体实例ID
                     * @param _instanceId 智能体实例ID
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
                     * 获取会话ID
                     * @return ChatId 会话ID
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置会话ID
                     * @param _chatId 会话ID
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取会话标题
                     * @return Title 会话标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置会话标题
                     * @param _title 会话标题
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
                     * 获取会话状态
                     * @return Status 会话状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置会话状态
                     * @param _status 会话状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最后一条流式ID
                     * @return LastStreamingId 最后一条流式ID
                     * 
                     */
                    std::string GetLastStreamingId() const;

                    /**
                     * 设置最后一条流式ID
                     * @param _lastStreamingId 最后一条流式ID
                     * 
                     */
                    void SetLastStreamingId(const std::string& _lastStreamingId);

                    /**
                     * 判断参数 LastStreamingId 是否已赋值
                     * @return LastStreamingId 是否已赋值
                     * 
                     */
                    bool LastStreamingIdHasBeenSet() const;

                    /**
                     * 获取最后一条流式TokenID
                     * @return LastStreamingTokenId 最后一条流式TokenID
                     * 
                     */
                    int64_t GetLastStreamingTokenId() const;

                    /**
                     * 设置最后一条流式TokenID
                     * @param _lastStreamingTokenId 最后一条流式TokenID
                     * 
                     */
                    void SetLastStreamingTokenId(const int64_t& _lastStreamingTokenId);

                    /**
                     * 判断参数 LastStreamingTokenId 是否已赋值
                     * @return LastStreamingTokenId 是否已赋值
                     * 
                     */
                    bool LastStreamingTokenIdHasBeenSet() const;

                private:

                    /**
                     * 主账号Id
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 主账号uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 智能体实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 会话ID
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 会话标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 会话状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最后一条流式ID
                     */
                    std::string m_lastStreamingId;
                    bool m_lastStreamingIdHasBeenSet;

                    /**
                     * 最后一条流式TokenID
                     */
                    int64_t m_lastStreamingTokenId;
                    bool m_lastStreamingTokenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_CHATBRIEF_H_
