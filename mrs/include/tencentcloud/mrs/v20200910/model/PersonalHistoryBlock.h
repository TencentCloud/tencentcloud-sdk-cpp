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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALHISTORYBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALHISTORYBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BirthPlaceBlock.h>
#include <tencentcloud/mrs/v20200910/model/SmokeHistoryBlock.h>
#include <tencentcloud/mrs/v20200910/model/MenstrualHistoryBlock.h>
#include <tencentcloud/mrs/v20200910/model/ObstetricalHistoryBlock.h>
#include <tencentcloud/mrs/v20200910/model/FamilyHistoryBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 个人史
                */
                class PersonalHistoryBlock : public AbstractModel
                {
                public:
                    PersonalHistoryBlock();
                    ~PersonalHistoryBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出生地
                     * @return BirthPlace 出生地
                     * 
                     */
                    BirthPlaceBlock GetBirthPlace() const;

                    /**
                     * 设置出生地
                     * @param _birthPlace 出生地
                     * 
                     */
                    void SetBirthPlace(const BirthPlaceBlock& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     * 
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取居住地
                     * @return LivePlace 居住地
                     * 
                     */
                    BirthPlaceBlock GetLivePlace() const;

                    /**
                     * 设置居住地
                     * @param _livePlace 居住地
                     * 
                     */
                    void SetLivePlace(const BirthPlaceBlock& _livePlace);

                    /**
                     * 判断参数 LivePlace 是否已赋值
                     * @return LivePlace 是否已赋值
                     * 
                     */
                    bool LivePlaceHasBeenSet() const;

                    /**
                     * 获取职业
                     * @return Job 职业
                     * 
                     */
                    BirthPlaceBlock GetJob() const;

                    /**
                     * 设置职业
                     * @param _job 职业
                     * 
                     */
                    void SetJob(const BirthPlaceBlock& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取吸烟
                     * @return SmokeHistory 吸烟
                     * 
                     */
                    SmokeHistoryBlock GetSmokeHistory() const;

                    /**
                     * 设置吸烟
                     * @param _smokeHistory 吸烟
                     * 
                     */
                    void SetSmokeHistory(const SmokeHistoryBlock& _smokeHistory);

                    /**
                     * 判断参数 SmokeHistory 是否已赋值
                     * @return SmokeHistory 是否已赋值
                     * 
                     */
                    bool SmokeHistoryHasBeenSet() const;

                    /**
                     * 获取喝酒
                     * @return AlcoholicHistory 喝酒
                     * 
                     */
                    SmokeHistoryBlock GetAlcoholicHistory() const;

                    /**
                     * 设置喝酒
                     * @param _alcoholicHistory 喝酒
                     * 
                     */
                    void SetAlcoholicHistory(const SmokeHistoryBlock& _alcoholicHistory);

                    /**
                     * 判断参数 AlcoholicHistory 是否已赋值
                     * @return AlcoholicHistory 是否已赋值
                     * 
                     */
                    bool AlcoholicHistoryHasBeenSet() const;

                    /**
                     * 获取月经史
                     * @return MenstrualHistory 月经史
                     * 
                     */
                    MenstrualHistoryBlock GetMenstrualHistory() const;

                    /**
                     * 设置月经史
                     * @param _menstrualHistory 月经史
                     * 
                     */
                    void SetMenstrualHistory(const MenstrualHistoryBlock& _menstrualHistory);

                    /**
                     * 判断参数 MenstrualHistory 是否已赋值
                     * @return MenstrualHistory 是否已赋值
                     * 
                     */
                    bool MenstrualHistoryHasBeenSet() const;

                    /**
                     * 获取婚姻-生育史
                     * @return ObstericalHistory 婚姻-生育史
                     * 
                     */
                    ObstetricalHistoryBlock GetObstericalHistory() const;

                    /**
                     * 设置婚姻-生育史
                     * @param _obstericalHistory 婚姻-生育史
                     * 
                     */
                    void SetObstericalHistory(const ObstetricalHistoryBlock& _obstericalHistory);

                    /**
                     * 判断参数 ObstericalHistory 是否已赋值
                     * @return ObstericalHistory 是否已赋值
                     * 
                     */
                    bool ObstericalHistoryHasBeenSet() const;

                    /**
                     * 获取家族史
                     * @return FamilyHistory 家族史
                     * 
                     */
                    FamilyHistoryBlock GetFamilyHistory() const;

                    /**
                     * 设置家族史
                     * @param _familyHistory 家族史
                     * 
                     */
                    void SetFamilyHistory(const FamilyHistoryBlock& _familyHistory);

                    /**
                     * 判断参数 FamilyHistory 是否已赋值
                     * @return FamilyHistory 是否已赋值
                     * 
                     */
                    bool FamilyHistoryHasBeenSet() const;

                private:

                    /**
                     * 出生地
                     */
                    BirthPlaceBlock m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 居住地
                     */
                    BirthPlaceBlock m_livePlace;
                    bool m_livePlaceHasBeenSet;

                    /**
                     * 职业
                     */
                    BirthPlaceBlock m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 吸烟
                     */
                    SmokeHistoryBlock m_smokeHistory;
                    bool m_smokeHistoryHasBeenSet;

                    /**
                     * 喝酒
                     */
                    SmokeHistoryBlock m_alcoholicHistory;
                    bool m_alcoholicHistoryHasBeenSet;

                    /**
                     * 月经史
                     */
                    MenstrualHistoryBlock m_menstrualHistory;
                    bool m_menstrualHistoryHasBeenSet;

                    /**
                     * 婚姻-生育史
                     */
                    ObstetricalHistoryBlock m_obstericalHistory;
                    bool m_obstericalHistoryHasBeenSet;

                    /**
                     * 家族史
                     */
                    FamilyHistoryBlock m_familyHistory;
                    bool m_familyHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALHISTORYBLOCK_H_
