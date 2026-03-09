/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
#include <tencentcloud/ocr/v20181119/model/ReflectDetailInfo.h>


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
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>姓名（人像面）</p>
                     * @return Name <p>姓名（人像面）</p>
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
                     * 获取<p>性别（人像面）</p>
                     * @return Sex <p>性别（人像面）</p>
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
                     * 获取<p>民族（人像面）</p>
                     * @return Nation <p>民族（人像面）</p>
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
                     * 获取<p>出生日期（人像面）</p>
                     * @return Birth <p>出生日期（人像面）</p>
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
                     * 获取<p>地址（人像面）</p>
                     * @return Address <p>地址（人像面）</p>
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
                     * 获取<p>身份证号（人像面）</p>
                     * @return IdNum <p>身份证号（人像面）</p>
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
                     * 获取<p>发证机关（国徽面）</p>
                     * @return Authority <p>发证机关（国徽面）</p>
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
                     * 获取<p>证件有效期（国徽面）</p>
                     * @return ValidDate <p>证件有效期（国徽面）</p>
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
                     * 获取<p>扩展信息，不请求则不返回，具体输入参考示例3和示例4。<br>IdCard，裁剪后身份证照片的base64编码，请求 Config.CropIdCard 时返回；<br>Portrait，身份证头像照片的base64编码，请求 Config.CropPortrait 时返回；<br>Quality，图片质量分数，请求 Config.Quality 时返回（取值范围：0 ~ 100，分数越低越模糊，建议阈值≥50）;<br>BorderCodeValue，身份证边框不完整告警阈值分数，请求 Config.BorderCheckWarn时返回（取值范围：0 ~ 100，分数越低边框遮挡可能性越低，建议阈值≤50）;<br>WarnInfos，告警信息，Code 告警码列表和释义：<br>-9100 身份证有效日期不合法告警，<br>-9101 身份证边框不完整告警，<br>-9102 身份证复印件告警（黑白及彩色复印件）,<br>-9108 身份证复印件告警（仅黑白复印件），<br>-9103 身份证翻拍告警，<br>-9105 身份证框内遮挡告警，<br>-9104 临时身份证告警，<br>-9106 身份证疑似存在PS痕迹告警，<br>-9107 身份证反光告警，<br>-9110 电子身份证告警，<br>-9111 水印告警（仅CardWarnType参数为Advanced时）</p>
                     * @return AdvancedInfo <p>扩展信息，不请求则不返回，具体输入参考示例3和示例4。<br>IdCard，裁剪后身份证照片的base64编码，请求 Config.CropIdCard 时返回；<br>Portrait，身份证头像照片的base64编码，请求 Config.CropPortrait 时返回；<br>Quality，图片质量分数，请求 Config.Quality 时返回（取值范围：0 ~ 100，分数越低越模糊，建议阈值≥50）;<br>BorderCodeValue，身份证边框不完整告警阈值分数，请求 Config.BorderCheckWarn时返回（取值范围：0 ~ 100，分数越低边框遮挡可能性越低，建议阈值≤50）;<br>WarnInfos，告警信息，Code 告警码列表和释义：<br>-9100 身份证有效日期不合法告警，<br>-9101 身份证边框不完整告警，<br>-9102 身份证复印件告警（黑白及彩色复印件）,<br>-9108 身份证复印件告警（仅黑白复印件），<br>-9103 身份证翻拍告警，<br>-9105 身份证框内遮挡告警，<br>-9104 临时身份证告警，<br>-9106 身份证疑似存在PS痕迹告警，<br>-9107 身份证反光告警，<br>-9110 电子身份证告警，<br>-9111 水印告警（仅CardWarnType参数为Advanced时）</p>
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
                     * 获取<p>反光点覆盖区域详情结果，具体内容请点击左侧链接</p>
                     * @return ReflectDetailInfos <p>反光点覆盖区域详情结果，具体内容请点击左侧链接</p>
                     * 
                     */
                    std::vector<ReflectDetailInfo> GetReflectDetailInfos() const;

                    /**
                     * 判断参数 ReflectDetailInfos 是否已赋值
                     * @return ReflectDetailInfos 是否已赋值
                     * 
                     */
                    bool ReflectDetailInfosHasBeenSet() const;

                private:

                    /**
                     * <p>姓名（人像面）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>性别（人像面）</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>民族（人像面）</p>
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * <p>出生日期（人像面）</p>
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * <p>地址（人像面）</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>身份证号（人像面）</p>
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * <p>发证机关（国徽面）</p>
                     */
                    std::string m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * <p>证件有效期（国徽面）</p>
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * <p>扩展信息，不请求则不返回，具体输入参考示例3和示例4。<br>IdCard，裁剪后身份证照片的base64编码，请求 Config.CropIdCard 时返回；<br>Portrait，身份证头像照片的base64编码，请求 Config.CropPortrait 时返回；<br>Quality，图片质量分数，请求 Config.Quality 时返回（取值范围：0 ~ 100，分数越低越模糊，建议阈值≥50）;<br>BorderCodeValue，身份证边框不完整告警阈值分数，请求 Config.BorderCheckWarn时返回（取值范围：0 ~ 100，分数越低边框遮挡可能性越低，建议阈值≤50）;<br>WarnInfos，告警信息，Code 告警码列表和释义：<br>-9100 身份证有效日期不合法告警，<br>-9101 身份证边框不完整告警，<br>-9102 身份证复印件告警（黑白及彩色复印件）,<br>-9108 身份证复印件告警（仅黑白复印件），<br>-9103 身份证翻拍告警，<br>-9105 身份证框内遮挡告警，<br>-9104 临时身份证告警，<br>-9106 身份证疑似存在PS痕迹告警，<br>-9107 身份证反光告警，<br>-9110 电子身份证告警，<br>-9111 水印告警（仅CardWarnType参数为Advanced时）</p>
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * <p>反光点覆盖区域详情结果，具体内容请点击左侧链接</p>
                     */
                    std::vector<ReflectDetailInfo> m_reflectDetailInfos;
                    bool m_reflectDetailInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_IDCARDOCRRESPONSE_H_
