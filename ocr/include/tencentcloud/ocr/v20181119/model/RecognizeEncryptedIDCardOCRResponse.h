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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEENCRYPTEDIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEENCRYPTEDIDCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ReflectDetailInfo.h>
#include <tencentcloud/ocr/v20181119/model/Encryption.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * RecognizeEncryptedIDCardOCR返回参数结构体
                */
                class RecognizeEncryptedIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeEncryptedIDCardOCRResponse();
                    ~RecognizeEncryptedIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取姓名（人像面）
                     * @return Name 姓名（人像面）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取性别（人像面）
                     * @return Sex 性别（人像面）
                     * 
                     */
                    std::string GetSex() const;

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取民族（人像面）
                     * @return Nation 民族（人像面）
                     * 
                     */
                    std::string GetNation() const;

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取出生日期（人像面）
                     * @return Birth 出生日期（人像面）
                     * 
                     */
                    std::string GetBirth() const;

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取地址（人像面）
                     * @return Address 地址（人像面）
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取身份证号（人像面）
                     * @return IdNum 身份证号（人像面）
                     * 
                     */
                    std::string GetIdNum() const;

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取发证机关（国徽面）
                     * @return Authority 发证机关（国徽面）
                     * 
                     */
                    std::string GetAuthority() const;

                    /**
                     * 判断参数 Authority 是否已赋值
                     * @return Authority 是否已赋值
                     * 
                     */
                    bool AuthorityHasBeenSet() const;

                    /**
                     * 获取证件有效期（国徽面）
                     * @return ValidDate 证件有效期（国徽面）
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取扩展信息，不请求则不返回，具体输入参考示例3和示例4。
IdCard，裁剪后身份证照片的base64编码，请求 Config.CropIdCard 时返回；
Portrait，身份证头像照片的base64编码，请求 Config.CropPortrait 时返回；

Quality，图片质量分数，请求 Config.Quality 时返回（取值范围：0 ~ 100，分数越低越模糊，建议阈值≥50）;
BorderCodeValue，身份证边框不完整告警阈值分数，请求 Config.BorderCheckWarn时返回（取值范围：0 ~ 100，分数越低边框遮挡可能性越低，建议阈值≤50）;

WarnInfos，告警信息，Code 告警码列表和释义：
-9100 身份证有效日期不合法告警，
-9101 身份证边框不完整告警，

-9102 身份证复印件告警（黑白及彩色复印件）,
-9108 身份证复印件告警（仅黑白复印件），

-9103 身份证翻拍告警，
-9105 身份证框内遮挡告警，
-9104 临时身份证告警，
-9106 身份证疑似存在PS痕迹告警，
-9107 身份证反光告警。
                     * @return AdvancedInfo 扩展信息，不请求则不返回，具体输入参考示例3和示例4。
IdCard，裁剪后身份证照片的base64编码，请求 Config.CropIdCard 时返回；
Portrait，身份证头像照片的base64编码，请求 Config.CropPortrait 时返回；

Quality，图片质量分数，请求 Config.Quality 时返回（取值范围：0 ~ 100，分数越低越模糊，建议阈值≥50）;
BorderCodeValue，身份证边框不完整告警阈值分数，请求 Config.BorderCheckWarn时返回（取值范围：0 ~ 100，分数越低边框遮挡可能性越低，建议阈值≤50）;

WarnInfos，告警信息，Code 告警码列表和释义：
-9100 身份证有效日期不合法告警，
-9101 身份证边框不完整告警，

-9102 身份证复印件告警（黑白及彩色复印件）,
-9108 身份证复印件告警（仅黑白复印件），

-9103 身份证翻拍告警，
-9105 身份证框内遮挡告警，
-9104 临时身份证告警，
-9106 身份证疑似存在PS痕迹告警，
-9107 身份证反光告警。
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

                    /**
                     * 获取反光点覆盖区域详情结果，具体内容请点击左侧链接
                     * @return ReflectDetailInfos 反光点覆盖区域详情结果，具体内容请点击左侧链接
                     * 
                     */
                    std::vector<ReflectDetailInfo> GetReflectDetailInfos() const;

                    /**
                     * 判断参数 ReflectDetailInfos 是否已赋值
                     * @return ReflectDetailInfos 是否已赋值
                     * 
                     */
                    bool ReflectDetailInfosHasBeenSet() const;

                    /**
                     * 获取加密后的数据（Base64编码）
                     * @return EncryptedBody 加密后的数据（Base64编码）
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                    /**
                     * 获取敏感数据加密信息
                     * @return Encryption 敏感数据加密信息
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

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
                     * 扩展信息，不请求则不返回，具体输入参考示例3和示例4。
IdCard，裁剪后身份证照片的base64编码，请求 Config.CropIdCard 时返回；
Portrait，身份证头像照片的base64编码，请求 Config.CropPortrait 时返回；

Quality，图片质量分数，请求 Config.Quality 时返回（取值范围：0 ~ 100，分数越低越模糊，建议阈值≥50）;
BorderCodeValue，身份证边框不完整告警阈值分数，请求 Config.BorderCheckWarn时返回（取值范围：0 ~ 100，分数越低边框遮挡可能性越低，建议阈值≤50）;

WarnInfos，告警信息，Code 告警码列表和释义：
-9100 身份证有效日期不合法告警，
-9101 身份证边框不完整告警，

-9102 身份证复印件告警（黑白及彩色复印件）,
-9108 身份证复印件告警（仅黑白复印件），

-9103 身份证翻拍告警，
-9105 身份证框内遮挡告警，
-9104 临时身份证告警，
-9106 身份证疑似存在PS痕迹告警，
-9107 身份证反光告警。
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * 反光点覆盖区域详情结果，具体内容请点击左侧链接
                     */
                    std::vector<ReflectDetailInfo> m_reflectDetailInfos;
                    bool m_reflectDetailInfosHasBeenSet;

                    /**
                     * 加密后的数据（Base64编码）
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                    /**
                     * 敏感数据加密信息
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZEENCRYPTEDIDCARDOCRRESPONSE_H_
