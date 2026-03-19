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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARROOMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARROOMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 数字人直播间信息。
                */
                class AvatarRoomInfo : public AbstractModel
                {
                public:
                    AvatarRoomInfo();
                    ~AvatarRoomInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取数字人直播间名称。
                     * @return Name 数字人直播间名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数字人直播间名称。
                     * @param _name 数字人直播间名称。
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
                     * 获取数字人直播间状态，
CLOSE - 未开播。
OPEN - 直播中。

                     * @return Status 数字人直播间状态，
CLOSE - 未开播。
OPEN - 直播中。

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置数字人直播间状态，
CLOSE - 未开播。
OPEN - 直播中。

                     * @param _status 数字人直播间状态，
CLOSE - 未开播。
OPEN - 直播中。

                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数字人形象 KEY。
                     * @return AvatarKey 数字人形象 KEY。
                     * 
                     */
                    std::string GetAvatarKey() const;

                    /**
                     * 设置数字人形象 KEY。
                     * @param _avatarKey 数字人形象 KEY。
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
                     * 获取音色 KEy。
                     * @return TimbreKey 音色 KEy。
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置音色 KEy。
                     * @param _timbreKey 音色 KEy。
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
                     * 获取数字人形象图片 URL。
                     * @return AvatarImageUrl 数字人形象图片 URL。
                     * 
                     */
                    std::string GetAvatarImageUrl() const;

                    /**
                     * 设置数字人形象图片 URL。
                     * @param _avatarImageUrl 数字人形象图片 URL。
                     * 
                     */
                    void SetAvatarImageUrl(const std::string& _avatarImageUrl);

                    /**
                     * 判断参数 AvatarImageUrl 是否已赋值
                     * @return AvatarImageUrl 是否已赋值
                     * 
                     */
                    bool AvatarImageUrlHasBeenSet() const;

                    /**
                     * 获取背景图片 URL。
                     * @return BackgroundUrl 背景图片 URL。
                     * 
                     */
                    std::string GetBackgroundUrl() const;

                    /**
                     * 设置背景图片 URL。
                     * @param _backgroundUrl 背景图片 URL。
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
                     * 获取推流目标描述。
                     * @return Comment 推流目标描述。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置推流目标描述。
                     * @param _comment 推流目标描述。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取目标推流地址。
                     * @return ToUrl 目标推流地址。
                     * 
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置目标推流地址。
                     * @param _toUrl 目标推流地址。
                     * 
                     */
                    void SetToUrl(const std::string& _toUrl);

                    /**
                     * 判断参数 ToUrl 是否已赋值
                     * @return ToUrl 是否已赋值
                     * 
                     */
                    bool ToUrlHasBeenSet() const;

                    /**
                     * 获取主播大小，默认1.00。 取值范围(0, 15.00]。
                     * @return AnchorScale 主播大小，默认1.00。 取值范围(0, 15.00]。
                     * 
                     */
                    double GetAnchorScale() const;

                    /**
                     * 设置主播大小，默认1.00。 取值范围(0, 15.00]。
                     * @param _anchorScale 主播大小，默认1.00。 取值范围(0, 15.00]。
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
                     * @return AnchorVerticalPos 主播纵向位置。默认-1贴底部。
                     * 
                     */
                    int64_t GetAnchorVerticalPos() const;

                    /**
                     * 设置主播纵向位置。默认-1贴底部。
                     * @param _anchorVerticalPos 主播纵向位置。默认-1贴底部。
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
                     * @return AnchorHorizontalPos 主播横向位置。默认-1居中。
                     * 
                     */
                    int64_t GetAnchorHorizontalPos() const;

                    /**
                     * 设置主播横向位置。默认-1居中。
                     * @param _anchorHorizontalPos 主播横向位置。默认-1居中。
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
                     * 获取语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。
                     * @return SpeechSpeed 语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。
                     * 
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。
                     * @param _speechSpeed 语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。
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
                     * 获取音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     * @return SpeechVolume 音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     * 
                     */
                    int64_t GetSpeechVolume() const;

                    /**
                     * 设置音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     * @param _speechVolume 音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
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
                     * 获取直播间创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @return CreateTime 直播间创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置直播间创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @param _createTime 直播间创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取直播间最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @return UpdateTime 直播间最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置直播间最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * @param _updateTime 直播间最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 数字人直播间 ID。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 数字人直播间名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数字人直播间状态，
CLOSE - 未开播。
OPEN - 直播中。

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数字人形象 KEY。
                     */
                    std::string m_avatarKey;
                    bool m_avatarKeyHasBeenSet;

                    /**
                     * 音色 KEy。
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * 数字人形象图片 URL。
                     */
                    std::string m_avatarImageUrl;
                    bool m_avatarImageUrlHasBeenSet;

                    /**
                     * 背景图片 URL。
                     */
                    std::string m_backgroundUrl;
                    bool m_backgroundUrlHasBeenSet;

                    /**
                     * 推流目标描述。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 目标推流地址。
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * 主播大小，默认1.00。 取值范围(0, 15.00]。
                     */
                    double m_anchorScale;
                    bool m_anchorScaleHasBeenSet;

                    /**
                     * 主播纵向位置。默认-1贴底部。
                     */
                    int64_t m_anchorVerticalPos;
                    bool m_anchorVerticalPosHasBeenSet;

                    /**
                     * 主播横向位置。默认-1居中。
                     */
                    int64_t m_anchorHorizontalPos;
                    bool m_anchorHorizontalPosHasBeenSet;

                    /**
                     * 语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                    /**
                     * 音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。
                     */
                    int64_t m_speechVolume;
                    bool m_speechVolumeHasBeenSet;

                    /**
                     * 直播间创建时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 直播间最后更新时间，UTC时间。
注意：UTC时间和北京时间相差八小时。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARROOMINFO_H_
