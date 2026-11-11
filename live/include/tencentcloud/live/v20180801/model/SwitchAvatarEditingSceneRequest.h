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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHAVATAREDITINGSCENEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHAVATAREDITINGSCENEREQUEST_H_

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
                * SwitchAvatarEditingScene请求参数结构体
                */
                class SwitchAvatarEditingSceneRequest : public AbstractModel
                {
                public:
                    SwitchAvatarEditingSceneRequest();
                    ~SwitchAvatarEditingSceneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通道ID，通常是待编辑的直播流的源ID</p>
                     * @return ChannelId <p>通道ID，通常是待编辑的直播流的源ID</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>通道ID，通常是待编辑的直播流的源ID</p>
                     * @param _channelId <p>通道ID，通常是待编辑的直播流的源ID</p>
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>支持的编辑类型</p><p>枚举值：</p><ul><li>style_transfer： 整体风格迁移</li><li>virtual_tryon： 虚拟试穿</li><li>subject_replacement： 主体替换</li><li>background_replacement： 背景替换</li></ul>
                     * @return EditingType <p>支持的编辑类型</p><p>枚举值：</p><ul><li>style_transfer： 整体风格迁移</li><li>virtual_tryon： 虚拟试穿</li><li>subject_replacement： 主体替换</li><li>background_replacement： 背景替换</li></ul>
                     * 
                     */
                    std::string GetEditingType() const;

                    /**
                     * 设置<p>支持的编辑类型</p><p>枚举值：</p><ul><li>style_transfer： 整体风格迁移</li><li>virtual_tryon： 虚拟试穿</li><li>subject_replacement： 主体替换</li><li>background_replacement： 背景替换</li></ul>
                     * @param _editingType <p>支持的编辑类型</p><p>枚举值：</p><ul><li>style_transfer： 整体风格迁移</li><li>virtual_tryon： 虚拟试穿</li><li>subject_replacement： 主体替换</li><li>background_replacement： 背景替换</li></ul>
                     * 
                     */
                    void SetEditingType(const std::string& _editingType);

                    /**
                     * 判断参数 EditingType 是否已赋值
                     * @return EditingType 是否已赋值
                     * 
                     */
                    bool EditingTypeHasBeenSet() const;

                    /**
                     * 获取<p>各种编辑场景的参考图</p>
                     * @return ImageUrl <p>各种编辑场景的参考图</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>各种编辑场景的参考图</p>
                     * @param _imageUrl <p>各种编辑场景的参考图</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * <p>通道ID，通常是待编辑的直播流的源ID</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>支持的编辑类型</p><p>枚举值：</p><ul><li>style_transfer： 整体风格迁移</li><li>virtual_tryon： 虚拟试穿</li><li>subject_replacement： 主体替换</li><li>background_replacement： 背景替换</li></ul>
                     */
                    std::string m_editingType;
                    bool m_editingTypeHasBeenSet;

                    /**
                     * <p>各种编辑场景的参考图</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SWITCHAVATAREDITINGSCENEREQUEST_H_
