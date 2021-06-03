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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_ORGAN_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_ORGAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Part.h>
#include <tencentcloud/mrs/v20200910/model/Size.h>
#include <tencentcloud/mrs/v20200910/model/BlockInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 器官
                */
                class Organ : public AbstractModel
                {
                public:
                    Organ();
                    ~Organ() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part GetPart() const;

                    /**
                     * 设置部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPart(const Part& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Size> GetSize() const;

                    /**
                     * 设置大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSize(const std::vector<Size>& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取包膜
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Envelope 包膜
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetEnvelope() const;

                    /**
                     * 设置包膜
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Envelope 包膜
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnvelope(const BlockInfo& _envelope);

                    /**
                     * 判断参数 Envelope 是否已赋值
                     * @return Envelope 是否已赋值
                     */
                    bool EnvelopeHasBeenSet() const;

                    /**
                     * 获取边缘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Edge 边缘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetEdge() const;

                    /**
                     * 设置边缘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Edge 边缘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEdge(const BlockInfo& _edge);

                    /**
                     * 判断参数 Edge 是否已赋值
                     * @return Edge 是否已赋值
                     */
                    bool EdgeHasBeenSet() const;

                    /**
                     * 获取内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerEcho 内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetInnerEcho() const;

                    /**
                     * 设置内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InnerEcho 内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInnerEcho(const BlockInfo& _innerEcho);

                    /**
                     * 判断参数 InnerEcho 是否已赋值
                     * @return InnerEcho 是否已赋值
                     */
                    bool InnerEchoHasBeenSet() const;

                    /**
                     * 获取腺体
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gland 腺体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetGland() const;

                    /**
                     * 设置腺体
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Gland 腺体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGland(const BlockInfo& _gland);

                    /**
                     * 判断参数 Gland 是否已赋值
                     * @return Gland 是否已赋值
                     */
                    bool GlandHasBeenSet() const;

                    /**
                     * 获取形状
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Shape 形状
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetShape() const;

                    /**
                     * 设置形状
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Shape 形状
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetShape(const BlockInfo& _shape);

                    /**
                     * 判断参数 Shape 是否已赋值
                     * @return Shape 是否已赋值
                     */
                    bool ShapeHasBeenSet() const;

                    /**
                     * 获取厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Thickness 厚度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetThickness() const;

                    /**
                     * 设置厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Thickness 厚度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetThickness(const BlockInfo& _thickness);

                    /**
                     * 判断参数 Thickness 是否已赋值
                     * @return Thickness 是否已赋值
                     */
                    bool ThicknessHasBeenSet() const;

                    /**
                     * 获取形态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShapeAttr 形态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetShapeAttr() const;

                    /**
                     * 设置形态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ShapeAttr 形态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetShapeAttr(const BlockInfo& _shapeAttr);

                    /**
                     * 判断参数 ShapeAttr 是否已赋值
                     * @return ShapeAttr 是否已赋值
                     */
                    bool ShapeAttrHasBeenSet() const;

                    /**
                     * 获取血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CDFI 血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetCDFI() const;

                    /**
                     * 设置血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CDFI 血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCDFI(const BlockInfo& _cDFI);

                    /**
                     * 判断参数 CDFI 是否已赋值
                     * @return CDFI 是否已赋值
                     */
                    bool CDFIHasBeenSet() const;

                    /**
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SymDesc 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetSymDesc() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SymDesc 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSymDesc(const BlockInfo& _symDesc);

                    /**
                     * 判断参数 SymDesc 是否已赋值
                     * @return SymDesc 是否已赋值
                     */
                    bool SymDescHasBeenSet() const;

                    /**
                     * 获取大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SizeStatus 大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetSizeStatus() const;

                    /**
                     * 设置大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SizeStatus 大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSizeStatus(const BlockInfo& _sizeStatus);

                    /**
                     * 判断参数 SizeStatus 是否已赋值
                     * @return SizeStatus 是否已赋值
                     */
                    bool SizeStatusHasBeenSet() const;

                    /**
                     * 获取轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Outline 轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetOutline() const;

                    /**
                     * 设置轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Outline 轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutline(const BlockInfo& _outline);

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Structure 结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetStructure() const;

                    /**
                     * 设置结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Structure 结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStructure(const BlockInfo& _structure);

                    /**
                     * 判断参数 Structure 是否已赋值
                     * @return Structure 是否已赋值
                     */
                    bool StructureHasBeenSet() const;

                    /**
                     * 获取密度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Density 密度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetDensity() const;

                    /**
                     * 设置密度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Density 密度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDensity(const BlockInfo& _density);

                    /**
                     * 判断参数 Density 是否已赋值
                     * @return Density 是否已赋值
                     */
                    bool DensityHasBeenSet() const;

                    /**
                     * 获取血管
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vas 血管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetVas() const;

                    /**
                     * 设置血管
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vas 血管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVas(const BlockInfo& _vas);

                    /**
                     * 判断参数 Vas 是否已赋值
                     * @return Vas 是否已赋值
                     */
                    bool VasHasBeenSet() const;

                    /**
                     * 获取囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cysticwall 囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetCysticwall() const;

                    /**
                     * 设置囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cysticwall 囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCysticwall(const BlockInfo& _cysticwall);

                    /**
                     * 判断参数 Cysticwall 是否已赋值
                     * @return Cysticwall 是否已赋值
                     */
                    bool CysticwallHasBeenSet() const;

                    /**
                     * 获取被膜
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Capsule 被膜
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetCapsule() const;

                    /**
                     * 设置被膜
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Capsule 被膜
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCapsule(const BlockInfo& _capsule);

                    /**
                     * 判断参数 Capsule 是否已赋值
                     * @return Capsule 是否已赋值
                     */
                    bool CapsuleHasBeenSet() const;

                    /**
                     * 获取峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsthmusThicknese 峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Size GetIsthmusThicknese() const;

                    /**
                     * 设置峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsthmusThicknese 峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsthmusThicknese(const Size& _isthmusThicknese);

                    /**
                     * 判断参数 IsthmusThicknese 是否已赋值
                     * @return IsthmusThicknese 是否已赋值
                     */
                    bool IsthmusThickneseHasBeenSet() const;

                    /**
                     * 获取内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerEchoDistribution 内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetInnerEchoDistribution() const;

                    /**
                     * 设置内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InnerEchoDistribution 内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInnerEchoDistribution(const BlockInfo& _innerEchoDistribution);

                    /**
                     * 判断参数 InnerEchoDistribution 是否已赋值
                     * @return InnerEchoDistribution 是否已赋值
                     */
                    bool InnerEchoDistributionHasBeenSet() const;

                    /**
                     * 获取原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetIndex() const;

                    /**
                     * 设置原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Index 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndex(const std::vector<int64_t>& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Size> m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 包膜
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_envelope;
                    bool m_envelopeHasBeenSet;

                    /**
                     * 边缘
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_edge;
                    bool m_edgeHasBeenSet;

                    /**
                     * 内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_innerEcho;
                    bool m_innerEchoHasBeenSet;

                    /**
                     * 腺体
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_gland;
                    bool m_glandHasBeenSet;

                    /**
                     * 形状
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_shape;
                    bool m_shapeHasBeenSet;

                    /**
                     * 厚度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_thickness;
                    bool m_thicknessHasBeenSet;

                    /**
                     * 形态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_shapeAttr;
                    bool m_shapeAttrHasBeenSet;

                    /**
                     * 血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_cDFI;
                    bool m_cDFIHasBeenSet;

                    /**
                     * 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_symDesc;
                    bool m_symDescHasBeenSet;

                    /**
                     * 大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_sizeStatus;
                    bool m_sizeStatusHasBeenSet;

                    /**
                     * 轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_outline;
                    bool m_outlineHasBeenSet;

                    /**
                     * 结构
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_structure;
                    bool m_structureHasBeenSet;

                    /**
                     * 密度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_density;
                    bool m_densityHasBeenSet;

                    /**
                     * 血管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_vas;
                    bool m_vasHasBeenSet;

                    /**
                     * 囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_cysticwall;
                    bool m_cysticwallHasBeenSet;

                    /**
                     * 被膜
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_capsule;
                    bool m_capsuleHasBeenSet;

                    /**
                     * 峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Size m_isthmusThicknese;
                    bool m_isthmusThickneseHasBeenSet;

                    /**
                     * 内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_innerEchoDistribution;
                    bool m_innerEchoDistributionHasBeenSet;

                    /**
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_ORGAN_H_
