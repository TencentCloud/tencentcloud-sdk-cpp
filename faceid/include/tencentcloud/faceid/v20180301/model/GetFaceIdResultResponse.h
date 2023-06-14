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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTRESPONSE_H_

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
                     * 获取身份证
                     * @return IdCard 身份证
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
                     * 获取姓名
                     * @return Name 姓名
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
                     * 获取业务核验结果，参考https://cloud.tencent.com/document/product/1007/47912
                     * @return Result 业务核验结果，参考https://cloud.tencent.com/document/product/1007/47912
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
                     * 获取业务核验描述
                     * @return Description 业务核验描述
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
                     * 获取相似度，0-100，数值越大相似度越高
                     * @return Similarity 相似度，0-100，数值越大相似度越高
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
                     * 获取用户核验的视频base64，如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoBase64 用户核验的视频base64，如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey
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
                     * 获取用户核验视频的截帧base64，如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BestFrameBase64 用户核验视频的截帧base64，如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey
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
                     * 获取获取token时透传的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Extra 获取token时透传的信息
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
                     * 获取设备风险标签，仅错误码返回1007（设备疑似被劫持）时返回风险标签。标签说明：
202、5001：设备疑似被Root
203、5004：设备疑似被注入
205：设备疑似被Hook
206：设备疑似虚拟运行环境
5007、1005：设备疑似摄像头被劫持
8000：设备疑似存在异常篡改行为
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceInfoTag 设备风险标签，仅错误码返回1007（设备疑似被劫持）时返回风险标签。标签说明：
202、5001：设备疑似被Root
203、5004：设备疑似被注入
205：设备疑似被Hook
206：设备疑似虚拟运行环境
5007、1005：设备疑似摄像头被劫持
8000：设备疑似存在异常篡改行为
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
                     * 获取行为风险标签，仅错误码返回1007（设备疑似被劫持）时返回风险标签。标签说明：
02：攻击风险
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskInfoTag 行为风险标签，仅错误码返回1007（设备疑似被劫持）时返回风险标签。标签说明：
02：攻击风险
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

                private:

                    /**
                     * 身份证
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 业务核验结果，参考https://cloud.tencent.com/document/product/1007/47912
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 业务核验描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 相似度，0-100，数值越大相似度越高
                     */
                    double m_similarity;
                    bool m_similarityHasBeenSet;

                    /**
                     * 用户核验的视频base64，如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * 用户核验视频的截帧base64，如果选择了使用cos，返回完整cos地址如https://bucket.cos.ap-guangzhou.myqcloud.com/objectKey
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bestFrameBase64;
                    bool m_bestFrameBase64HasBeenSet;

                    /**
                     * 获取token时透传的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                    /**
                     * 设备风险标签，仅错误码返回1007（设备疑似被劫持）时返回风险标签。标签说明：
202、5001：设备疑似被Root
203、5004：设备疑似被注入
205：设备疑似被Hook
206：设备疑似虚拟运行环境
5007、1005：设备疑似摄像头被劫持
8000：设备疑似存在异常篡改行为
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceInfoTag;
                    bool m_deviceInfoTagHasBeenSet;

                    /**
                     * 行为风险标签，仅错误码返回1007（设备疑似被劫持）时返回风险标签。标签说明：
02：攻击风险
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_riskInfoTag;
                    bool m_riskInfoTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTRESPONSE_H_
