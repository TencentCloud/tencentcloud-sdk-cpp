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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DETAILINFORMATION_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DETAILINFORMATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Part.h>
#include <tencentcloud/mrs/v20200910/model/Size.h>
#include <tencentcloud/mrs/v20200910/model/BaseInfo.h>
#include <tencentcloud/mrs/v20200910/model/HistologyTypeV2.h>
#include <tencentcloud/mrs/v20200910/model/InvasiveV2.h>
#include <tencentcloud/mrs/v20200910/model/PTNM.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 详情
                */
                class DetailInformation : public AbstractModel
                {
                public:
                    DetailInformation();
                    ~DetailInformation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部位
                     * @return Part 部位
                     * 
                     */
                    Part GetPart() const;

                    /**
                     * 设置部位
                     * @param _part 部位
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
                     * 获取组织大小
                     * @return TissueSizes 组织大小
                     * 
                     */
                    std::vector<Size> GetTissueSizes() const;

                    /**
                     * 设置组织大小
                     * @param _tissueSizes 组织大小
                     * 
                     */
                    void SetTissueSizes(const std::vector<Size>& _tissueSizes);

                    /**
                     * 判断参数 TissueSizes 是否已赋值
                     * @return TissueSizes 是否已赋值
                     * 
                     */
                    bool TissueSizesHasBeenSet() const;

                    /**
                     * 获取结节大小
                     * @return TuberSizes 结节大小
                     * 
                     */
                    std::vector<Size> GetTuberSizes() const;

                    /**
                     * 设置结节大小
                     * @param _tuberSizes 结节大小
                     * 
                     */
                    void SetTuberSizes(const std::vector<Size>& _tuberSizes);

                    /**
                     * 判断参数 TuberSizes 是否已赋值
                     * @return TuberSizes 是否已赋值
                     * 
                     */
                    bool TuberSizesHasBeenSet() const;

                    /**
                     * 获取肿瘤大小
                     * @return CancerSizes 肿瘤大小
                     * 
                     */
                    std::vector<Size> GetCancerSizes() const;

                    /**
                     * 设置肿瘤大小
                     * @param _cancerSizes 肿瘤大小
                     * 
                     */
                    void SetCancerSizes(const std::vector<Size>& _cancerSizes);

                    /**
                     * 判断参数 CancerSizes 是否已赋值
                     * @return CancerSizes 是否已赋值
                     * 
                     */
                    bool CancerSizesHasBeenSet() const;

                    /**
                     * 获取组织学等级
                     * @return HistologyLevel 组织学等级
                     * 
                     */
                    BaseInfo GetHistologyLevel() const;

                    /**
                     * 设置组织学等级
                     * @param _histologyLevel 组织学等级
                     * 
                     */
                    void SetHistologyLevel(const BaseInfo& _histologyLevel);

                    /**
                     * 判断参数 HistologyLevel 是否已赋值
                     * @return HistologyLevel 是否已赋值
                     * 
                     */
                    bool HistologyLevelHasBeenSet() const;

                    /**
                     * 获取组织学类型
                     * @return HistologyType 组织学类型
                     * 
                     */
                    HistologyTypeV2 GetHistologyType() const;

                    /**
                     * 设置组织学类型
                     * @param _histologyType 组织学类型
                     * 
                     */
                    void SetHistologyType(const HistologyTypeV2& _histologyType);

                    /**
                     * 判断参数 HistologyType 是否已赋值
                     * @return HistologyType 是否已赋值
                     * 
                     */
                    bool HistologyTypeHasBeenSet() const;

                    /**
                     * 获取侵犯
                     * @return Invasive 侵犯
                     * 
                     */
                    std::vector<InvasiveV2> GetInvasive() const;

                    /**
                     * 设置侵犯
                     * @param _invasive 侵犯
                     * 
                     */
                    void SetInvasive(const std::vector<InvasiveV2>& _invasive);

                    /**
                     * 判断参数 Invasive 是否已赋值
                     * @return Invasive 是否已赋值
                     * 
                     */
                    bool InvasiveHasBeenSet() const;

                    /**
                     * 获取pTNM
                     * @return PTNM pTNM
                     * 
                     */
                    PTNM GetPTNM() const;

                    /**
                     * 设置pTNM
                     * @param _pTNM pTNM
                     * 
                     */
                    void SetPTNM(const PTNM& _pTNM);

                    /**
                     * 判断参数 PTNM 是否已赋值
                     * @return PTNM 是否已赋值
                     * 
                     */
                    bool PTNMHasBeenSet() const;

                    /**
                     * 获取浸润深度
                     * @return InfiltrationDepth 浸润深度
                     * 
                     */
                    BaseInfo GetInfiltrationDepth() const;

                    /**
                     * 设置浸润深度
                     * @param _infiltrationDepth 浸润深度
                     * 
                     */
                    void SetInfiltrationDepth(const BaseInfo& _infiltrationDepth);

                    /**
                     * 判断参数 InfiltrationDepth 是否已赋值
                     * @return InfiltrationDepth 是否已赋值
                     * 
                     */
                    bool InfiltrationDepthHasBeenSet() const;

                    /**
                     * 获取结节数量
                     * @return TuberNum 结节数量
                     * 
                     */
                    BaseInfo GetTuberNum() const;

                    /**
                     * 设置结节数量
                     * @param _tuberNum 结节数量
                     * 
                     */
                    void SetTuberNum(const BaseInfo& _tuberNum);

                    /**
                     * 判断参数 TuberNum 是否已赋值
                     * @return TuberNum 是否已赋值
                     * 
                     */
                    bool TuberNumHasBeenSet() const;

                    /**
                     * 获取钙化
                     * @return Calcification 钙化
                     * 
                     */
                    BaseInfo GetCalcification() const;

                    /**
                     * 设置钙化
                     * @param _calcification 钙化
                     * 
                     */
                    void SetCalcification(const BaseInfo& _calcification);

                    /**
                     * 判断参数 Calcification 是否已赋值
                     * @return Calcification 是否已赋值
                     * 
                     */
                    bool CalcificationHasBeenSet() const;

                    /**
                     * 获取坏死
                     * @return Necrosis 坏死
                     * 
                     */
                    BaseInfo GetNecrosis() const;

                    /**
                     * 设置坏死
                     * @param _necrosis 坏死
                     * 
                     */
                    void SetNecrosis(const BaseInfo& _necrosis);

                    /**
                     * 判断参数 Necrosis 是否已赋值
                     * @return Necrosis 是否已赋值
                     * 
                     */
                    bool NecrosisHasBeenSet() const;

                    /**
                     * 获取异形
                     * @return Abnormity 异形
                     * 
                     */
                    BaseInfo GetAbnormity() const;

                    /**
                     * 设置异形
                     * @param _abnormity 异形
                     * 
                     */
                    void SetAbnormity(const BaseInfo& _abnormity);

                    /**
                     * 判断参数 Abnormity 是否已赋值
                     * @return Abnormity 是否已赋值
                     * 
                     */
                    bool AbnormityHasBeenSet() const;

                    /**
                     * 获取断链
                     * @return Breaked 断链
                     * 
                     */
                    BaseInfo GetBreaked() const;

                    /**
                     * 设置断链
                     * @param _breaked 断链
                     * 
                     */
                    void SetBreaked(const BaseInfo& _breaked);

                    /**
                     * 判断参数 Breaked 是否已赋值
                     * @return Breaked 是否已赋值
                     * 
                     */
                    bool BreakedHasBeenSet() const;

                private:

                    /**
                     * 部位
                     */
                    Part m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 组织大小
                     */
                    std::vector<Size> m_tissueSizes;
                    bool m_tissueSizesHasBeenSet;

                    /**
                     * 结节大小
                     */
                    std::vector<Size> m_tuberSizes;
                    bool m_tuberSizesHasBeenSet;

                    /**
                     * 肿瘤大小
                     */
                    std::vector<Size> m_cancerSizes;
                    bool m_cancerSizesHasBeenSet;

                    /**
                     * 组织学等级
                     */
                    BaseInfo m_histologyLevel;
                    bool m_histologyLevelHasBeenSet;

                    /**
                     * 组织学类型
                     */
                    HistologyTypeV2 m_histologyType;
                    bool m_histologyTypeHasBeenSet;

                    /**
                     * 侵犯
                     */
                    std::vector<InvasiveV2> m_invasive;
                    bool m_invasiveHasBeenSet;

                    /**
                     * pTNM
                     */
                    PTNM m_pTNM;
                    bool m_pTNMHasBeenSet;

                    /**
                     * 浸润深度
                     */
                    BaseInfo m_infiltrationDepth;
                    bool m_infiltrationDepthHasBeenSet;

                    /**
                     * 结节数量
                     */
                    BaseInfo m_tuberNum;
                    bool m_tuberNumHasBeenSet;

                    /**
                     * 钙化
                     */
                    BaseInfo m_calcification;
                    bool m_calcificationHasBeenSet;

                    /**
                     * 坏死
                     */
                    BaseInfo m_necrosis;
                    bool m_necrosisHasBeenSet;

                    /**
                     * 异形
                     */
                    BaseInfo m_abnormity;
                    bool m_abnormityHasBeenSet;

                    /**
                     * 断链
                     */
                    BaseInfo m_breaked;
                    bool m_breakedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DETAILINFORMATION_H_
