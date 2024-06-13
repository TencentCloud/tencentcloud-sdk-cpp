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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRRESPONSE_H_

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
                * HKIDCardOCR返回参数结构体
                */
                class HKIDCardOCRResponse : public AbstractModel
                {
                public:
                    HKIDCardOCRResponse();
                    ~HKIDCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取中文姓名
                     * @return CnName 中文姓名
                     * 
                     */
                    std::string GetCnName() const;

                    /**
                     * 判断参数 CnName 是否已赋值
                     * @return CnName 是否已赋值
                     * 
                     */
                    bool CnNameHasBeenSet() const;

                    /**
                     * 获取英文姓名
                     * @return EnName 英文姓名
                     * 
                     */
                    std::string GetEnName() const;

                    /**
                     * 判断参数 EnName 是否已赋值
                     * @return EnName 是否已赋值
                     * 
                     */
                    bool EnNameHasBeenSet() const;

                    /**
                     * 获取中文姓名对应电码
                     * @return TelexCode 中文姓名对应电码
                     * 
                     */
                    std::string GetTelexCode() const;

                    /**
                     * 判断参数 TelexCode 是否已赋值
                     * @return TelexCode 是否已赋值
                     * 
                     */
                    bool TelexCodeHasBeenSet() const;

                    /**
                     * 获取性别 ：“男M”或“女F”
                     * @return Sex 性别 ：“男M”或“女F”
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
                     * 获取出生日期
                     * @return Birthday 出生日期
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
                     * 获取永久性居民身份证。
0：非永久；
1：永久；
-1：未知。
                     * @return Permanent 永久性居民身份证。
0：非永久；
1：永久；
-1：未知。
                     * 
                     */
                    int64_t GetPermanent() const;

                    /**
                     * 判断参数 Permanent 是否已赋值
                     * @return Permanent 是否已赋值
                     * 
                     */
                    bool PermanentHasBeenSet() const;

                    /**
                     * 获取身份证号码
                     * @return IdNum 身份证号码
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
                     * 获取证件符号，出生日期下的符号，例如"***AZ"
                     * @return Symbol 证件符号，出生日期下的符号，例如"***AZ"
                     * 
                     */
                    std::string GetSymbol() const;

                    /**
                     * 判断参数 Symbol 是否已赋值
                     * @return Symbol 是否已赋值
                     * 
                     */
                    bool SymbolHasBeenSet() const;

                    /**
                     * 获取首次签发日期
                     * @return FirstIssueDate 首次签发日期
                     * 
                     */
                    std::string GetFirstIssueDate() const;

                    /**
                     * 判断参数 FirstIssueDate 是否已赋值
                     * @return FirstIssueDate 是否已赋值
                     * 
                     */
                    bool FirstIssueDateHasBeenSet() const;

                    /**
                     * 获取最近领用日期
                     * @return CurrentIssueDate 最近领用日期
                     * 
                     */
                    std::string GetCurrentIssueDate() const;

                    /**
                     * 判断参数 CurrentIssueDate 是否已赋值
                     * @return CurrentIssueDate 是否已赋值
                     * 
                     */
                    bool CurrentIssueDateHasBeenSet() const;

                    /**
                     * 获取真假判断。
0：无法判断（图像模糊、不完整、反光、过暗等导致无法判断）；
1：假；
2：真。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeDetectResult 真假判断。
0：无法判断（图像模糊、不完整、反光、过暗等导致无法判断）；
1：假；
2：真。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetFakeDetectResult() const;

                    /**
                     * 判断参数 FakeDetectResult 是否已赋值
                     * @return FakeDetectResult 是否已赋值
                     * @deprecated
                     */
                    bool FakeDetectResultHasBeenSet() const;

                    /**
                     * 获取人像照片Base64后的结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadImage 人像照片Base64后的结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHeadImage() const;

                    /**
                     * 判断参数 HeadImage 是否已赋值
                     * @return HeadImage 是否已赋值
                     * 
                     */
                    bool HeadImageHasBeenSet() const;

                    /**
                     * 获取多重告警码，当身份证是翻拍、复印件时返回对应告警码。
-9102：证照复印件告警
-9103：证照翻拍告警
                     * @return WarningCode 多重告警码，当身份证是翻拍、复印件时返回对应告警码。
-9102：证照复印件告警
-9103：证照翻拍告警
                     * @deprecated
                     */
                    std::vector<int64_t> GetWarningCode() const;

                    /**
                     * 判断参数 WarningCode 是否已赋值
                     * @return WarningCode 是否已赋值
                     * @deprecated
                     */
                    bool WarningCodeHasBeenSet() const;

                    /**
                     * 获取告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9104 证件PS告警
-9107 证件反光告警
-9108 证件模糊告警
-9109 告警能力未开通
                     * @return WarnCardInfos 告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9104 证件PS告警
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

                private:

                    /**
                     * 中文姓名
                     */
                    std::string m_cnName;
                    bool m_cnNameHasBeenSet;

                    /**
                     * 英文姓名
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * 中文姓名对应电码
                     */
                    std::string m_telexCode;
                    bool m_telexCodeHasBeenSet;

                    /**
                     * 性别 ：“男M”或“女F”
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 出生日期
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 永久性居民身份证。
0：非永久；
1：永久；
-1：未知。
                     */
                    int64_t m_permanent;
                    bool m_permanentHasBeenSet;

                    /**
                     * 身份证号码
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * 证件符号，出生日期下的符号，例如"***AZ"
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * 首次签发日期
                     */
                    std::string m_firstIssueDate;
                    bool m_firstIssueDateHasBeenSet;

                    /**
                     * 最近领用日期
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                    /**
                     * 真假判断。
0：无法判断（图像模糊、不完整、反光、过暗等导致无法判断）；
1：假；
2：真。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fakeDetectResult;
                    bool m_fakeDetectResultHasBeenSet;

                    /**
                     * 人像照片Base64后的结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_headImage;
                    bool m_headImageHasBeenSet;

                    /**
                     * 多重告警码，当身份证是翻拍、复印件时返回对应告警码。
-9102：证照复印件告警
-9103：证照翻拍告警
                     */
                    std::vector<int64_t> m_warningCode;
                    bool m_warningCodeHasBeenSet;

                    /**
                     * 告警码
-9101 证件边框不完整告警
-9102 证件复印件告警
-9103 证件翻拍告警
-9104 证件PS告警
-9107 证件反光告警
-9108 证件模糊告警
-9109 告警能力未开通
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRRESPONSE_H_
