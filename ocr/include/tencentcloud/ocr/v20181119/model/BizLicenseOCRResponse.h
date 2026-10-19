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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/BusinessCertificateInfo.h>


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
                     * 获取<p>统一社会信用代码（三合一之前为注册号）</p>
                     * @return RegNum <p>统一社会信用代码（三合一之前为注册号）</p>
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
                     * 获取<p>公司名称</p>
                     * @return Name <p>公司名称</p>
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
                     * 获取<p>注册资本</p>
                     * @return Capital <p>注册资本</p>
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
                     * 获取<p>法定代表人</p>
                     * @return Person <p>法定代表人</p>
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
                     * 获取<p>经营范围</p>
                     * @return Business <p>经营范围</p>
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
                     * 获取<p>主体类型</p>
                     * @return Type <p>主体类型</p>
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
                     * 获取<p>营业期限</p>
                     * @return Period <p>营业期限</p>
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
                     * 获取<p>组成形式</p>
                     * @return ComposingForm <p>组成形式</p>
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
                     * 获取<p>成立日期</p>
                     * @return SetDate <p>成立日期</p>
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
                     * 获取<p>Code 告警码列表和释义：<br>-9102 黑白复印件告警<br>-9104 翻拍件告警<br>-9108 经营范围识别异常告警（由于文字过小、模糊、反光、遮挡或明显倾斜等情况导致未能正常识别）</p>
                     * @return RecognizeWarnCode <p>Code 告警码列表和释义：<br>-9102 黑白复印件告警<br>-9104 翻拍件告警<br>-9108 经营范围识别异常告警（由于文字过小、模糊、反光、遮挡或明显倾斜等情况导致未能正常识别）</p>
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
                     * 获取<p>告警码说明：<br>WARN_COPY_CARD 黑白复印件告警<br>WARN_RESHOOT_CARD翻拍件告警<br>WARN_EARLY_STOP 经营范围识别异常告警</p>
                     * @return RecognizeWarnMsg <p>告警码说明：<br>WARN_COPY_CARD 黑白复印件告警<br>WARN_RESHOOT_CARD翻拍件告警<br>WARN_EARLY_STOP 经营范围识别异常告警</p>
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
                     * 获取<p>是否为副本。1为是，-1为不是。</p>
                     * @return IsDuplication <p>是否为副本。1为是，-1为不是。</p>
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
                     * 获取<p>登记日期</p>
                     * @return RegistrationDate <p>登记日期</p>
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
                     * 获取<p>图片旋转角度(角度制)，文本的水平方向为0度；顺时针为正，角度范围是0-360度</p>
                     * @return Angle <p>图片旋转角度(角度制)，文本的水平方向为0度；顺时针为正，角度范围是0-360度</p>
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
                     * 获取<p>是否有国徽。false为没有，true为有。</p>
                     * @return NationalEmblem <p>是否有国徽。false为没有，true为有。</p>
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
                     * 获取<p>是否有二维码。false为没有，true为有。</p>
                     * @return QRCode <p>是否有二维码。false为没有，true为有。</p>
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
                     * 获取<p>是否有印章。false为没有，true为有。</p>
                     * @return Seal <p>是否有印章。false为没有，true为有。</p>
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
                     * 获取<p>标题</p>
                     * @return Title <p>标题</p>
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
                     * 获取<p>编号</p>
                     * @return SerialNumber <p>编号</p>
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
                     * 获取<p>登记机关</p>
                     * @return RegistrationAuthority <p>登记机关</p>
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
                     * 获取<p>是否是电子营业执照。false为没有，true为有。</p>
                     * @return Electronic <p>是否是电子营业执照。false为没有，true为有。</p>
                     * 
                     */
                    bool GetElectronic() const;

                    /**
                     * 判断参数 Electronic 是否已赋值
                     * @return Electronic 是否已赋值
                     * 
                     */
                    bool ElectronicHasBeenSet() const;

                    /**
                     * 获取<p>非营业执照的营业类证件识别结果，将以结构化形式呈现。</p>
                     * @return BusinessCertificate <p>非营业执照的营业类证件识别结果，将以结构化形式呈现。</p>
                     * 
                     */
                    std::vector<BusinessCertificateInfo> GetBusinessCertificate() const;

                    /**
                     * 判断参数 BusinessCertificate 是否已赋值
                     * @return BusinessCertificate 是否已赋值
                     * 
                     */
                    bool BusinessCertificateHasBeenSet() const;

                    /**
                     * 获取<p>重要提示字段</p>
                     * @return Important <p>重要提示字段</p>
                     * 
                     */
                    std::string GetImportant() const;

                    /**
                     * 判断参数 Important 是否已赋值
                     * @return Important 是否已赋值
                     * 
                     */
                    bool ImportantHasBeenSet() const;

                private:

                    /**
                     * <p>统一社会信用代码（三合一之前为注册号）</p>
                     */
                    std::string m_regNum;
                    bool m_regNumHasBeenSet;

                    /**
                     * <p>公司名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>注册资本</p>
                     */
                    std::string m_capital;
                    bool m_capitalHasBeenSet;

                    /**
                     * <p>法定代表人</p>
                     */
                    std::string m_person;
                    bool m_personHasBeenSet;

                    /**
                     * <p>地址</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>经营范围</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>主体类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>营业期限</p>
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>组成形式</p>
                     */
                    std::string m_composingForm;
                    bool m_composingFormHasBeenSet;

                    /**
                     * <p>成立日期</p>
                     */
                    std::string m_setDate;
                    bool m_setDateHasBeenSet;

                    /**
                     * <p>Code 告警码列表和释义：<br>-9102 黑白复印件告警<br>-9104 翻拍件告警<br>-9108 经营范围识别异常告警（由于文字过小、模糊、反光、遮挡或明显倾斜等情况导致未能正常识别）</p>
                     */
                    std::vector<int64_t> m_recognizeWarnCode;
                    bool m_recognizeWarnCodeHasBeenSet;

                    /**
                     * <p>告警码说明：<br>WARN_COPY_CARD 黑白复印件告警<br>WARN_RESHOOT_CARD翻拍件告警<br>WARN_EARLY_STOP 经营范围识别异常告警</p>
                     */
                    std::vector<std::string> m_recognizeWarnMsg;
                    bool m_recognizeWarnMsgHasBeenSet;

                    /**
                     * <p>是否为副本。1为是，-1为不是。</p>
                     */
                    int64_t m_isDuplication;
                    bool m_isDuplicationHasBeenSet;

                    /**
                     * <p>登记日期</p>
                     */
                    std::string m_registrationDate;
                    bool m_registrationDateHasBeenSet;

                    /**
                     * <p>图片旋转角度(角度制)，文本的水平方向为0度；顺时针为正，角度范围是0-360度</p>
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * <p>是否有国徽。false为没有，true为有。</p>
                     */
                    bool m_nationalEmblem;
                    bool m_nationalEmblemHasBeenSet;

                    /**
                     * <p>是否有二维码。false为没有，true为有。</p>
                     */
                    bool m_qRCode;
                    bool m_qRCodeHasBeenSet;

                    /**
                     * <p>是否有印章。false为没有，true为有。</p>
                     */
                    bool m_seal;
                    bool m_sealHasBeenSet;

                    /**
                     * <p>标题</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>编号</p>
                     */
                    std::string m_serialNumber;
                    bool m_serialNumberHasBeenSet;

                    /**
                     * <p>登记机关</p>
                     */
                    std::string m_registrationAuthority;
                    bool m_registrationAuthorityHasBeenSet;

                    /**
                     * <p>是否是电子营业执照。false为没有，true为有。</p>
                     */
                    bool m_electronic;
                    bool m_electronicHasBeenSet;

                    /**
                     * <p>非营业执照的营业类证件识别结果，将以结构化形式呈现。</p>
                     */
                    std::vector<BusinessCertificateInfo> m_businessCertificate;
                    bool m_businessCertificateHasBeenSet;

                    /**
                     * <p>重要提示字段</p>
                     */
                    std::string m_important;
                    bool m_importantHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BIZLICENSEOCRRESPONSE_H_
