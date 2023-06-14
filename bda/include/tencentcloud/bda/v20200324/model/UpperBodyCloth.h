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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_UPPERBODYCLOTH_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_UPPERBODYCLOTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/UpperBodyClothTexture.h>
#include <tencentcloud/bda/v20200324/model/UpperBodyClothColor.h>
#include <tencentcloud/bda/v20200324/model/UpperBodyClothSleeve.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 上衣属性信息
                */
                class UpperBodyCloth : public AbstractModel
                {
                public:
                    UpperBodyCloth();
                    ~UpperBodyCloth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上衣纹理信息。
                     * @return Texture 上衣纹理信息。
                     * 
                     */
                    UpperBodyClothTexture GetTexture() const;

                    /**
                     * 设置上衣纹理信息。
                     * @param _texture 上衣纹理信息。
                     * 
                     */
                    void SetTexture(const UpperBodyClothTexture& _texture);

                    /**
                     * 判断参数 Texture 是否已赋值
                     * @return Texture 是否已赋值
                     * 
                     */
                    bool TextureHasBeenSet() const;

                    /**
                     * 获取上衣颜色信息。
                     * @return Color 上衣颜色信息。
                     * 
                     */
                    UpperBodyClothColor GetColor() const;

                    /**
                     * 设置上衣颜色信息。
                     * @param _color 上衣颜色信息。
                     * 
                     */
                    void SetColor(const UpperBodyClothColor& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取上衣衣袖信息。
                     * @return Sleeve 上衣衣袖信息。
                     * 
                     */
                    UpperBodyClothSleeve GetSleeve() const;

                    /**
                     * 设置上衣衣袖信息。
                     * @param _sleeve 上衣衣袖信息。
                     * 
                     */
                    void SetSleeve(const UpperBodyClothSleeve& _sleeve);

                    /**
                     * 判断参数 Sleeve 是否已赋值
                     * @return Sleeve 是否已赋值
                     * 
                     */
                    bool SleeveHasBeenSet() const;

                private:

                    /**
                     * 上衣纹理信息。
                     */
                    UpperBodyClothTexture m_texture;
                    bool m_textureHasBeenSet;

                    /**
                     * 上衣颜色信息。
                     */
                    UpperBodyClothColor m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 上衣衣袖信息。
                     */
                    UpperBodyClothSleeve m_sleeve;
                    bool m_sleeveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_UPPERBODYCLOTH_H_
