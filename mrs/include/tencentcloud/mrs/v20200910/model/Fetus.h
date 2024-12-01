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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_FETUS_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_FETUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/FieldInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 胎儿数据结构
                */
                class Fetus : public AbstractModel
                {
                public:
                    Fetus();
                    ~Fetus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取双顶径
                     * @return BPD 双顶径
                     * 
                     */
                    FieldInfo GetBPD() const;

                    /**
                     * 设置双顶径
                     * @param _bPD 双顶径
                     * 
                     */
                    void SetBPD(const FieldInfo& _bPD);

                    /**
                     * 判断参数 BPD 是否已赋值
                     * @return BPD 是否已赋值
                     * 
                     */
                    bool BPDHasBeenSet() const;

                    /**
                     * 获取腹前后径
                     * @return APTD 腹前后径
                     * 
                     */
                    FieldInfo GetAPTD() const;

                    /**
                     * 设置腹前后径
                     * @param _aPTD 腹前后径
                     * 
                     */
                    void SetAPTD(const FieldInfo& _aPTD);

                    /**
                     * 判断参数 APTD 是否已赋值
                     * @return APTD 是否已赋值
                     * 
                     */
                    bool APTDHasBeenSet() const;

                    /**
                     * 获取腹左右径
                     * @return TTD 腹左右径
                     * 
                     */
                    FieldInfo GetTTD() const;

                    /**
                     * 设置腹左右径
                     * @param _tTD 腹左右径
                     * 
                     */
                    void SetTTD(const FieldInfo& _tTD);

                    /**
                     * 判断参数 TTD 是否已赋值
                     * @return TTD 是否已赋值
                     * 
                     */
                    bool TTDHasBeenSet() const;

                    /**
                     * 获取头臀径
                     * @return CRL 头臀径
                     * 
                     */
                    FieldInfo GetCRL() const;

                    /**
                     * 设置头臀径
                     * @param _cRL 头臀径
                     * 
                     */
                    void SetCRL(const FieldInfo& _cRL);

                    /**
                     * 判断参数 CRL 是否已赋值
                     * @return CRL 是否已赋值
                     * 
                     */
                    bool CRLHasBeenSet() const;

                    /**
                     * 获取头围
                     * @return HC 头围
                     * 
                     */
                    FieldInfo GetHC() const;

                    /**
                     * 设置头围
                     * @param _hC 头围
                     * 
                     */
                    void SetHC(const FieldInfo& _hC);

                    /**
                     * 判断参数 HC 是否已赋值
                     * @return HC 是否已赋值
                     * 
                     */
                    bool HCHasBeenSet() const;

                    /**
                     * 获取腹围
                     * @return AC 腹围
                     * 
                     */
                    FieldInfo GetAC() const;

                    /**
                     * 设置腹围
                     * @param _aC 腹围
                     * 
                     */
                    void SetAC(const FieldInfo& _aC);

                    /**
                     * 判断参数 AC 是否已赋值
                     * @return AC 是否已赋值
                     * 
                     */
                    bool ACHasBeenSet() const;

                    /**
                     * 获取股骨长
                     * @return FL 股骨长
                     * 
                     */
                    FieldInfo GetFL() const;

                    /**
                     * 设置股骨长
                     * @param _fL 股骨长
                     * 
                     */
                    void SetFL(const FieldInfo& _fL);

                    /**
                     * 判断参数 FL 是否已赋值
                     * @return FL 是否已赋值
                     * 
                     */
                    bool FLHasBeenSet() const;

                    /**
                     * 获取肱骨长
                     * @return HL 肱骨长
                     * 
                     */
                    FieldInfo GetHL() const;

                    /**
                     * 设置肱骨长
                     * @param _hL 肱骨长
                     * 
                     */
                    void SetHL(const FieldInfo& _hL);

                    /**
                     * 判断参数 HL 是否已赋值
                     * @return HL 是否已赋值
                     * 
                     */
                    bool HLHasBeenSet() const;

                    /**
                     * 获取胎儿重量
                     * @return Weight 胎儿重量
                     * 
                     */
                    FieldInfo GetWeight() const;

                    /**
                     * 设置胎儿重量
                     * @param _weight 胎儿重量
                     * 
                     */
                    void SetWeight(const FieldInfo& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取颈项透明层
                     * @return NT 颈项透明层
                     * 
                     */
                    FieldInfo GetNT() const;

                    /**
                     * 设置颈项透明层
                     * @param _nT 颈项透明层
                     * 
                     */
                    void SetNT(const FieldInfo& _nT);

                    /**
                     * 判断参数 NT 是否已赋值
                     * @return NT 是否已赋值
                     * 
                     */
                    bool NTHasBeenSet() const;

                    /**
                     * 获取脐动脉血流
                     * @return UmbilicalCord 脐动脉血流
                     * 
                     */
                    FieldInfo GetUmbilicalCord() const;

                    /**
                     * 设置脐动脉血流
                     * @param _umbilicalCord 脐动脉血流
                     * 
                     */
                    void SetUmbilicalCord(const FieldInfo& _umbilicalCord);

                    /**
                     * 判断参数 UmbilicalCord 是否已赋值
                     * @return UmbilicalCord 是否已赋值
                     * 
                     */
                    bool UmbilicalCordHasBeenSet() const;

                    /**
                     * 获取羊水最大深度
                     * @return WaterDeep 羊水最大深度
                     * 
                     */
                    FieldInfo GetWaterDeep() const;

                    /**
                     * 设置羊水最大深度
                     * @param _waterDeep 羊水最大深度
                     * 
                     */
                    void SetWaterDeep(const FieldInfo& _waterDeep);

                    /**
                     * 判断参数 WaterDeep 是否已赋值
                     * @return WaterDeep 是否已赋值
                     * 
                     */
                    bool WaterDeepHasBeenSet() const;

                    /**
                     * 获取羊水四象限测量
                     * @return WaterQuad 羊水四象限测量
                     * 
                     */
                    FieldInfo GetWaterQuad() const;

                    /**
                     * 设置羊水四象限测量
                     * @param _waterQuad 羊水四象限测量
                     * 
                     */
                    void SetWaterQuad(const FieldInfo& _waterQuad);

                    /**
                     * 判断参数 WaterQuad 是否已赋值
                     * @return WaterQuad 是否已赋值
                     * 
                     */
                    bool WaterQuadHasBeenSet() const;

                    /**
                     * 获取羊水指数
                     * @return AFI 羊水指数
                     * 
                     */
                    FieldInfo GetAFI() const;

                    /**
                     * 设置羊水指数
                     * @param _aFI 羊水指数
                     * 
                     */
                    void SetAFI(const FieldInfo& _aFI);

                    /**
                     * 判断参数 AFI 是否已赋值
                     * @return AFI 是否已赋值
                     * 
                     */
                    bool AFIHasBeenSet() const;

                    /**
                     * 获取胎心
                     * @return FHR 胎心
                     * 
                     */
                    FieldInfo GetFHR() const;

                    /**
                     * 设置胎心
                     * @param _fHR 胎心
                     * 
                     */
                    void SetFHR(const FieldInfo& _fHR);

                    /**
                     * 判断参数 FHR 是否已赋值
                     * @return FHR 是否已赋值
                     * 
                     */
                    bool FHRHasBeenSet() const;

                    /**
                     * 获取胎动
                     * @return Movement 胎动
                     * 
                     */
                    FieldInfo GetMovement() const;

                    /**
                     * 设置胎动
                     * @param _movement 胎动
                     * 
                     */
                    void SetMovement(const FieldInfo& _movement);

                    /**
                     * 判断参数 Movement 是否已赋值
                     * @return Movement 是否已赋值
                     * 
                     */
                    bool MovementHasBeenSet() const;

                    /**
                     * 获取胎数
                     * @return Num 胎数
                     * 
                     */
                    FieldInfo GetNum() const;

                    /**
                     * 设置胎数
                     * @param _num 胎数
                     * 
                     */
                    void SetNum(const FieldInfo& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取胎位
                     * @return Position 胎位
                     * 
                     */
                    FieldInfo GetPosition() const;

                    /**
                     * 设置胎位
                     * @param _position 胎位
                     * 
                     */
                    void SetPosition(const FieldInfo& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取是否活胎
                     * @return Alive 是否活胎
                     * 
                     */
                    FieldInfo GetAlive() const;

                    /**
                     * 设置是否活胎
                     * @param _alive 是否活胎
                     * 
                     */
                    void SetAlive(const FieldInfo& _alive);

                    /**
                     * 判断参数 Alive 是否已赋值
                     * @return Alive 是否已赋值
                     * 
                     */
                    bool AliveHasBeenSet() const;

                    /**
                     * 获取胎盘位置
                     * @return PlacentaLocation 胎盘位置
                     * 
                     */
                    FieldInfo GetPlacentaLocation() const;

                    /**
                     * 设置胎盘位置
                     * @param _placentaLocation 胎盘位置
                     * 
                     */
                    void SetPlacentaLocation(const FieldInfo& _placentaLocation);

                    /**
                     * 判断参数 PlacentaLocation 是否已赋值
                     * @return PlacentaLocation 是否已赋值
                     * 
                     */
                    bool PlacentaLocationHasBeenSet() const;

                    /**
                     * 获取胎盘厚度
                     * @return PlacentaThickness 胎盘厚度
                     * 
                     */
                    FieldInfo GetPlacentaThickness() const;

                    /**
                     * 设置胎盘厚度
                     * @param _placentaThickness 胎盘厚度
                     * 
                     */
                    void SetPlacentaThickness(const FieldInfo& _placentaThickness);

                    /**
                     * 判断参数 PlacentaThickness 是否已赋值
                     * @return PlacentaThickness 是否已赋值
                     * 
                     */
                    bool PlacentaThicknessHasBeenSet() const;

                    /**
                     * 获取胎盘成熟度
                     * @return PlacentaGrade 胎盘成熟度
                     * 
                     */
                    FieldInfo GetPlacentaGrade() const;

                    /**
                     * 设置胎盘成熟度
                     * @param _placentaGrade 胎盘成熟度
                     * 
                     */
                    void SetPlacentaGrade(const FieldInfo& _placentaGrade);

                    /**
                     * 判断参数 PlacentaGrade 是否已赋值
                     * @return PlacentaGrade 是否已赋值
                     * 
                     */
                    bool PlacentaGradeHasBeenSet() const;

                    /**
                     * 获取妊娠时间
                     * @return GestationTime 妊娠时间
                     * 
                     */
                    FieldInfo GetGestationTime() const;

                    /**
                     * 设置妊娠时间
                     * @param _gestationTime 妊娠时间
                     * 
                     */
                    void SetGestationTime(const FieldInfo& _gestationTime);

                    /**
                     * 判断参数 GestationTime 是否已赋值
                     * @return GestationTime 是否已赋值
                     * 
                     */
                    bool GestationTimeHasBeenSet() const;

                    /**
                     * 获取妊娠周期
                     * @return GestationPeriod 妊娠周期
                     * 
                     */
                    FieldInfo GetGestationPeriod() const;

                    /**
                     * 设置妊娠周期
                     * @param _gestationPeriod 妊娠周期
                     * 
                     */
                    void SetGestationPeriod(const FieldInfo& _gestationPeriod);

                    /**
                     * 判断参数 GestationPeriod 是否已赋值
                     * @return GestationPeriod 是否已赋值
                     * 
                     */
                    bool GestationPeriodHasBeenSet() const;

                    /**
                     * 获取绕颈
                     * @return AroundNeck 绕颈
                     * 
                     */
                    FieldInfo GetAroundNeck() const;

                    /**
                     * 设置绕颈
                     * @param _aroundNeck 绕颈
                     * 
                     */
                    void SetAroundNeck(const FieldInfo& _aroundNeck);

                    /**
                     * 判断参数 AroundNeck 是否已赋值
                     * @return AroundNeck 是否已赋值
                     * 
                     */
                    bool AroundNeckHasBeenSet() const;

                    /**
                     * 获取病变
                     * @return Sym 病变
                     * 
                     */
                    std::vector<FieldInfo> GetSym() const;

                    /**
                     * 设置病变
                     * @param _sym 病变
                     * 
                     */
                    void SetSym(const std::vector<FieldInfo>& _sym);

                    /**
                     * 判断参数 Sym 是否已赋值
                     * @return Sym 是否已赋值
                     * 
                     */
                    bool SymHasBeenSet() const;

                    /**
                     * 获取原文内容
                     * @return Src 原文内容
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文内容
                     * @param _src 原文内容
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                private:

                    /**
                     * 双顶径
                     */
                    FieldInfo m_bPD;
                    bool m_bPDHasBeenSet;

                    /**
                     * 腹前后径
                     */
                    FieldInfo m_aPTD;
                    bool m_aPTDHasBeenSet;

                    /**
                     * 腹左右径
                     */
                    FieldInfo m_tTD;
                    bool m_tTDHasBeenSet;

                    /**
                     * 头臀径
                     */
                    FieldInfo m_cRL;
                    bool m_cRLHasBeenSet;

                    /**
                     * 头围
                     */
                    FieldInfo m_hC;
                    bool m_hCHasBeenSet;

                    /**
                     * 腹围
                     */
                    FieldInfo m_aC;
                    bool m_aCHasBeenSet;

                    /**
                     * 股骨长
                     */
                    FieldInfo m_fL;
                    bool m_fLHasBeenSet;

                    /**
                     * 肱骨长
                     */
                    FieldInfo m_hL;
                    bool m_hLHasBeenSet;

                    /**
                     * 胎儿重量
                     */
                    FieldInfo m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 颈项透明层
                     */
                    FieldInfo m_nT;
                    bool m_nTHasBeenSet;

                    /**
                     * 脐动脉血流
                     */
                    FieldInfo m_umbilicalCord;
                    bool m_umbilicalCordHasBeenSet;

                    /**
                     * 羊水最大深度
                     */
                    FieldInfo m_waterDeep;
                    bool m_waterDeepHasBeenSet;

                    /**
                     * 羊水四象限测量
                     */
                    FieldInfo m_waterQuad;
                    bool m_waterQuadHasBeenSet;

                    /**
                     * 羊水指数
                     */
                    FieldInfo m_aFI;
                    bool m_aFIHasBeenSet;

                    /**
                     * 胎心
                     */
                    FieldInfo m_fHR;
                    bool m_fHRHasBeenSet;

                    /**
                     * 胎动
                     */
                    FieldInfo m_movement;
                    bool m_movementHasBeenSet;

                    /**
                     * 胎数
                     */
                    FieldInfo m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 胎位
                     */
                    FieldInfo m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 是否活胎
                     */
                    FieldInfo m_alive;
                    bool m_aliveHasBeenSet;

                    /**
                     * 胎盘位置
                     */
                    FieldInfo m_placentaLocation;
                    bool m_placentaLocationHasBeenSet;

                    /**
                     * 胎盘厚度
                     */
                    FieldInfo m_placentaThickness;
                    bool m_placentaThicknessHasBeenSet;

                    /**
                     * 胎盘成熟度
                     */
                    FieldInfo m_placentaGrade;
                    bool m_placentaGradeHasBeenSet;

                    /**
                     * 妊娠时间
                     */
                    FieldInfo m_gestationTime;
                    bool m_gestationTimeHasBeenSet;

                    /**
                     * 妊娠周期
                     */
                    FieldInfo m_gestationPeriod;
                    bool m_gestationPeriodHasBeenSet;

                    /**
                     * 绕颈
                     */
                    FieldInfo m_aroundNeck;
                    bool m_aroundNeckHasBeenSet;

                    /**
                     * 病变
                     */
                    std::vector<FieldInfo> m_sym;
                    bool m_symHasBeenSet;

                    /**
                     * 原文内容
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_FETUS_H_
