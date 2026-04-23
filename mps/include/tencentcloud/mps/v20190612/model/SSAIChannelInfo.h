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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SSAICHANNELINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SSAICHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SSAIConf.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 广告插入频道配置信息。
                */
                class SSAIChannelInfo : public AbstractModel
                {
                public:
                    SSAIChannelInfo();
                    ~SSAIChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>频道ID，全局唯一标识。</p>
                     * @return ID <p>频道ID，全局唯一标识。</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>频道ID，全局唯一标识。</p>
                     * @param _iD <p>频道ID，全局唯一标识。</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>频道名称。</p>
                     * @return Name <p>频道名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>频道名称。</p>
                     * @param _name <p>频道名称。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>广告源信息。</p>
                     * @return ContentSource <p>广告源信息。</p>
                     * 
                     */
                    std::string GetContentSource() const;

                    /**
                     * 设置<p>广告源信息。</p>
                     * @param _contentSource <p>广告源信息。</p>
                     * 
                     */
                    void SetContentSource(const std::string& _contentSource);

                    /**
                     * 判断参数 ContentSource 是否已赋值
                     * @return ContentSource 是否已赋值
                     * 
                     */
                    bool ContentSourceHasBeenSet() const;

                    /**
                     * 获取<p>播放地址。兼容旧版本参数，推荐使用HlsPlaybackPrefix或DashPlaybackPrefix</p>
                     * @return PlaybackPrefix <p>播放地址。兼容旧版本参数，推荐使用HlsPlaybackPrefix或DashPlaybackPrefix</p>
                     * 
                     */
                    std::string GetPlaybackPrefix() const;

                    /**
                     * 设置<p>播放地址。兼容旧版本参数，推荐使用HlsPlaybackPrefix或DashPlaybackPrefix</p>
                     * @param _playbackPrefix <p>播放地址。兼容旧版本参数，推荐使用HlsPlaybackPrefix或DashPlaybackPrefix</p>
                     * 
                     */
                    void SetPlaybackPrefix(const std::string& _playbackPrefix);

                    /**
                     * 判断参数 PlaybackPrefix 是否已赋值
                     * @return PlaybackPrefix 是否已赋值
                     * 
                     */
                    bool PlaybackPrefixHasBeenSet() const;

                    /**
                     * 获取<p>hls播放地址</p>
                     * @return HlsPlaybackPrefix <p>hls播放地址</p>
                     * 
                     */
                    std::string GetHlsPlaybackPrefix() const;

                    /**
                     * 设置<p>hls播放地址</p>
                     * @param _hlsPlaybackPrefix <p>hls播放地址</p>
                     * 
                     */
                    void SetHlsPlaybackPrefix(const std::string& _hlsPlaybackPrefix);

                    /**
                     * 判断参数 HlsPlaybackPrefix 是否已赋值
                     * @return HlsPlaybackPrefix 是否已赋值
                     * 
                     */
                    bool HlsPlaybackPrefixHasBeenSet() const;

                    /**
                     * 获取<p>dash播放地址</p>
                     * @return DashPlaybackPrefix <p>dash播放地址</p>
                     * 
                     */
                    std::string GetDashPlaybackPrefix() const;

                    /**
                     * 设置<p>dash播放地址</p>
                     * @param _dashPlaybackPrefix <p>dash播放地址</p>
                     * 
                     */
                    void SetDashPlaybackPrefix(const std::string& _dashPlaybackPrefix);

                    /**
                     * 判断参数 DashPlaybackPrefix 是否已赋值
                     * @return DashPlaybackPrefix 是否已赋值
                     * 
                     */
                    bool DashPlaybackPrefixHasBeenSet() const;

                    /**
                     * 获取<p>广告插入SSAI配置信息。</p>
                     * @return SSAIInfo <p>广告插入SSAI配置信息。</p>
                     * 
                     */
                    SSAIConf GetSSAIInfo() const;

                    /**
                     * 设置<p>广告插入SSAI配置信息。</p>
                     * @param _sSAIInfo <p>广告插入SSAI配置信息。</p>
                     * 
                     */
                    void SetSSAIInfo(const SSAIConf& _sSAIInfo);

                    /**
                     * 判断参数 SSAIInfo 是否已赋值
                     * @return SSAIInfo 是否已赋值
                     * 
                     */
                    bool SSAIInfoHasBeenSet() const;

                    /**
                     * 获取<p>地域信息。</p>
                     * @return Region <p>地域信息。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域信息。</p>
                     * @param _region <p>地域信息。</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>用于clickthrough地址</p>
                     * @return SessionInitPrefix <p>用于clickthrough地址</p>
                     * 
                     */
                    std::string GetSessionInitPrefix() const;

                    /**
                     * 设置<p>用于clickthrough地址</p>
                     * @param _sessionInitPrefix <p>用于clickthrough地址</p>
                     * 
                     */
                    void SetSessionInitPrefix(const std::string& _sessionInitPrefix);

                    /**
                     * 判断参数 SessionInitPrefix 是否已赋值
                     * @return SessionInitPrefix 是否已赋值
                     * 
                     */
                    bool SessionInitPrefixHasBeenSet() const;

                private:

                    /**
                     * <p>频道ID，全局唯一标识。</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>频道名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>广告源信息。</p>
                     */
                    std::string m_contentSource;
                    bool m_contentSourceHasBeenSet;

                    /**
                     * <p>播放地址。兼容旧版本参数，推荐使用HlsPlaybackPrefix或DashPlaybackPrefix</p>
                     */
                    std::string m_playbackPrefix;
                    bool m_playbackPrefixHasBeenSet;

                    /**
                     * <p>hls播放地址</p>
                     */
                    std::string m_hlsPlaybackPrefix;
                    bool m_hlsPlaybackPrefixHasBeenSet;

                    /**
                     * <p>dash播放地址</p>
                     */
                    std::string m_dashPlaybackPrefix;
                    bool m_dashPlaybackPrefixHasBeenSet;

                    /**
                     * <p>广告插入SSAI配置信息。</p>
                     */
                    SSAIConf m_sSAIInfo;
                    bool m_sSAIInfoHasBeenSet;

                    /**
                     * <p>地域信息。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>用于clickthrough地址</p>
                     */
                    std::string m_sessionInitPrefix;
                    bool m_sessionInitPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SSAICHANNELINFO_H_
