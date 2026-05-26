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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTRESPONSE_H_

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
                * GetWxNFCResult返回参数结构体
                */
                class GetWxNFCResultResponse : public AbstractModel
                {
                public:
                    GetWxNFCResultResponse();
                    ~GetWxNFCResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>NFC计费结果码，NFC识读成功一次则计费一次（同一个NFC请求重复拉取结果不会重复计费）。计费结果码取值范围：<br>  0：识读成功，计费<br>-1：识读失败，不计费</p>
                     * @return ResultCode <p>NFC计费结果码，NFC识读成功一次则计费一次（同一个NFC请求重复拉取结果不会重复计费）。计费结果码取值范围：<br>  0：识读成功，计费<br>-1：识读失败，不计费</p>
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
                     * 获取<p>身份证号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdNum <p>身份证号</p>
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
                     * 获取<p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>姓名</p>
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
                     * 获取<p>证件中的人像照片</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Picture <p>证件中的人像照片</p>
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
                     * 获取<p>身份类证件正面照片（人像面）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardFrontImg <p>身份类证件正面照片（人像面）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdCardFrontImg() const;

                    /**
                     * 判断参数 IdCardFrontImg 是否已赋值
                     * @return IdCardFrontImg 是否已赋值
                     * 
                     */
                    bool IdCardFrontImgHasBeenSet() const;

                    /**
                     * 获取<p>身份类证件背面照片（国徽面）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardBackImg <p>身份类证件背面照片（国徽面）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdCardBackImg() const;

                    /**
                     * 判断参数 IdCardBackImg 是否已赋值
                     * @return IdCardBackImg 是否已赋值
                     * 
                     */
                    bool IdCardBackImgHasBeenSet() const;

                    /**
                     * 获取<p>出生日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthDate <p>出生日期</p>
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
                     * 获取<p>有效期起始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime <p>有效期起始时间</p>
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
                     * 获取<p>有效期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime <p>有效期结束时间</p>
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
                     * 获取<p>住址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address <p>住址</p>
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
                     * 获取<p>民族</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nation <p>民族</p>
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
                     * 获取<p>性别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sex <p>性别</p>
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
                     * 获取<p>证件类型</p><p>枚举值：</p><ul><li>01： 身份证</li><li>03： 中国护照</li><li>06： 港澳通行证</li><li>07： 台胞证</li><li>08： 外国护照</li><li>13： 外国人永久居留证</li><li>14： 港澳台居民居住证</li><li>15： 回乡证</li><li>16： 大陆居民来往台湾通行证</li><li>99： 其他证件</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdType <p>证件类型</p><p>枚举值：</p><ul><li>01： 身份证</li><li>03： 中国护照</li><li>06： 港澳通行证</li><li>07： 台胞证</li><li>08： 外国护照</li><li>13： 外国人永久居留证</li><li>14： 港澳台居民居住证</li><li>15： 回乡证</li><li>16： 大陆居民来往台湾通行证</li><li>99： 其他证件</li></ul>
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
                     * 获取<p>英文姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnName <p>英文姓名</p>
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
                     * 获取<p>签发机关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SigningOrganization <p>签发机关</p>
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
                     * 获取<p>港澳台居民居住证，通行证号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherIdNum <p>港澳台居民居住证，通行证号码</p>
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
                     * 获取<p>旅行证件国籍</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nationality <p>旅行证件国籍</p>
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
                     * 获取<p>旅行证件机读区第二行 29~42 位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonalNumber <p>旅行证件机读区第二行 29~42 位</p>
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
                     * 获取<p>证件的验真结果</p><ul><li>JSON格式如下： {&quot;result_issuer &quot;:&quot;签发者证书合法性验证结果 &quot;,&quot;result_paper&quot;:&quot;证件安全对象合法性验证结果 &quot;,&quot;result_data&quot; :&quot;防数据篡改验证结果 &quot;,&quot;result_chip&quot; :&quot;防证书件芯片被复制验证结果&quot;} 。 - 取值范围： 0:验证通过，1: 验证不通过，2: 未验证，3:部分通过，当4项核验结果都为0时，表示证件为真。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckMRTD <p>证件的验真结果</p><ul><li>JSON格式如下： {&quot;result_issuer &quot;:&quot;签发者证书合法性验证结果 &quot;,&quot;result_paper&quot;:&quot;证件安全对象合法性验证结果 &quot;,&quot;result_data&quot; :&quot;防数据篡改验证结果 &quot;,&quot;result_chip&quot; :&quot;防证书件芯片被复制验证结果&quot;} 。 - 取值范围： 0:验证通过，1: 验证不通过，2: 未验证，3:部分通过，当4项核验结果都为0时，表示证件为真。</li></ul>
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

                private:

                    /**
                     * <p>NFC计费结果码，NFC识读成功一次则计费一次（同一个NFC请求重复拉取结果不会重复计费）。计费结果码取值范围：<br>  0：识读成功，计费<br>-1：识读失败，不计费</p>
                     */
                    std::string m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * <p>身份证号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * <p>姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>证件中的人像照片</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_picture;
                    bool m_pictureHasBeenSet;

                    /**
                     * <p>身份类证件正面照片（人像面）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCardFrontImg;
                    bool m_idCardFrontImgHasBeenSet;

                    /**
                     * <p>身份类证件背面照片（国徽面）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCardBackImg;
                    bool m_idCardBackImgHasBeenSet;

                    /**
                     * <p>出生日期</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthDate;
                    bool m_birthDateHasBeenSet;

                    /**
                     * <p>有效期起始时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>有效期结束时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>住址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>民族</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * <p>性别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>证件类型</p><p>枚举值：</p><ul><li>01： 身份证</li><li>03： 中国护照</li><li>06： 港澳通行证</li><li>07： 台胞证</li><li>08： 外国护照</li><li>13： 外国人永久居留证</li><li>14： 港澳台居民居住证</li><li>15： 回乡证</li><li>16： 大陆居民来往台湾通行证</li><li>99： 其他证件</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * <p>英文姓名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enName;
                    bool m_enNameHasBeenSet;

                    /**
                     * <p>签发机关</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signingOrganization;
                    bool m_signingOrganizationHasBeenSet;

                    /**
                     * <p>港澳台居民居住证，通行证号码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_otherIdNum;
                    bool m_otherIdNumHasBeenSet;

                    /**
                     * <p>旅行证件国籍</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nationality;
                    bool m_nationalityHasBeenSet;

                    /**
                     * <p>旅行证件机读区第二行 29~42 位</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_personalNumber;
                    bool m_personalNumberHasBeenSet;

                    /**
                     * <p>证件的验真结果</p><ul><li>JSON格式如下： {&quot;result_issuer &quot;:&quot;签发者证书合法性验证结果 &quot;,&quot;result_paper&quot;:&quot;证件安全对象合法性验证结果 &quot;,&quot;result_data&quot; :&quot;防数据篡改验证结果 &quot;,&quot;result_chip&quot; :&quot;防证书件芯片被复制验证结果&quot;} 。 - 取值范围： 0:验证通过，1: 验证不通过，2: 未验证，3:部分通过，当4项核验结果都为0时，表示证件为真。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkMRTD;
                    bool m_checkMRTDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWXNFCRESULTRESPONSE_H_
