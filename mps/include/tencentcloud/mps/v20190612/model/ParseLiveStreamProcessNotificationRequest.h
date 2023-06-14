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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ParseLiveStreamProcessNotification请求参数结构体
                */
                class ParseLiveStreamProcessNotificationRequest : public AbstractModel
                {
                public:
                    ParseLiveStreamProcessNotificationRequest();
                    ~ParseLiveStreamProcessNotificationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取从 CMQ 获取到的直播流事件通知内容。
                     * @return Content 从 CMQ 获取到的直播流事件通知内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置从 CMQ 获取到的直播流事件通知内容。
                     * @param _content 从 CMQ 获取到的直播流事件通知内容。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 从 CMQ 获取到的直播流事件通知内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_PARSELIVESTREAMPROCESSNOTIFICATIONREQUEST_H_
