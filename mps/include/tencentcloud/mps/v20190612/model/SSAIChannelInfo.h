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
                     * 获取频道ID，全局唯一标识。
                     * @return ID 频道ID，全局唯一标识。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置频道ID，全局唯一标识。
                     * @param _iD 频道ID，全局唯一标识。
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
                     * 获取频道名称。
                     * @return Name 频道名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置频道名称。
                     * @param _name 频道名称。
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
                     * 获取广告源信息。
                     * @return ContentSource 广告源信息。
                     * 
                     */
                    std::string GetContentSource() const;

                    /**
                     * 设置广告源信息。
                     * @param _contentSource 广告源信息。
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
                     * 获取播放地址。
                     * @return PlaybackPrefix 播放地址。
                     * 
                     */
                    std::string GetPlaybackPrefix() const;

                    /**
                     * 设置播放地址。
                     * @param _playbackPrefix 播放地址。
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
                     * 获取广告插入SSAI配置信息。
                     * @return SSAIInfo 广告插入SSAI配置信息。
                     * 
                     */
                    SSAIConf GetSSAIInfo() const;

                    /**
                     * 设置广告插入SSAI配置信息。
                     * @param _sSAIInfo 广告插入SSAI配置信息。
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
                     * 获取地域信息。
                     * @return Region 地域信息。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息。
                     * @param _region 地域信息。
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
                     * 获取用于clickthrough地址
                     * @return SessionInitPrefix 用于clickthrough地址
                     * 
                     */
                    std::string GetSessionInitPrefix() const;

                    /**
                     * 设置用于clickthrough地址
                     * @param _sessionInitPrefix 用于clickthrough地址
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
                     * 频道ID，全局唯一标识。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 频道名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 广告源信息。
                     */
                    std::string m_contentSource;
                    bool m_contentSourceHasBeenSet;

                    /**
                     * 播放地址。
                     */
                    std::string m_playbackPrefix;
                    bool m_playbackPrefixHasBeenSet;

                    /**
                     * 广告插入SSAI配置信息。
                     */
                    SSAIConf m_sSAIInfo;
                    bool m_sSAIInfoHasBeenSet;

                    /**
                     * 地域信息。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 用于clickthrough地址
                     */
                    std::string m_sessionInitPrefix;
                    bool m_sessionInitPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SSAICHANNELINFO_H_
