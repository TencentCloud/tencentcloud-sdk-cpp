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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CHANGECLOTHESCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CHANGECLOTHESCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SceneAigcImageTaskInputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AI 换衣参数配置
                */
                class ChangeClothesConfig : public AbstractModel
                {
                public:
                    ChangeClothesConfig();
                    ~ChangeClothesConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入需要更换的<strong>衣物</strong>图片列表。各类型最大支持衣物数量：</p><ul><li>change_clothes：4 张图片；</li><li>change_clothes_under：1 张图片；</li><li>change_clothes_full_wear：1 张图片；</li><li>change_clothes_top_wear：1 张图片；</li><li>change_clothes_bottom_wear：1 张图片；</li></ul>
                     * @return ClothesFileInfos <p>输入需要更换的<strong>衣物</strong>图片列表。各类型最大支持衣物数量：</p><ul><li>change_clothes：4 张图片；</li><li>change_clothes_under：1 张图片；</li><li>change_clothes_full_wear：1 张图片；</li><li>change_clothes_top_wear：1 张图片；</li><li>change_clothes_bottom_wear：1 张图片；</li></ul>
                     * 
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> GetClothesFileInfos() const;

                    /**
                     * 设置<p>输入需要更换的<strong>衣物</strong>图片列表。各类型最大支持衣物数量：</p><ul><li>change_clothes：4 张图片；</li><li>change_clothes_under：1 张图片；</li><li>change_clothes_full_wear：1 张图片；</li><li>change_clothes_top_wear：1 张图片；</li><li>change_clothes_bottom_wear：1 张图片；</li></ul>
                     * @param _clothesFileInfos <p>输入需要更换的<strong>衣物</strong>图片列表。各类型最大支持衣物数量：</p><ul><li>change_clothes：4 张图片；</li><li>change_clothes_under：1 张图片；</li><li>change_clothes_full_wear：1 张图片；</li><li>change_clothes_top_wear：1 张图片；</li><li>change_clothes_bottom_wear：1 张图片；</li></ul>
                     * 
                     */
                    void SetClothesFileInfos(const std::vector<SceneAigcImageTaskInputFileInfo>& _clothesFileInfos);

                    /**
                     * 判断参数 ClothesFileInfos 是否已赋值
                     * @return ClothesFileInfos 是否已赋值
                     * 
                     */
                    bool ClothesFileInfosHasBeenSet() const;

                    /**
                     * 获取<p>AI换衣的提示词。<strong>仅Type为change_clothes有效。</strong></p>
                     * @return Prompt <p>AI换衣的提示词。<strong>仅Type为change_clothes有效。</strong></p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>AI换衣的提示词。<strong>仅Type为change_clothes有效。</strong></p>
                     * @param _prompt <p>AI换衣的提示词。<strong>仅Type为change_clothes有效。</strong></p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                private:

                    /**
                     * <p>输入需要更换的<strong>衣物</strong>图片列表。各类型最大支持衣物数量：</p><ul><li>change_clothes：4 张图片；</li><li>change_clothes_under：1 张图片；</li><li>change_clothes_full_wear：1 张图片；</li><li>change_clothes_top_wear：1 张图片；</li><li>change_clothes_bottom_wear：1 张图片；</li></ul>
                     */
                    std::vector<SceneAigcImageTaskInputFileInfo> m_clothesFileInfos;
                    bool m_clothesFileInfosHasBeenSet;

                    /**
                     * <p>AI换衣的提示词。<strong>仅Type为change_clothes有效。</strong></p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CHANGECLOTHESCONFIG_H_
