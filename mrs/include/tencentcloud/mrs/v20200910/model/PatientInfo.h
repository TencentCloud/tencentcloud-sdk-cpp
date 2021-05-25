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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PATIENTINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PATIENTINFO_H_

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
                * 患者信息
                */
                class PatientInfo : public AbstractModel
                {
                public:
                    PatientInfo();
                    ~PatientInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sex 患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSex() const;

                    /**
                     * 设置患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Sex 患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSex(const std::string& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Age 患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAge() const;

                    /**
                     * 设置患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Age 患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAge(const std::string& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phone 患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Phone 患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Address 患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCard 患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IdCard 患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     */
                    bool IdCardHasBeenSet() const;

                private:

                    /**
                     * 患者姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 患者性别
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 患者年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 患者手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 患者地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 患者身份证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PATIENTINFO_H_
