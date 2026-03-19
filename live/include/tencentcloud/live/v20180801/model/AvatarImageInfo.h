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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARIMAGEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARIMAGEINFO_H_

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
                * 数字人形象信息。
                */
                class AvatarImageInfo : public AbstractModel
                {
                public:
                    AvatarImageInfo();
                    ~AvatarImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数字人原始缩放系数。数字人展示大小=原始大小*缩放系数。
                     * @return OriginZoom 数字人原始缩放系数。数字人展示大小=原始大小*缩放系数。
                     * 
                     */
                    double GetOriginZoom() const;

                    /**
                     * 设置数字人原始缩放系数。数字人展示大小=原始大小*缩放系数。
                     * @param _originZoom 数字人原始缩放系数。数字人展示大小=原始大小*缩放系数。
                     * 
                     */
                    void SetOriginZoom(const double& _originZoom);

                    /**
                     * 判断参数 OriginZoom 是否已赋值
                     * @return OriginZoom 是否已赋值
                     * 
                     */
                    bool OriginZoomHasBeenSet() const;

                    /**
                     * 获取数字人KEY。
                     * @return AvatarKey 数字人KEY。
                     * 
                     */
                    std::string GetAvatarKey() const;

                    /**
                     * 设置数字人KEY。
                     * @param _avatarKey 数字人KEY。
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
                     * 获取分辨率。
                     * @return Resolution 分辨率。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率。
                     * @param _resolution 分辨率。
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * 数字人原始缩放系数。数字人展示大小=原始大小*缩放系数。
                     */
                    double m_originZoom;
                    bool m_originZoomHasBeenSet;

                    /**
                     * 数字人KEY。
                     */
                    std::string m_avatarKey;
                    bool m_avatarKeyHasBeenSet;

                    /**
                     * 分辨率。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARIMAGEINFO_H_
