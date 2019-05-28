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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * IDCardOCR返回参数结构体
                */
                class IDCardOCRResponse : public AbstractModel
                {
                public:
                    IDCardOCRResponse();
                    ~IDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取姓名（人像面）
                     * @return Name 姓名（人像面）
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取性别（人像面）
                     * @return Sex 性别（人像面）
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取民族（人像面）
                     * @return Nation 民族（人像面）
                     */
                    std::string GetNation() const;

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取出生日期（人像面）
                     * @return Birth 出生日期（人像面）
                     */
                    std::string GetBirth() const;

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取地址（人像面）
                     * @return Address 地址（人像面）
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取身份证号（人像面）
                     * @return IdNum 身份证号（人像面）
                     */
                    std::string GetIdNum() const;

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取发证机关（国徽面）
                     * @return Authority 发证机关（国徽面）
                     */
                    std::string GetAuthority() const;

                    /**
                     * 判断参数 Authority 是否已赋值
                     * @return Authority 是否已赋值
                     */
                    bool AuthorityHasBeenSet() const;

                    /**
                     * 获取证件有效期（国徽面）
                     * @return ValidDate 证件有效期（国徽面）
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取扩展信息，根据请求的可选字段返回对应内容，不请求则不返回，具体输入参考示例3。目前支持的扩展字段为：
IdCard，身份证照片，请求 CropIdCard 时返回；
Portrait，人像照片，请求 CropPortrait 时返回；
WarnInfos，告警信息（Code - 告警码，Msg - 告警信息内容），识别出翻拍件或复印件时返回。

Code 告警码列表和释义：
-9103	身份证翻拍告警，
-9102	身份证复印件告警。
                     * @return AdvancedInfo 扩展信息，根据请求的可选字段返回对应内容，不请求则不返回，具体输入参考示例3。目前支持的扩展字段为：
IdCard，身份证照片，请求 CropIdCard 时返回；
Portrait，人像照片，请求 CropPortrait 时返回；
WarnInfos，告警信息（Code - 告警码，Msg - 告警信息内容），识别出翻拍件或复印件时返回。

Code 告警码列表和释义：
-9103	身份证翻拍告警，
-9102	身份证复印件告警。
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     */
                    bool AdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * 姓名（人像面）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 性别（人像面）
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 民族（人像面）
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * 出生日期（人像面）
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * 地址（人像面）
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 身份证号（人像面）
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * 发证机关（国徽面）
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * 证件有效期（国徽面）
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * 扩展信息，根据请求的可选字段返回对应内容，不请求则不返回，具体输入参考示例3。目前支持的扩展字段为：
IdCard，身份证照片，请求 CropIdCard 时返回；
Portrait，人像照片，请求 CropPortrait 时返回；
WarnInfos，告警信息（Code - 告警码，Msg - 告警信息内容），识别出翻拍件或复印件时返回。

Code 告警码列表和释义：
-9103	身份证翻拍告警，
-9102	身份证复印件告警。
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRRESPONSE_H_
