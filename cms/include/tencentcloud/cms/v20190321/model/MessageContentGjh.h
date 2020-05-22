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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_MESSAGECONTENTGJH_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_MESSAGECONTENTGJH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/MediaGjh.h>
#include <tencentcloud/cms/v20190321/model/UserInfoGjh.h>
#include <tencentcloud/cms/v20190321/model/ContentMsgGjh.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 广交会消息内容
                */
                class MessageContentGjh : public AbstractModel
                {
                public:
                    MessageContentGjh();
                    ~MessageContentGjh() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取具体消息内容
                     * @return Media 具体消息内容
                     */
                    MediaGjh GetMedia() const;

                    /**
                     * 设置具体消息内容
                     * @param Media 具体消息内容
                     */
                    void SetMedia(const MediaGjh& _media);

                    /**
                     * 判断参数 Media 是否已赋值
                     * @return Media 是否已赋值
                     */
                    bool MediaHasBeenSet() const;

                    /**
                     * 获取发表该信息的用户的信息
                     * @return User 发表该信息的用户的信息
                     */
                    UserInfoGjh GetUser() const;

                    /**
                     * 设置发表该信息的用户的信息
                     * @param User 发表该信息的用户的信息
                     */
                    void SetUser(const UserInfoGjh& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取发表该消息的设备的消息
                     * @return Msg 发表该消息的设备的消息
                     */
                    ContentMsgGjh GetMsg() const;

                    /**
                     * 设置发表该消息的设备的消息
                     * @param Msg 发表该消息的设备的消息
                     */
                    void SetMsg(const ContentMsgGjh& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 具体消息内容
                     */
                    MediaGjh m_media;
                    bool m_mediaHasBeenSet;

                    /**
                     * 发表该信息的用户的信息
                     */
                    UserInfoGjh m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 发表该消息的设备的消息
                     */
                    ContentMsgGjh m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_MESSAGECONTENTGJH_H_
