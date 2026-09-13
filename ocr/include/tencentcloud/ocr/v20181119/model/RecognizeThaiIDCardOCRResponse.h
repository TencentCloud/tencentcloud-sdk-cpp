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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_

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
                * RecognizeThaiIDCardOCR返回参数结构体
                */
                class RecognizeThaiIDCardOCRResponse : public AbstractModel
                {
                public:
                    RecognizeThaiIDCardOCRResponse();
                    ~RecognizeThaiIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>身份证号码</p>
                     * @return ID <p>身份证号码</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>泰文姓名</p>
                     * @return ThaiName <p>泰文姓名</p>
                     * 
                     */
                    std::string GetThaiName() const;

                    /**
                     * 判断参数 ThaiName 是否已赋值
                     * @return ThaiName 是否已赋值
                     * 
                     */
                    bool ThaiNameHasBeenSet() const;

                    /**
                     * 获取<p>英文姓名</p>
                     * @return EnFirstName <p>英文姓名</p>
                     * 
                     */
                    std::string GetEnFirstName() const;

                    /**
                     * 判断参数 EnFirstName 是否已赋值
                     * @return EnFirstName 是否已赋值
                     * 
                     */
                    bool EnFirstNameHasBeenSet() const;

                    /**
                     * 获取<p>英文姓名</p>
                     * @return EnLastName <p>英文姓名</p>
                     * 
                     */
                    std::string GetEnLastName() const;

                    /**
                     * 判断参数 EnLastName 是否已赋值
                     * @return EnLastName 是否已赋值
                     * 
                     */
                    bool EnLastNameHasBeenSet() const;

                    /**
                     * 获取<p>泰文签发日期</p>
                     * @return IssueDate <p>泰文签发日期</p>
                     * 
                     */
                    std::string GetIssueDate() const;

                    /**
                     * 判断参数 IssueDate 是否已赋值
                     * @return IssueDate 是否已赋值
                     * 
                     */
                    bool IssueDateHasBeenSet() const;

                    /**
                     * 获取<p>泰文到期日期</p>
                     * @return ExpirationDate <p>泰文到期日期</p>
                     * 
                     */
                    std::string GetExpirationDate() const;

                    /**
                     * 判断参数 ExpirationDate 是否已赋值
                     * @return ExpirationDate 是否已赋值
                     * 
                     */
                    bool ExpirationDateHasBeenSet() const;

                    /**
                     * 获取<p>英文签发日期</p>
                     * @return EnIssueDate <p>英文签发日期</p>
                     * 
                     */
                    std::string GetEnIssueDate() const;

                    /**
                     * 判断参数 EnIssueDate 是否已赋值
                     * @return EnIssueDate 是否已赋值
                     * 
                     */
                    bool EnIssueDateHasBeenSet() const;

                    /**
                     * 获取<p>英文到期日期</p>
                     * @return EnExpirationDate <p>英文到期日期</p>
                     * 
                     */
                    std::string GetEnExpirationDate() const;

                    /**
                     * 判断参数 EnExpirationDate 是否已赋值
                     * @return EnExpirationDate 是否已赋值
                     * 
                     */
                    bool EnExpirationDateHasBeenSet() const;

                    /**
                     * 获取<p>泰文出生日期</p>
                     * @return Birthday <p>泰文出生日期</p>
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取<p>英文出生日期</p>
                     * @return EnBirthday <p>英文出生日期</p>
                     * 
                     */
                    std::string GetEnBirthday() const;

                    /**
                     * 判断参数 EnBirthday 是否已赋值
                     * @return EnBirthday 是否已赋值
                     * 
                     */
                    bool EnBirthdayHasBeenSet() const;

                    /**
                     * 获取<p>宗教信仰</p>
                     * @return Religion <p>宗教信仰</p>
                     * 
                     */
                    std::string GetReligion() const;

                    /**
                     * 判断参数 Religion 是否已赋值
                     * @return Religion 是否已赋值
                     * 
                     */
                    bool ReligionHasBeenSet() const;

                    /**
                     * 获取<p>序列号</p>
                     * @return SerialNumber <p>序列号</p>
                     * 
                     */
                    std::string GetSerialNumber() const;

                    /**
                     * 判断参数 SerialNumber 是否已赋值
                     * @return SerialNumber 是否已赋值
                     * 
                     */
                    bool SerialNumberHasBeenSet() const;

                    /**
                     * 获取<p>地址</p>
                     * @return Address <p>地址</p>
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
                     * 获取<p>背面号码</p>
                     * @return LaserID <p>背面号码</p>
                     * 
                     */
                    std::string GetLaserID() const;

                    /**
                     * 判断参数 LaserID 是否已赋值
                     * @return LaserID 是否已赋值
                     * 
                     */
                    bool LaserIDHasBeenSet() const;

                    /**
                     * 获取<p>证件人像照片抠取</p>
                     * @return PortraitImage <p>证件人像照片抠取</p>
                     * 
                     */
                    std::string GetPortraitImage() const;

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                    /**
                     * 获取<p>告警码<br>-9101 证件边框不完整告警<br>-9102 证件复印件告警<br>-9103 证件翻拍告警<br>-9104 证件PS告警<br>-9107 证件反光告警<br>-9108 证件模糊告警<br>-9109 告警能力未开通</p>
                     * @return WarnCardInfos <p>告警码<br>-9101 证件边框不完整告警<br>-9102 证件复印件告警<br>-9103 证件翻拍告警<br>-9104 证件PS告警<br>-9107 证件反光告警<br>-9108 证件模糊告警<br>-9109 告警能力未开通</p>
                     * 
                     */
                    std::vector<int64_t> GetWarnCardInfos() const;

                    /**
                     * 判断参数 WarnCardInfos 是否已赋值
                     * @return WarnCardInfos 是否已赋值
                     * 
                     */
                    bool WarnCardInfosHasBeenSet() const;

                    /**
                     * 获取<p>该字段已废弃， 将固定返回&quot;1&quot;，不建议使用。</p>
                     * @return AdvancedInfo <p>该字段已废弃， 将固定返回&quot;1&quot;，不建议使用。</p>
                     * @deprecated
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * @deprecated
                     */
                    bool AdvancedInfoHasBeenSet() const;

                    /**
                     * 获取<p>卡证正面图片中，证件主体的数量（仅请求曼谷地域[ap-bangkok]返回）</p>
                     * @return CardCount <p>卡证正面图片中，证件主体的数量（仅请求曼谷地域[ap-bangkok]返回）</p>
                     * 
                     */
                    int64_t GetCardCount() const;

                    /**
                     * 判断参数 CardCount 是否已赋值
                     * @return CardCount 是否已赋值
                     * 
                     */
                    bool CardCountHasBeenSet() const;

                private:

                    /**
                     * <p>身份证号码</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>泰文姓名</p>
                     */
                    std::string m_thaiName;
                    bool m_thaiNameHasBeenSet;

                    /**
                     * <p>英文姓名</p>
                     */
                    std::string m_enFirstName;
                    bool m_enFirstNameHasBeenSet;

                    /**
                     * <p>英文姓名</p>
                     */
                    std::string m_enLastName;
                    bool m_enLastNameHasBeenSet;

                    /**
                     * <p>泰文签发日期</p>
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * <p>泰文到期日期</p>
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * <p>英文签发日期</p>
                     */
                    std::string m_enIssueDate;
                    bool m_enIssueDateHasBeenSet;

                    /**
                     * <p>英文到期日期</p>
                     */
                    std::string m_enExpirationDate;
                    bool m_enExpirationDateHasBeenSet;

                    /**
                     * <p>泰文出生日期</p>
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * <p>英文出生日期</p>
                     */
                    std::string m_enBirthday;
                    bool m_enBirthdayHasBeenSet;

                    /**
                     * <p>宗教信仰</p>
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * <p>序列号</p>
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * <p>地址</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>背面号码</p>
                     */
                    std::string m_laserID;
                    bool m_laserIDHasBeenSet;

                    /**
                     * <p>证件人像照片抠取</p>
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * <p>告警码<br>-9101 证件边框不完整告警<br>-9102 证件复印件告警<br>-9103 证件翻拍告警<br>-9104 证件PS告警<br>-9107 证件反光告警<br>-9108 证件模糊告警<br>-9109 告警能力未开通</p>
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                    /**
                     * <p>该字段已废弃， 将固定返回&quot;1&quot;，不建议使用。</p>
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                    /**
                     * <p>卡证正面图片中，证件主体的数量（仅请求曼谷地域[ap-bangkok]返回）</p>
                     */
                    int64_t m_cardCount;
                    bool m_cardCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_
