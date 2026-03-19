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
                     * 获取数字人直播间 ID。
                     * @return RoomId 数字人直播间 ID。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置数字人直播间 ID。
                     * @param _roomId 数字人直播间 ID。
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
                     * 获取直播间名称。
                     * @return Name 直播间名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置直播间名称。
                     * @param _name 直播间名称。
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
                     * 获取数字人形象KEY。
                     * @return AvatarKey 数字人形象KEY。
                     * 
                     */
                    std::string GetAvatarKey() const;

                    /**
                     * 设置数字人形象KEY。
                     * @param _avatarKey 数字人形象KEY。
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
                     * 获取音色KEY。
                     * @return TimbreKey 音色KEY。
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置音色KEY。
                     * @param _timbreKey 音色KEY。
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
                     * 获取背景图片URL。
                     * @return BackgroundUrl 背景图片URL。
                     * 
                     */
                    std::string GetBackgroundUrl() const;

                    /**
                     * 设置背景图片URL。
                     * @param _backgroundUrl 背景图片URL。
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
                     * 获取主播大小，默认1.00。
取值范围(0, 15.00]。
精度：使用小数点后两位。
                     * @return AnchorScale 主播大小，默认1.00。
取值范围(0, 15.00]。
精度：使用小数点后两位。
                     * 
                     */
                    double GetAnchorScale() const;

                    /**
                     * 设置主播大小，默认1.00。
取值范围(0, 15.00]。
精度：使用小数点后两位。
                     * @param _anchorScale 主播大小，默认1.00。
取值范围(0, 15.00]。
精度：使用小数点后两位。
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
                     * 获取主播纵向位置。默认-1贴底部。
左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。
即该纵向位置最大为：数字人分辨率的高 - 形象高。
                     * @return AnchorVerticalPos 主播纵向位置。默认-1贴底部。
左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。
即该纵向位置最大为：数字人分辨率的高 - 形象高。
                     * 
                     */
                    int64_t GetAnchorVerticalPos() const;

                    /**
                     * 设置主播纵向位置。默认-1贴底部。
左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。
即该纵向位置最大为：数字人分辨率的高 - 形象高。
                     * @param _anchorVerticalPos 主播纵向位置。默认-1贴底部。
左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。
即该纵向位置最大为：数字人分辨率的高 - 形象高。
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
                     * 获取主播横向位置。默认-1居中。
左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。
即最大值为：数字人分辨率的宽 - 形象宽。
                     * @return AnchorHorizontalPos 主播横向位置。默认-1居中。
左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。
即最大值为：数字人分辨率的宽 - 形象宽。
                     * 
                     */
                    int64_t GetAnchorHorizontalPos() const;

                    /**
                     * 设置主播横向位置。默认-1居中。
左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。
即最大值为：数字人分辨率的宽 - 形象宽。
                     * @param _anchorHorizontalPos 主播横向位置。默认-1居中。
左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。
即最大值为：数字人分辨率的宽 - 形象宽。
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
                     * 获取语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。
                     * @return SpeechSpeed 语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。
                     * 
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。
                     * @param _speechSpeed 语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。
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
                     * 获取音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。
                     * @return SpeechVolume 音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。
                     * 
                     */
                    int64_t GetSpeechVolume() const;

                    /**
                     * 设置音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。
                     * @param _speechVolume 音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。
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
                     * 获取操作者。
                     * @return Operator 操作者。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。
                     * @param _operator 操作者。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 数字人直播间 ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 直播间名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数字人形象KEY。
                     */
                    std::string m_avatarKey;
                    bool m_avatarKeyHasBeenSet;

                    /**
                     * 音色KEY。
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * 背景图片URL。
                     */
                    std::string m_backgroundUrl;
                    bool m_backgroundUrlHasBeenSet;

                    /**
                     * 主播大小，默认1.00。
取值范围(0, 15.00]。
精度：使用小数点后两位。
                     */
                    double m_anchorScale;
                    bool m_anchorScaleHasBeenSet;

                    /**
                     * 主播纵向位置。默认-1贴底部。
左上角为原点，形象顶部离屏幕顶部的距离，最大不能使形象底部超出屏幕。
即该纵向位置最大为：数字人分辨率的高 - 形象高。
                     */
                    int64_t m_anchorVerticalPos;
                    bool m_anchorVerticalPosHasBeenSet;

                    /**
                     * 主播横向位置。默认-1居中。
左上角为原点，形象左侧离左侧屏幕的距离。最大值不可使形象右侧超出右侧屏幕。
即最大值为：数字人分辨率的宽 - 形象宽。
                     */
                    int64_t m_anchorHorizontalPos;
                    bool m_anchorHorizontalPosHasBeenSet;

                    /**
                     * 语速（1.0为正常语速，范围[0.6-2.5]，值为0.6时播报语速最慢，值为2.5时播报语速最快。
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                    /**
                     * 音量大小，范围[0，10]，对应音量大小。默认为5，代表正常音量，值越大音量越高。
                     */
                    int64_t m_speechVolume;
                    bool m_speechVolumeHasBeenSet;

                    /**
                     * 操作者。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEAVATARROOMREQUEST_H_
