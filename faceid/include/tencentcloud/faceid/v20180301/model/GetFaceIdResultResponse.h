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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTRESPONSE_H_

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
                * GetFaceIdResult返回参数结构体
                */
                class GetFaceIdResultResponse : public AbstractModel
                {
                public:
                    GetFaceIdResultResponse();
                    ~GetFaceIdResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>身份证。</p>
                     * @return IdCard <p>身份证。</p>
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
                     * 获取<p>业务核验结果。</p><ul><li>参考：https://cloud.tencent.com/document/product/1007/47912。</li></ul>
                     * @return Result <p>业务核验结果。</p><ul><li>参考：https://cloud.tencent.com/document/product/1007/47912。</li></ul>
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
                     * 获取<p>业务核验描述。</p>
                     * @return Description <p>业务核验描述。</p>
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
                     * 获取<p>相似度。</p><ul><li>取值：0-100。</li><li>数值越大相似度越高。</li></ul>
                     * @return Similarity <p>相似度。</p><ul><li>取值：0-100。</li><li>数值越大相似度越高。</li></ul>
                     * 
                     */
                    double GetSimilarity() const;

                    /**
                     * 判断参数 Similarity 是否已赋值
                     * @return Similarity 是否已赋值
                     * 
                     */
                    bool SimilarityHasBeenSet() const;

                    /**
                     * 获取<p>用户核验的视频base64。</p><ul><li>如果选择了使用cos，返回完整cos地址，如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoBase64 <p>用户核验的视频base64。</p><ul><li>如果选择了使用cos，返回完整cos地址，如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 判断参数 VideoBase64 是否已赋值
                     * @return VideoBase64 是否已赋值
                     * 
                     */
                    bool VideoBase64HasBeenSet() const;

                    /**
                     * 获取<p>用户核验视频的截帧base64。</p><ul><li>如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrameBase64 <p>用户核验视频的截帧base64。</p><ul><li>如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBestFrameBase64() const;

                    /**
                     * 判断参数 BestFrameBase64 是否已赋值
                     * @return BestFrameBase64 是否已赋值
                     * 
                     */
                    bool BestFrameBase64HasBeenSet() const;

                    /**
                     * 获取<p>获取token时透传的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra <p>获取token时透传的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtra() const;

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     * 
                     */
                    bool ExtraHasBeenSet() const;

                    /**
                     * 获取<p>plus版：描述当前请求所在设备的风险标签。</p><ul><li>详情如下：<br>01-设备疑似被Root/设备疑似越狱。<br>02-设备疑似被注入。<br>03-设备疑似为模拟器。<br>04-设备疑似存在风险操作。<br>05-摄像头疑似被劫持。<br>06-疑似黑产设备。<br>null-无设备风险。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceInfoTag <p>plus版：描述当前请求所在设备的风险标签。</p><ul><li>详情如下：<br>01-设备疑似被Root/设备疑似越狱。<br>02-设备疑似被注入。<br>03-设备疑似为模拟器。<br>04-设备疑似存在风险操作。<br>05-摄像头疑似被劫持。<br>06-疑似黑产设备。<br>null-无设备风险。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceInfoTag() const;

                    /**
                     * 判断参数 DeviceInfoTag 是否已赋值
                     * @return DeviceInfoTag 是否已赋值
                     * 
                     */
                    bool DeviceInfoTagHasBeenSet() const;

                    /**
                     * 获取<p>行为风险标签。</p><ul><li>仅错误码返回1007（设备疑似被劫持）时返回风险标签。</li><li>标签说明：<br>02：攻击风险</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskInfoTag <p>行为风险标签。</p><ul><li>仅错误码返回1007（设备疑似被劫持）时返回风险标签。</li><li>标签说明：<br>02：攻击风险</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRiskInfoTag() const;

                    /**
                     * 判断参数 RiskInfoTag 是否已赋值
                     * @return RiskInfoTag 是否已赋值
                     * 
                     */
                    bool RiskInfoTagHasBeenSet() const;

                    /**
                     * 获取<p>plus版：描述当前请求活体阶段被拒绝的详细原因。</p><ul><li>详情如下：<br>01-用户全程闭眼。<br>02-用户未完成指定动作。<br>03-疑似翻拍攻击。<br>04-疑似合成图片。<br>05-疑似合成视频。<br>06-疑似合成动作。<br>07-疑似黑产模板。<br>08-疑似存在水印。<br>09-反光校验未通过。<br>10-最佳帧校验未通过。<br>11-人脸质量过差。<br>12-人脸距离不匹配。<br>13-疑似对抗样本攻击。<br>null-无。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessInfoTag <p>plus版：描述当前请求活体阶段被拒绝的详细原因。</p><ul><li>详情如下：<br>01-用户全程闭眼。<br>02-用户未完成指定动作。<br>03-疑似翻拍攻击。<br>04-疑似合成图片。<br>05-疑似合成视频。<br>06-疑似合成动作。<br>07-疑似黑产模板。<br>08-疑似存在水印。<br>09-反光校验未通过。<br>10-最佳帧校验未通过。<br>11-人脸质量过差。<br>12-人脸距离不匹配。<br>13-疑似对抗样本攻击。<br>null-无。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLivenessInfoTag() const;

                    /**
                     * 判断参数 LivenessInfoTag 是否已赋值
                     * @return LivenessInfoTag 是否已赋值
                     * 
                     */
                    bool LivenessInfoTagHasBeenSet() const;

                    /**
                     * 获取<p>plus版：描述当前请求所在设备的风险等级，共4级。</p><ul><li>详情如下：<br>1 - 安全。<br>2 - 低风险。<br>3 - 中风险。<br>4 - 高危。<br>null - 未获取到风险等级。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceInfoLevel <p>plus版：描述当前请求所在设备的风险等级，共4级。</p><ul><li>详情如下：<br>1 - 安全。<br>2 - 低风险。<br>3 - 中风险。<br>4 - 高危。<br>null - 未获取到风险等级。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceInfoLevel() const;

                    /**
                     * 判断参数 DeviceInfoLevel 是否已赋值
                     * @return DeviceInfoLevel 是否已赋值
                     * 
                     */
                    bool DeviceInfoLevelHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EncryptedBody <p>加密后的数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEncryptedBody() const;

                    /**
                     * 判断参数 EncryptedBody 是否已赋值
                     * @return EncryptedBody 是否已赋值
                     * 
                     */
                    bool EncryptedBodyHasBeenSet() const;

                    /**
                     * 获取<p>用户核验的身份证人像页base64</p>
                     * @return IdCardFrontBase64 <p>用户核验的身份证人像页base64</p>
                     * 
                     */
                    std::string GetIdCardFrontBase64() const;

                    /**
                     * 判断参数 IdCardFrontBase64 是否已赋值
                     * @return IdCardFrontBase64 是否已赋值
                     * 
                     */
                    bool IdCardFrontBase64HasBeenSet() const;

                private:

                    /**
                     * <p>身份证。</p>
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * <p>姓名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>业务核验结果。</p><ul><li>参考：https://cloud.tencent.com/document/product/1007/47912。</li></ul>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>业务核验描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>相似度。</p><ul><li>取值：0-100。</li><li>数值越大相似度越高。</li></ul>
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * <p>用户核验的视频base64。</p><ul><li>如果选择了使用cos，返回完整cos地址，如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * <p>用户核验视频的截帧base64。</p><ul><li>如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bestFrameBase64;
                    bool m_bestFrameBase64HasBeenSet;

                    /**
                     * <p>获取token时透传的信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * <p>plus版：描述当前请求所在设备的风险标签。</p><ul><li>详情如下：<br>01-设备疑似被Root/设备疑似越狱。<br>02-设备疑似被注入。<br>03-设备疑似为模拟器。<br>04-设备疑似存在风险操作。<br>05-摄像头疑似被劫持。<br>06-疑似黑产设备。<br>null-无设备风险。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceInfoTag;
                    bool m_deviceInfoTagHasBeenSet;

                    /**
                     * <p>行为风险标签。</p><ul><li>仅错误码返回1007（设备疑似被劫持）时返回风险标签。</li><li>标签说明：<br>02：攻击风险</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskInfoTag;
                    bool m_riskInfoTagHasBeenSet;

                    /**
                     * <p>plus版：描述当前请求活体阶段被拒绝的详细原因。</p><ul><li>详情如下：<br>01-用户全程闭眼。<br>02-用户未完成指定动作。<br>03-疑似翻拍攻击。<br>04-疑似合成图片。<br>05-疑似合成视频。<br>06-疑似合成动作。<br>07-疑似黑产模板。<br>08-疑似存在水印。<br>09-反光校验未通过。<br>10-最佳帧校验未通过。<br>11-人脸质量过差。<br>12-人脸距离不匹配。<br>13-疑似对抗样本攻击。<br>null-无。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_livenessInfoTag;
                    bool m_livenessInfoTagHasBeenSet;

                    /**
                     * <p>plus版：描述当前请求所在设备的风险等级，共4级。</p><ul><li>详情如下：<br>1 - 安全。<br>2 - 低风险。<br>3 - 中风险。<br>4 - 高危。<br>null - 未获取到风险等级。</li><li>增强版：此字段不生效，默认为null。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceInfoLevel;
                    bool m_deviceInfoLevelHasBeenSet;

                    /**
                     * <p>敏感数据加密信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                    /**
                     * <p>加密后的数据。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_encryptedBody;
                    bool m_encryptedBodyHasBeenSet;

                    /**
                     * <p>用户核验的身份证人像页base64</p>
                     */
                    std::string m_idCardFrontBase64;
                    bool m_idCardFrontBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTRESPONSE_H_
