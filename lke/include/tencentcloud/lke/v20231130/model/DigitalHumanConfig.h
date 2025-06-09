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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DIGITALHUMANCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DIGITALHUMANCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 数智人配置
                */
                class DigitalHumanConfig : public AbstractModel
                {
                public:
                    DigitalHumanConfig();
                    ~DigitalHumanConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数智人资产key
                     * @return AssetKey 数智人资产key
                     * 
                     */
                    std::string GetAssetKey() const;

                    /**
                     * 设置数智人资产key
                     * @param _assetKey 数智人资产key
                     * 
                     */
                    void SetAssetKey(const std::string& _assetKey);

                    /**
                     * 判断参数 AssetKey 是否已赋值
                     * @return AssetKey 是否已赋值
                     * 
                     */
                    bool AssetKeyHasBeenSet() const;

                    /**
                     * 获取数智人名称
                     * @return Name 数智人名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数智人名称
                     * @param _name 数智人名称
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
                     * 获取图像
                     * @return Avatar 图像
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置图像
                     * @param _avatar 图像
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取预览图
                     * @return PreviewUrl 预览图
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置预览图
                     * @param _previewUrl 预览图
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                private:

                    /**
                     * 数智人资产key
                     */
                    std::string m_assetKey;
                    bool m_assetKeyHasBeenSet;

                    /**
                     * 数智人名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图像
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 预览图
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DIGITALHUMANCONFIG_H_
