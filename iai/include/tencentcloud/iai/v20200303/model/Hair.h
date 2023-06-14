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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_HAIR_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_HAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/AttributeItem.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * 头发信息
                */
                class Hair : public AbstractModel
                {
                public:
                    Hair();
                    ~Hair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取头发长度信息。
AttributeItem对应的Type为 —— 0：光头，1：短发，2：中发，3：长发，4：绑发。
                     * @return Length 头发长度信息。
AttributeItem对应的Type为 —— 0：光头，1：短发，2：中发，3：长发，4：绑发。
                     * 
                     */
                    AttributeItem GetLength() const;

                    /**
                     * 设置头发长度信息。
AttributeItem对应的Type为 —— 0：光头，1：短发，2：中发，3：长发，4：绑发。
                     * @param _length 头发长度信息。
AttributeItem对应的Type为 —— 0：光头，1：短发，2：中发，3：长发，4：绑发。
                     * 
                     */
                    void SetLength(const AttributeItem& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取刘海信息。
AttributeItem对应的Type为 —— 0：无刘海，1：有刘海。
                     * @return Bang 刘海信息。
AttributeItem对应的Type为 —— 0：无刘海，1：有刘海。
                     * 
                     */
                    AttributeItem GetBang() const;

                    /**
                     * 设置刘海信息。
AttributeItem对应的Type为 —— 0：无刘海，1：有刘海。
                     * @param _bang 刘海信息。
AttributeItem对应的Type为 —— 0：无刘海，1：有刘海。
                     * 
                     */
                    void SetBang(const AttributeItem& _bang);

                    /**
                     * 判断参数 Bang 是否已赋值
                     * @return Bang 是否已赋值
                     * 
                     */
                    bool BangHasBeenSet() const;

                    /**
                     * 获取头发颜色信息。
AttributeItem对应的Type为 —— 0：黑色，1：金色，2：棕色，3：灰白色。
                     * @return Color 头发颜色信息。
AttributeItem对应的Type为 —— 0：黑色，1：金色，2：棕色，3：灰白色。
                     * 
                     */
                    AttributeItem GetColor() const;

                    /**
                     * 设置头发颜色信息。
AttributeItem对应的Type为 —— 0：黑色，1：金色，2：棕色，3：灰白色。
                     * @param _color 头发颜色信息。
AttributeItem对应的Type为 —— 0：黑色，1：金色，2：棕色，3：灰白色。
                     * 
                     */
                    void SetColor(const AttributeItem& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * 头发长度信息。
AttributeItem对应的Type为 —— 0：光头，1：短发，2：中发，3：长发，4：绑发。
                     */
                    AttributeItem m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 刘海信息。
AttributeItem对应的Type为 —— 0：无刘海，1：有刘海。
                     */
                    AttributeItem m_bang;
                    bool m_bangHasBeenSet;

                    /**
                     * 头发颜色信息。
AttributeItem对应的Type为 —— 0：黑色，1：金色，2：棕色，3：灰白色。
                     */
                    AttributeItem m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_HAIR_H_
