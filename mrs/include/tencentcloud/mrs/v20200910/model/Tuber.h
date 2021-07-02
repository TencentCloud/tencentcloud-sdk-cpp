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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TUBER_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TUBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Attribute.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 肿瘤结节
                */
                class Tuber : public AbstractModel
                {
                public:
                    Tuber();
                    ~Tuber() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Part 部位信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetPart() const;

                    /**
                     * 设置部位信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Part 部位信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPart(const Attribute& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取类型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetType() const;

                    /**
                     * 设置类型信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 类型信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const Attribute& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取大小信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SizeList 大小信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Attribute> GetSizeList() const;

                    /**
                     * 设置大小信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SizeList 大小信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSizeList(const std::vector<Attribute>& _sizeList);

                    /**
                     * 判断参数 SizeList 是否已赋值
                     * @return SizeList 是否已赋值
                     */
                    bool SizeListHasBeenSet() const;

                    /**
                     * 获取形态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Shape 形态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetShape() const;

                    /**
                     * 设置形态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Shape 形态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetShape(const Attribute& _shape);

                    /**
                     * 判断参数 Shape 是否已赋值
                     * @return Shape 是否已赋值
                     */
                    bool ShapeHasBeenSet() const;

                    /**
                     * 获取边缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Edge 边缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetEdge() const;

                    /**
                     * 设置边缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Edge 边缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEdge(const Attribute& _edge);

                    /**
                     * 判断参数 Edge 是否已赋值
                     * @return Edge 是否已赋值
                     */
                    bool EdgeHasBeenSet() const;

                    /**
                     * 获取CDFI信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CDFI CDFI信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetCDFI() const;

                    /**
                     * 设置CDFI信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CDFI CDFI信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCDFI(const Attribute& _cDFI);

                    /**
                     * 判断参数 CDFI 是否已赋值
                     * @return CDFI 是否已赋值
                     */
                    bool CDFIHasBeenSet() const;

                    /**
                     * 获取代谢信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metabolism 代谢信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetMetabolism() const;

                    /**
                     * 设置代谢信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Metabolism 代谢信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMetabolism(const Attribute& _metabolism);

                    /**
                     * 判断参数 Metabolism 是否已赋值
                     * @return Metabolism 是否已赋值
                     */
                    bool MetabolismHasBeenSet() const;

                    /**
                     * 获取淋巴结信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphGland 淋巴结信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetLymphGland() const;

                    /**
                     * 设置淋巴结信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LymphGland 淋巴结信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLymphGland(const Attribute& _lymphGland);

                    /**
                     * 判断参数 LymphGland 是否已赋值
                     * @return LymphGland 是否已赋值
                     */
                    bool LymphGlandHasBeenSet() const;

                    /**
                     * 获取淋巴门信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphDoor 淋巴门信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetLymphDoor() const;

                    /**
                     * 设置淋巴门信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LymphDoor 淋巴门信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLymphDoor(const Attribute& _lymphDoor);

                    /**
                     * 判断参数 LymphDoor 是否已赋值
                     * @return LymphDoor 是否已赋值
                     */
                    bool LymphDoorHasBeenSet() const;

                    /**
                     * 获取皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkinMedulla 皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetSkinMedulla() const;

                    /**
                     * 设置皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SkinMedulla 皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSkinMedulla(const Attribute& _skinMedulla);

                    /**
                     * 判断参数 SkinMedulla 是否已赋值
                     * @return SkinMedulla 是否已赋值
                     */
                    bool SkinMedullaHasBeenSet() const;

                    /**
                     * 获取内部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerEcho 内部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetInnerEcho() const;

                    /**
                     * 设置内部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InnerEcho 内部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInnerEcho(const Attribute& _innerEcho);

                    /**
                     * 判断参数 InnerEcho 是否已赋值
                     * @return InnerEcho 是否已赋值
                     */
                    bool InnerEchoHasBeenSet() const;

                    /**
                     * 获取外部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RearEcho 外部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetRearEcho() const;

                    /**
                     * 设置外部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RearEcho 外部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRearEcho(const Attribute& _rearEcho);

                    /**
                     * 判断参数 RearEcho 是否已赋值
                     * @return RearEcho 是否已赋值
                     */
                    bool RearEchoHasBeenSet() const;

                    /**
                     * 获取包膜信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Envelope 包膜信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetEnvelope() const;

                    /**
                     * 设置包膜信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Envelope 包膜信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvelope(const Attribute& _envelope);

                    /**
                     * 判断参数 Envelope 是否已赋值
                     * @return Envelope 是否已赋值
                     */
                    bool EnvelopeHasBeenSet() const;

                    /**
                     * 获取钙化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Calcification 钙化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetCalcification() const;

                    /**
                     * 设置钙化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Calcification 钙化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCalcification(const Attribute& _calcification);

                    /**
                     * 判断参数 Calcification 是否已赋值
                     * @return Calcification 是否已赋值
                     */
                    bool CalcificationHasBeenSet() const;

                    /**
                     * 获取强化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enhancement 强化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetEnhancement() const;

                    /**
                     * 设置强化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Enhancement 强化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnhancement(const Attribute& _enhancement);

                    /**
                     * 判断参数 Enhancement 是否已赋值
                     * @return Enhancement 是否已赋值
                     */
                    bool EnhancementHasBeenSet() const;

                    /**
                     * 获取纵横比信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AspectRatio 纵横比信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetAspectRatio() const;

                    /**
                     * 设置纵横比信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AspectRatio 纵横比信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAspectRatio(const Attribute& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     */
                    bool AspectRatioHasBeenSet() const;

                private:

                    /**
                     * 部位信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 类型信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 大小信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Attribute> m_sizeList;
                    bool m_sizeListHasBeenSet;

                    /**
                     * 形态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_shape;
                    bool m_shapeHasBeenSet;

                    /**
                     * 边缘信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_edge;
                    bool m_edgeHasBeenSet;

                    /**
                     * CDFI信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_cDFI;
                    bool m_cDFIHasBeenSet;

                    /**
                     * 代谢信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_metabolism;
                    bool m_metabolismHasBeenSet;

                    /**
                     * 淋巴结信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_lymphGland;
                    bool m_lymphGlandHasBeenSet;

                    /**
                     * 淋巴门信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_lymphDoor;
                    bool m_lymphDoorHasBeenSet;

                    /**
                     * 皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_skinMedulla;
                    bool m_skinMedullaHasBeenSet;

                    /**
                     * 内部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_innerEcho;
                    bool m_innerEchoHasBeenSet;

                    /**
                     * 外部回声信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_rearEcho;
                    bool m_rearEchoHasBeenSet;

                    /**
                     * 包膜信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_envelope;
                    bool m_envelopeHasBeenSet;

                    /**
                     * 钙化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_calcification;
                    bool m_calcificationHasBeenSet;

                    /**
                     * 强化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_enhancement;
                    bool m_enhancementHasBeenSet;

                    /**
                     * 纵横比信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TUBER_H_
