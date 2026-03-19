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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARBACKGROUNDINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARBACKGROUNDINFO_H_

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
                * 数字人背景信息。
                */
                class AvatarBackgroundInfo : public AbstractModel
                {
                public:
                    AvatarBackgroundInfo();
                    ~AvatarBackgroundInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取背景 ID。
                     * @return BackgroundId 背景 ID。
                     * 
                     */
                    std::string GetBackgroundId() const;

                    /**
                     * 设置背景 ID。
                     * @param _backgroundId 背景 ID。
                     * 
                     */
                    void SetBackgroundId(const std::string& _backgroundId);

                    /**
                     * 判断参数 BackgroundId 是否已赋值
                     * @return BackgroundId 是否已赋值
                     * 
                     */
                    bool BackgroundIdHasBeenSet() const;

                    /**
                     * 获取背景场景。如：带货，娱乐等。
                     * @return Scene 背景场景。如：带货，娱乐等。
                     * 
                     */
                    std::string GetScene() const;

                    /**
                     * 设置背景场景。如：带货，娱乐等。
                     * @param _scene 背景场景。如：带货，娱乐等。
                     * 
                     */
                    void SetScene(const std::string& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取竖屏背景图片 URL。
                     * @return VerticalImageUrl 竖屏背景图片 URL。
                     * 
                     */
                    std::string GetVerticalImageUrl() const;

                    /**
                     * 设置竖屏背景图片 URL。
                     * @param _verticalImageUrl 竖屏背景图片 URL。
                     * 
                     */
                    void SetVerticalImageUrl(const std::string& _verticalImageUrl);

                    /**
                     * 判断参数 VerticalImageUrl 是否已赋值
                     * @return VerticalImageUrl 是否已赋值
                     * 
                     */
                    bool VerticalImageUrlHasBeenSet() const;

                    /**
                     * 获取横屏背景图片 URL。
                     * @return HorizontalImageUrl 横屏背景图片 URL。
                     * 
                     */
                    std::string GetHorizontalImageUrl() const;

                    /**
                     * 设置横屏背景图片 URL。
                     * @param _horizontalImageUrl 横屏背景图片 URL。
                     * 
                     */
                    void SetHorizontalImageUrl(const std::string& _horizontalImageUrl);

                    /**
                     * 判断参数 HorizontalImageUrl 是否已赋值
                     * @return HorizontalImageUrl 是否已赋值
                     * 
                     */
                    bool HorizontalImageUrlHasBeenSet() const;

                private:

                    /**
                     * 背景 ID。
                     */
                    std::string m_backgroundId;
                    bool m_backgroundIdHasBeenSet;

                    /**
                     * 背景场景。如：带货，娱乐等。
                     */
                    std::string m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 竖屏背景图片 URL。
                     */
                    std::string m_verticalImageUrl;
                    bool m_verticalImageUrlHasBeenSet;

                    /**
                     * 横屏背景图片 URL。
                     */
                    std::string m_horizontalImageUrl;
                    bool m_horizontalImageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARBACKGROUNDINFO_H_
