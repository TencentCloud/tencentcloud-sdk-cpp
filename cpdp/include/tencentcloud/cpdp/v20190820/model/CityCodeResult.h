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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CITYCODERESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CITYCODERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 查询城市编码响应对象
                */
                class CityCodeResult : public AbstractModel
                {
                public:
                    CityCodeResult();
                    ~CityCodeResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取城市编码cityid，数字与字母的结合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CityId 城市编码cityid，数字与字母的结合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCityId() const;

                    /**
                     * 设置城市编码cityid，数字与字母的结合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cityId 城市编码cityid，数字与字母的结合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCityId(const std::string& _cityId);

                    /**
                     * 判断参数 CityId 是否已赋值
                     * @return CityId 是否已赋值
                     * 
                     */
                    bool CityIdHasBeenSet() const;

                    /**
                     * 获取省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _province 省份
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取县区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return District 县区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置县区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _district 县区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _city 城市
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                private:

                    /**
                     * 城市编码cityid，数字与字母的结合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cityId;
                    bool m_cityIdHasBeenSet;

                    /**
                     * 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 县区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CITYCODERESULT_H_
