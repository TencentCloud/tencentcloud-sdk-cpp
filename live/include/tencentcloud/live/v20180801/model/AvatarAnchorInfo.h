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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARANCHORINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARANCHORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AvatarImageInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 数字人主播信息。
                */
                class AvatarAnchorInfo : public AbstractModel
                {
                public:
                    AvatarAnchorInfo();
                    ~AvatarAnchorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主播昵称。同一个主播可以存在多个数字人ID。
                     * @return AnchorName 主播昵称。同一个主播可以存在多个数字人ID。
                     * 
                     */
                    std::string GetAnchorName() const;

                    /**
                     * 设置主播昵称。同一个主播可以存在多个数字人ID。
                     * @param _anchorName 主播昵称。同一个主播可以存在多个数字人ID。
                     * 
                     */
                    void SetAnchorName(const std::string& _anchorName);

                    /**
                     * 判断参数 AnchorName 是否已赋值
                     * @return AnchorName 是否已赋值
                     * 
                     */
                    bool AnchorNameHasBeenSet() const;

                    /**
                     * 获取主播 ID。用于标识主播形象。同一个主播ID可存在竖屏和横屏两种数字人。
                     * @return AnchorId 主播 ID。用于标识主播形象。同一个主播ID可存在竖屏和横屏两种数字人。
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播 ID。用于标识主播形象。同一个主播ID可存在竖屏和横屏两种数字人。
                     * @param _anchorId 主播 ID。用于标识主播形象。同一个主播ID可存在竖屏和横屏两种数字人。
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                    /**
                     * 获取主播性别。male-男性，femal-女性。
                     * @return AnchorGender 主播性别。male-男性，femal-女性。
                     * 
                     */
                    std::string GetAnchorGender() const;

                    /**
                     * 设置主播性别。male-男性，femal-女性。
                     * @param _anchorGender 主播性别。male-男性，femal-女性。
                     * 
                     */
                    void SetAnchorGender(const std::string& _anchorGender);

                    /**
                     * 判断参数 AnchorGender 是否已赋值
                     * @return AnchorGender 是否已赋值
                     * 
                     */
                    bool AnchorGenderHasBeenSet() const;

                    /**
                     * 获取形象图片。
                     * @return PoseImage 形象图片。
                     * 
                     */
                    std::string GetPoseImage() const;

                    /**
                     * 设置形象图片。
                     * @param _poseImage 形象图片。
                     * 
                     */
                    void SetPoseImage(const std::string& _poseImage);

                    /**
                     * 判断参数 PoseImage 是否已赋值
                     * @return PoseImage 是否已赋值
                     * 
                     */
                    bool PoseImageHasBeenSet() const;

                    /**
                     * 获取主播形象图片的分辨率。
                     * @return PoseImageResolution 主播形象图片的分辨率。
                     * 
                     */
                    std::string GetPoseImageResolution() const;

                    /**
                     * 设置主播形象图片的分辨率。
                     * @param _poseImageResolution 主播形象图片的分辨率。
                     * 
                     */
                    void SetPoseImageResolution(const std::string& _poseImageResolution);

                    /**
                     * 判断参数 PoseImageResolution 是否已赋值
                     * @return PoseImageResolution 是否已赋值
                     * 
                     */
                    bool PoseImageResolutionHasBeenSet() const;

                    /**
                     * 获取形象预览视频段。
                     * @return ReferenceVideoSegmentUrl 形象预览视频段。
                     * 
                     */
                    std::string GetReferenceVideoSegmentUrl() const;

                    /**
                     * 设置形象预览视频段。
                     * @param _referenceVideoSegmentUrl 形象预览视频段。
                     * 
                     */
                    void SetReferenceVideoSegmentUrl(const std::string& _referenceVideoSegmentUrl);

                    /**
                     * 判断参数 ReferenceVideoSegmentUrl 是否已赋值
                     * @return ReferenceVideoSegmentUrl 是否已赋值
                     * 
                     */
                    bool ReferenceVideoSegmentUrlHasBeenSet() const;

                    /**
                     * 获取横屏数字人信息。
                     * @return HorizontalAvatar 横屏数字人信息。
                     * 
                     */
                    AvatarImageInfo GetHorizontalAvatar() const;

                    /**
                     * 设置横屏数字人信息。
                     * @param _horizontalAvatar 横屏数字人信息。
                     * 
                     */
                    void SetHorizontalAvatar(const AvatarImageInfo& _horizontalAvatar);

                    /**
                     * 判断参数 HorizontalAvatar 是否已赋值
                     * @return HorizontalAvatar 是否已赋值
                     * 
                     */
                    bool HorizontalAvatarHasBeenSet() const;

                    /**
                     * 获取竖屏数字人信息。
                     * @return VerticalAvatar 竖屏数字人信息。
                     * 
                     */
                    AvatarImageInfo GetVerticalAvatar() const;

                    /**
                     * 设置竖屏数字人信息。
                     * @param _verticalAvatar 竖屏数字人信息。
                     * 
                     */
                    void SetVerticalAvatar(const AvatarImageInfo& _verticalAvatar);

                    /**
                     * 判断参数 VerticalAvatar 是否已赋值
                     * @return VerticalAvatar 是否已赋值
                     * 
                     */
                    bool VerticalAvatarHasBeenSet() const;

                    /**
                     * 获取推荐音色。
                     * @return SuggestTimbreKey 推荐音色。
                     * 
                     */
                    std::string GetSuggestTimbreKey() const;

                    /**
                     * 设置推荐音色。
                     * @param _suggestTimbreKey 推荐音色。
                     * 
                     */
                    void SetSuggestTimbreKey(const std::string& _suggestTimbreKey);

                    /**
                     * 判断参数 SuggestTimbreKey 是否已赋值
                     * @return SuggestTimbreKey 是否已赋值
                     * 
                     */
                    bool SuggestTimbreKeyHasBeenSet() const;

                private:

                    /**
                     * 主播昵称。同一个主播可以存在多个数字人ID。
                     */
                    std::string m_anchorName;
                    bool m_anchorNameHasBeenSet;

                    /**
                     * 主播 ID。用于标识主播形象。同一个主播ID可存在竖屏和横屏两种数字人。
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 主播性别。male-男性，femal-女性。
                     */
                    std::string m_anchorGender;
                    bool m_anchorGenderHasBeenSet;

                    /**
                     * 形象图片。
                     */
                    std::string m_poseImage;
                    bool m_poseImageHasBeenSet;

                    /**
                     * 主播形象图片的分辨率。
                     */
                    std::string m_poseImageResolution;
                    bool m_poseImageResolutionHasBeenSet;

                    /**
                     * 形象预览视频段。
                     */
                    std::string m_referenceVideoSegmentUrl;
                    bool m_referenceVideoSegmentUrlHasBeenSet;

                    /**
                     * 横屏数字人信息。
                     */
                    AvatarImageInfo m_horizontalAvatar;
                    bool m_horizontalAvatarHasBeenSet;

                    /**
                     * 竖屏数字人信息。
                     */
                    AvatarImageInfo m_verticalAvatar;
                    bool m_verticalAvatarHasBeenSet;

                    /**
                     * 推荐音色。
                     */
                    std::string m_suggestTimbreKey;
                    bool m_suggestTimbreKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARANCHORINFO_H_
