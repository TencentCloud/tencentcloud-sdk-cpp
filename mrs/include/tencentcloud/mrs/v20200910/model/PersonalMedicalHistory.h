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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALMEDICALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALMEDICALHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class PersonalMedicalHistory : public AbstractModel
                {
                public:
                    PersonalMedicalHistory();
                    ~PersonalMedicalHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出生史
                     * @return BirthPlace 出生史
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置出生史
                     * @param _birthPlace 出生史
                     * 
                     */
                    void SetBirthPlace(const std::string& _birthPlace);

                    /**
                     * 判断参数 BirthPlace 是否已赋值
                     * @return BirthPlace 是否已赋值
                     * 
                     */
                    bool BirthPlaceHasBeenSet() const;

                    /**
                     * 获取居住史
                     * @return LivePlace 居住史
                     * 
                     */
                    std::string GetLivePlace() const;

                    /**
                     * 设置居住史
                     * @param _livePlace 居住史
                     * 
                     */
                    void SetLivePlace(const std::string& _livePlace);

                    /**
                     * 判断参数 LivePlace 是否已赋值
                     * @return LivePlace 是否已赋值
                     * 
                     */
                    bool LivePlaceHasBeenSet() const;

                    /**
                     * 获取工作史
                     * @return Job 工作史
                     * 
                     */
                    std::string GetJob() const;

                    /**
                     * 设置工作史
                     * @param _job 工作史
                     * 
                     */
                    void SetJob(const std::string& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取吸烟史
                     * @return SmokeHistory 吸烟史
                     * 
                     */
                    std::string GetSmokeHistory() const;

                    /**
                     * 设置吸烟史
                     * @param _smokeHistory 吸烟史
                     * 
                     */
                    void SetSmokeHistory(const std::string& _smokeHistory);

                    /**
                     * 判断参数 SmokeHistory 是否已赋值
                     * @return SmokeHistory 是否已赋值
                     * 
                     */
                    bool SmokeHistoryHasBeenSet() const;

                    /**
                     * 获取饮酒史
                     * @return AlcoholicHistory 饮酒史
                     * 
                     */
                    std::string GetAlcoholicHistory() const;

                    /**
                     * 设置饮酒史
                     * @param _alcoholicHistory 饮酒史
                     * 
                     */
                    void SetAlcoholicHistory(const std::string& _alcoholicHistory);

                    /**
                     * 判断参数 AlcoholicHistory 是否已赋值
                     * @return AlcoholicHistory 是否已赋值
                     * 
                     */
                    bool AlcoholicHistoryHasBeenSet() const;

                private:

                    /**
                     * 出生史
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 居住史
                     */
                    std::string m_livePlace;
                    bool m_livePlaceHasBeenSet;

                    /**
                     * 工作史
                     */
                    std::string m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 吸烟史
                     */
                    std::string m_smokeHistory;
                    bool m_smokeHistoryHasBeenSet;

                    /**
                     * 饮酒史
                     */
                    std::string m_alcoholicHistory;
                    bool m_alcoholicHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PERSONALMEDICALHISTORY_H_
