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
                     * 获取<p>相似度。- 取值范围 [0.00, 100.00]。- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为万分之一）。</p>
                     * @return Sim <p>相似度。- 取值范围 [0.00, 100.00]。- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为万分之一）。</p>
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
                     * 获取<p>业务错误码。- 成功情况返回Success。- 错误情况请参考下方错误码 列表中FailedOperation部分</p>
                     * @return Result <p>业务错误码。- 成功情况返回Success。- 错误情况请参考下方错误码 列表中FailedOperation部分</p>
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
                     * 获取<p>业务结果描述。</p>
                     * @return Description <p>业务结果描述。</p>
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
                     * 获取<p>姓名。</p>
                     * @return Name <p>姓名。</p>
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
                     * 获取<p>性别。</p>
                     * @return Sex <p>性别。</p>
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
                     * 获取<p>民族。</p>
                     * @return Nation <p>民族。</p>
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
                     * 获取<p>出生日期。</p>
                     * @return Birth <p>出生日期。</p>
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
                     * 获取<p>地址。</p>
                     * @return Address <p>地址。</p>
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
                     * 获取<p>身份证号。</p>
                     * @return IdNum <p>身份证号。</p>
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
                     * 获取<p>身份证头像照片的base64编码，如果抠图失败会拿整张身份证做比对并返回空。</p>
                     * @return Portrait <p>身份证头像照片的base64编码，如果抠图失败会拿整张身份证做比对并返回空。</p>
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
                     * 获取<p>告警信息。</p><ul><li><p>当在Config中配置了告警信息会停止人像比对，Result返回错误（FailedOperation.OcrWarningOccurred）并有此告警信息。</p></li><li><p>Code 告警码列表和释义：<br>&#39;-9101&#39;：身份证边框不完整告警。<br>&#39;-9102&#39;：身份证复印件告警。<br>&#39;-9103&#39;：身份证翻拍告警。<br>&#39;-9105&#39;：身份证框内遮挡告警。<br>&#39;-9104&#39;：临时身份证告警。<br>&#39;-9106&#39;：身份证 PS 告警（疑似存在PS痕迹）。<br>&#39;-8001&#39;：图片模糊告警。</p></li><li><p>多个会用“|” 隔开，如 &quot;-9101|-9106|-9104&quot;。</p></li></ul>
                     * @return Warnings <p>告警信息。</p><ul><li><p>当在Config中配置了告警信息会停止人像比对，Result返回错误（FailedOperation.OcrWarningOccurred）并有此告警信息。</p></li><li><p>Code 告警码列表和释义：<br>&#39;-9101&#39;：身份证边框不完整告警。<br>&#39;-9102&#39;：身份证复印件告警。<br>&#39;-9103&#39;：身份证翻拍告警。<br>&#39;-9105&#39;：身份证框内遮挡告警。<br>&#39;-9104&#39;：临时身份证告警。<br>&#39;-9106&#39;：身份证 PS 告警（疑似存在PS痕迹）。<br>&#39;-8001&#39;：图片模糊告警。</p></li><li><p>多个会用“|” 隔开，如 &quot;-9101|-9106|-9104&quot;。</p></li></ul>
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
                     * 获取<p>图片质量分数。</p><ul><li>当请求Config中配置图片模糊告警该参数才有意义。</li><li>取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。</li></ul>
                     * @return Quality <p>图片质量分数。</p><ul><li>当请求Config中配置图片模糊告警该参数才有意义。</li><li>取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。</li></ul>
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
                     * 获取<p>敏感数据加密信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Encryption <p>敏感数据加密信息。</p>
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
                     * 获取<p>加密后的数据。</p>
                     * @return EncryptedBody <p>加密后的数据。</p>
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
                     * <p>相似度。- 取值范围 [0.00, 100.00]。- 推荐相似度大于等于70时可判断为同一人，可根据具体场景自行调整阈值（阈值70的误通过率为万分之一）。</p>
                     */
                    double m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * <p>业务错误码。- 成功情况返回Success。- 错误情况请参考下方错误码 列表中FailedOperation部分</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>业务结果描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>姓名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>性别。</p>
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>民族。</p>
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * <p>出生日期。</p>
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * <p>地址。</p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>身份证号。</p>
                     */
                    std::string m_idNum;
                    bool m_idNumHasBeenSet;

                    /**
                     * <p>身份证头像照片的base64编码，如果抠图失败会拿整张身份证做比对并返回空。</p>
                     */
                    std::string m_portrait;
                    bool m_portraitHasBeenSet;

                    /**
                     * <p>告警信息。</p><ul><li><p>当在Config中配置了告警信息会停止人像比对，Result返回错误（FailedOperation.OcrWarningOccurred）并有此告警信息。</p></li><li><p>Code 告警码列表和释义：<br>&#39;-9101&#39;：身份证边框不完整告警。<br>&#39;-9102&#39;：身份证复印件告警。<br>&#39;-9103&#39;：身份证翻拍告警。<br>&#39;-9105&#39;：身份证框内遮挡告警。<br>&#39;-9104&#39;：临时身份证告警。<br>&#39;-9106&#39;：身份证 PS 告警（疑似存在PS痕迹）。<br>&#39;-8001&#39;：图片模糊告警。</p></li><li><p>多个会用“|” 隔开，如 &quot;-9101|-9106|-9104&quot;。</p></li></ul>
                     */
                    std::string m_warnings;
                    bool m_warningsHasBeenSet;

                    /**
                     * <p>图片质量分数。</p><ul><li>当请求Config中配置图片模糊告警该参数才有意义。</li><li>取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。</li></ul>
                     */
                    double m_quality;
                    bool m_qualityHasBeenSet;

                    /**
                     * <p>敏感数据加密信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>加密后的数据。</p>
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CHECKIDCARDINFORMATIONRESPONSE_H_
