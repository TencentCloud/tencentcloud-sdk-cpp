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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTBASEINFO_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 患者信息
                */
                class PatientBaseInfo : public AbstractModel
                {
                public:
                    PatientBaseInfo();
                    ~PatientBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取性别
                     * @return Sex 性别
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 设置性别
                     * @param _sex 性别
                     * 
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取身高 单位cm
                     * @return Height 身高 单位cm
                     * 
                     */
                    std::string GetHeight() const;

                    /**
                     * 设置身高 单位cm
                     * @param _height 身高 单位cm
                     * 
                     */
                    void SetHeight(const std::string& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取体重 单位kg
                     * @return Weight 体重 单位kg
                     * 
                     */
                    std::string GetWeight() const;

                    /**
                     * 设置体重 单位kg
                     * @param _weight 体重 单位kg
                     * 
                     */
                    void SetWeight(const std::string& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取患者ID
                     * @return PatientId 患者ID
                     * 
                     */
                    std::string GetPatientId() const;

                    /**
                     * 设置患者ID
                     * @param _patientId 患者ID
                     * 
                     */
                    void SetPatientId(const std::string& _patientId);

                    /**
                     * 判断参数 PatientId 是否已赋值
                     * @return PatientId 是否已赋值
                     * 
                     */
                    bool PatientIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取年龄
                     * @return Age 年龄
                     * 
                     */
                    std::string GetAge() const;

                    /**
                     * 设置年龄
                     * @param _age 年龄
                     * 
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取出生地
                     * @return BirthPlace 出生地
                     * 
                     */
                    std::string GetBirthPlace() const;

                    /**
                     * 设置出生地
                     * @param _birthPlace 出生地
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
                     * 获取居住地
                     * @return LivePlace 居住地
                     * 
                     */
                    std::string GetLivePlace() const;

                    /**
                     * 设置居住地
                     * @param _livePlace 居住地
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
                     * 获取出生日期和年龄必须传一个
                     * @return BirthDay 出生日期和年龄必须传一个
                     * 
                     */
                    std::string GetBirthDay() const;

                    /**
                     * 设置出生日期和年龄必须传一个
                     * @param _birthDay 出生日期和年龄必须传一个
                     * 
                     */
                    void SetBirthDay(const std::string& _birthDay);

                    /**
                     * 判断参数 BirthDay 是否已赋值
                     * @return BirthDay 是否已赋值
                     * 
                     */
                    bool BirthDayHasBeenSet() const;

                private:

                    /**
                     * 性别
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 身高 单位cm
                     */
                    std::string m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 体重 单位kg
                     */
                    std::string m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 患者ID
                     */
                    std::string m_patientId;
                    bool m_patientIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 年龄
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 出生地
                     */
                    std::string m_birthPlace;
                    bool m_birthPlaceHasBeenSet;

                    /**
                     * 居住地
                     */
                    std::string m_livePlace;
                    bool m_livePlaceHasBeenSet;

                    /**
                     * 出生日期和年龄必须传一个
                     */
                    std::string m_birthDay;
                    bool m_birthDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_PATIENTBASEINFO_H_
