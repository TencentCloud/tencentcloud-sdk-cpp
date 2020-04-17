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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * TextModeration请求参数结构体
                */
                class TextModerationRequest : public AbstractModel
                {
                public:
                    TextModerationRequest();
                    ~TextModerationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     * @return Content 文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     * @param Content 文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 文本内容Base64编码。原文长度需小于15000字节，即5000个汉字以内。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_TEXTMODERATIONREQUEST_H_
