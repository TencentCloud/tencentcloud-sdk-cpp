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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CheckIdCardInformation返回参数结构体
                */
                class CheckIdCardInformationResponse : public AbstractModel
                {
                public:
                    CheckIdCardInformationResponse();
                    ~CheckIdCardInformationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取相似度。
- 取值范围 [0.00, 100.00]。
- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为千分之一，阈值80的误通过率是万分之一）。
                     * @return Sim 相似度。
- 取值范围 [0.00, 100.00]。
- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为千分之一，阈值80的误通过率是万分之一）。
                     * 
                     */
                    double GetSim() const;

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     * 
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取业务错误码。- 成功情况返回Success。- 错误情况请参考下方错误码 列表中FailedOperation部分
                     * @return Result 业务错误码。- 成功情况返回Success。- 错误情况请参考下方错误码 列表中FailedOperation部分
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取业务结果描述。
                     * @return Description 业务结果描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取姓名。
                     * @return Name 姓名。
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
                     * 获取性别。
                     * @return Sex 性别。
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
                     * 获取民族。
                     * @return Nation 民族。
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
                     * 获取出生日期。
                     * @return Birth 出生日期。
                     * 
                     */
                    std::string GetBirth() const;

                    /**
                     * 判断参数 Birth 是否已赋值
                     * @return Birth 是否已赋值
                     * 
                     */
                    bool BirthHasBeenSet() const;

                    /**
                     * 获取地址。
                     * @return Address 地址。
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
                     * 获取身份证号。
                     * @return IdNum 身份证号。
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
                     * 获取身份证头像照片的base64编码，如果抠图失败会拿整张身份证做比对并返回空。
                     * @return Portrait 身份证头像照片的base64编码，如果抠图失败会拿整张身份证做比对并返回空。
                     * 
                     */
                    std::string GetPortrait() const;

                    /**
                     * 判断参数 Portrait 是否已赋值
                     * @return Portrait 是否已赋值
                     * 
                     */
                    bool PortraitHasBeenSet() const;

                    /**
                     * 获取告警信息。
- 当在Config中配置了告警信息会停止人像比对，Result返回错误（FailedOperation.OcrWarningOccurred）并有此告警信息。
- Code 告警码列表和释义：
'-9101'：身份证边框不完整告警。
'-9102'：身份证复印件告警。
'-9103'：身份证翻拍告警。
'-9105'：身份证框内遮挡告警。
'-9104'：临时身份证告警。
'-9106'：身份证 PS 告警（疑似存在PS痕迹）。
'-8001'：图片模糊告警。

- 多个会用“|” 隔开，如 "-9101|-9106|-9104"。
                     * @return Warnings 告警信息。
- 当在Config中配置了告警信息会停止人像比对，Result返回错误（FailedOperation.OcrWarningOccurred）并有此告警信息。
- Code 告警码列表和释义：
'-9101'：身份证边框不完整告警。
'-9102'：身份证复印件告警。
'-9103'：身份证翻拍告警。
'-9105'：身份证框内遮挡告警。
'-9104'：临时身份证告警。
'-9106'：身份证 PS 告警（疑似存在PS痕迹）。
'-8001'：图片模糊告警。

- 多个会用“|” 隔开，如 "-9101|-9106|-9104"。
                     * 
                     */
                    std::string GetWarnings() const;

                    /**
                     * 判断参数 Warnings 是否已赋值
                     * @return Warnings 是否已赋值
                     * 
                     */
                    bool WarningsHasBeenSet() const;

                    /**
                     * 获取图片质量分数。
- 当请求Config中配置图片模糊告警该参数才有意义。
- 取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。
                     * @return Quality 图片质量分数。
- 当请求Config中配置图片模糊告警该参数才有意义。
- 取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。
                     * 
                     */
                    double GetQuality() const;

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                    /**
                     * 获取敏感数据加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encryption 敏感数据加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                    /**
                     * 获取加密后的数据。
                     * @return EncryptedBody 加密后的数据。
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                private:

                    /**
                     * 相似度。
- 取值范围 [0.00, 100.00]。
- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为千分之一，阈值80的误通过率是万分之一）。
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * 业务错误码。- 成功情况返回Success。- 错误情况请参考下方错误码 列表中FailedOperation部分
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 业务结果描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 姓名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 性别。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * 民族。
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * 出生日期。
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * 地址。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 身份证号。
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * 身份证头像照片的base64编码，如果抠图失败会拿整张身份证做比对并返回空。
                     */
                    std::string m_portrait;
                    bool m_portraitHasBeenSet;

                    /**
                     * 告警信息。
- 当在Config中配置了告警信息会停止人像比对，Result返回错误（FailedOperation.OcrWarningOccurred）并有此告警信息。
- Code 告警码列表和释义：
'-9101'：身份证边框不完整告警。
'-9102'：身份证复印件告警。
'-9103'：身份证翻拍告警。
'-9105'：身份证框内遮挡告警。
'-9104'：临时身份证告警。
'-9106'：身份证 PS 告警（疑似存在PS痕迹）。
'-8001'：图片模糊告警。

- 多个会用“|” 隔开，如 "-9101|-9106|-9104"。
                     */
                    std::string m_warnings;
                    bool m_warningsHasBeenSet;

                    /**
                     * 图片质量分数。
- 当请求Config中配置图片模糊告警该参数才有意义。
- 取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。
                     */
                    double m_quality;
                    bool m_qualityHasBeenSet;

                    /**
                     * 敏感数据加密信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * 加密后的数据。
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONRESPONSE_H_
