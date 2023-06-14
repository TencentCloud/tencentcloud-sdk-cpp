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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_LOWERBODYCLOTH_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_LOWERBODYCLOTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/LowerBodyClothColor.h>
#include <tencentcloud/bda/v20200324/model/LowerBodyClothLength.h>
#include <tencentcloud/bda/v20200324/model/LowerBodyClothType.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 下衣属性信息
                */
                class LowerBodyCloth : public AbstractModel
                {
                public:
                    LowerBodyCloth();
                    ~LowerBodyCloth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下衣颜色信息。
                     * @return Color 下衣颜色信息。
                     * 
                     */
                    LowerBodyClothColor GetColor() const;

                    /**
                     * 设置下衣颜色信息。
                     * @param _color 下衣颜色信息。
                     * 
                     */
                    void SetColor(const LowerBodyClothColor& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取下衣长度信息 。
                     * @return Length 下衣长度信息 。
                     * 
                     */
                    LowerBodyClothLength GetLength() const;

                    /**
                     * 设置下衣长度信息 。
                     * @param _length 下衣长度信息 。
                     * 
                     */
                    void SetLength(const LowerBodyClothLength& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取下衣类型信息。
                     * @return Type 下衣类型信息。
                     * 
                     */
                    LowerBodyClothType GetType() const;

                    /**
                     * 设置下衣类型信息。
                     * @param _type 下衣类型信息。
                     * 
                     */
                    void SetType(const LowerBodyClothType& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 下衣颜色信息。
                     */
                    LowerBodyClothColor m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 下衣长度信息 。
                     */
                    LowerBodyClothLength m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 下衣类型信息。
                     */
                    LowerBodyClothType m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_LOWERBODYCLOTH_H_
