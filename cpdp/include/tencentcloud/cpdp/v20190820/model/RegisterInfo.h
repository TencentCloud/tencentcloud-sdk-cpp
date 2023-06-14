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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERINFO_H_

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
                * 签约信息
                */
                class RegisterInfo : public AbstractModel
                {
                public:
                    RegisterInfo();
                    ~RegisterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LegalPersonIdCode 法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLegalPersonIdCode() const;

                    /**
                     * 设置法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _legalPersonIdCode 法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLegalPersonIdCode(const std::string& _legalPersonIdCode);

                    /**
                     * 判断参数 LegalPersonIdCode 是否已赋值
                     * @return LegalPersonIdCode 是否已赋值
                     * 
                     */
                    bool LegalPersonIdCodeHasBeenSet() const;

                    /**
                     * 获取法人证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LegalPersonIdType 法人证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLegalPersonIdType() const;

                    /**
                     * 设置法人证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _legalPersonIdType 法人证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLegalPersonIdType(const std::string& _legalPersonIdType);

                    /**
                     * 判断参数 LegalPersonIdType 是否已赋值
                     * @return LegalPersonIdType 是否已赋值
                     * 
                     */
                    bool LegalPersonIdTypeHasBeenSet() const;

                    /**
                     * 获取法人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LegalPersonName 法人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLegalPersonName() const;

                    /**
                     * 设置法人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _legalPersonName 法人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLegalPersonName(const std::string& _legalPersonName);

                    /**
                     * 判断参数 LegalPersonName 是否已赋值
                     * @return LegalPersonName 是否已赋值
                     * 
                     */
                    bool LegalPersonNameHasBeenSet() const;

                    /**
                     * 获取公司证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationCode 公司证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationCode() const;

                    /**
                     * 设置公司证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationCode 公司证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationCode(const std::string& _organizationCode);

                    /**
                     * 判断参数 OrganizationCode 是否已赋值
                     * @return OrganizationCode 是否已赋值
                     * 
                     */
                    bool OrganizationCodeHasBeenSet() const;

                    /**
                     * 获取公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationName 公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationName 公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取公司证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationType 公司证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrganizationType() const;

                    /**
                     * 设置公司证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationType 公司证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrganizationType(const std::string& _organizationType);

                    /**
                     * 判断参数 OrganizationType 是否已赋值
                     * @return OrganizationType 是否已赋值
                     * 
                     */
                    bool OrganizationTypeHasBeenSet() const;

                private:

                    /**
                     * 法人证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_legalPersonIdCode;
                    bool m_legalPersonIdCodeHasBeenSet;

                    /**
                     * 法人证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_legalPersonIdType;
                    bool m_legalPersonIdTypeHasBeenSet;

                    /**
                     * 法人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_legalPersonName;
                    bool m_legalPersonNameHasBeenSet;

                    /**
                     * 公司证件号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationCode;
                    bool m_organizationCodeHasBeenSet;

                    /**
                     * 公司名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 公司证件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationType;
                    bool m_organizationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REGISTERINFO_H_
