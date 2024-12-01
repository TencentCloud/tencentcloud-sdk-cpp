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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OPHTHALMOLOGYBASEITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OPHTHALMOLOGYBASEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/OphthalmologyBareEyeSight.h>
#include <tencentcloud/mrs/v20200910/model/OphthalmologyCorrectedVisualAcuity.h>
#include <tencentcloud/mrs/v20200910/model/OphthalmologyColourVision.h>
#include <tencentcloud/mrs/v20200910/model/OphthalmologyFundoscopy.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>
#include <tencentcloud/mrs/v20200910/model/OphthalmologyBriefSummary.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-眼科
                */
                class OphthalmologyBaseItem : public AbstractModel
                {
                public:
                    OphthalmologyBaseItem();
                    ~OphthalmologyBaseItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取裸眼视力
                     * @return BareEyeSight 裸眼视力
                     * 
                     */
                    OphthalmologyBareEyeSight GetBareEyeSight() const;

                    /**
                     * 设置裸眼视力
                     * @param _bareEyeSight 裸眼视力
                     * 
                     */
                    void SetBareEyeSight(const OphthalmologyBareEyeSight& _bareEyeSight);

                    /**
                     * 判断参数 BareEyeSight 是否已赋值
                     * @return BareEyeSight 是否已赋值
                     * 
                     */
                    bool BareEyeSightHasBeenSet() const;

                    /**
                     * 获取矫正视力
                     * @return CorrectedVisualAcuity 矫正视力
                     * 
                     */
                    OphthalmologyCorrectedVisualAcuity GetCorrectedVisualAcuity() const;

                    /**
                     * 设置矫正视力
                     * @param _correctedVisualAcuity 矫正视力
                     * 
                     */
                    void SetCorrectedVisualAcuity(const OphthalmologyCorrectedVisualAcuity& _correctedVisualAcuity);

                    /**
                     * 判断参数 CorrectedVisualAcuity 是否已赋值
                     * @return CorrectedVisualAcuity 是否已赋值
                     * 
                     */
                    bool CorrectedVisualAcuityHasBeenSet() const;

                    /**
                     * 获取色觉
                     * @return ColourVision 色觉
                     * 
                     */
                    OphthalmologyColourVision GetColourVision() const;

                    /**
                     * 设置色觉
                     * @param _colourVision 色觉
                     * 
                     */
                    void SetColourVision(const OphthalmologyColourVision& _colourVision);

                    /**
                     * 判断参数 ColourVision 是否已赋值
                     * @return ColourVision 是否已赋值
                     * 
                     */
                    bool ColourVisionHasBeenSet() const;

                    /**
                     * 获取眼底
                     * @return Fundoscopy 眼底
                     * 
                     */
                    OphthalmologyFundoscopy GetFundoscopy() const;

                    /**
                     * 设置眼底
                     * @param _fundoscopy 眼底
                     * 
                     */
                    void SetFundoscopy(const OphthalmologyFundoscopy& _fundoscopy);

                    /**
                     * 判断参数 Fundoscopy 是否已赋值
                     * @return Fundoscopy 是否已赋值
                     * 
                     */
                    bool FundoscopyHasBeenSet() const;

                    /**
                     * 获取眼科其他
                     * @return Others 眼科其他
                     * 
                     */
                    std::vector<KeyValueItem> GetOthers() const;

                    /**
                     * 设置眼科其他
                     * @param _others 眼科其他
                     * 
                     */
                    void SetOthers(const std::vector<KeyValueItem>& _others);

                    /**
                     * 判断参数 Others 是否已赋值
                     * @return Others 是否已赋值
                     * 
                     */
                    bool OthersHasBeenSet() const;

                    /**
                     * 获取眼科小结
                     * @return BriefSummary 眼科小结
                     * 
                     */
                    OphthalmologyBriefSummary GetBriefSummary() const;

                    /**
                     * 设置眼科小结
                     * @param _briefSummary 眼科小结
                     * 
                     */
                    void SetBriefSummary(const OphthalmologyBriefSummary& _briefSummary);

                    /**
                     * 判断参数 BriefSummary 是否已赋值
                     * @return BriefSummary 是否已赋值
                     * 
                     */
                    bool BriefSummaryHasBeenSet() const;

                private:

                    /**
                     * 裸眼视力
                     */
                    OphthalmologyBareEyeSight m_bareEyeSight;
                    bool m_bareEyeSightHasBeenSet;

                    /**
                     * 矫正视力
                     */
                    OphthalmologyCorrectedVisualAcuity m_correctedVisualAcuity;
                    bool m_correctedVisualAcuityHasBeenSet;

                    /**
                     * 色觉
                     */
                    OphthalmologyColourVision m_colourVision;
                    bool m_colourVisionHasBeenSet;

                    /**
                     * 眼底
                     */
                    OphthalmologyFundoscopy m_fundoscopy;
                    bool m_fundoscopyHasBeenSet;

                    /**
                     * 眼科其他
                     */
                    std::vector<KeyValueItem> m_others;
                    bool m_othersHasBeenSet;

                    /**
                     * 眼科小结
                     */
                    OphthalmologyBriefSummary m_briefSummary;
                    bool m_briefSummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OPHTHALMOLOGYBASEITEM_H_
