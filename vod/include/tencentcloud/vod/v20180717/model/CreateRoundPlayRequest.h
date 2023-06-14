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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEROUNDPLAYREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEROUNDPLAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateRoundPlay请求参数结构体
                */
                class CreateRoundPlayRequest : public AbstractModel
                {
                public:
                    CreateRoundPlayRequest();
                    ~CreateRoundPlayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return StartTime 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param _startTime 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取轮播列表。
<li>数组长度限制：100。</li>
                     * @return RoundPlaylist 轮播列表。
<li>数组长度限制：100。</li>
                     * 
                     */
                    std::vector<RoundPlayListItemInfo> GetRoundPlaylist() const;

                    /**
                     * 设置轮播列表。
<li>数组长度限制：100。</li>
                     * @param _roundPlaylist 轮播列表。
<li>数组长度限制：100。</li>
                     * 
                     */
                    void SetRoundPlaylist(const std::vector<RoundPlayListItemInfo>& _roundPlaylist);

                    /**
                     * 判断参数 RoundPlaylist 是否已赋值
                     * @return RoundPlaylist 是否已赋值
                     * 
                     */
                    bool RoundPlaylistHasBeenSet() const;

                    /**
                     * 获取<b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @return SubAppId <b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @param _subAppId <b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取轮播播单名称，长度限制：64 个字符。
                     * @return Name 轮播播单名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置轮播播单名称，长度限制：64 个字符。
                     * @param _name 轮播播单名称，长度限制：64 个字符。
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
                     * 获取轮播播单描述信息，长度限制：256 个字符。
                     * @return Desc 轮播播单描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置轮播播单描述信息，长度限制：256 个字符。
                     * @param _desc 轮播播单描述信息，长度限制：256 个字符。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     * @return PlayBackMode 播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     * 
                     */
                    std::string GetPlayBackMode() const;

                    /**
                     * 设置播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     * @param _playBackMode 播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     * 
                     */
                    void SetPlayBackMode(const std::string& _playBackMode);

                    /**
                     * 判断参数 PlayBackMode 是否已赋值
                     * @return PlayBackMode 是否已赋值
                     * 
                     */
                    bool PlayBackModeHasBeenSet() const;

                private:

                    /**
                     * 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 轮播列表。
<li>数组长度限制：100。</li>
                     */
                    std::vector<RoundPlayListItemInfo> m_roundPlaylist;
                    bool m_roundPlaylistHasBeenSet;

                    /**
                     * <b>点播 [子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

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
                     * 播放模式，可选值：
<li>Loop：循环播放播单；</li>
<li>Linear：单次播放，播单播放完停止播放。</li>
默认值：Loop。
                     */
                    std::string m_playBackMode;
                    bool m_playBackModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEROUNDPLAYREQUEST_H_
