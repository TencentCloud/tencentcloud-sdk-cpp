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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 回调地址
                */
                class WebCallback : public AbstractModel
                {
                public:
                    WebCallback();
                    ~WebCallback() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回调的类型。可选值：
- Http
- WeCom
- DingTalk
- Lark
                     * @return CallbackType 回调的类型。可选值：
- Http
- WeCom
- DingTalk
- Lark
                     * 
                     */
                    std::string GetCallbackType() const;

                    /**
                     * 设置回调的类型。可选值：
- Http
- WeCom
- DingTalk
- Lark
                     * @param _callbackType 回调的类型。可选值：
- Http
- WeCom
- DingTalk
- Lark
                     * 
                     */
                    void SetCallbackType(const std::string& _callbackType);

                    /**
                     * 判断参数 CallbackType 是否已赋值
                     * @return CallbackType 是否已赋值
                     * 
                     */
                    bool CallbackTypeHasBeenSet() const;

                    /**
                     * 获取回调地址，最大支持1024个字节。
也可使用WebCallbackId引用集成配置中的URL，此时该字段请填写为空字符串。
                     * @return Url 回调地址，最大支持1024个字节。
也可使用WebCallbackId引用集成配置中的URL，此时该字段请填写为空字符串。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置回调地址，最大支持1024个字节。
也可使用WebCallbackId引用集成配置中的URL，此时该字段请填写为空字符串。
                     * @param _url 回调地址，最大支持1024个字节。
也可使用WebCallbackId引用集成配置中的URL，此时该字段请填写为空字符串。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取集成配置ID。
                     * @return WebCallbackId 集成配置ID。
                     * 
                     */
                    std::string GetWebCallbackId() const;

                    /**
                     * 设置集成配置ID。
                     * @param _webCallbackId 集成配置ID。
                     * 
                     */
                    void SetWebCallbackId(const std::string& _webCallbackId);

                    /**
                     * 判断参数 WebCallbackId 是否已赋值
                     * @return WebCallbackId 是否已赋值
                     * 
                     */
                    bool WebCallbackIdHasBeenSet() const;

                    /**
                     * 获取回调方法。可选值：
- POST（默认值）
- PUT

注意：
- 参数CallbackType为Http时为必选，其它回调方式无需填写。
                     * @return Method 回调方法。可选值：
- POST（默认值）
- PUT

注意：
- 参数CallbackType为Http时为必选，其它回调方式无需填写。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置回调方法。可选值：
- POST（默认值）
- PUT

注意：
- 参数CallbackType为Http时为必选，其它回调方式无需填写。
                     * @param _method 回调方法。可选值：
- POST（默认值）
- PUT

注意：
- 参数CallbackType为Http时为必选，其它回调方式无需填写。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取通知内容模板ID，使用Default-zh引用默认模板（中文），使用Default-en引用DefaultTemplate(English)。
                     * @return NoticeContentId 通知内容模板ID，使用Default-zh引用默认模板（中文），使用Default-en引用DefaultTemplate(English)。
                     * 
                     */
                    std::string GetNoticeContentId() const;

                    /**
                     * 设置通知内容模板ID，使用Default-zh引用默认模板（中文），使用Default-en引用DefaultTemplate(English)。
                     * @param _noticeContentId 通知内容模板ID，使用Default-zh引用默认模板（中文），使用Default-en引用DefaultTemplate(English)。
                     * 
                     */
                    void SetNoticeContentId(const std::string& _noticeContentId);

                    /**
                     * 判断参数 NoticeContentId 是否已赋值
                     * @return NoticeContentId 是否已赋值
                     * 
                     */
                    bool NoticeContentIdHasBeenSet() const;

                    /**
                     * 获取提醒类型。

0：不提醒；1：指定人；2：所有人
                     * @return RemindType 提醒类型。

0：不提醒；1：指定人；2：所有人
                     * 
                     */
                    uint64_t GetRemindType() const;

                    /**
                     * 设置提醒类型。

0：不提醒；1：指定人；2：所有人
                     * @param _remindType 提醒类型。

0：不提醒；1：指定人；2：所有人
                     * 
                     */
                    void SetRemindType(const uint64_t& _remindType);

                    /**
                     * 判断参数 RemindType 是否已赋值
                     * @return RemindType 是否已赋值
                     * 
                     */
                    bool RemindTypeHasBeenSet() const;

                    /**
                     * 获取电话列表。
                     * @return Mobiles 电话列表。
                     * 
                     */
                    std::vector<std::string> GetMobiles() const;

                    /**
                     * 设置电话列表。
                     * @param _mobiles 电话列表。
                     * 
                     */
                    void SetMobiles(const std::vector<std::string>& _mobiles);

                    /**
                     * 判断参数 Mobiles 是否已赋值
                     * @return Mobiles 是否已赋值
                     * 
                     */
                    bool MobilesHasBeenSet() const;

                    /**
                     * 获取用户ID列表。
                     * @return UserIds 用户ID列表。
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置用户ID列表。
                     * @param _userIds 用户ID列表。
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取该参数已废弃，请使用NoticeContentId。
                     * @return Headers 该参数已废弃，请使用NoticeContentId。
                     * @deprecated
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置该参数已废弃，请使用NoticeContentId。
                     * @param _headers 该参数已废弃，请使用NoticeContentId。
                     * @deprecated
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * @deprecated
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取该参数已废弃，请使用NoticeContentId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Body 该参数已废弃，请使用NoticeContentId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetBody() const;

                    /**
                     * 设置该参数已废弃，请使用NoticeContentId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _body 该参数已废弃，请使用NoticeContentId。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * @deprecated
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取序号。
- 入参无效。
- 出参有效。
                     * @return Index 序号。
- 入参无效。
- 出参有效。
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置序号。
- 入参无效。
- 出参有效。
                     * @param _index 序号。
- 入参无效。
- 出参有效。
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 回调的类型。可选值：
- Http
- WeCom
- DingTalk
- Lark
                     */
                    std::string m_callbackType;
                    bool m_callbackTypeHasBeenSet;

                    /**
                     * 回调地址，最大支持1024个字节。
也可使用WebCallbackId引用集成配置中的URL，此时该字段请填写为空字符串。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 集成配置ID。
                     */
                    std::string m_webCallbackId;
                    bool m_webCallbackIdHasBeenSet;

                    /**
                     * 回调方法。可选值：
- POST（默认值）
- PUT

注意：
- 参数CallbackType为Http时为必选，其它回调方式无需填写。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 通知内容模板ID，使用Default-zh引用默认模板（中文），使用Default-en引用DefaultTemplate(English)。
                     */
                    std::string m_noticeContentId;
                    bool m_noticeContentIdHasBeenSet;

                    /**
                     * 提醒类型。

0：不提醒；1：指定人；2：所有人
                     */
                    uint64_t m_remindType;
                    bool m_remindTypeHasBeenSet;

                    /**
                     * 电话列表。
                     */
                    std::vector<std::string> m_mobiles;
                    bool m_mobilesHasBeenSet;

                    /**
                     * 用户ID列表。
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 该参数已废弃，请使用NoticeContentId。
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 该参数已废弃，请使用NoticeContentId。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 序号。
- 入参无效。
- 出参有效。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
