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

#ifndef TENCENTCLOUD_SOLAR_V20181011_MODEL_SENDWXTOUCHTASKREQUEST_H_
#define TENCENTCLOUD_SOLAR_V20181011_MODEL_SENDWXTOUCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Solar
    {
        namespace V20181011
        {
            namespace Model
            {
                /**
                * SendWxTouchTask请求参数结构体
                */
                class SendWxTouchTaskRequest : public AbstractModel
                {
                public:
                    SendWxTouchTaskRequest();
                    ~SendWxTouchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户分组ID
                     * @return GroupId 客户分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置客户分组ID
                     * @param _groupId 客户分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取去除今日已发送的客户
                     * @return DistinctFlag 去除今日已发送的客户
                     * 
                     */
                    bool GetDistinctFlag() const;

                    /**
                     * 设置去除今日已发送的客户
                     * @param _distinctFlag 去除今日已发送的客户
                     * 
                     */
                    void SetDistinctFlag(const bool& _distinctFlag);

                    /**
                     * 判断参数 DistinctFlag 是否已赋值
                     * @return DistinctFlag 是否已赋值
                     * 
                     */
                    bool DistinctFlagHasBeenSet() const;

                    /**
                     * 获取是否立马发送
                     * @return IsSendNow 是否立马发送
                     * 
                     */
                    bool GetIsSendNow() const;

                    /**
                     * 设置是否立马发送
                     * @param _isSendNow 是否立马发送
                     * 
                     */
                    void SetIsSendNow(const bool& _isSendNow);

                    /**
                     * 判断参数 IsSendNow 是否已赋值
                     * @return IsSendNow 是否已赋值
                     * 
                     */
                    bool IsSendNowHasBeenSet() const;

                    /**
                     * 获取发送时间，一般为0
                     * @return SendDate 发送时间，一般为0
                     * 
                     */
                    int64_t GetSendDate() const;

                    /**
                     * 设置发送时间，一般为0
                     * @param _sendDate 发送时间，一般为0
                     * 
                     */
                    void SetSendDate(const int64_t& _sendDate);

                    /**
                     * 判断参数 SendDate 是否已赋值
                     * @return SendDate 是否已赋值
                     * 
                     */
                    bool SendDateHasBeenSet() const;

                    /**
                     * 获取任务名称
                     * @return TaskName 任务名称
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名称
                     * @param _taskName 任务名称
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取微信触达类型，text, news, smallapp, tmplmsg
                     * @return WxTouchType 微信触达类型，text, news, smallapp, tmplmsg
                     * 
                     */
                    std::string GetWxTouchType() const;

                    /**
                     * 设置微信触达类型，text, news, smallapp, tmplmsg
                     * @param _wxTouchType 微信触达类型，text, news, smallapp, tmplmsg
                     * 
                     */
                    void SetWxTouchType(const std::string& _wxTouchType);

                    /**
                     * 判断参数 WxTouchType 是否已赋值
                     * @return WxTouchType 是否已赋值
                     * 
                     */
                    bool WxTouchTypeHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return Title 标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param _title 标题
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
                     * 获取文本内容
                     * @return Content 文本内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文本内容
                     * @param _content 文本内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取图文素材ID
                     * @return NewsId 图文素材ID
                     * 
                     */
                    std::string GetNewsId() const;

                    /**
                     * 设置图文素材ID
                     * @param _newsId 图文素材ID
                     * 
                     */
                    void SetNewsId(const std::string& _newsId);

                    /**
                     * 判断参数 NewsId 是否已赋值
                     * @return NewsId 是否已赋值
                     * 
                     */
                    bool NewsIdHasBeenSet() const;

                    /**
                     * 获取小程序卡片ID
                     * @return SmallProgramId 小程序卡片ID
                     * 
                     */
                    std::string GetSmallProgramId() const;

                    /**
                     * 设置小程序卡片ID
                     * @param _smallProgramId 小程序卡片ID
                     * 
                     */
                    void SetSmallProgramId(const std::string& _smallProgramId);

                    /**
                     * 判断参数 SmallProgramId 是否已赋值
                     * @return SmallProgramId 是否已赋值
                     * 
                     */
                    bool SmallProgramIdHasBeenSet() const;

                    /**
                     * 获取模板消息ID
                     * @return TemplateId 模板消息ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板消息ID
                     * @param _templateId 模板消息ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取微信公众号appId
                     * @return WxAppId 微信公众号appId
                     * 
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置微信公众号appId
                     * @param _wxAppId 微信公众号appId
                     * 
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     * 
                     */
                    bool WxAppIdHasBeenSet() const;

                private:

                    /**
                     * 客户分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 去除今日已发送的客户
                     */
                    bool m_distinctFlag;
                    bool m_distinctFlagHasBeenSet;

                    /**
                     * 是否立马发送
                     */
                    bool m_isSendNow;
                    bool m_isSendNowHasBeenSet;

                    /**
                     * 发送时间，一般为0
                     */
                    int64_t m_sendDate;
                    bool m_sendDateHasBeenSet;

                    /**
                     * 任务名称
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 微信触达类型，text, news, smallapp, tmplmsg
                     */
                    std::string m_wxTouchType;
                    bool m_wxTouchTypeHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 文本内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 图文素材ID
                     */
                    std::string m_newsId;
                    bool m_newsIdHasBeenSet;

                    /**
                     * 小程序卡片ID
                     */
                    std::string m_smallProgramId;
                    bool m_smallProgramIdHasBeenSet;

                    /**
                     * 模板消息ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 微信公众号appId
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOLAR_V20181011_MODEL_SENDWXTOUCHTASKREQUEST_H_
