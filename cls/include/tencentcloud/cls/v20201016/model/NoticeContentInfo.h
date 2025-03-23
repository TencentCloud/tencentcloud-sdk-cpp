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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTINFO_H_

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
                * 通知模板内容
                */
                class NoticeContentInfo : public AbstractModel
                {
                public:
                    NoticeContentInfo();
                    ~NoticeContentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知内容模板标题信息。
部分通知渠道类型不支持“标题”，请参照腾讯云控制台页面。
                     * @return Title 通知内容模板标题信息。
部分通知渠道类型不支持“标题”，请参照腾讯云控制台页面。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置通知内容模板标题信息。
部分通知渠道类型不支持“标题”，请参照腾讯云控制台页面。
                     * @param _title 通知内容模板标题信息。
部分通知渠道类型不支持“标题”，请参照腾讯云控制台页面。
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
                     * 获取通知内容模板正文信息。
                     * @return Content 通知内容模板正文信息。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置通知内容模板正文信息。
                     * @param _content 通知内容模板正文信息。
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
                     * 获取请求头（Request Headers）：在HTTP请求中，请求头包含了客户端向服务器发送的附加信息，如用户代理、授权凭证、期望的响应格式等。
仅“自定义回调”支持该配置。
                     * @return Headers 请求头（Request Headers）：在HTTP请求中，请求头包含了客户端向服务器发送的附加信息，如用户代理、授权凭证、期望的响应格式等。
仅“自定义回调”支持该配置。
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置请求头（Request Headers）：在HTTP请求中，请求头包含了客户端向服务器发送的附加信息，如用户代理、授权凭证、期望的响应格式等。
仅“自定义回调”支持该配置。
                     * @param _headers 请求头（Request Headers）：在HTTP请求中，请求头包含了客户端向服务器发送的附加信息，如用户代理、授权凭证、期望的响应格式等。
仅“自定义回调”支持该配置。
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 通知内容模板标题信息。
部分通知渠道类型不支持“标题”，请参照腾讯云控制台页面。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 通知内容模板正文信息。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 请求头（Request Headers）：在HTTP请求中，请求头包含了客户端向服务器发送的附加信息，如用户代理、授权凭证、期望的响应格式等。
仅“自定义回调”支持该配置。
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NOTICECONTENTINFO_H_
