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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_PERMANENTRESIDENCEPERMITINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_PERMANENTRESIDENCEPERMITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ContentInfo.h>
#include <tencentcloud/ocr/v20181119/model/CardWarnInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 外国人永久居留证信息返回
                */
                class PermanentResidencePermitInfo : public AbstractModel
                {
                public:
                    PermanentResidencePermitInfo();
                    ~PermanentResidencePermitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取姓名（人像面）
                     * @return Name 姓名（人像面）
                     * 
                     */
                    ContentInfo GetName() const;

                    /**
                     * 设置姓名（人像面）
                     * @param _name 姓名（人像面）
                     * 
                     */
                    void SetName(const ContentInfo& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取性别（人像面）
                     * @return Sex 性别（人像面）
                     * 
                     */
                    ContentInfo GetSex() const;

                    /**
                     * 设置性别（人像面）
                     * @param _sex 性别（人像面）
                     * 
                     */
                    void SetSex(const ContentInfo& _sex);

                    /**
                     * 判断参数 Sex 是否已赋值
                     * @return Sex 是否已赋值
                     * 
                     */
                    bool SexHasBeenSet() const;

                    /**
                     * 获取民族（人像面）
                     * @return Nation 民族（人像面）
                     * 
                     */
                    ContentInfo GetNation() const;

                    /**
                     * 设置民族（人像面）
                     * @param _nation 民族（人像面）
                     * 
                     */
                    void SetNation(const ContentInfo& _nation);

                    /**
                     * 判断参数 Nation 是否已赋值
                     * @return Nation 是否已赋值
                     * 
                     */
                    bool NationHasBeenSet() const;

                    /**
                     * 获取出生日期（人像面）
                     * @return Birth 出生日期（人像面）
                     * 
                     */
                    ContentInfo GetBirth() const;

                    /**
                     * 设置出生日期（人像面）
                     * @param _birth 出生日期（人像面）
                     * 
                     */
                    void SetBirth(const ContentInfo& _birth);

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取地址（人像面）
                     * @return Address 地址（人像面）
                     * 
                     */
                    ContentInfo GetAddress() const;

                    /**
                     * 设置地址（人像面）
                     * @param _address 地址（人像面）
                     * 
                     */
                    void SetAddress(const ContentInfo& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取公民身份号码（人像面）
                     * @return IdNum 公民身份号码（人像面）
                     * 
                     */
                    ContentInfo GetIdNum() const;

                    /**
                     * 设置公民身份号码（人像面）
                     * @param _idNum 公民身份号码（人像面）
                     * 
                     */
                    void SetIdNum(const ContentInfo& _idNum);

                    /**
                     * 判断参数 IdNum 是否已赋值
                     * @return IdNum 是否已赋值
                     * 
                     */
                    bool IdNumHasBeenSet() const;

                    /**
                     * 获取发证机关（国徽面）
                     * @return Authority 发证机关（国徽面）
                     * 
                     */
                    ContentInfo GetAuthority() const;

                    /**
                     * 设置发证机关（国徽面）
                     * @param _authority 发证机关（国徽面）
                     * 
                     */
                    void SetAuthority(const ContentInfo& _authority);

                    /**
                     * 判断参数 Authority 是否已赋值
                     * @return Authority 是否已赋值
                     * 
                     */
                    bool AuthorityHasBeenSet() const;

                    /**
                     * 获取证件有效期（国徽面）
                     * @return ValidDate 证件有效期（国徽面）
                     * 
                     */
                    ContentInfo GetValidDate() const;

                    /**
                     * 设置证件有效期（国徽面）
                     * @param _validDate 证件有效期（国徽面）
                     * 
                     */
                    void SetValidDate(const ContentInfo& _validDate);

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取WarnInfos，告警信息
                     * @return WarnInfos WarnInfos，告警信息
                     * 
                     */
                    CardWarnInfo GetWarnInfos() const;

                    /**
                     * 设置WarnInfos，告警信息
                     * @param _warnInfos WarnInfos，告警信息
                     * 
                     */
                    void SetWarnInfos(const CardWarnInfo& _warnInfos);

                    /**
                     * 判断参数 WarnInfos 是否已赋值
                     * @return WarnInfos 是否已赋值
                     * 
                     */
                    bool WarnInfosHasBeenSet() const;

                    /**
                     * 获取IdCard，裁剪后身份证照片的base64编码，请求 EnableCropImage 时返回；
                     * @return CardImage IdCard，裁剪后身份证照片的base64编码，请求 EnableCropImage 时返回；
                     * 
                     */
                    ContentInfo GetCardImage() const;

                    /**
                     * 设置IdCard，裁剪后身份证照片的base64编码，请求 EnableCropImage 时返回；
                     * @param _cardImage IdCard，裁剪后身份证照片的base64编码，请求 EnableCropImage 时返回；
                     * 
                     */
                    void SetCardImage(const ContentInfo& _cardImage);

                    /**
                     * 判断参数 CardImage 是否已赋值
                     * @return CardImage 是否已赋值
                     * 
                     */
                    bool CardImageHasBeenSet() const;

                    /**
                     * 获取Portrait，身份证头像照片的base64编码，请求 EnablePortrait 时返回；
                     * @return PortraitImage Portrait，身份证头像照片的base64编码，请求 EnablePortrait 时返回；
                     * 
                     */
                    ContentInfo GetPortraitImage() const;

                    /**
                     * 设置Portrait，身份证头像照片的base64编码，请求 EnablePortrait 时返回；
                     * @param _portraitImage Portrait，身份证头像照片的base64编码，请求 EnablePortrait 时返回；
                     * 
                     */
                    void SetPortraitImage(const ContentInfo& _portraitImage);

                    /**
                     * 判断参数 PortraitImage 是否已赋值
                     * @return PortraitImage 是否已赋值
                     * 
                     */
                    bool PortraitImageHasBeenSet() const;

                    /**
                     * 获取持证人持有号码，外国人永久居留证 返回该字段
                     * @return HolderNum 持证人持有号码，外国人永久居留证 返回该字段
                     * 
                     */
                    ContentInfo GetHolderNum() const;

                    /**
                     * 设置持证人持有号码，外国人永久居留证 返回该字段
                     * @param _holderNum 持证人持有号码，外国人永久居留证 返回该字段
                     * 
                     */
                    void SetHolderNum(const ContentInfo& _holderNum);

                    /**
                     * 判断参数 HolderNum 是否已赋值
                     * @return HolderNum 是否已赋值
                     * 
                     */
                    bool HolderNumHasBeenSet() const;

                    /**
                     * 获取国籍，外国人永久居留证 返回该字段
                     * @return Nationality 国籍，外国人永久居留证 返回该字段
                     * 
                     */
                    ContentInfo GetNationality() const;

                    /**
                     * 设置国籍，外国人永久居留证 返回该字段
                     * @param _nationality 国籍，外国人永久居留证 返回该字段
                     * 
                     */
                    void SetNationality(const ContentInfo& _nationality);

                    /**
                     * 判断参数 Nationality 是否已赋值
                     * @return Nationality 是否已赋值
                     * 
                     */
                    bool NationalityHasBeenSet() const;

                private:

                    /**
                     * 姓名（人像面）
                     */
                    ContentInfo m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 性别（人像面）
                     */
                    ContentInfo m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 民族（人像面）
                     */
                    ContentInfo m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * 出生日期（人像面）
                     */
                    ContentInfo m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * 地址（人像面）
                     */
                    ContentInfo m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 公民身份号码（人像面）
                     */
                    ContentInfo m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * 发证机关（国徽面）
                     */
                    ContentInfo m_authority;
                    bool m_authorityHasBeenSet;

                    /**
                     * 证件有效期（国徽面）
                     */
                    ContentInfo m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * WarnInfos，告警信息
                     */
                    CardWarnInfo m_warnInfos;
                    bool m_warnInfosHasBeenSet;

                    /**
                     * IdCard，裁剪后身份证照片的base64编码，请求 EnableCropImage 时返回；
                     */
                    ContentInfo m_cardImage;
                    bool m_cardImageHasBeenSet;

                    /**
                     * Portrait，身份证头像照片的base64编码，请求 EnablePortrait 时返回；
                     */
                    ContentInfo m_portraitImage;
                    bool m_portraitImageHasBeenSet;

                    /**
                     * 持证人持有号码，外国人永久居留证 返回该字段
                     */
                    ContentInfo m_holderNum;
                    bool m_holderNumHasBeenSet;

                    /**
                     * 国籍，外国人永久居留证 返回该字段
                     */
                    ContentInfo m_nationality;
                    bool m_nationalityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_PERMANENTRESIDENCEPERMITINFO_H_
