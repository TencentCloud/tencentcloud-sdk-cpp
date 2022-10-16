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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CARDVERIFYRESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CARDVERIFYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/FileInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 核身过程中，鉴伪或OCR单次结果。
                */
                class CardVerifyResult : public AbstractModel
                {
                public:
                    CardVerifyResult();
                    ~CardVerifyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴伪或OCR是否成功
                     * @return IsPass 鉴伪或OCR是否成功
                     */
                    bool GetIsPass() const;

                    /**
                     * 设置鉴伪或OCR是否成功
                     * @param IsPass 鉴伪或OCR是否成功
                     */
                    void SetIsPass(const bool& _isPass);

                    /**
                     * 判断参数 IsPass 是否已赋值
                     * @return IsPass 是否已赋值
                     */
                    bool IsPassHasBeenSet() const;

                    /**
                     * 获取身份证鉴伪视频，仅开启证件视频鉴伪功能时返回，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CardVideo 身份证鉴伪视频，仅开启证件视频鉴伪功能时返回，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo GetCardVideo() const;

                    /**
                     * 设置身份证鉴伪视频，仅开启证件视频鉴伪功能时返回，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CardVideo 身份证鉴伪视频，仅开启证件视频鉴伪功能时返回，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCardVideo(const FileInfo& _cardVideo);

                    /**
                     * 判断参数 CardVideo 是否已赋值
                     * @return CardVideo 是否已赋值
                     */
                    bool CardVideoHasBeenSet() const;

                    /**
                     * 获取证件照图片，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CardImage 证件照图片，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo GetCardImage() const;

                    /**
                     * 设置证件照图片，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CardImage 证件照图片，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCardImage(const FileInfo& _cardImage);

                    /**
                     * 判断参数 CardImage 是否已赋值
                     * @return CardImage 是否已赋值
                     */
                    bool CardImageHasBeenSet() const;

                    /**
                     * 获取证件照的文字识别结果，如果鉴伪失败或者ocr失败则该参数为空。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string 生日
- ID string 证号
- Name string 名字
- Address string 地址
- Type string 证件类型

IdCardType为PhilippinesVoteID时：
- Birthday  string 生日
- Address string 地址
- LastName string 姓氏
- FirstName string 姓名
- VIN string VIN号
- CivilStatus string 婚姻状况
- Citizenship string 国籍
- PrecinctNo string 地区

IdCardType为PhilippinesDrivingLicense时：
- Sex string 性别
- Birthday  string 生日
- Name string 姓名
- Address string 地址
- LastName string 姓氏
- FirstName string 首姓名
- MiddleName string 中间姓名
- Nationality string 国籍
- LicenseNo string 证号
- ExpiresDate string 有效期
- AgencyCode string 机构代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CardInfoOcrJson 证件照的文字识别结果，如果鉴伪失败或者ocr失败则该参数为空。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string 生日
- ID string 证号
- Name string 名字
- Address string 地址
- Type string 证件类型

IdCardType为PhilippinesVoteID时：
- Birthday  string 生日
- Address string 地址
- LastName string 姓氏
- FirstName string 姓名
- VIN string VIN号
- CivilStatus string 婚姻状况
- Citizenship string 国籍
- PrecinctNo string 地区

IdCardType为PhilippinesDrivingLicense时：
- Sex string 性别
- Birthday  string 生日
- Name string 姓名
- Address string 地址
- LastName string 姓氏
- FirstName string 首姓名
- MiddleName string 中间姓名
- Nationality string 国籍
- LicenseNo string 证号
- ExpiresDate string 有效期
- AgencyCode string 机构代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo GetCardInfoOcrJson() const;

                    /**
                     * 设置证件照的文字识别结果，如果鉴伪失败或者ocr失败则该参数为空。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string 生日
- ID string 证号
- Name string 名字
- Address string 地址
- Type string 证件类型

IdCardType为PhilippinesVoteID时：
- Birthday  string 生日
- Address string 地址
- LastName string 姓氏
- FirstName string 姓名
- VIN string VIN号
- CivilStatus string 婚姻状况
- Citizenship string 国籍
- PrecinctNo string 地区

IdCardType为PhilippinesDrivingLicense时：
- Sex string 性别
- Birthday  string 生日
- Name string 姓名
- Address string 地址
- LastName string 姓氏
- FirstName string 首姓名
- MiddleName string 中间姓名
- Nationality string 国籍
- LicenseNo string 证号
- ExpiresDate string 有效期
- AgencyCode string 机构代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CardInfoOcrJson 证件照的文字识别结果，如果鉴伪失败或者ocr失败则该参数为空。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string 生日
- ID string 证号
- Name string 名字
- Address string 地址
- Type string 证件类型

IdCardType为PhilippinesVoteID时：
- Birthday  string 生日
- Address string 地址
- LastName string 姓氏
- FirstName string 姓名
- VIN string VIN号
- CivilStatus string 婚姻状况
- Citizenship string 国籍
- PrecinctNo string 地区

IdCardType为PhilippinesDrivingLicense时：
- Sex string 性别
- Birthday  string 生日
- Name string 姓名
- Address string 地址
- LastName string 姓氏
- FirstName string 首姓名
- MiddleName string 中间姓名
- Nationality string 国籍
- LicenseNo string 证号
- ExpiresDate string 有效期
- AgencyCode string 机构代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCardInfoOcrJson(const FileInfo& _cardInfoOcrJson);

                    /**
                     * 判断参数 CardInfoOcrJson 是否已赋值
                     * @return CardInfoOcrJson 是否已赋值
                     */
                    bool CardInfoOcrJsonHasBeenSet() const;

                    /**
                     * 获取单次流程请求标示。
                     * @return RequestId 单次流程请求标示。
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置单次流程请求标示。
                     * @param RequestId 单次流程请求标示。
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * 鉴伪或OCR是否成功
                     */
                    bool m_isPass;
                    bool m_isPassHasBeenSet;

                    /**
                     * 身份证鉴伪视频，仅开启证件视频鉴伪功能时返回，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo m_cardVideo;
                    bool m_cardVideoHasBeenSet;

                    /**
                     * 证件照图片，url链接有效期10分钟。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo m_cardImage;
                    bool m_cardImageHasBeenSet;

                    /**
                     * 证件照的文字识别结果，如果鉴伪失败或者ocr失败则该参数为空。url链接有效期10分钟。格式为json文本信息。
IdCardType为HK时：
- CnName string 中文姓名
- EnName string 英文姓名
- TelexCode string 中文姓名对应电码
- Sex string 性别 ：“男M”或“女F”
- Birthday string 出生日期
- Permanent int 永久性居民身份证。0：非永久； 1：永久； -1：未知。
- IdNum string 身份证号码
- Symbol string 证件符号，出生日期下的符号，例如"***AZ"
- FirstIssueDate string 首次签发日期
- CurrentIssueDate string 最近领用日期

IdCardType为ML时：
- Sex string 男：LELAKI 女：PEREMPUAN
- Birthday  string 生日
- ID string 证号
- Name string 名字
- Address string 地址
- Type string 证件类型

IdCardType为PhilippinesVoteID时：
- Birthday  string 生日
- Address string 地址
- LastName string 姓氏
- FirstName string 姓名
- VIN string VIN号
- CivilStatus string 婚姻状况
- Citizenship string 国籍
- PrecinctNo string 地区

IdCardType为PhilippinesDrivingLicense时：
- Sex string 性别
- Birthday  string 生日
- Name string 姓名
- Address string 地址
- LastName string 姓氏
- FirstName string 首姓名
- MiddleName string 中间姓名
- Nationality string 国籍
- LicenseNo string 证号
- ExpiresDate string 有效期
- AgencyCode string 机构代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfo m_cardInfoOcrJson;
                    bool m_cardInfoOcrJsonHasBeenSet;

                    /**
                     * 单次流程请求标示。
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CARDVERIFYRESULT_H_
