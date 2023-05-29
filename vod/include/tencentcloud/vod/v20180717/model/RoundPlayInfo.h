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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RoundPlayListItemInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 轮播任务信息
                */
                class RoundPlayInfo : public AbstractModel
                {
                public:
                    RoundPlayInfo();
                    ~RoundPlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取轮播播单标识。
                     * @return RoundPlayId 轮播播单标识。
                     */
                    std::string GetRoundPlayId() const;

                    /**
                     * 设置轮播播单标识。
                     * @param RoundPlayId 轮播播单标识。
                     */
                    void SetRoundPlayId(const std::string& _roundPlayId);

                    /**
                     * 判断参数 RoundPlayId 是否已赋值
                     * @return RoundPlayId 是否已赋值
                     */
                    bool RoundPlayIdHasBeenSet() const;

                    /**
                     * 获取启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return StartTime 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param StartTime 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取轮播列表。
                     * @return RoundPlaylist 轮播列表。
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置轮播列表。
                     * @param RoundPlaylist 轮播列表。
                     */
                    void SetRoundPlaylist(const std::vector<RoundPlayListItemInfo>& _roundPlaylist);

                    /**
                     * 判断参数 RoundPlaylist 是否已赋值
                     * @return RoundPlaylist 是否已赋值
                     */
                    bool RoundPlaylistHasBeenSet() const;

                    /**
                     * 获取轮播播单名称，长度限制：64 个字符。
                     * @return Name 轮播播单名称，长度限制：64 个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置轮播播单名称，长度限制：64 个字符。
                     * @param Name 轮播播单名称，长度限制：64 个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取轮播播单描述信息，长度限制：256 个字符。
                     * @return Desc 轮播播单描述信息，长度限制：256 个字符。
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置轮播播单描述信息，长度限制：256 个字符。
                     * @param Desc 轮播播单描述信息，长度限制：256 个字符。
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取播放状态，可选值：
<li>Enabled：启动状态；</li>
<li>Disabled：停止状态。</li>
默认值：Enabled。
                     * @return Status 播放状态，可选值：
<li>Enabled：启动状态；</li>
<li>Disabled：停止状态。</li>
默认值：Enabled。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置播放状态，可选值：
<li>Enabled：启动状态；</li>
<li>Disabled：停止状态。</li>
默认值：Enabled。
                     * @param Status 播放状态，可选值：
<li>Enabled：启动状态；</li>
<li>Disabled：停止状态。</li>
默认值：Enabled。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     * @return PlayBackMode 播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     */
                    std::string GetPlayBackMode() const;

                    /**
                     * 设置播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     * @param PlayBackMode 播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     */
                    void SetPlayBackMode(const std::string& _playBackMode);

                    /**
                     * 判断参数 PlayBackMode 是否已赋值
                     * @return PlayBackMode 是否已赋值
                     */
                    bool PlayBackModeHasBeenSet() const;

                    /**
                     * 获取轮播播放地址。
                     * @return Url 轮播播放地址。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置轮播播放地址。
                     * @param Url 轮播播放地址。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 轮播播单标识。
                     */
                    std::string m_roundPlayId;
                    bool m_roundPlayIdHasBeenSet;

                    /**
                     * 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 轮播列表。
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                    /**
                     * 轮播播单名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 轮播播单描述信息，长度限制：256 个字符。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 播放状态，可选值：
<li>Enabled：启动状态；</li>
<li>Disabled：停止状态。</li>
默认值：Enabled。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     */
                    std::string m_playBackMode;
                    bool m_playBackModeHasBeenSet;

                    /**
                     * 轮播播放地址。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYINFO_H_
