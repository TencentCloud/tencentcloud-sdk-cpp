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
                     * 获取<p>数字人直播间名称。</p>
                     * @return Name <p>数字人直播间名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数字人直播间名称。</p>
                     * @param _name <p>数字人直播间名称。</p>
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
                     * 获取<p>数字人直播间状态，<br>CLOSE - 未开播。<br>OPEN - 直播中。</p><p>枚举值：</p><ul><li>CLOSE： 未开播</li><li>OPEN： 直播中</li></ul>
                     * @return Status <p>数字人直播间状态，<br>CLOSE - 未开播。<br>OPEN - 直播中。</p><p>枚举值：</p><ul><li>CLOSE： 未开播</li><li>OPEN： 直播中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>数字人直播间状态，<br>CLOSE - 未开播。<br>OPEN - 直播中。</p><p>枚举值：</p><ul><li>CLOSE： 未开播</li><li>OPEN： 直播中</li></ul>
                     * @param _status <p>数字人直播间状态，<br>CLOSE - 未开播。<br>OPEN - 直播中。</p><p>枚举值：</p><ul><li>CLOSE： 未开播</li><li>OPEN： 直播中</li></ul>
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
                     * 获取<p>数字人形象 KEY。</p>
                     * @return AvatarKey <p>数字人形象 KEY。</p>
                     * 
                     */
                    std::string GetAvatarKey() const;

                    /**
                     * 设置<p>数字人形象 KEY。</p>
                     * @param _avatarKey <p>数字人形象 KEY。</p>
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
                     * 获取<p>音色 KEY。</p>
                     * @return TimbreKey <p>音色 KEY。</p>
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置<p>音色 KEY。</p>
                     * @param _timbreKey <p>音色 KEY。</p>
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
                     * 获取<p>数字人形象图片 URL。</p>
                     * @return AvatarImageUrl <p>数字人形象图片 URL。</p>
                     * 
                     */
                    std::string GetAvatarImageUrl() const;

                    /**
                     * 设置<p>数字人形象图片 URL。</p>
                     * @param _avatarImageUrl <p>数字人形象图片 URL。</p>
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
                     * 获取<p>背景图片 URL。</p>
                     * @return BackgroundUrl <p>背景图片 URL。</p>
                     * 
                     */
                    std::string GetBackgroundUrl() const;

                    /**
                     * 设置<p>背景图片 URL。</p>
                     * @param _backgroundUrl <p>背景图片 URL。</p>
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
                     * 获取<p>推流目标描述。</p>
                     * @return Comment <p>推流目标描述。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>推流目标描述。</p>
                     * @param _comment <p>推流目标描述。</p>
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
                     * 获取<p>目标推流地址。</p>
                     * @return ToUrl <p>目标推流地址。</p>
                     * 
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置<p>目标推流地址。</p>
                     * @param _toUrl <p>目标推流地址。</p>
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
                     * 获取<p>主播大小，默认1.00。 取值范围(0, 15.00]。</p>
                     * @return AnchorScale <p>主播大小，默认1.00。 取值范围(0, 15.00]。</p>
                     * 
                     */
                    double GetAnchorScale() const;

                    /**
                     * 设置<p>主播大小，默认1.00。 取值范围(0, 15.00]。</p>
                     * @param _anchorScale <p>主播大小，默认1.00。 取值范围(0, 15.00]。</p>
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
                     * 获取<p>主播纵向位置。默认-1贴底部。</p>
                     * @return AnchorVerticalPos <p>主播纵向位置。默认-1贴底部。</p>
                     * 
                     */
                    int64_t GetAnchorVerticalPos() const;

                    /**
                     * 设置<p>主播纵向位置。默认-1贴底部。</p>
                     * @param _anchorVerticalPos <p>主播纵向位置。默认-1贴底部。</p>
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
                     * 获取<p>主播横向位置。默认-1居中。</p>
                     * @return AnchorHorizontalPos <p>主播横向位置。默认-1居中。</p>
                     * 
                     */
                    int64_t GetAnchorHorizontalPos() const;

                    /**
                     * 设置<p>主播横向位置。默认-1居中。</p>
                     * @param _anchorHorizontalPos <p>主播横向位置。默认-1居中。</p>
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
                     * 获取<p>语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。</p>
                     * @return SpeechSpeed <p>语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。</p>
                     * 
                     */
                    double GetSpeechSpeed() const;

                    /**
                     * 设置<p>语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。</p>
                     * @param _speechSpeed <p>语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。</p>
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
                     * 获取<p>音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
                     * @return SpeechVolume <p>音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
                     * 
                     */
                    int64_t GetSpeechVolume() const;

                    /**
                     * 设置<p>音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
                     * @param _speechVolume <p>音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
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
                     * 获取<p>直播间创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * @return CreateTime <p>直播间创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>直播间创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * @param _createTime <p>直播间创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
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
                     * 获取<p>直播间最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * @return UpdateTime <p>直播间最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>直播间最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * @param _updateTime <p>直播间最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>直播间类型。</p><p>枚举值：</p><ul><li>AIGC： AIGC直播</li></ul>
                     * @return RoomType <p>直播间类型。</p><p>枚举值：</p><ul><li>AIGC： AIGC直播</li></ul>
                     * 
                     */
                    std::string GetRoomType() const;

                    /**
                     * 设置<p>直播间类型。</p><p>枚举值：</p><ul><li>AIGC： AIGC直播</li></ul>
                     * @param _roomType <p>直播间类型。</p><p>枚举值：</p><ul><li>AIGC： AIGC直播</li></ul>
                     * 
                     */
                    void SetRoomType(const std::string& _roomType);

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                    /**
                     * 获取<p>通过AIGC生成的数字人形象图片 URL。</p>
                     * @return AvatarAigcImageUrl <p>通过AIGC生成的数字人形象图片 URL。</p>
                     * 
                     */
                    std::string GetAvatarAigcImageUrl() const;

                    /**
                     * 设置<p>通过AIGC生成的数字人形象图片 URL。</p>
                     * @param _avatarAigcImageUrl <p>通过AIGC生成的数字人形象图片 URL。</p>
                     * 
                     */
                    void SetAvatarAigcImageUrl(const std::string& _avatarAigcImageUrl);

                    /**
                     * 判断参数 AvatarAigcImageUrl 是否已赋值
                     * @return AvatarAigcImageUrl 是否已赋值
                     * 
                     */
                    bool AvatarAigcImageUrlHasBeenSet() const;

                private:

                    /**
                     * <p>数字人直播间 ID。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>数字人直播间名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数字人直播间状态，<br>CLOSE - 未开播。<br>OPEN - 直播中。</p><p>枚举值：</p><ul><li>CLOSE： 未开播</li><li>OPEN： 直播中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数字人形象 KEY。</p>
                     */
                    std::string m_avatarKey;
                    bool m_avatarKeyHasBeenSet;

                    /**
                     * <p>音色 KEY。</p>
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * <p>数字人形象图片 URL。</p>
                     */
                    std::string m_avatarImageUrl;
                    bool m_avatarImageUrlHasBeenSet;

                    /**
                     * <p>背景图片 URL。</p>
                     */
                    std::string m_backgroundUrl;
                    bool m_backgroundUrlHasBeenSet;

                    /**
                     * <p>推流目标描述。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>目标推流地址。</p>
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * <p>主播大小，默认1.00。 取值范围(0, 15.00]。</p>
                     */
                    double m_anchorScale;
                    bool m_anchorScaleHasBeenSet;

                    /**
                     * <p>主播纵向位置。默认-1贴底部。</p>
                     */
                    int64_t m_anchorVerticalPos;
                    bool m_anchorVerticalPosHasBeenSet;

                    /**
                     * <p>主播横向位置。默认-1居中。</p>
                     */
                    int64_t m_anchorHorizontalPos;
                    bool m_anchorHorizontalPosHasBeenSet;

                    /**
                     * <p>语速（1.0为正常语速，范围[0.5-1.5]，值为0.5时播报语速最慢，值为1.5时播报语速最快。</p>
                     */
                    double m_speechSpeed;
                    bool m_speechSpeedHasBeenSet;

                    /**
                     * <p>音量大小，范围[0，10]，对应音量大小。默认为0，代表正常音量，值越大音量越高。</p>
                     */
                    int64_t m_speechVolume;
                    bool m_speechVolumeHasBeenSet;

                    /**
                     * <p>直播间创建时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>直播间最后更新时间，UTC时间。<br>注意：UTC时间和北京时间相差八小时。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>直播间类型。</p><p>枚举值：</p><ul><li>AIGC： AIGC直播</li></ul>
                     */
                    std::string m_roomType;
                    bool m_roomTypeHasBeenSet;

                    /**
                     * <p>通过AIGC生成的数字人形象图片 URL。</p>
                     */
                    std::string m_avatarAigcImageUrl;
                    bool m_avatarAigcImageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARROOMINFO_H_
