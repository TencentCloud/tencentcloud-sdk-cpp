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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/SurgeryAttr.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 手术史
                */
                class SurgeryHistory : public AbstractModel
                {
                public:
                    SurgeryHistory();
                    ~SurgeryHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取手术名称
                     * @return SurgeryName 手术名称
                     * 
                     */
                    SurgeryAttr GetSurgeryName() const;

                    /**
                     * 设置手术名称
                     * @param _surgeryName 手术名称
                     * 
                     */
                    void SetSurgeryName(const SurgeryAttr& _surgeryName);

                    /**
                     * 判断参数 SurgeryName 是否已赋值
                     * @return SurgeryName 是否已赋值
                     * 
                     */
                    bool SurgeryNameHasBeenSet() const;

                    /**
                     * 获取手术日期
                     * @return SurgeryDate 手术日期
                     * 
                     */
                    SurgeryAttr GetSurgeryDate() const;

                    /**
                     * 设置手术日期
                     * @param _surgeryDate 手术日期
                     * 
                     */
                    void SetSurgeryDate(const SurgeryAttr& _surgeryDate);

                    /**
                     * 判断参数 SurgeryDate 是否已赋值
                     * @return SurgeryDate 是否已赋值
                     * 
                     */
                    bool SurgeryDateHasBeenSet() const;

                    /**
                     * 获取术前诊断
                     * @return PreoperativePathology 术前诊断
                     * 
                     */
                    SurgeryAttr GetPreoperativePathology() const;

                    /**
                     * 设置术前诊断
                     * @param _preoperativePathology 术前诊断
                     * 
                     */
                    void SetPreoperativePathology(const SurgeryAttr& _preoperativePathology);

                    /**
                     * 判断参数 PreoperativePathology 是否已赋值
                     * @return PreoperativePathology 是否已赋值
                     * 
                     */
                    bool PreoperativePathologyHasBeenSet() const;

                    /**
                     * 获取术中诊断
                     * @return IntraoperativePathology 术中诊断
                     * 
                     */
                    SurgeryAttr GetIntraoperativePathology() const;

                    /**
                     * 设置术中诊断
                     * @param _intraoperativePathology 术中诊断
                     * 
                     */
                    void SetIntraoperativePathology(const SurgeryAttr& _intraoperativePathology);

                    /**
                     * 判断参数 IntraoperativePathology 是否已赋值
                     * @return IntraoperativePathology 是否已赋值
                     * 
                     */
                    bool IntraoperativePathologyHasBeenSet() const;

                    /**
                     * 获取术后诊断
                     * @return PostoperativePathology 术后诊断
                     * 
                     */
                    SurgeryAttr GetPostoperativePathology() const;

                    /**
                     * 设置术后诊断
                     * @param _postoperativePathology 术后诊断
                     * 
                     */
                    void SetPostoperativePathology(const SurgeryAttr& _postoperativePathology);

                    /**
                     * 判断参数 PostoperativePathology 是否已赋值
                     * @return PostoperativePathology 是否已赋值
                     * 
                     */
                    bool PostoperativePathologyHasBeenSet() const;

                    /**
                     * 获取出院诊断
                     * @return DischargeDiagnosis 出院诊断
                     * 
                     */
                    SurgeryAttr GetDischargeDiagnosis() const;

                    /**
                     * 设置出院诊断
                     * @param _dischargeDiagnosis 出院诊断
                     * 
                     */
                    void SetDischargeDiagnosis(const SurgeryAttr& _dischargeDiagnosis);

                    /**
                     * 判断参数 DischargeDiagnosis 是否已赋值
                     * @return DischargeDiagnosis 是否已赋值
                     * 
                     */
                    bool DischargeDiagnosisHasBeenSet() const;

                private:

                    /**
                     * 手术名称
                     */
                    SurgeryAttr m_surgeryName;
                    bool m_surgeryNameHasBeenSet;

                    /**
                     * 手术日期
                     */
                    SurgeryAttr m_surgeryDate;
                    bool m_surgeryDateHasBeenSet;

                    /**
                     * 术前诊断
                     */
                    SurgeryAttr m_preoperativePathology;
                    bool m_preoperativePathologyHasBeenSet;

                    /**
                     * 术中诊断
                     */
                    SurgeryAttr m_intraoperativePathology;
                    bool m_intraoperativePathologyHasBeenSet;

                    /**
                     * 术后诊断
                     */
                    SurgeryAttr m_postoperativePathology;
                    bool m_postoperativePathologyHasBeenSet;

                    /**
                     * 出院诊断
                     */
                    SurgeryAttr m_dischargeDiagnosis;
                    bool m_dischargeDiagnosisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SURGERYHISTORY_H_
