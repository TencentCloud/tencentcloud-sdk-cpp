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
                     * 获取<p>中文姓名</p>
                     * @return CnName <p>中文姓名</p>
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
                     * 获取<p>英文姓名</p>
                     * @return EnName <p>英文姓名</p>
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
                     * 获取<p>中文姓名对应电码</p>
                     * @return TelexCode <p>中文姓名对应电码</p>
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
                     * 获取<p>性别 ：“男M”或“女F”</p>
                     * @return Sex <p>性别 ：“男M”或“女F”</p>
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
                     * 获取<p>出生日期</p>
                     * @return Birthday <p>出生日期</p>
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
                     * 获取<p>永久性居民身份证。<br>0：非永久；<br>1：永久；<br>-1：未知。</p>
                     * @return Permanent <p>永久性居民身份证。<br>0：非永久；<br>1：永久；<br>-1：未知。</p>
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
                     * 获取<p>身份证号码</p>
                     * @return IdNum <p>身份证号码</p>
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
                     * 获取<p>证件符号，出生日期下的符号，例如&quot;***AZ&quot;</p>
                     * @return Symbol <p>证件符号，出生日期下的符号，例如&quot;***AZ&quot;</p>
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
                     * 获取<p>首次签发日期</p>
                     * @return FirstIssueDate <p>首次签发日期</p>
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
                     * 获取<p>最近领用日期</p>
                     * @return CurrentIssueDate <p>最近领用日期</p>
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
                     * 获取<p>真假判断。<br>0：无法判断（图像模糊、不完整、反光、过暗等导致无法判断）；<br>1：假；<br>2：真。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeDetectResult <p>真假判断。<br>0：无法判断（图像模糊、不完整、反光、过暗等导致无法判断）；<br>1：假；<br>2：真。</p>
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
                     * 获取<p>Base64编码的证件左侧人像大图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeadImage <p>Base64编码的证件左侧人像大图</p>
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
                     * 获取<p>Base64编码的证件右侧人像小图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmallHeadImage <p>Base64编码的证件右侧人像小图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSmallHeadImage() const;

                    /**
                     * 判断参数 SmallHeadImage 是否已赋值
                     * @return SmallHeadImage 是否已赋值
                     * 
                     */
                    bool SmallHeadImageHasBeenSet() const;

                    /**
                     * 获取<p>该字段已废弃， 将固定返回空数组，不建议使用。</p>
                     * @return WarningCode <p>该字段已废弃， 将固定返回空数组，不建议使用。</p>
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
                     * 获取<p>该字段仅对国际站请求起作用，国内站该字段将固定返回空数组。国际站告警码如下：    告警码-9101 证件边框不完整告警-9102 证件复印件告警-9103 证件翻拍告警-9104 证件PS告警-9107 证件反光告警-9108 证件模糊告警-9109 告警能力未开通</p>
                     * @return WarnCardInfos <p>该字段仅对国际站请求起作用，国内站该字段将固定返回空数组。国际站告警码如下：    告警码-9101 证件边框不完整告警-9102 证件复印件告警-9103 证件翻拍告警-9104 证件PS告警-9107 证件反光告警-9108 证件模糊告警-9109 告警能力未开通</p>
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
                     * 获取<p>证件透明视窗内的文本信息</p>
                     * @return WindowEmbeddedText <p>证件透明视窗内的文本信息</p>
                     * 
                     */
                    std::string GetWindowEmbeddedText() const;

                    /**
                     * 判断参数 WindowEmbeddedText 是否已赋值
                     * @return WindowEmbeddedText 是否已赋值
                     * 
                     */
                    bool WindowEmbeddedTextHasBeenSet() const;

                private:

                    /**
                     * <p>中文姓名</p>
                     */
                    std::string m_cnName;
                    bool m_cnNameHasBeenSet;

                    /**
                     * <p>英文姓名</p>
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * <p>中文姓名对应电码</p>
                     */
                    std::string m_telexCode;
                    bool m_telexCodeHasBeenSet;

                    /**
                     * <p>性别 ：“男M”或“女F”</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>出生日期</p>
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * <p>永久性居民身份证。<br>0：非永久；<br>1：永久；<br>-1：未知。</p>
                     */
                    int64_t m_permanent;
                    bool m_permanentHasBeenSet;

                    /**
                     * <p>身份证号码</p>
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * <p>证件符号，出生日期下的符号，例如&quot;***AZ&quot;</p>
                     */
                    std::string m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * <p>首次签发日期</p>
                     */
                    std::string m_firstIssueDate;
                    bool m_firstIssueDateHasBeenSet;

                    /**
                     * <p>最近领用日期</p>
                     */
                    std::string m_currentIssueDate;
                    bool m_currentIssueDateHasBeenSet;

                    /**
                     * <p>真假判断。<br>0：无法判断（图像模糊、不完整、反光、过暗等导致无法判断）；<br>1：假；<br>2：真。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fakeDetectResult;
                    bool m_fakeDetectResultHasBeenSet;

                    /**
                     * <p>Base64编码的证件左侧人像大图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_headImage;
                    bool m_headImageHasBeenSet;

                    /**
                     * <p>Base64编码的证件右侧人像小图</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_smallHeadImage;
                    bool m_smallHeadImageHasBeenSet;

                    /**
                     * <p>该字段已废弃， 将固定返回空数组，不建议使用。</p>
                     */
                    std::vector<int64_t> m_warningCode;
                    bool m_warningCodeHasBeenSet;

                    /**
                     * <p>该字段仅对国际站请求起作用，国内站该字段将固定返回空数组。国际站告警码如下：    告警码-9101 证件边框不完整告警-9102 证件复印件告警-9103 证件翻拍告警-9104 证件PS告警-9107 证件反光告警-9108 证件模糊告警-9109 告警能力未开通</p>
                     */
                    std::vector<int64_t> m_warnCardInfos;
                    bool m_warnCardInfosHasBeenSet;

                    /**
                     * <p>证件透明视窗内的文本信息</p>
                     */
                    std::string m_windowEmbeddedText;
                    bool m_windowEmbeddedTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_HKIDCARDOCRRESPONSE_H_
