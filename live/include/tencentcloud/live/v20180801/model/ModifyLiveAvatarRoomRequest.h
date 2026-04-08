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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEAVATARROOMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEAVATARROOMREQUEST_H_

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
                * ModifyLiveAvatarRoom请求参数结构体
                */
                class ModifyLiveAvatarRoomRequest : public AbstractModel
                {
                public:
                    ModifyLiveAvatarRoomRequest();
                    ~ModifyLiveAvatarRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数字人直播间 ID。</p>
                     * @return RoomId <p>数字人直播间 ID。</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>数字人直播间 ID。</p>
                     * @param _roomId <p>数字人直播间 ID。</p>
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取<p>直播间名称。</p>
                     * @return Name <p>直播间名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>直播间名称。</p>
                     * @param _name <p>直播间名称。</p>
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
                     * 获取<p>数字人形象KEY。</p>
                     * @return AvatarKey <p>数字人形象KEY。</p>
                     * 
                     */
                    std::string GetAvatarKey() const;

                    /**
                     * 设置<p>数字人形象KEY。</p>
                     * @param _avatarKey <p>数字人形象KEY。</p>
                     * 
                     */
                    void SetAvatarKey(const std::string& _avatarKey);

                    /**
                     * 判断参数 AvatarKey 是否已赋值
                     * @return AvatarKey 是否已赋值
                     * 
                     */
                    bool AvatarKeyHasBeenSet() const;

                    /**
                     * 获取<p>音色KEY。</p>
                     * @return TimbreKey <p>音色KEY。</p>
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置<p>音色KEY。</p>
                     * @param _timbreKey <p>音色KEY。</p>
                     * 
                     */
                    void SetTimbreKey(const std::string& _timbreKey);

                    /**
                     * 判断参数 TimbreKey 是否已赋值
                     * @return TimbreKey 是否已赋值
                     * 
                     */
                    bool TimbreKeyHasBeenSet() const;

                    /**
                     * 获取<p>背景图片URL。</p>
                     * @return BackgroundUrl <p>背景图片URL。</p>
                     * 
                     */
                    std::string GetBackgroundUrl() const;

                    /**
                     * 设置<p>背景图片URL。</p>
                     * @param _backgroundUrl <p>背景图片URL。</p>
                     * 
                     */
                    void SetBackgroundUrl(const std::string& _backgroundUrl);

                    /**
                     * 判断参数 BackgroundUrl 是否已赋值
                     * @return BackgroundUrl 是否已赋值
                     * 
                     */
                    bool BackgroundUrlHasBeenSet() const;

                    /**
                     * 获取<p>主播大小，默认1.00。<br>取值范围(0, 15.00]。<br>精度：使用小数点后两位。</p>
                     * @return AnchorScale <p>主播大小，默认1.00。<br>取值范围(0, 15.00]。<br>精度：使用小数点后两位。</p>
                     * 
                     */
                    double GetAnchorScale() const;

                    /**
                     * 设置<p>主播大小，默认1.00。<br>取值范围(0, 15.00]。<br>精度：使用小数点后两位。</p>
                     * @param _anchorScale <p>主播大小，默认1.00。<br>取值范围(0, 15.00]。<br>精度：使用小数点后两位。</p>
                     * 
                     */
                    void SetAnchorScale(const double& _anchorScale);

                    /**
                     * 判断参数 AnchorScale 是否已赋值
                     * @return AnchorScale 是否已赋值
                     * 
                     */
                    bool AnchorScaleHasBeenSet() const;

                    /**
                     * 获取<p>主播纵向位置。默认-1贴底部。<br>左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。<br>即该纵向位置最大为：数字人分辨率的高 - 形象高。</p>
                     * @return AnchorVerticalPos <p>主播纵向位置。默认-1贴底部。<br>左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。<br>即该纵向位置最大为：数字人分辨率的高 - 形象高。</p>
                     * 
                     */
                    int64_t GetAnchorVerticalPos() const;

                    /**
                     * 设置<p>主播纵向位置。默认-1贴底部。<br>左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。<br>即该纵向位置最大为：数字人分辨率的高 - 形象高。</p>
                     * @param _anchorVerticalPos <p>主播纵向位置。默认-1贴底部。<br>左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。<br>即该纵向位置最大为：数字人分辨率的高 - 形象高。</p>
                     * 
                     */
                    void SetAnchorVerticalPos(const int64_t& _anchorVerticalPos);

                    /**
                     * 判断参数 AnchorVerticalPos 是否已赋值
                     * @return AnchorVerticalPos 是否已赋值
                     * 
                     */
                    bool AnchorVerticalPosHasBeenSet() const;

                    /**
                     * 获取<p>主播横向位置。默认-1居中。<br>左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。<br>即最大值为：数字人分辨率的宽 - 形象宽。</p>
                     * @return AnchorHorizontalPos <p>主播横向位置。默认-1居中。<br>左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。<br>即最大值为：数字人分辨率的宽 - 形象宽。</p>
                     * 
                     */
                    int64_t GetAnchorHorizontalPos() const;

                    /**
                     * 设置<p>主播横向位置。默认-1居中。<br>左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。<br>即最大值为：数字人分辨率的宽 - 形象宽。</p>
                     * @param _anchorHorizontalPos <p>主播横向位置。默认-1居中。<br>左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。<br>即最大值为：数字人分辨率的宽 - 形象宽。</p>
                     * 
                     */
                    void SetAnchorHorizontalPos(const int64_t& _anchorHorizontalPos);

                    /**
                     * 判断参数 AnchorHorizontalPos 是否已赋值
                     * @return AnchorHorizontalPos 是否已赋值
                     * 
                     */
                    bool AnchorHorizontalPosHasBeenSet() const;

                    /**
                     * 获取<p>语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。</p>
                     * @return SpeechSpeed <p>语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。</p>
                     * 
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置<p>语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。</p>
                     * @param _speechSpeed <p>语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。</p>
                     * 
                     */
                    void SetSpeechSpeed(const double& _speechSpeed);

                    /**
                     * 判断参数 SpeechSpeed 是否已赋值
                     * @return SpeechSpeed 是否已赋值
                     * 
                     */
                    bool SpeechSpeedHasBeenSet() const;

                    /**
                     * 获取<p>音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。</p>
                     * @return SpeechVolume <p>音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。</p>
                     * 
                     */
                    int64_t GetSpeechVolume() const;

                    /**
                     * 设置<p>音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。</p>
                     * @param _speechVolume <p>音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。</p>
                     * 
                     */
                    void SetSpeechVolume(const int64_t& _speechVolume);

                    /**
                     * 判断参数 SpeechVolume 是否已赋值
                     * @return SpeechVolume 是否已赋值
                     * 
                     */
                    bool SpeechVolumeHasBeenSet() const;

                    /**
                     * 获取<p>操作者。</p>
                     * @return Operator <p>操作者。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者。</p>
                     * @param _operator <p>操作者。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     * @return RoomType <p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     * 
                     */
                    std::string GetRoomType() const;

                    /**
                     * 设置<p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     * @param _roomType <p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     * 
                     */
                    void SetRoomType(const std::string& _roomType);

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                private:

                    /**
                     * <p>数字人直播间 ID。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>直播间名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数字人形象KEY。</p>
                     */
                    std::string m_avatarKey;
                    bool m_avatarKeyHasBeenSet;

                    /**
                     * <p>音色KEY。</p>
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * <p>背景图片URL。</p>
                     */
                    std::string m_backgroundUrl;
                    bool m_backgroundUrlHasBeenSet;

                    /**
                     * <p>主播大小，默认1.00。<br>取值范围(0, 15.00]。<br>精度：使用小数点后两位。</p>
                     */
                    double m_anchorScale;
                    bool m_anchorScaleHasBeenSet;

                    /**
                     * <p>主播纵向位置。默认-1贴底部。<br>左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。<br>即该纵向位置最大为：数字人分辨率的高 - 形象高。</p>
                     */
                    int64_t m_anchorVerticalPos;
                    bool m_anchorVerticalPosHasBeenSet;

                    /**
                     * <p>主播横向位置。默认-1居中。<br>左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。<br>即最大值为：数字人分辨率的宽 - 形象宽。</p>
                     */
                    int64_t m_anchorHorizontalPos;
                    bool m_anchorHorizontalPosHasBeenSet;

                    /**
                     * <p>语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。</p>
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                    /**
                     * <p>音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。</p>
                     */
                    int64_t m_speechVolume;
                    bool m_speechVolumeHasBeenSet;

                    /**
                     * <p>操作者。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     */
                    std::string m_roomType;
                    bool m_roomTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEAVATARROOMREQUEST_H_
