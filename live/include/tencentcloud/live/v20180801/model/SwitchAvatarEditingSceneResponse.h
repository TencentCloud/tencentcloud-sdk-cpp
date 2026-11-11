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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHAVATAREDITINGSCENERESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHAVATAREDITINGSCENERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * SwitchAvatarEditingScene返回参数结构体
                */
                class SwitchAvatarEditingSceneResponse : public AbstractModel
                {
                public:
                    SwitchAvatarEditingSceneResponse();
                    ~SwitchAvatarEditingSceneResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通道ID，通常是待编辑的直播流的源ID</p>
                     * @return ChannelId <p>通道ID，通常是待编辑的直播流的源ID</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>实时编辑会话ID</p>
                     * @return LiveId <p>实时编辑会话ID</p>
                     * 
                     */
                    std::string GetLiveId() const;

                    /**
                     * 判断参数 LiveId 是否已赋值
                     * @return LiveId 是否已赋值
                     * 
                     */
                    bool LiveIdHasBeenSet() const;

                private:

                    /**
                     * <p>通道ID，通常是待编辑的直播流的源ID</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>实时编辑会话ID</p>
                     */
                    std::string m_liveId;
                    bool m_liveIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHAVATAREDITINGSCENERESPONSE_H_
