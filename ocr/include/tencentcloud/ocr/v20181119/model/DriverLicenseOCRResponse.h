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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_DRIVERLICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_DRIVERLICENSEOCRRESPONSE_H_

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
                * DriverLicenseOCR返回参数结构体
                */
                class DriverLicenseOCRResponse : public AbstractModel
                {
                public:
                    DriverLicenseOCRResponse();
                    ~DriverLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>驾驶证正页姓名</p>
                     * @return Name <p>驾驶证正页姓名</p>
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
                     * 获取<p>性别</p>
                     * @return Sex <p>性别</p>
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
                     * 获取<p>国籍</p>
                     * @return Nationality <p>国籍</p>
                     * 
                     */
                    std::string GetNationality() const;

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                    /**
                     * 获取<p>住址</p>
                     * @return Address <p>住址</p>
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
                     * 获取<p>出生日期（YYYY-MM-DD）</p>
                     * @return DateOfBirth <p>出生日期（YYYY-MM-DD）</p>
                     * 
                     */
                    std::string GetDateOfBirth() const;

                    /**
                     * 判断参数 DateOfBirth 是否已赋值
                     * @return DateOfBirth 是否已赋值
                     * 
                     */
                    bool DateOfBirthHasBeenSet() const;

                    /**
                     * 获取<p>初次领证日期（YYYY-MM-DD）</p>
                     * @return DateOfFirstIssue <p>初次领证日期（YYYY-MM-DD）</p>
                     * 
                     */
                    std::string GetDateOfFirstIssue() const;

                    /**
                     * 判断参数 DateOfFirstIssue 是否已赋值
                     * @return DateOfFirstIssue 是否已赋值
                     * 
                     */
                    bool DateOfFirstIssueHasBeenSet() const;

                    /**
                     * 获取<p>准驾车型</p>
                     * @return Class <p>准驾车型</p>
                     * 
                     */
                    std::string GetClass() const;

                    /**
                     * 判断参数 Class 是否已赋值
                     * @return Class 是否已赋值
                     * 
                     */
                    bool ClassHasBeenSet() const;

                    /**
                     * 获取<p>有效期开始时间（YYYY-MM-DD）</p>
                     * @return StartDate <p>有效期开始时间（YYYY-MM-DD）</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>有效期截止时间（新版驾驶证返回 YYYY-MM-DD，老版驾驶证返回有效期限 X年；若驾驶证有效期为长期，则返回&quot;长期&quot;）</p>
                     * @return EndDate <p>有效期截止时间（新版驾驶证返回 YYYY-MM-DD，老版驾驶证返回有效期限 X年；若驾驶证有效期为长期，则返回&quot;长期&quot;）</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取<p>驾驶证正页证号</p>
                     * @return CardCode <p>驾驶证正页证号</p>
                     * 
                     */
                    std::string GetCardCode() const;

                    /**
                     * 判断参数 CardCode 是否已赋值
                     * @return CardCode 是否已赋值
                     * 
                     */
                    bool CardCodeHasBeenSet() const;

                    /**
                     * 获取<p>档案编号</p>
                     * @return ArchivesCode <p>档案编号</p>
                     * 
                     */
                    std::string GetArchivesCode() const;

                    /**
                     * 判断参数 ArchivesCode 是否已赋值
                     * @return ArchivesCode 是否已赋值
                     * 
                     */
                    bool ArchivesCodeHasBeenSet() const;

                    /**
                     * 获取<p>记录</p>
                     * @return Record <p>记录</p>
                     * 
                     */
                    std::string GetRecord() const;

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     * 
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取<p>Code 告警码列表和释义：<br>-9102  复印件告警<br>-9103  翻拍件告警<br>-9104  反光告警<br>-9105  模糊告警<br>-9106  边框不完整告警<br>注：告警码可以同时存在多个</p>
                     * @return RecognizeWarnCode <p>Code 告警码列表和释义：<br>-9102  复印件告警<br>-9103  翻拍件告警<br>-9104  反光告警<br>-9105  模糊告警<br>-9106  边框不完整告警<br>注：告警码可以同时存在多个</p>
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
                     * 获取<p>告警码说明：<br>WARN_DRIVER_LICENSE_COPY_CARD 复印件告警<br>WARN_DRIVER_LICENSE_SCREENED_CARD 翻拍件告警<br>WARN_DRIVER_LICENSE_REFLECTION 反光告警<br>WARN_DRIVER_LICENSE_BLUR 模糊告警<br>WARN_DRIVER_LICENSE_BORDER_INCOMPLETE 边框不完整告警<br>注：告警信息可以同时存在多个</p>
                     * @return RecognizeWarnMsg <p>告警码说明：<br>WARN_DRIVER_LICENSE_COPY_CARD 复印件告警<br>WARN_DRIVER_LICENSE_SCREENED_CARD 翻拍件告警<br>WARN_DRIVER_LICENSE_REFLECTION 反光告警<br>WARN_DRIVER_LICENSE_BLUR 模糊告警<br>WARN_DRIVER_LICENSE_BORDER_INCOMPLETE 边框不完整告警<br>注：告警信息可以同时存在多个</p>
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
                     * 获取<p>发证单位</p>
                     * @return IssuingAuthority <p>发证单位</p>
                     * 
                     */
                    std::string GetIssuingAuthority() const;

                    /**
                     * 判断参数 IssuingAuthority 是否已赋值
                     * @return IssuingAuthority 是否已赋值
                     * 
                     */
                    bool IssuingAuthorityHasBeenSet() const;

                    /**
                     * 获取<p>状态（仅电子驾驶证支持返回该字段）</p>
                     * @return State <p>状态（仅电子驾驶证支持返回该字段）</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>累积记分（仅电子驾驶证支持返回该字段）</p>
                     * @return CumulativeScore <p>累积记分（仅电子驾驶证支持返回该字段）</p>
                     * 
                     */
                    std::string GetCumulativeScore() const;

                    /**
                     * 判断参数 CumulativeScore 是否已赋值
                     * @return CumulativeScore 是否已赋值
                     * 
                     */
                    bool CumulativeScoreHasBeenSet() const;

                    /**
                     * 获取<p>当前时间（仅电子驾驶证支持返回该字段）</p>
                     * @return CurrentTime <p>当前时间（仅电子驾驶证支持返回该字段）</p>
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 判断参数 CurrentTime 是否已赋值
                     * @return CurrentTime 是否已赋值
                     * 
                     */
                    bool CurrentTimeHasBeenSet() const;

                    /**
                     * 获取<p>生成时间（仅电子驾驶证支持返回该字段）</p>
                     * @return GenerateTime <p>生成时间（仅电子驾驶证支持返回该字段）</p>
                     * 
                     */
                    std::string GetGenerateTime() const;

                    /**
                     * 判断参数 GenerateTime 是否已赋值
                     * @return GenerateTime 是否已赋值
                     * 
                     */
                    bool GenerateTimeHasBeenSet() const;

                    /**
                     * 获取<p>驾驶证副页姓名</p>
                     * @return BackPageName <p>驾驶证副页姓名</p>
                     * 
                     */
                    std::string GetBackPageName() const;

                    /**
                     * 判断参数 BackPageName 是否已赋值
                     * @return BackPageName 是否已赋值
                     * 
                     */
                    bool BackPageNameHasBeenSet() const;

                    /**
                     * 获取<p>驾驶证副页证号</p>
                     * @return BackPageCardCode <p>驾驶证副页证号</p>
                     * 
                     */
                    std::string GetBackPageCardCode() const;

                    /**
                     * 判断参数 BackPageCardCode 是否已赋值
                     * @return BackPageCardCode 是否已赋值
                     * 
                     */
                    bool BackPageCardCodeHasBeenSet() const;

                    /**
                     * 获取<p>驾驶证类型<br>电子驾驶证：Electronic<br>普通驾驶证：Normal</p>
                     * @return DriverLicenseType <p>驾驶证类型<br>电子驾驶证：Electronic<br>普通驾驶证：Normal</p>
                     * 
                     */
                    std::string GetDriverLicenseType() const;

                    /**
                     * 判断参数 DriverLicenseType 是否已赋值
                     * @return DriverLicenseType 是否已赋值
                     * 
                     */
                    bool DriverLicenseTypeHasBeenSet() const;

                private:

                    /**
                     * <p>驾驶证正页姓名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>性别</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>国籍</p>
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * <p>住址</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>出生日期（YYYY-MM-DD）</p>
                     */
                    std::string m_dateOfBirth;
                    bool m_dateOfBirthHasBeenSet;

                    /**
                     * <p>初次领证日期（YYYY-MM-DD）</p>
                     */
                    std::string m_dateOfFirstIssue;
                    bool m_dateOfFirstIssueHasBeenSet;

                    /**
                     * <p>准驾车型</p>
                     */
                    std::string m_class;
                    bool m_classHasBeenSet;

                    /**
                     * <p>有效期开始时间（YYYY-MM-DD）</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>有效期截止时间（新版驾驶证返回 YYYY-MM-DD，老版驾驶证返回有效期限 X年；若驾驶证有效期为长期，则返回&quot;长期&quot;）</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>驾驶证正页证号</p>
                     */
                    std::string m_cardCode;
                    bool m_cardCodeHasBeenSet;

                    /**
                     * <p>档案编号</p>
                     */
                    std::string m_archivesCode;
                    bool m_archivesCodeHasBeenSet;

                    /**
                     * <p>记录</p>
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * <p>Code 告警码列表和释义：<br>-9102  复印件告警<br>-9103  翻拍件告警<br>-9104  反光告警<br>-9105  模糊告警<br>-9106  边框不完整告警<br>注：告警码可以同时存在多个</p>
                     */
                    std::vector<int64_t> m_recognizeWarnCode;
                    bool m_recognizeWarnCodeHasBeenSet;

                    /**
                     * <p>告警码说明：<br>WARN_DRIVER_LICENSE_COPY_CARD 复印件告警<br>WARN_DRIVER_LICENSE_SCREENED_CARD 翻拍件告警<br>WARN_DRIVER_LICENSE_REFLECTION 反光告警<br>WARN_DRIVER_LICENSE_BLUR 模糊告警<br>WARN_DRIVER_LICENSE_BORDER_INCOMPLETE 边框不完整告警<br>注：告警信息可以同时存在多个</p>
                     */
                    std::vector<std::string> m_recognizeWarnMsg;
                    bool m_recognizeWarnMsgHasBeenSet;

                    /**
                     * <p>发证单位</p>
                     */
                    std::string m_issuingAuthority;
                    bool m_issuingAuthorityHasBeenSet;

                    /**
                     * <p>状态（仅电子驾驶证支持返回该字段）</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>累积记分（仅电子驾驶证支持返回该字段）</p>
                     */
                    std::string m_cumulativeScore;
                    bool m_cumulativeScoreHasBeenSet;

                    /**
                     * <p>当前时间（仅电子驾驶证支持返回该字段）</p>
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * <p>生成时间（仅电子驾驶证支持返回该字段）</p>
                     */
                    std::string m_generateTime;
                    bool m_generateTimeHasBeenSet;

                    /**
                     * <p>驾驶证副页姓名</p>
                     */
                    std::string m_backPageName;
                    bool m_backPageNameHasBeenSet;

                    /**
                     * <p>驾驶证副页证号</p>
                     */
                    std::string m_backPageCardCode;
                    bool m_backPageCardCodeHasBeenSet;

                    /**
                     * <p>驾驶证类型<br>电子驾驶证：Electronic<br>普通驾驶证：Normal</p>
                     */
                    std::string m_driverLicenseType;
                    bool m_driverLicenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_DRIVERLICENSEOCRRESPONSE_H_
