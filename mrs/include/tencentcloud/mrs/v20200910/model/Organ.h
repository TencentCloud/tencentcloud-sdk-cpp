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
#include <tencentcloud/mrs/v20200910/model/Coord.h>


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
                     * 
                     */
                    Part GetPart() const;

                    /**
                     * 设置部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPart(const Part& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     * 
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Size> GetSize() const;

                    /**
                     * 设置大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const std::vector<Size>& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取包膜
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Envelope 包膜
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetEnvelope() const;

                    /**
                     * 设置包膜
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _envelope 包膜
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvelope(const BlockInfo& _envelope);

                    /**
                     * 判断参数 Envelope 是否已赋值
                     * @return Envelope 是否已赋值
                     * 
                     */
                    bool EnvelopeHasBeenSet() const;

                    /**
                     * 获取边缘
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Edge 边缘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetEdge() const;

                    /**
                     * 设置边缘
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _edge 边缘
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEdge(const BlockInfo& _edge);

                    /**
                     * 判断参数 Edge 是否已赋值
                     * @return Edge 是否已赋值
                     * 
                     */
                    bool EdgeHasBeenSet() const;

                    /**
                     * 获取内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerEcho 内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetInnerEcho() const;

                    /**
                     * 设置内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerEcho 内部回声
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerEcho(const BlockInfo& _innerEcho);

                    /**
                     * 判断参数 InnerEcho 是否已赋值
                     * @return InnerEcho 是否已赋值
                     * 
                     */
                    bool InnerEchoHasBeenSet() const;

                    /**
                     * 获取腺体
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gland 腺体
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetGland() const;

                    /**
                     * 设置腺体
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gland 腺体
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGland(const BlockInfo& _gland);

                    /**
                     * 判断参数 Gland 是否已赋值
                     * @return Gland 是否已赋值
                     * 
                     */
                    bool GlandHasBeenSet() const;

                    /**
                     * 获取形状
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Shape 形状
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetShape() const;

                    /**
                     * 设置形状
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shape 形状
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShape(const BlockInfo& _shape);

                    /**
                     * 判断参数 Shape 是否已赋值
                     * @return Shape 是否已赋值
                     * 
                     */
                    bool ShapeHasBeenSet() const;

                    /**
                     * 获取厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Thickness 厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetThickness() const;

                    /**
                     * 设置厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thickness 厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThickness(const BlockInfo& _thickness);

                    /**
                     * 判断参数 Thickness 是否已赋值
                     * @return Thickness 是否已赋值
                     * 
                     */
                    bool ThicknessHasBeenSet() const;

                    /**
                     * 获取形态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShapeAttr 形态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetShapeAttr() const;

                    /**
                     * 设置形态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shapeAttr 形态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShapeAttr(const BlockInfo& _shapeAttr);

                    /**
                     * 判断参数 ShapeAttr 是否已赋值
                     * @return ShapeAttr 是否已赋值
                     * 
                     */
                    bool ShapeAttrHasBeenSet() const;

                    /**
                     * 获取血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CDFI 血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetCDFI() const;

                    /**
                     * 设置血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cDFI 血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCDFI(const BlockInfo& _cDFI);

                    /**
                     * 判断参数 CDFI 是否已赋值
                     * @return CDFI 是否已赋值
                     * 
                     */
                    bool CDFIHasBeenSet() const;

                    /**
                     * 获取描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SymDesc 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetSymDesc() const;

                    /**
                     * 设置描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _symDesc 描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSymDesc(const BlockInfo& _symDesc);

                    /**
                     * 判断参数 SymDesc 是否已赋值
                     * @return SymDesc 是否已赋值
                     * 
                     */
                    bool SymDescHasBeenSet() const;

                    /**
                     * 获取大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SizeStatus 大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetSizeStatus() const;

                    /**
                     * 设置大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sizeStatus 大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSizeStatus(const BlockInfo& _sizeStatus);

                    /**
                     * 判断参数 SizeStatus 是否已赋值
                     * @return SizeStatus 是否已赋值
                     * 
                     */
                    bool SizeStatusHasBeenSet() const;

                    /**
                     * 获取轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Outline 轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetOutline() const;

                    /**
                     * 设置轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outline 轮廓
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutline(const BlockInfo& _outline);

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     * 
                     */
                    bool OutlineHasBeenSet() const;

                    /**
                     * 获取结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Structure 结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetStructure() const;

                    /**
                     * 设置结构
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _structure 结构
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStructure(const BlockInfo& _structure);

                    /**
                     * 判断参数 Structure 是否已赋值
                     * @return Structure 是否已赋值
                     * 
                     */
                    bool StructureHasBeenSet() const;

                    /**
                     * 获取密度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Density 密度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetDensity() const;

                    /**
                     * 设置密度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _density 密度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDensity(const BlockInfo& _density);

                    /**
                     * 判断参数 Density 是否已赋值
                     * @return Density 是否已赋值
                     * 
                     */
                    bool DensityHasBeenSet() const;

                    /**
                     * 获取血管
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vas 血管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetVas() const;

                    /**
                     * 设置血管
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vas 血管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVas(const BlockInfo& _vas);

                    /**
                     * 判断参数 Vas 是否已赋值
                     * @return Vas 是否已赋值
                     * 
                     */
                    bool VasHasBeenSet() const;

                    /**
                     * 获取囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cysticwall 囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetCysticwall() const;

                    /**
                     * 设置囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cysticwall 囊壁
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCysticwall(const BlockInfo& _cysticwall);

                    /**
                     * 判断参数 Cysticwall 是否已赋值
                     * @return Cysticwall 是否已赋值
                     * 
                     */
                    bool CysticwallHasBeenSet() const;

                    /**
                     * 获取被膜
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Capsule 被膜
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetCapsule() const;

                    /**
                     * 设置被膜
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _capsule 被膜
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCapsule(const BlockInfo& _capsule);

                    /**
                     * 判断参数 Capsule 是否已赋值
                     * @return Capsule 是否已赋值
                     * 
                     */
                    bool CapsuleHasBeenSet() const;

                    /**
                     * 获取峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsthmusThicknese 峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    Size GetIsthmusThicknese() const;

                    /**
                     * 设置峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isthmusThicknese 峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetIsthmusThicknese(const Size& _isthmusThicknese);

                    /**
                     * 判断参数 IsthmusThicknese 是否已赋值
                     * @return IsthmusThicknese 是否已赋值
                     * @deprecated
                     */
                    bool IsthmusThickneseHasBeenSet() const;

                    /**
                     * 获取内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerEchoDistribution 内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetInnerEchoDistribution() const;

                    /**
                     * 设置内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerEchoDistribution 内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerEchoDistribution(const BlockInfo& _innerEchoDistribution);

                    /**
                     * 判断参数 InnerEchoDistribution 是否已赋值
                     * @return InnerEchoDistribution 是否已赋值
                     * 
                     */
                    bool InnerEchoDistributionHasBeenSet() const;

                    /**
                     * 获取原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetIndex() const;

                    /**
                     * 设置原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const std::vector<int64_t>& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取透声度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Transparent 透声度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetTransparent() const;

                    /**
                     * 设置透声度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transparent 透声度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransparent(const BlockInfo& _transparent);

                    /**
                     * 判断参数 Transparent 是否已赋值
                     * @return Transparent 是否已赋值
                     * 
                     */
                    bool TransparentHasBeenSet() const;

                    /**
                     * 获取MRI ADC
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MriAdc MRI ADC
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetMriAdc() const;

                    /**
                     * 设置MRI ADC
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mriAdc MRI ADC
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMriAdc(const BlockInfo& _mriAdc);

                    /**
                     * 判断参数 MriAdc 是否已赋值
                     * @return MriAdc 是否已赋值
                     * 
                     */
                    bool MriAdcHasBeenSet() const;

                    /**
                     * 获取MRI DWI
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MriDwi MRI DWI
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetMriDwi() const;

                    /**
                     * 设置MRI DWI
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mriDwi MRI DWI
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMriDwi(const BlockInfo& _mriDwi);

                    /**
                     * 判断参数 MriDwi 是否已赋值
                     * @return MriDwi 是否已赋值
                     * 
                     */
                    bool MriDwiHasBeenSet() const;

                    /**
                     * 获取MRI T1信号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MriT1 MRI T1信号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetMriT1() const;

                    /**
                     * 设置MRI T1信号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mriT1 MRI T1信号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMriT1(const BlockInfo& _mriT1);

                    /**
                     * 判断参数 MriT1 是否已赋值
                     * @return MriT1 是否已赋值
                     * 
                     */
                    bool MriT1HasBeenSet() const;

                    /**
                     * 获取MRI T2信号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MriT2 MRI T2信号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetMriT2() const;

                    /**
                     * 设置MRI T2信号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mriT2 MRI T2信号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMriT2(const BlockInfo& _mriT2);

                    /**
                     * 判断参数 MriT2 是否已赋值
                     * @return MriT2 是否已赋值
                     * 
                     */
                    bool MriT2HasBeenSet() const;

                    /**
                     * 获取CT HU值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CtHu CT HU值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetCtHu() const;

                    /**
                     * 设置CT HU值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ctHu CT HU值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCtHu(const BlockInfo& _ctHu);

                    /**
                     * 判断参数 CtHu 是否已赋值
                     * @return CtHu 是否已赋值
                     * 
                     */
                    bool CtHuHasBeenSet() const;

                    /**
                     * 获取SUmax值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suvmax SUmax值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetSuvmax() const;

                    /**
                     * 设置SUmax值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _suvmax SUmax值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuvmax(const BlockInfo& _suvmax);

                    /**
                     * 判断参数 Suvmax 是否已赋值
                     * @return Suvmax 是否已赋值
                     * 
                     */
                    bool SuvmaxHasBeenSet() const;

                    /**
                     * 获取代谢情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metabolism 代谢情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetMetabolism() const;

                    /**
                     * 设置代谢情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metabolism 代谢情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetabolism(const BlockInfo& _metabolism);

                    /**
                     * 判断参数 Metabolism 是否已赋值
                     * @return Metabolism 是否已赋值
                     * 
                     */
                    bool MetabolismHasBeenSet() const;

                    /**
                     * 获取放射性摄取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RadioactiveUptake 放射性摄取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetRadioactiveUptake() const;

                    /**
                     * 设置放射性摄取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _radioactiveUptake 放射性摄取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRadioactiveUptake(const BlockInfo& _radioactiveUptake);

                    /**
                     * 判断参数 RadioactiveUptake 是否已赋值
                     * @return RadioactiveUptake 是否已赋值
                     * 
                     */
                    bool RadioactiveUptakeHasBeenSet() const;

                    /**
                     * 获取淋巴结情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphEnlargement 淋巴结情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetLymphEnlargement() const;

                    /**
                     * 设置淋巴结情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lymphEnlargement 淋巴结情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLymphEnlargement(const BlockInfo& _lymphEnlargement);

                    /**
                     * 判断参数 LymphEnlargement 是否已赋值
                     * @return LymphEnlargement 是否已赋值
                     * 
                     */
                    bool LymphEnlargementHasBeenSet() const;

                    /**
                     * 获取影像特征
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageFeature 影像特征
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetImageFeature() const;

                    /**
                     * 设置影像特征
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageFeature 影像特征
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageFeature(const BlockInfo& _imageFeature);

                    /**
                     * 判断参数 ImageFeature 是否已赋值
                     * @return ImageFeature 是否已赋值
                     * 
                     */
                    bool ImageFeatureHasBeenSet() const;

                    /**
                     * 获取导管
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duct 导管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetDuct() const;

                    /**
                     * 设置导管
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duct 导管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuct(const BlockInfo& _duct);

                    /**
                     * 判断参数 Duct 是否已赋值
                     * @return Duct 是否已赋值
                     * 
                     */
                    bool DuctHasBeenSet() const;

                    /**
                     * 获取趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trend 趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetTrend() const;

                    /**
                     * 设置趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trend 趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrend(const BlockInfo& _trend);

                    /**
                     * 判断参数 Trend 是否已赋值
                     * @return Trend 是否已赋值
                     * 
                     */
                    bool TrendHasBeenSet() const;

                    /**
                     * 获取手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operation 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BlockInfo GetOperation() const;

                    /**
                     * 设置手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operation 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperation(const BlockInfo& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取器官在报告图片中的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Coords 器官在报告图片中的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Coord> GetCoords() const;

                    /**
                     * 设置器官在报告图片中的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coords 器官在报告图片中的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoords(const std::vector<Coord>& _coords);

                    /**
                     * 判断参数 Coords 是否已赋值
                     * @return Coords 是否已赋值
                     * 
                     */
                    bool CoordsHasBeenSet() const;

                    /**
                     * 获取峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsthmusThickness 峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Size GetIsthmusThickness() const;

                    /**
                     * 设置峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isthmusThickness 峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsthmusThickness(const Size& _isthmusThickness);

                    /**
                     * 判断参数 IsthmusThickness 是否已赋值
                     * @return IsthmusThickness 是否已赋值
                     * 
                     */
                    bool IsthmusThicknessHasBeenSet() const;

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

                    /**
                     * 透声度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_transparent;
                    bool m_transparentHasBeenSet;

                    /**
                     * MRI ADC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_mriAdc;
                    bool m_mriAdcHasBeenSet;

                    /**
                     * MRI DWI
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_mriDwi;
                    bool m_mriDwiHasBeenSet;

                    /**
                     * MRI T1信号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_mriT1;
                    bool m_mriT1HasBeenSet;

                    /**
                     * MRI T2信号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_mriT2;
                    bool m_mriT2HasBeenSet;

                    /**
                     * CT HU值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_ctHu;
                    bool m_ctHuHasBeenSet;

                    /**
                     * SUmax值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_suvmax;
                    bool m_suvmaxHasBeenSet;

                    /**
                     * 代谢情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_metabolism;
                    bool m_metabolismHasBeenSet;

                    /**
                     * 放射性摄取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_radioactiveUptake;
                    bool m_radioactiveUptakeHasBeenSet;

                    /**
                     * 淋巴结情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_lymphEnlargement;
                    bool m_lymphEnlargementHasBeenSet;

                    /**
                     * 影像特征
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_imageFeature;
                    bool m_imageFeatureHasBeenSet;

                    /**
                     * 导管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_duct;
                    bool m_ductHasBeenSet;

                    /**
                     * 趋势
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_trend;
                    bool m_trendHasBeenSet;

                    /**
                     * 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 器官在报告图片中的坐标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Coord> m_coords;
                    bool m_coordsHasBeenSet;

                    /**
                     * 峡部厚度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Size m_isthmusThickness;
                    bool m_isthmusThicknessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_ORGAN_H_
