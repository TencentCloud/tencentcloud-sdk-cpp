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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DELETECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DELETECONVERSATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DeleteConversation请求参数结构体
                */
                class DeleteConversationRequest : public AbstractModel
                {
                public:
                    DeleteConversationRequest();
                    ~DeleteConversationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话 ID</p>
                     * @return ConversationId <p>会话 ID</p>
                     * 
                     */
                    std::string GetConversationId() const;

                    /**
                     * 设置<p>会话 ID</p>
                     * @param _conversationId <p>会话 ID</p>
                     * 
                     */
                    void SetConversationId(const std::string& _conversationId);

                    /**
                     * 判断参数 ConversationId 是否已赋值
                     * @return ConversationId 是否已赋值
                     * 
                     */
                    bool ConversationIdHasBeenSet() const;

                    /**
                     * 获取<p>会话类型 枚举值: 0-CONVERSATION_TYPE_UNSPECIFIED(未指定；列表查询时表示全部), 1-CONVERSATION_TYPE_VISITOR(访客端体验), 2-CONVERSATION_TYPE_EVALUATION(评测), 5-CONVERSATION_TYPE_API(API 接入), 10-CONVERSATION_TYPE_WORKFLOW(工作流调试), 20-CONVERSATION_TYPE_SHARE(分享链接)</p>
                     * @return Type <p>会话类型 枚举值: 0-CONVERSATION_TYPE_UNSPECIFIED(未指定；列表查询时表示全部), 1-CONVERSATION_TYPE_VISITOR(访客端体验), 2-CONVERSATION_TYPE_EVALUATION(评测), 5-CONVERSATION_TYPE_API(API 接入), 10-CONVERSATION_TYPE_WORKFLOW(工作流调试), 20-CONVERSATION_TYPE_SHARE(分享链接)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>会话类型 枚举值: 0-CONVERSATION_TYPE_UNSPECIFIED(未指定；列表查询时表示全部), 1-CONVERSATION_TYPE_VISITOR(访客端体验), 2-CONVERSATION_TYPE_EVALUATION(评测), 5-CONVERSATION_TYPE_API(API 接入), 10-CONVERSATION_TYPE_WORKFLOW(工作流调试), 20-CONVERSATION_TYPE_SHARE(分享链接)</p>
                     * @param _type <p>会话类型 枚举值: 0-CONVERSATION_TYPE_UNSPECIFIED(未指定；列表查询时表示全部), 1-CONVERSATION_TYPE_VISITOR(访客端体验), 2-CONVERSATION_TYPE_EVALUATION(评测), 5-CONVERSATION_TYPE_API(API 接入), 10-CONVERSATION_TYPE_WORKFLOW(工作流调试), 20-CONVERSATION_TYPE_SHARE(分享链接)</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Type=CONVERSATION_TYPE_API 时必填，应用密钥</p>
                     * @return AppKey <p>Type=CONVERSATION_TYPE_API 时必填，应用密钥</p>
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 设置<p>Type=CONVERSATION_TYPE_API 时必填，应用密钥</p>
                     * @param _appKey <p>Type=CONVERSATION_TYPE_API 时必填，应用密钥</p>
                     * 
                     */
                    void SetAppKey(const std::string& _appKey);

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取<p>子用户Uin</p>
                     * @return LoginSubAccountUin <p>子用户Uin</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>子用户Uin</p>
                     * @param _loginSubAccountUin <p>子用户Uin</p>
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>主用户Uin</p>
                     * @return LoginUin <p>主用户Uin</p>
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置<p>主用户Uin</p>
                     * @param _loginUin <p>主用户Uin</p>
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取<p>Type=CONVERSATION_TYPE_SHARE 时必填，分享码</p>
                     * @return ShareCode <p>Type=CONVERSATION_TYPE_SHARE 时必填，分享码</p>
                     * 
                     */
                    std::string GetShareCode() const;

                    /**
                     * 设置<p>Type=CONVERSATION_TYPE_SHARE 时必填，分享码</p>
                     * @param _shareCode <p>Type=CONVERSATION_TYPE_SHARE 时必填，分享码</p>
                     * 
                     */
                    void SetShareCode(const std::string& _shareCode);

                    /**
                     * 判断参数 ShareCode 是否已赋值
                     * @return ShareCode 是否已赋值
                     * 
                     */
                    bool ShareCodeHasBeenSet() const;

                private:

                    /**
                     * <p>会话 ID</p>
                     */
                    std::string m_conversationId;
                    bool m_conversationIdHasBeenSet;

                    /**
                     * <p>会话类型 枚举值: 0-CONVERSATION_TYPE_UNSPECIFIED(未指定；列表查询时表示全部), 1-CONVERSATION_TYPE_VISITOR(访客端体验), 2-CONVERSATION_TYPE_EVALUATION(评测), 5-CONVERSATION_TYPE_API(API 接入), 10-CONVERSATION_TYPE_WORKFLOW(工作流调试), 20-CONVERSATION_TYPE_SHARE(分享链接)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Type=CONVERSATION_TYPE_API 时必填，应用密钥</p>
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * <p>子用户Uin</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * <p>主用户Uin</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * <p>Type=CONVERSATION_TYPE_SHARE 时必填，分享码</p>
                     */
                    std::string m_shareCode;
                    bool m_shareCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DELETECONVERSATIONREQUEST_H_
