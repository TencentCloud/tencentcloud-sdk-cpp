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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_ATTRIBUTESOPTIONS_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_ATTRIBUTESOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 返回人体属性选项，此值不填则为不需要返回，可以选择的值为以下六个。
Age、Bag、Gender、Orientation、UpperBodyCloth、LowerBodyCloth，详细的解释请看对象描述
需注意本接口最多返回面积最大的 5 个人体属性信息，超过 5 个人体（第 6 个及以后的人体）的人体属性不具备参考意义。
                */
                class AttributesOptions : public AbstractModel
                {
                public:
                    AttributesOptions();
                    ~AttributesOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回年龄信息
                     * @return Age 返回年龄信息
                     * 
                     */
                    bool GetAge() const;

                    /**
                     * 设置返回年龄信息
                     * @param _age 返回年龄信息
                     * 
                     */
                    void SetAge(const bool& _age);

                    /**
                     * 判断参数 Age 是否已赋值
                     * @return Age 是否已赋值
                     * 
                     */
                    bool AgeHasBeenSet() const;

                    /**
                     * 获取返回随身挎包信息
                     * @return Bag 返回随身挎包信息
                     * 
                     */
                    bool GetBag() const;

                    /**
                     * 设置返回随身挎包信息
                     * @param _bag 返回随身挎包信息
                     * 
                     */
                    void SetBag(const bool& _bag);

                    /**
                     * 判断参数 Bag 是否已赋值
                     * @return Bag 是否已赋值
                     * 
                     */
                    bool BagHasBeenSet() const;

                    /**
                     * 获取返回性别信息
                     * @return Gender 返回性别信息
                     * 
                     */
                    bool GetGender() const;

                    /**
                     * 设置返回性别信息
                     * @param _gender 返回性别信息
                     * 
                     */
                    void SetGender(const bool& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取返回朝向信息
                     * @return Orientation 返回朝向信息
                     * 
                     */
                    bool GetOrientation() const;

                    /**
                     * 设置返回朝向信息
                     * @param _orientation 返回朝向信息
                     * 
                     */
                    void SetOrientation(const bool& _orientation);

                    /**
                     * 判断参数 Orientation 是否已赋值
                     * @return Orientation 是否已赋值
                     * 
                     */
                    bool OrientationHasBeenSet() const;

                    /**
                     * 获取返回上装信息
                     * @return UpperBodyCloth 返回上装信息
                     * 
                     */
                    bool GetUpperBodyCloth() const;

                    /**
                     * 设置返回上装信息
                     * @param _upperBodyCloth 返回上装信息
                     * 
                     */
                    void SetUpperBodyCloth(const bool& _upperBodyCloth);

                    /**
                     * 判断参数 UpperBodyCloth 是否已赋值
                     * @return UpperBodyCloth 是否已赋值
                     * 
                     */
                    bool UpperBodyClothHasBeenSet() const;

                    /**
                     * 获取返回下装信息
                     * @return LowerBodyCloth 返回下装信息
                     * 
                     */
                    bool GetLowerBodyCloth() const;

                    /**
                     * 设置返回下装信息
                     * @param _lowerBodyCloth 返回下装信息
                     * 
                     */
                    void SetLowerBodyCloth(const bool& _lowerBodyCloth);

                    /**
                     * 判断参数 LowerBodyCloth 是否已赋值
                     * @return LowerBodyCloth 是否已赋值
                     * 
                     */
                    bool LowerBodyClothHasBeenSet() const;

                private:

                    /**
                     * 返回年龄信息
                     */
                    bool m_age;
                    bool m_ageHasBeenSet;

                    /**
                     * 返回随身挎包信息
                     */
                    bool m_bag;
                    bool m_bagHasBeenSet;

                    /**
                     * 返回性别信息
                     */
                    bool m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 返回朝向信息
                     */
                    bool m_orientation;
                    bool m_orientationHasBeenSet;

                    /**
                     * 返回上装信息
                     */
                    bool m_upperBodyCloth;
                    bool m_upperBodyClothHasBeenSet;

                    /**
                     * 返回下装信息
                     */
                    bool m_lowerBodyCloth;
                    bool m_lowerBodyClothHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_ATTRIBUTESOPTIONS_H_
