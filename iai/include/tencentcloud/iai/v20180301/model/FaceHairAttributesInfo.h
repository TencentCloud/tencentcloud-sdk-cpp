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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_FACEHAIRATTRIBUTESINFO_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_FACEHAIRATTRIBUTESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 人脸属性中的发型信息。
                */
                class FaceHairAttributesInfo : public AbstractModel
                {
                public:
                    FaceHairAttributesInfo();
                    ~FaceHairAttributesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取0：光头，1：短发，2：中发，3：长发，4：绑发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Length 0：光头，1：短发，2：中发，3：长发，4：绑发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置0：光头，1：短发，2：中发，3：长发，4：绑发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _length 0：光头，1：短发，2：中发，3：长发，4：绑发
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取0：有刘海，1：无刘海
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bang 0：有刘海，1：无刘海
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBang() const;

                    /**
                     * 设置0：有刘海，1：无刘海
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bang 0：有刘海，1：无刘海
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBang(const int64_t& _bang);

                    /**
                     * 判断参数 Bang 是否已赋值
                     * @return Bang 是否已赋值
                     * 
                     */
                    bool BangHasBeenSet() const;

                    /**
                     * 获取0：黑色，1：金色，2：棕色，3：灰白色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Color 0：黑色，1：金色，2：棕色，3：灰白色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetColor() const;

                    /**
                     * 设置0：黑色，1：金色，2：棕色，3：灰白色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _color 0：黑色，1：金色，2：棕色，3：灰白色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColor(const int64_t& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                private:

                    /**
                     * 0：光头，1：短发，2：中发，3：长发，4：绑发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 0：有刘海，1：无刘海
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bang;
                    bool m_bangHasBeenSet;

                    /**
                     * 0：黑色，1：金色，2：棕色，3：灰白色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_color;
                    bool m_colorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_FACEHAIRATTRIBUTESINFO_H_
