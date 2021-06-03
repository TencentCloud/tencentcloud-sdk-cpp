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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TUBERINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TUBERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BlockInfo.h>
#include <tencentcloud/mrs/v20200910/model/Part.h>
#include <tencentcloud/mrs/v20200910/model/Size.h>
#include <tencentcloud/mrs/v20200910/model/Multiple.h>
#include <tencentcloud/mrs/v20200910/model/AspectRatio.h>
#include <tencentcloud/mrs/v20200910/model/Elastic.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 结节
                */
                class TuberInfo : public AbstractModel
                {
                public:
                    TuberInfo();
                    ~TuberInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const BlockInfo& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

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
                     * 获取多发
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Multiple 多发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Multiple GetMultiple() const;

                    /**
                     * 设置多发
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Multiple 多发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMultiple(const Multiple& _multiple);

                    /**
                     * 判断参数 Multiple 是否已赋值
                     * @return Multiple 是否已赋值
                     */
                    bool MultipleHasBeenSet() const;

                    /**
                     * 获取纵横比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AspectRatio 纵横比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AspectRatio GetAspectRatio() const;

                    /**
                     * 设置纵横比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AspectRatio 纵横比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAspectRatio(const AspectRatio& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     */
                    bool AspectRatioHasBeenSet() const;

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
                     * 获取外部回声
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RearEcho 外部回声
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetRearEcho() const;

                    /**
                     * 设置外部回声
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RearEcho 外部回声
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRearEcho(const BlockInfo& _rearEcho);

                    /**
                     * 判断参数 RearEcho 是否已赋值
                     * @return RearEcho 是否已赋值
                     */
                    bool RearEchoHasBeenSet() const;

                    /**
                     * 获取质地弹性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Elastic 质地弹性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Elastic GetElastic() const;

                    /**
                     * 设置质地弹性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Elastic 质地弹性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetElastic(const Elastic& _elastic);

                    /**
                     * 判断参数 Elastic 是否已赋值
                     * @return Elastic 是否已赋值
                     */
                    bool ElasticHasBeenSet() const;

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
                     * 获取皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkinMedulla 皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetSkinMedulla() const;

                    /**
                     * 设置皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SkinMedulla 皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSkinMedulla(const BlockInfo& _skinMedulla);

                    /**
                     * 判断参数 SkinMedulla 是否已赋值
                     * @return SkinMedulla 是否已赋值
                     */
                    bool SkinMedullaHasBeenSet() const;

                    /**
                     * 获取变化趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Trend 变化趋势
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetTrend() const;

                    /**
                     * 设置变化趋势
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Trend 变化趋势
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTrend(const BlockInfo& _trend);

                    /**
                     * 判断参数 Trend 是否已赋值
                     * @return Trend 是否已赋值
                     */
                    bool TrendHasBeenSet() const;

                    /**
                     * 获取钙化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Calcification 钙化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetCalcification() const;

                    /**
                     * 设置钙化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Calcification 钙化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCalcification(const BlockInfo& _calcification);

                    /**
                     * 判断参数 Calcification 是否已赋值
                     * @return Calcification 是否已赋值
                     */
                    bool CalcificationHasBeenSet() const;

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
                     * 获取强化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enhancement 强化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetEnhancement() const;

                    /**
                     * 设置强化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Enhancement 强化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnhancement(const BlockInfo& _enhancement);

                    /**
                     * 判断参数 Enhancement 是否已赋值
                     * @return Enhancement 是否已赋值
                     */
                    bool EnhancementHasBeenSet() const;

                    /**
                     * 获取淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphEnlargement 淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetLymphEnlargement() const;

                    /**
                     * 设置淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LymphEnlargement 淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLymphEnlargement(const BlockInfo& _lymphEnlargement);

                    /**
                     * 判断参数 LymphEnlargement 是否已赋值
                     * @return LymphEnlargement 是否已赋值
                     */
                    bool LymphEnlargementHasBeenSet() const;

                    /**
                     * 获取淋巴门
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LymphDoor 淋巴门
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetLymphDoor() const;

                    /**
                     * 设置淋巴门
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LymphDoor 淋巴门
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLymphDoor(const BlockInfo& _lymphDoor);

                    /**
                     * 判断参数 LymphDoor 是否已赋值
                     * @return LymphDoor 是否已赋值
                     */
                    bool LymphDoorHasBeenSet() const;

                    /**
                     * 获取活动度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Activity 活动度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetActivity() const;

                    /**
                     * 设置活动度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Activity 活动度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetActivity(const BlockInfo& _activity);

                    /**
                     * 判断参数 Activity 是否已赋值
                     * @return Activity 是否已赋值
                     */
                    bool ActivityHasBeenSet() const;

                    /**
                     * 获取手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operation 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetOperation() const;

                    /**
                     * 设置手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Operation 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperation(const BlockInfo& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

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
                     * 获取内部回声类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerEchoType 内部回声类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BlockInfo> GetInnerEchoType() const;

                    /**
                     * 设置内部回声类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InnerEchoType 内部回声类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInnerEchoType(const std::vector<BlockInfo>& _innerEchoType);

                    /**
                     * 判断参数 InnerEchoType 是否已赋值
                     * @return InnerEchoType 是否已赋值
                     */
                    bool InnerEchoTypeHasBeenSet() const;

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

                private:

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_type;
                    bool m_typeHasBeenSet;

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
                     * 多发
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Multiple m_multiple;
                    bool m_multipleHasBeenSet;

                    /**
                     * 纵横比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AspectRatio m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

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
                     * 外部回声
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_rearEcho;
                    bool m_rearEchoHasBeenSet;

                    /**
                     * 质地弹性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Elastic m_elastic;
                    bool m_elasticHasBeenSet;

                    /**
                     * 形状
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_shape;
                    bool m_shapeHasBeenSet;

                    /**
                     * 形态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_shapeAttr;
                    bool m_shapeAttrHasBeenSet;

                    /**
                     * 皮髓质信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_skinMedulla;
                    bool m_skinMedullaHasBeenSet;

                    /**
                     * 变化趋势
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_trend;
                    bool m_trendHasBeenSet;

                    /**
                     * 钙化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_calcification;
                    bool m_calcificationHasBeenSet;

                    /**
                     * 包膜
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_envelope;
                    bool m_envelopeHasBeenSet;

                    /**
                     * 强化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_enhancement;
                    bool m_enhancementHasBeenSet;

                    /**
                     * 淋巴结
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_lymphEnlargement;
                    bool m_lymphEnlargementHasBeenSet;

                    /**
                     * 淋巴门
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_lymphDoor;
                    bool m_lymphDoorHasBeenSet;

                    /**
                     * 活动度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_activity;
                    bool m_activityHasBeenSet;

                    /**
                     * 手术情况
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 血液cdfi
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_cDFI;
                    bool m_cDFIHasBeenSet;

                    /**
                     * 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 大小状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_sizeStatus;
                    bool m_sizeStatusHasBeenSet;

                    /**
                     * 内部回声分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_innerEchoDistribution;
                    bool m_innerEchoDistributionHasBeenSet;

                    /**
                     * 内部回声类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BlockInfo> m_innerEchoType;
                    bool m_innerEchoTypeHasBeenSet;

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
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TUBERINFO_H_
