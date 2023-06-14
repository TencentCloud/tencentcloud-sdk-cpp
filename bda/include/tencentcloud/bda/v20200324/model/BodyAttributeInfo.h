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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_BODYATTRIBUTEINFO_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_BODYATTRIBUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/Age.h>
#include <tencentcloud/bda/v20200324/model/Bag.h>
#include <tencentcloud/bda/v20200324/model/Gender.h>
#include <tencentcloud/bda/v20200324/model/Orientation.h>
#include <tencentcloud/bda/v20200324/model/UpperBodyCloth.h>
#include <tencentcloud/bda/v20200324/model/LowerBodyCloth.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 图中检测出的人体属性信息。
                */
                class BodyAttributeInfo : public AbstractModel
                {
                public:
                    BodyAttributeInfo();
                    ~BodyAttributeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人体年龄信息。 
AttributesType 不含 Age 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Age 人体年龄信息。 
AttributesType 不含 Age 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Age GetAge() const;

                    /**
                     * 设置人体年龄信息。 
AttributesType 不含 Age 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _age 人体年龄信息。 
AttributesType 不含 Age 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAge(const Age& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取人体是否挎包。 
AttributesType 不含 Bag 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bag 人体是否挎包。 
AttributesType 不含 Bag 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Bag GetBag() const;

                    /**
                     * 设置人体是否挎包。 
AttributesType 不含 Bag 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bag 人体是否挎包。 
AttributesType 不含 Bag 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBag(const Bag& _bag);

                    /**
                     * 判断参数 Bag 是否已赋值
                     * @return Bag 是否已赋值
                     * 
                     */
                    bool BagHasBeenSet() const;

                    /**
                     * 获取人体性别信息。 
AttributesType 不含 Gender 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gender 人体性别信息。 
AttributesType 不含 Gender 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Gender GetGender() const;

                    /**
                     * 设置人体性别信息。 
AttributesType 不含 Gender 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gender 人体性别信息。 
AttributesType 不含 Gender 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGender(const Gender& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取人体朝向信息。   
AttributesType 不含 UpperBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Orientation 人体朝向信息。   
AttributesType 不含 UpperBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Orientation GetOrientation() const;

                    /**
                     * 设置人体朝向信息。   
AttributesType 不含 UpperBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orientation 人体朝向信息。   
AttributesType 不含 UpperBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrientation(const Orientation& _orientation);

                    /**
                     * 判断参数 Orientation 是否已赋值
                     * @return Orientation 是否已赋值
                     * 
                     */
                    bool OrientationHasBeenSet() const;

                    /**
                     * 获取人体上衣属性信息。
AttributesType 不含 Orientation 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpperBodyCloth 人体上衣属性信息。
AttributesType 不含 Orientation 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UpperBodyCloth GetUpperBodyCloth() const;

                    /**
                     * 设置人体上衣属性信息。
AttributesType 不含 Orientation 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upperBodyCloth 人体上衣属性信息。
AttributesType 不含 Orientation 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpperBodyCloth(const UpperBodyCloth& _upperBodyCloth);

                    /**
                     * 判断参数 UpperBodyCloth 是否已赋值
                     * @return UpperBodyCloth 是否已赋值
                     * 
                     */
                    bool UpperBodyClothHasBeenSet() const;

                    /**
                     * 获取人体下衣属性信息。  
AttributesType 不含 LowerBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LowerBodyCloth 人体下衣属性信息。  
AttributesType 不含 LowerBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LowerBodyCloth GetLowerBodyCloth() const;

                    /**
                     * 设置人体下衣属性信息。  
AttributesType 不含 LowerBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lowerBodyCloth 人体下衣属性信息。  
AttributesType 不含 LowerBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLowerBodyCloth(const LowerBodyCloth& _lowerBodyCloth);

                    /**
                     * 判断参数 LowerBodyCloth 是否已赋值
                     * @return LowerBodyCloth 是否已赋值
                     * 
                     */
                    bool LowerBodyClothHasBeenSet() const;

                private:

                    /**
                     * 人体年龄信息。 
AttributesType 不含 Age 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Age m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 人体是否挎包。 
AttributesType 不含 Bag 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Bag m_bag;
                    bool m_bagHasBeenSet;

                    /**
                     * 人体性别信息。 
AttributesType 不含 Gender 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Gender m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 人体朝向信息。   
AttributesType 不含 UpperBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Orientation m_orientation;
                    bool m_orientationHasBeenSet;

                    /**
                     * 人体上衣属性信息。
AttributesType 不含 Orientation 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UpperBodyCloth m_upperBodyCloth;
                    bool m_upperBodyClothHasBeenSet;

                    /**
                     * 人体下衣属性信息。  
AttributesType 不含 LowerBodyCloth 或检测超过 5 个人体时，此参数仍返回，但不具备参考意义。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LowerBodyCloth m_lowerBodyCloth;
                    bool m_lowerBodyClothHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_BODYATTRIBUTEINFO_H_
