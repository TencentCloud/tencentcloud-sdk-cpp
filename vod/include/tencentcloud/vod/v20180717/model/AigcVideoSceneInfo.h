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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOSCENEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOSCENEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProductShowcaseConfig.h>
#include <tencentcloud/vod/v20180717/model/CharacterSceneConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 场景化 AIGC 生图配置。
                */
                class AigcVideoSceneInfo : public AbstractModel
                {
                public:
                    AigcVideoSceneInfo();
                    ~AigcVideoSceneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AIGC 生视频场景类型。</p><p>枚举值：</p><ul><li>product_showcase：  产品360度展示。</li><li>character_scene： 角色场景。</li></ul>
                     * @return Type <p>AIGC 生视频场景类型。</p><p>枚举值：</p><ul><li>product_showcase：  产品360度展示。</li><li>character_scene： 角色场景。</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>AIGC 生视频场景类型。</p><p>枚举值：</p><ul><li>product_showcase：  产品360度展示。</li><li>character_scene： 角色场景。</li></ul>
                     * @param _type <p>AIGC 生视频场景类型。</p><p>枚举值：</p><ul><li>product_showcase：  产品360度展示。</li><li>character_scene： 角色场景。</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>产品展示参数配置。</p>
                     * @return ProductShowcaseConfig <p>产品展示参数配置。</p>
                     * 
                     */
                    ProductShowcaseConfig GetProductShowcaseConfig() const;

                    /**
                     * 设置<p>产品展示参数配置。</p>
                     * @param _productShowcaseConfig <p>产品展示参数配置。</p>
                     * 
                     */
                    void SetProductShowcaseConfig(const ProductShowcaseConfig& _productShowcaseConfig);

                    /**
                     * 判断参数 ProductShowcaseConfig 是否已赋值
                     * @return ProductShowcaseConfig 是否已赋值
                     * 
                     */
                    bool ProductShowcaseConfigHasBeenSet() const;

                    /**
                     * 获取<p>角色场景参数配置。</p>
                     * @return CharacterSceneConfig <p>角色场景参数配置。</p>
                     * 
                     */
                    CharacterSceneConfig GetCharacterSceneConfig() const;

                    /**
                     * 设置<p>角色场景参数配置。</p>
                     * @param _characterSceneConfig <p>角色场景参数配置。</p>
                     * 
                     */
                    void SetCharacterSceneConfig(const CharacterSceneConfig& _characterSceneConfig);

                    /**
                     * 判断参数 CharacterSceneConfig 是否已赋值
                     * @return CharacterSceneConfig 是否已赋值
                     * 
                     */
                    bool CharacterSceneConfigHasBeenSet() const;

                private:

                    /**
                     * <p>AIGC 生视频场景类型。</p><p>枚举值：</p><ul><li>product_showcase：  产品360度展示。</li><li>character_scene： 角色场景。</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>产品展示参数配置。</p>
                     */
                    ProductShowcaseConfig m_productShowcaseConfig;
                    bool m_productShowcaseConfigHasBeenSet;

                    /**
                     * <p>角色场景参数配置。</p>
                     */
                    CharacterSceneConfig m_characterSceneConfig;
                    bool m_characterSceneConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOSCENEINFO_H_
