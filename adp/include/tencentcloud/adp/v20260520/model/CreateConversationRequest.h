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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATECONVERSATIONREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATECONVERSATIONREQUEST_H_

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
                * CreateConversation请求参数结构体
                */
                class CreateConversationRequest : public AbstractModel
                {
                public:
                    CreateConversationRequest();
                    ~CreateConversationRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取<p>登录用户子账号(集成商模式必填)</p>
                     * @return LoginSubAccountUin <p>登录用户子账号(集成商模式必填)</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>登录用户子账号(集成商模式必填)</p>
                     * @param _loginSubAccountUin <p>登录用户子账号(集成商模式必填)</p>
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
                     * 获取<p>登录用户主账号(集成商模式必填)</p>
                     * @return LoginUin <p>登录用户主账号(集成商模式必填)</p>
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置<p>登录用户主账号(集成商模式必填)</p>
                     * @param _loginUin <p>登录用户主账号(集成商模式必填)</p>
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

                    /**
                     * 获取<p>Type=CONVERSATION_TYPE_API 时必填，访客ID</p>
                     * @return UserId <p>Type=CONVERSATION_TYPE_API 时必填，访客ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>Type=CONVERSATION_TYPE_API 时必填，访客ID</p>
                     * @param _userId <p>Type=CONVERSATION_TYPE_API 时必填，访客ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>会话类型 枚举值: 0-CONVERSATION_TYPE_UNSPECIFIED(未指定；列表查询时表示全部), 1-CONVERSATION_TYPE_VISITOR(访客端体验), 2-CONVERSATION_TYPE_EVALUATION(评测), 5-CONVERSATION_TYPE_API(API 接入), 10-CONVERSATION_TYPE_WORKFLOW(工作流调试), 20-CONVERSATION_TYPE_SHARE(分享链接)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Type=CONVERSATION_TYPE_API 时必填，应用密钥</p>
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * <p>登录用户子账号(集成商模式必填)</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * <p>登录用户主账号(集成商模式必填)</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * <p>Type=CONVERSATION_TYPE_SHARE 时必填，分享码</p>
                     */
                    std::string m_shareCode;
                    bool m_shareCodeHasBeenSet;

                    /**
                     * <p>Type=CONVERSATION_TYPE_API 时必填，访客ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATECONVERSATIONREQUEST_H_
