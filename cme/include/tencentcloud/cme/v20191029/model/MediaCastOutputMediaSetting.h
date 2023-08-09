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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTOUTPUTMEDIASETTING_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTOUTPUTMEDIASETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaCastVideoSetting.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 点播转直播输出媒体配置。
                */
                class MediaCastOutputMediaSetting : public AbstractModel
                {
                public:
                    MediaCastOutputMediaSetting();
                    ~MediaCastOutputMediaSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频配置。
                     * @return VideoSetting 视频配置。
                     * 
                     */
                    MediaCastVideoSetting GetVideoSetting() const;

                    /**
                     * 设置视频配置。
                     * @param _videoSetting 视频配置。
                     * 
                     */
                    void SetVideoSetting(const MediaCastVideoSetting& _videoSetting);

                    /**
                     * 判断参数 VideoSetting 是否已赋值
                     * @return VideoSetting 是否已赋值
                     * 
                     */
                    bool VideoSettingHasBeenSet() const;

                    /**
                     * 获取视频配置是否和第一个输入源的视频配置相同，默认值：false。如果 FollowSourceInfo 的值为 true，忽略 VideoSetting 参数。
                     * @return FollowSourceInfo 视频配置是否和第一个输入源的视频配置相同，默认值：false。如果 FollowSourceInfo 的值为 true，忽略 VideoSetting 参数。
                     * 
                     */
                    bool GetFollowSourceInfo() const;

                    /**
                     * 设置视频配置是否和第一个输入源的视频配置相同，默认值：false。如果 FollowSourceInfo 的值为 true，忽略 VideoSetting 参数。
                     * @param _followSourceInfo 视频配置是否和第一个输入源的视频配置相同，默认值：false。如果 FollowSourceInfo 的值为 true，忽略 VideoSetting 参数。
                     * 
                     */
                    void SetFollowSourceInfo(const bool& _followSourceInfo);

                    /**
                     * 判断参数 FollowSourceInfo 是否已赋值
                     * @return FollowSourceInfo 是否已赋值
                     * 
                     */
                    bool FollowSourceInfoHasBeenSet() const;

                private:

                    /**
                     * 视频配置。
                     */
                    MediaCastVideoSetting m_videoSetting;
                    bool m_videoSettingHasBeenSet;

                    /**
                     * 视频配置是否和第一个输入源的视频配置相同，默认值：false。如果 FollowSourceInfo 的值为 true，忽略 VideoSetting 参数。
                     */
                    bool m_followSourceInfo;
                    bool m_followSourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTOUTPUTMEDIASETTING_H_
