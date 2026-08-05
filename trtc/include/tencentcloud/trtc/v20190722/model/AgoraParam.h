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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_AGORAPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_AGORAPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 声网拉流参数
                */
                class AgoraParam : public AbstractModel
                {
                public:
                    AgoraParam();
                    ~AgoraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>声网提供的应用标识</p>
                     * @return AppId <p>声网提供的应用标识</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>声网提供的应用标识</p>
                     * @param _appId <p>声网提供的应用标识</p>
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
                     * 获取<p>声网提供的频道名</p>
                     * @return Channel <p>声网提供的频道名</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>声网提供的频道名</p>
                     * @param _channel <p>声网提供的频道名</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取<p>声网录制的频道模式， 可选值如下：（默认值为0） 0: 通信（默认）,即常见的 1 对 1 单聊或群聊， 频道内任何用户可以自由说话； 1: 直播，有两种用户角色: 主播和观众。</p><p>枚举值：</p><ul><li>0:： 通信（默认）</li><li>1： 直播</li></ul>
                     * @return ChannelProfile <p>声网录制的频道模式， 可选值如下：（默认值为0） 0: 通信（默认）,即常见的 1 对 1 单聊或群聊， 频道内任何用户可以自由说话； 1: 直播，有两种用户角色: 主播和观众。</p><p>枚举值：</p><ul><li>0:： 通信（默认）</li><li>1： 直播</li></ul>
                     * 
                     */
                    uint64_t GetChannelProfile() const;

                    /**
                     * 设置<p>声网录制的频道模式， 可选值如下：（默认值为0） 0: 通信（默认）,即常见的 1 对 1 单聊或群聊， 频道内任何用户可以自由说话； 1: 直播，有两种用户角色: 主播和观众。</p><p>枚举值：</p><ul><li>0:： 通信（默认）</li><li>1： 直播</li></ul>
                     * @param _channelProfile <p>声网录制的频道模式， 可选值如下：（默认值为0） 0: 通信（默认）,即常见的 1 对 1 单聊或群聊， 频道内任何用户可以自由说话； 1: 直播，有两种用户角色: 主播和观众。</p><p>枚举值：</p><ul><li>0:： 通信（默认）</li><li>1： 直播</li></ul>
                     * 
                     */
                    void SetChannelProfile(const uint64_t& _channelProfile);

                    /**
                     * 判断参数 ChannelProfile 是否已赋值
                     * @return ChannelProfile 是否已赋值
                     * 
                     */
                    bool ChannelProfileHasBeenSet() const;

                    /**
                     * 获取<p>绑定频道生成的临时Token</p>
                     * @return Token <p>绑定频道生成的临时Token</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>绑定频道生成的临时Token</p>
                     * @param _token <p>绑定频道生成的临时Token</p>
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>用户ID</p>
                     * @return Uid <p>用户ID</p>
                     * 
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _uid <p>用户ID</p>
                     * 
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取<p>信任用户的列表</p>
                     * @return TrustedUserIdList <p>信任用户的列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetTrustedUserIdList() const;

                    /**
                     * 设置<p>信任用户的列表</p>
                     * @param _trustedUserIdList <p>信任用户的列表</p>
                     * 
                     */
                    void SetTrustedUserIdList(const std::vector<uint64_t>& _trustedUserIdList);

                    /**
                     * 判断参数 TrustedUserIdList 是否已赋值
                     * @return TrustedUserIdList 是否已赋值
                     * 
                     */
                    bool TrustedUserIdListHasBeenSet() const;

                    /**
                     * 获取<p>非信任用户的列表</p>
                     * @return UntrustedUserIdList <p>非信任用户的列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetUntrustedUserIdList() const;

                    /**
                     * 设置<p>非信任用户的列表</p>
                     * @param _untrustedUserIdList <p>非信任用户的列表</p>
                     * 
                     */
                    void SetUntrustedUserIdList(const std::vector<uint64_t>& _untrustedUserIdList);

                    /**
                     * 判断参数 UntrustedUserIdList 是否已赋值
                     * @return UntrustedUserIdList 是否已赋值
                     * 
                     */
                    bool UntrustedUserIdListHasBeenSet() const;

                private:

                    /**
                     * <p>声网提供的应用标识</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>声网提供的频道名</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>声网录制的频道模式， 可选值如下：（默认值为0） 0: 通信（默认）,即常见的 1 对 1 单聊或群聊， 频道内任何用户可以自由说话； 1: 直播，有两种用户角色: 主播和观众。</p><p>枚举值：</p><ul><li>0:： 通信（默认）</li><li>1： 直播</li></ul>
                     */
                    uint64_t m_channelProfile;
                    bool m_channelProfileHasBeenSet;

                    /**
                     * <p>绑定频道生成的临时Token</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>用户ID</p>
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * <p>信任用户的列表</p>
                     */
                    std::vector<uint64_t> m_trustedUserIdList;
                    bool m_trustedUserIdListHasBeenSet;

                    /**
                     * <p>非信任用户的列表</p>
                     */
                    std::vector<uint64_t> m_untrustedUserIdList;
                    bool m_untrustedUserIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_AGORAPARAM_H_
