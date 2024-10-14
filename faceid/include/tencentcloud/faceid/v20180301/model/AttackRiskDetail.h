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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKRISKDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKRISKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 疑似攻击风险详情
                */
                class AttackRiskDetail : public AbstractModel
                {
                public:
                    AttackRiskDetail();
                    ~AttackRiskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取疑似的攻击痕迹类型
SuspectedSpoofingAttack：翻拍攻击
SuspectedSynthesisImage：疑似合成图片
SuspectedSynthesisVideo：疑似合成视频
SuspectedeAnomalyAttack：人脸特征疑似非真人
SuspectedAdversarialAttack：疑似对抗样本攻击
SuspectedBlackIndustry：疑似黑产批量模版攻击
SuspectedWatermark：疑似存在水印
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 疑似的攻击痕迹类型
SuspectedSpoofingAttack：翻拍攻击
SuspectedSynthesisImage：疑似合成图片
SuspectedSynthesisVideo：疑似合成视频
SuspectedeAnomalyAttack：人脸特征疑似非真人
SuspectedAdversarialAttack：疑似对抗样本攻击
SuspectedBlackIndustry：疑似黑产批量模版攻击
SuspectedWatermark：疑似存在水印
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置疑似的攻击痕迹类型
SuspectedSpoofingAttack：翻拍攻击
SuspectedSynthesisImage：疑似合成图片
SuspectedSynthesisVideo：疑似合成视频
SuspectedeAnomalyAttack：人脸特征疑似非真人
SuspectedAdversarialAttack：疑似对抗样本攻击
SuspectedBlackIndustry：疑似黑产批量模版攻击
SuspectedWatermark：疑似存在水印
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 疑似的攻击痕迹类型
SuspectedSpoofingAttack：翻拍攻击
SuspectedSynthesisImage：疑似合成图片
SuspectedSynthesisVideo：疑似合成视频
SuspectedeAnomalyAttack：人脸特征疑似非真人
SuspectedAdversarialAttack：疑似对抗样本攻击
SuspectedBlackIndustry：疑似黑产批量模版攻击
SuspectedWatermark：疑似存在水印
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 疑似的攻击痕迹类型
SuspectedSpoofingAttack：翻拍攻击
SuspectedSynthesisImage：疑似合成图片
SuspectedSynthesisVideo：疑似合成视频
SuspectedeAnomalyAttack：人脸特征疑似非真人
SuspectedAdversarialAttack：疑似对抗样本攻击
SuspectedBlackIndustry：疑似黑产批量模版攻击
SuspectedWatermark：疑似存在水印
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_ATTACKRISKDETAIL_H_
