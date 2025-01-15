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
                     * 获取身份证号码
                     * @return ID 身份证号码
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
                     * 获取泰文姓名
                     * @return ThaiName 泰文姓名
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
                     * 获取英文姓名
                     * @return EnFirstName 英文姓名
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
                     * 获取英文姓名
                     * @return EnLastName 英文姓名
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
                     * 获取泰文签发日期
                     * @return IssueDate 泰文签发日期
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
                     * 获取泰文到期日期
                     * @return ExpirationDate 泰文到期日期
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
                     * 获取英文签发日期
                     * @return EnIssueDate 英文签发日期
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
                     * 获取英文到期日期
                     * @return EnExpirationDate 英文到期日期
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
                     * 获取泰文出生日期
                     * @return Birthday 泰文出生日期
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
                     * 获取英文出生日期
                     * @return EnBirthday 英文出生日期
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
                     * 获取宗教信仰
                     * @return Religion 宗教信仰
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
                     * 获取序列号
                     * @return SerialNumber 序列号
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
                     * 获取地址
                     * @return Address 地址
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
                     * 获取背面号码
                     * @return LaserID 背面号码
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
                     * 获取证件人像照片抠取
                     * @return PortraitImage 证件人像照片抠取
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
                     * 获取告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9107 证件反光告警
-9108 证件模糊告警
-9109 告警能力未开通
                     * @return WarnCardInfos 告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9107 证件反光告警
-9108 证件模糊告警
-9109 告警能力未开通
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
                     * 获取字段置信度：
{
    "ID": {
        "Confidence": 0.9999
    },
    "ThaiName": {
        "Confidence": 0.9996
    }
}
                     * @return AdvancedInfo 字段置信度：
{
    "ID": {
        "Confidence": 0.9999
    },
    "ThaiName": {
        "Confidence": 0.9996
    }
}
                     * 
                     */
                    std::string GetAdvancedInfo() const;

                    /**
                     * 判断参数 AdvancedInfo 是否已赋值
                     * @return AdvancedInfo 是否已赋值
                     * 
                     */
                    bool AdvancedInfoHasBeenSet() const;

                private:

                    /**
                     * 身份证号码
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 泰文姓名
                     */
                    std::string m_thaiName;
                    bool m_thaiNameHasBeenSet;

                    /**
                     * 英文姓名
                     */
                    std::string m_enFirstName;
                    bool m_enFirstNameHasBeenSet;

                    /**
                     * 英文姓名
                     */
                    std::string m_enLastName;
                    bool m_enLastNameHasBeenSet;

                    /**
                     * 泰文签发日期
                     */
                    std::string m_issueDate;
                    bool m_issueDateHasBeenSet;

                    /**
                     * 泰文到期日期
                     */
                    std::string m_expirationDate;
                    bool m_expirationDateHasBeenSet;

                    /**
                     * 英文签发日期
                     */
                    std::string m_enIssueDate;
                    bool m_enIssueDateHasBeenSet;

                    /**
                     * 英文到期日期
                     */
                    std::string m_enExpirationDate;
                    bool m_enExpirationDateHasBeenSet;

                    /**
                     * 泰文出生日期
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 英文出生日期
                     */
                    std::string m_enBirthday;
                    bool m_enBirthdayHasBeenSet;

                    /**
                     * 宗教信仰
                     */
                    std::string m_religion;
                    bool m_religionHasBeenSet;

                    /**
                     * 序列号
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 背面号码
                     */
                    std::string m_laserID;
                    bool m_laserIDHasBeenSet;

                    /**
                     * 证件人像照片抠取
                     */
                    std::string m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * 告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9107 证件反光告警
-9108 证件模糊告警
-9109 告警能力未开通
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                    /**
                     * 字段置信度：
{
    "ID": {
        "Confidence": 0.9999
    },
    "ThaiName": {
        "Confidence": 0.9996
    }
}
                     */
                    std::string m_advancedInfo;
                    bool m_advancedInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_RECOGNIZETHAIIDCARDOCRRESPONSE_H_
