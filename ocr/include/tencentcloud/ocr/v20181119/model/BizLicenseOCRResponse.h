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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_

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
                * BizLicenseOCR返回参数结构体
                */
                class BizLicenseOCRResponse : public AbstractModel
                {
                public:
                    BizLicenseOCRResponse();
                    ~BizLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统一社会信用代码（三合一之前为注册号）
                     * @return RegNum 统一社会信用代码（三合一之前为注册号）
                     * 
                     */
                    std::string GetRegNum() const;

                    /**
                     * 判断参数 RegNum 是否已赋值
                     * @return RegNum 是否已赋值
                     * 
                     */
                    bool RegNumHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return Name 公司名称
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
                     * 获取注册资本
                     * @return Capital 注册资本
                     * 
                     */
                    std::string GetCapital() const;

                    /**
                     * 判断参数 Capital 是否已赋值
                     * @return Capital 是否已赋值
                     * 
                     */
                    bool CapitalHasBeenSet() const;

                    /**
                     * 获取法定代表人
                     * @return Person 法定代表人
                     * 
                     */
                    std::string GetPerson() const;

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

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
                     * 获取经营范围
                     * @return Business 经营范围
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取主体类型
                     * @return Type 主体类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取营业期限
                     * @return Period 营业期限
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取组成形式
                     * @return ComposingForm 组成形式
                     * 
                     */
                    std::string GetComposingForm() const;

                    /**
                     * 判断参数 ComposingForm 是否已赋值
                     * @return ComposingForm 是否已赋值
                     * 
                     */
                    bool ComposingFormHasBeenSet() const;

                    /**
                     * 获取成立日期
                     * @return SetDate 成立日期
                     * 
                     */
                    std::string GetSetDate() const;

                    /**
                     * 判断参数 SetDate 是否已赋值
                     * @return SetDate 是否已赋值
                     * 
                     */
                    bool SetDateHasBeenSet() const;

                    /**
                     * 获取Code 告警码列表和释义：
-9102 黑白复印件告警
-9104 翻拍件告警
                     * @return RecognizeWarnCode Code 告警码列表和释义：
-9102 黑白复印件告警
-9104 翻拍件告警
                     * 
                     */
                    std::vector<int64_t> GetRecognizeWarnCode() const;

                    /**
                     * 判断参数 RecognizeWarnCode 是否已赋值
                     * @return RecognizeWarnCode 是否已赋值
                     * 
                     */
                    bool RecognizeWarnCodeHasBeenSet() const;

                    /**
                     * 获取告警码说明：
WARN_COPY_CARD 黑白复印件告警
WARN_RESHOOT_CARD翻拍件告警
                     * @return RecognizeWarnMsg 告警码说明：
WARN_COPY_CARD 黑白复印件告警
WARN_RESHOOT_CARD翻拍件告警
                     * 
                     */
                    std::vector<std::string> GetRecognizeWarnMsg() const;

                    /**
                     * 判断参数 RecognizeWarnMsg 是否已赋值
                     * @return RecognizeWarnMsg 是否已赋值
                     * 
                     */
                    bool RecognizeWarnMsgHasBeenSet() const;

                    /**
                     * 获取是否为副本。1为是，-1为不是。
                     * @return IsDuplication 是否为副本。1为是，-1为不是。
                     * 
                     */
                    int64_t GetIsDuplication() const;

                    /**
                     * 判断参数 IsDuplication 是否已赋值
                     * @return IsDuplication 是否已赋值
                     * 
                     */
                    bool IsDuplicationHasBeenSet() const;

                    /**
                     * 获取登记日期
                     * @return RegistrationDate 登记日期
                     * 
                     */
                    std::string GetRegistrationDate() const;

                    /**
                     * 判断参数 RegistrationDate 是否已赋值
                     * @return RegistrationDate 是否已赋值
                     * 
                     */
                    bool RegistrationDateHasBeenSet() const;

                    /**
                     * 获取 图片旋转角度(角度制)，文本的水平方向为0度；顺时针为正，角度范围是0-360度


                     * @return Angle  图片旋转角度(角度制)，文本的水平方向为0度；顺时针为正，角度范围是0-360度


                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取是否有国徽。false为没有，true为有。
                     * @return NationalEmblem 是否有国徽。false为没有，true为有。
                     * 
                     */
                    bool GetNationalEmblem() const;

                    /**
                     * 判断参数 NationalEmblem 是否已赋值
                     * @return NationalEmblem 是否已赋值
                     * 
                     */
                    bool NationalEmblemHasBeenSet() const;

                    /**
                     * 获取是否有二维码。false为没有，true为有。
                     * @return QRCode 是否有二维码。false为没有，true为有。
                     * 
                     */
                    bool GetQRCode() const;

                    /**
                     * 判断参数 QRCode 是否已赋值
                     * @return QRCode 是否已赋值
                     * 
                     */
                    bool QRCodeHasBeenSet() const;

                    /**
                     * 获取是否有印章。false为没有，true为有。
                     * @return Seal 是否有印章。false为没有，true为有。
                     * 
                     */
                    bool GetSeal() const;

                    /**
                     * 判断参数 Seal 是否已赋值
                     * @return Seal 是否已赋值
                     * 
                     */
                    bool SealHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return Title 标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取编号
                     * @return SerialNumber 编号
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
                     * 获取登记机关
                     * @return RegistrationAuthority 登记机关
                     * 
                     */
                    std::string GetRegistrationAuthority() const;

                    /**
                     * 判断参数 RegistrationAuthority 是否已赋值
                     * @return RegistrationAuthority 是否已赋值
                     * 
                     */
                    bool RegistrationAuthorityHasBeenSet() const;

                    /**
                     * 获取是否是电子营业执照。false为没有，true为有。
                     * @return Electronic 是否是电子营业执照。false为没有，true为有。
                     * 
                     */
                    bool GetElectronic() const;

                    /**
                     * 判断参数 Electronic 是否已赋值
                     * @return Electronic 是否已赋值
                     * 
                     */
                    bool ElectronicHasBeenSet() const;

                private:

                    /**
                     * 统一社会信用代码（三合一之前为注册号）
                     */
                    std::string m_regNum;
                    bool m_regNumHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 注册资本
                     */
                    std::string m_capital;
                    bool m_capitalHasBeenSet;

                    /**
                     * 法定代表人
                     */
                    std::string m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 经营范围
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 主体类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 营业期限
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 组成形式
                     */
                    std::string m_composingForm;
                    bool m_composingFormHasBeenSet;

                    /**
                     * 成立日期
                     */
                    std::string m_setDate;
                    bool m_setDateHasBeenSet;

                    /**
                     * Code 告警码列表和释义：
-9102 黑白复印件告警
-9104 翻拍件告警
                     */
                    std::vector<int64_t> m_recognizeWarnCode;
                    bool m_recognizeWarnCodeHasBeenSet;

                    /**
                     * 告警码说明：
WARN_COPY_CARD 黑白复印件告警
WARN_RESHOOT_CARD翻拍件告警
                     */
                    std::vector<std::string> m_recognizeWarnMsg;
                    bool m_recognizeWarnMsgHasBeenSet;

                    /**
                     * 是否为副本。1为是，-1为不是。
                     */
                    int64_t m_isDuplication;
                    bool m_isDuplicationHasBeenSet;

                    /**
                     * 登记日期
                     */
                    std::string m_registrationDate;
                    bool m_registrationDateHasBeenSet;

                    /**
                     *  图片旋转角度(角度制)，文本的水平方向为0度；顺时针为正，角度范围是0-360度


                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * 是否有国徽。false为没有，true为有。
                     */
                    bool m_nationalEmblem;
                    bool m_nationalEmblemHasBeenSet;

                    /**
                     * 是否有二维码。false为没有，true为有。
                     */
                    bool m_qRCode;
                    bool m_qRCodeHasBeenSet;

                    /**
                     * 是否有印章。false为没有，true为有。
                     */
                    bool m_seal;
                    bool m_sealHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 编号
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * 登记机关
                     */
                    std::string m_registrationAuthority;
                    bool m_registrationAuthorityHasBeenSet;

                    /**
                     * 是否是电子营业执照。false为没有，true为有。
                     */
                    bool m_electronic;
                    bool m_electronicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_
