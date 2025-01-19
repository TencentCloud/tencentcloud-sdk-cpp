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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PARSENFCDATARESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PARSENFCDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ParseNfcData返回参数结构体
                */
                class ParseNfcDataResponse : public AbstractModel
                {
                public:
                    ParseNfcDataResponse();
                    ~ParseNfcDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取结果码。
- 取值范围：0为首次查询成功，-1为查询失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultCode 结果码。
- 取值范围：0为首次查询成功，-1为查询失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultCode() const;

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdNum 身份证号。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 姓名。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取照片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Picture 照片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPicture() const;

                    /**
                     * 判断参数 Picture 是否已赋值
                     * @return Picture 是否已赋值
                     * 
                     */
                    bool PictureHasBeenSet() const;

                    /**
                     * 获取出生日期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthDate 出生日期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBirthDate() const;

                    /**
                     * 判断参数 BirthDate 是否已赋值
                     * @return BirthDate 是否已赋值
                     * 
                     */
                    bool BirthDateHasBeenSet() const;

                    /**
                     * 获取有效期起始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime 有效期起始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取有效期结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 有效期结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取住址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address 住址。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取民族。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nation 民族。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取性别。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sex 性别。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取类型。
- 取值范围：
01：身份证。 
03 ：中国护照。
04 ：军官证。
05 ：武警证。
06：港澳通行证 。
07 ：台胞证 。
08：外国护照 。
09 ：士兵证。
10 ：临时身份证。
11：户口本  。
12 ：警官证 。
13：外国人永久居留证。
14：港澳台居民居住证。
15：回乡证。
16：大陆居民来往台湾通行证。
99：其他证件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdType 类型。
- 取值范围：
01：身份证。 
03 ：中国护照。
04 ：军官证。
05 ：武警证。
06：港澳通行证 。
07 ：台胞证 。
08：外国护照 。
09 ：士兵证。
10 ：临时身份证。
11：户口本  。
12 ：警官证 。
13：外国人永久居留证。
14：港澳台居民居住证。
15：回乡证。
16：大陆居民来往台湾通行证。
99：其他证件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdType() const;

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取英文姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnName 英文姓名。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取签发机关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SigningOrganization 签发机关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSigningOrganization() const;

                    /**
                     * 判断参数 SigningOrganization 是否已赋值
                     * @return SigningOrganization 是否已赋值
                     * 
                     */
                    bool SigningOrganizationHasBeenSet() const;

                    /**
                     * 获取港澳台居民居住证，通行证号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherIdNum 港澳台居民居住证，通行证号码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOtherIdNum() const;

                    /**
                     * 判断参数 OtherIdNum 是否已赋值
                     * @return OtherIdNum 是否已赋值
                     * 
                     */
                    bool OtherIdNumHasBeenSet() const;

                    /**
                     * 获取旅行证件国籍。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nationality 旅行证件国籍。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取旅行证件机读区第二行 29~42 位。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonalNumber 旅行证件机读区第二行 29~42 位。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPersonalNumber() const;

                    /**
                     * 判断参数 PersonalNumber 是否已赋值
                     * @return PersonalNumber 是否已赋值
                     * 
                     */
                    bool PersonalNumberHasBeenSet() const;

                    /**
                     * 获取旅行证件类的核验结果。
- JSON格式如下：
{"result_issuer ":"签发者证书合法性验证结果 ","result_paper":"证件安全对象合法性验证结果 ","result_data" :"防数据篡改验证结果 ","result_chip" :"防证书件芯片被复制验证结果"} 。
- 取值范围： 0:验证通过，1: 验证不通过，2: 未验证，3:部分通过，当4项核验结果都为0时，表示证件为真。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckMRTD 旅行证件类的核验结果。
- JSON格式如下：
{"result_issuer ":"签发者证书合法性验证结果 ","result_paper":"证件安全对象合法性验证结果 ","result_data" :"防数据篡改验证结果 ","result_chip" :"防证书件芯片被复制验证结果"} 。
- 取值范围： 0:验证通过，1: 验证不通过，2: 未验证，3:部分通过，当4项核验结果都为0时，表示证件为真。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCheckMRTD() const;

                    /**
                     * 判断参数 CheckMRTD 是否已赋值
                     * @return CheckMRTD 是否已赋值
                     * 
                     */
                    bool CheckMRTDHasBeenSet() const;

                    /**
                     * 获取身份证照片面合成图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageA 身份证照片面合成图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageA() const;

                    /**
                     * 判断参数 ImageA 是否已赋值
                     * @return ImageA 是否已赋值
                     * 
                     */
                    bool ImageAHasBeenSet() const;

                    /**
                     * 获取身份证国徽面合成图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageB 身份证国徽面合成图片。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImageB() const;

                    /**
                     * 判断参数 ImageB 是否已赋值
                     * @return ImageB 是否已赋值
                     * 
                     */
                    bool ImageBHasBeenSet() const;

                    /**
                     * 获取对result code的结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultDescription 对result code的结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultDescription() const;

                    /**
                     * 判断参数 ResultDescription 是否已赋值
                     * @return ResultDescription 是否已赋值
                     * 
                     */
                    bool ResultDescriptionHasBeenSet() const;

                private:

                    /**
                     * 结果码。
- 取值范围：0为首次查询成功，-1为查询失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * 姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 照片。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_picture;
                    bool m_pictureHasBeenSet;

                    /**
                     * 出生日期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthDate;
                    bool m_birthDateHasBeenSet;

                    /**
                     * 有效期起始时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 有效期结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 住址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 民族。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * 性别。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 类型。
- 取值范围：
01：身份证。 
03 ：中国护照。
04 ：军官证。
05 ：武警证。
06：港澳通行证 。
07 ：台胞证 。
08：外国护照 。
09 ：士兵证。
10 ：临时身份证。
11：户口本  。
12 ：警官证 。
13：外国人永久居留证。
14：港澳台居民居住证。
15：回乡证。
16：大陆居民来往台湾通行证。
99：其他证件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 英文姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * 签发机关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signingOrganization;
                    bool m_signingOrganizationHasBeenSet;

                    /**
                     * 港澳台居民居住证，通行证号码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otherIdNum;
                    bool m_otherIdNumHasBeenSet;

                    /**
                     * 旅行证件国籍。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * 旅行证件机读区第二行 29~42 位。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_personalNumber;
                    bool m_personalNumberHasBeenSet;

                    /**
                     * 旅行证件类的核验结果。
- JSON格式如下：
{"result_issuer ":"签发者证书合法性验证结果 ","result_paper":"证件安全对象合法性验证结果 ","result_data" :"防数据篡改验证结果 ","result_chip" :"防证书件芯片被复制验证结果"} 。
- 取值范围： 0:验证通过，1: 验证不通过，2: 未验证，3:部分通过，当4项核验结果都为0时，表示证件为真。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkMRTD;
                    bool m_checkMRTDHasBeenSet;

                    /**
                     * 身份证照片面合成图片。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageA;
                    bool m_imageAHasBeenSet;

                    /**
                     * 身份证国徽面合成图片。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageB;
                    bool m_imageBHasBeenSet;

                    /**
                     * 对result code的结果描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultDescription;
                    bool m_resultDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PARSENFCDATARESPONSE_H_
