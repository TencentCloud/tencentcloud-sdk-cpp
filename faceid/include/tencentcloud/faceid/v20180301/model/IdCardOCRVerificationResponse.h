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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONRESPONSE_H_

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
                * IdCardOCRVerification返回参数结构体
                */
                class IdCardOCRVerificationResponse : public AbstractModel
                {
                public:
                    IdCardOCRVerificationResponse();
                    ~IdCardOCRVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>认证结果码，收费情况如下。</p><ul><li>收费结果码：<br>0: 姓名和身份证号一致。<br>-1: 姓名和身份证号不一致。</li><li>不收费结果码：<br>-2: 非法身份证号（长度、校验位等不正确）。<br>-3: 非法姓名（长度、格式等不正确）。<br>-4: 证件库服务异常。<br>-5: 证件库中无此身份证记录。<br>-6: 权威比对系统升级中，请稍后再试。<br>-7: 认证次数超过当日限制。</li></ul>
                     * @return Result <p>认证结果码，收费情况如下。</p><ul><li>收费结果码：<br>0: 姓名和身份证号一致。<br>-1: 姓名和身份证号不一致。</li><li>不收费结果码：<br>-2: 非法身份证号（长度、校验位等不正确）。<br>-3: 非法姓名（长度、格式等不正确）。<br>-4: 证件库服务异常。<br>-5: 证件库中无此身份证记录。<br>-6: 权威比对系统升级中，请稍后再试。<br>-7: 认证次数超过当日限制。</li></ul>
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
                     * 获取<p>用于验证的姓名。</p>
                     * @return Name <p>用于验证的姓名。</p>
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
                     * 获取<p>用于验证的身份证号。</p>
                     * @return IdCard <p>用于验证的身份证号。</p>
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取<p>OCR得到的性别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sex <p>OCR得到的性别。</p>
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
                     * 获取<p>OCR得到的民族。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nation <p>OCR得到的民族。</p>
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
                     * 获取<p>OCR得到的生日。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Birth <p>OCR得到的生日。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>OCR得到的地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Address <p>OCR得到的地址。</p>
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
                     * 获取<p>身份证头像照片的base64编码</p>
                     * @return Portrait <p>身份证头像照片的base64编码</p>
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
                     * 获取<p>告警信息。</p><ul><li>Code 告警码列表和释义：<br>  &#39;-9101&#39;：身份证边框不完整告警。<br>  &#39;-9102&#39;：身份证复印件告警。<br>  &#39;-9103&#39;：身份证翻拍告警。<br>  &#39;-9105&#39;：身份证框内遮挡告警。&#39;<br>  &#39;-9104&#39;：临时身份证告警。<br>  &#39;-9106&#39;：身份证 PS 告警（疑似存在PS痕迹）。<br>  &#39;-9107&#39;：身份证反光告警。<br>  &#39;-9108&#39;：身份证复印件告警（仅黑白复印件）。<br>  &#39;-9109&#39;：身份证有效日期不合法告警。<br>  &#39;-8001&#39;：图片模糊告警。</li><li>多个会用“|” 隔开，如 &quot;-9101|-9106|-9104&quot;。</li></ul>
                     * @return Warnings <p>告警信息。</p><ul><li>Code 告警码列表和释义：<br>  &#39;-9101&#39;：身份证边框不完整告警。<br>  &#39;-9102&#39;：身份证复印件告警。<br>  &#39;-9103&#39;：身份证翻拍告警。<br>  &#39;-9105&#39;：身份证框内遮挡告警。&#39;<br>  &#39;-9104&#39;：临时身份证告警。<br>  &#39;-9106&#39;：身份证 PS 告警（疑似存在PS痕迹）。<br>  &#39;-9107&#39;：身份证反光告警。<br>  &#39;-9108&#39;：身份证复印件告警（仅黑白复印件）。<br>  &#39;-9109&#39;：身份证有效日期不合法告警。<br>  &#39;-8001&#39;：图片模糊告警。</li><li>多个会用“|” 隔开，如 &quot;-9101|-9106|-9104&quot;。</li></ul>
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
                     * 获取<p>图片质量分数。</p><ul><li>当请求Config中配置图片模糊告警该参数才有意义。</li><li><ul><li>取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。</li></ul></li></ul>
                     * @return Quality <p>图片质量分数。</p><ul><li>当请求Config中配置图片模糊告警该参数才有意义。</li><li><ul><li>取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。</li></ul></li></ul>
                     * 
                     */
                    double GetQuality() const;

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                private:

                    /**
                     * <p>认证结果码，收费情况如下。</p><ul><li>收费结果码：<br>0: 姓名和身份证号一致。<br>-1: 姓名和身份证号不一致。</li><li>不收费结果码：<br>-2: 非法身份证号（长度、校验位等不正确）。<br>-3: 非法姓名（长度、格式等不正确）。<br>-4: 证件库服务异常。<br>-5: 证件库中无此身份证记录。<br>-6: 权威比对系统升级中，请稍后再试。<br>-7: 认证次数超过当日限制。</li></ul>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>业务结果描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>用于验证的姓名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用于验证的身份证号。</p>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>OCR得到的性别。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sex;
                    bool m_sexHasBeenSet;

                    /**
                     * <p>OCR得到的民族。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nation;
                    bool m_nationHasBeenSet;

                    /**
                     * <p>OCR得到的生日。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birth;
                    bool m_birthHasBeenSet;

                    /**
                     * <p>OCR得到的地址。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>身份证头像照片的base64编码</p>
                     */
                    std::string m_portrait;
                    bool m_portraitHasBeenSet;

                    /**
                     * <p>告警信息。</p><ul><li>Code 告警码列表和释义：<br>  &#39;-9101&#39;：身份证边框不完整告警。<br>  &#39;-9102&#39;：身份证复印件告警。<br>  &#39;-9103&#39;：身份证翻拍告警。<br>  &#39;-9105&#39;：身份证框内遮挡告警。&#39;<br>  &#39;-9104&#39;：临时身份证告警。<br>  &#39;-9106&#39;：身份证 PS 告警（疑似存在PS痕迹）。<br>  &#39;-9107&#39;：身份证反光告警。<br>  &#39;-9108&#39;：身份证复印件告警（仅黑白复印件）。<br>  &#39;-9109&#39;：身份证有效日期不合法告警。<br>  &#39;-8001&#39;：图片模糊告警。</li><li>多个会用“|” 隔开，如 &quot;-9101|-9106|-9104&quot;。</li></ul>
                     */
                    std::string m_warnings;
                    bool m_warningsHasBeenSet;

                    /**
                     * <p>图片质量分数。</p><ul><li>当请求Config中配置图片模糊告警该参数才有意义。</li><li><ul><li>取值范围（0～100），目前默认阈值是50分，低于50分会触发模糊告警。</li></ul></li></ul>
                     */
                    double m_quality;
                    bool m_qualityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_IDCARDOCRVERIFICATIONRESPONSE_H_
