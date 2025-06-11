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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageAreaBoxInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 图标擦除配置
                */
                class ImageEraseLogoConfig : public AbstractModel
                {
                public:
                    ImageEraseLogoConfig();
                    ~ImageEraseLogoConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取需要擦除的多个框选区域，最多开启16个区域。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageAreaBoxes 需要擦除的多个框选区域，最多开启16个区域。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ImageAreaBoxInfo> GetImageAreaBoxes() const;

                    /**
                     * 设置需要擦除的多个框选区域，最多开启16个区域。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageAreaBoxes 需要擦除的多个框选区域，最多开启16个区域。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageAreaBoxes(const std::vector<ImageAreaBoxInfo>& _imageAreaBoxes);

                    /**
                     * 判断参数 ImageAreaBoxes 是否已赋值
                     * @return ImageAreaBoxes 是否已赋值
                     * 
                     */
                    bool ImageAreaBoxesHasBeenSet() const;

                    /**
                     * 获取图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetectTypes 图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDetectTypes() const;

                    /**
                     * 设置图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detectTypes 图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetectTypes(const std::vector<std::string>& _detectTypes);

                    /**
                     * 判断参数 DetectTypes 是否已赋值
                     * @return DetectTypes 是否已赋值
                     * 
                     */
                    bool DetectTypesHasBeenSet() const;

                private:

                    /**
                     * 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 需要擦除的多个框选区域，最多开启16个区域。
注意：此字段可能返回 null，表示取不到有效值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ImageAreaBoxInfo> m_imageAreaBoxes;
                    bool m_imageAreaBoxesHasBeenSet;

                    /**
                     * 图片框选区域类型，可选值：
<li>logo：图标；</li>
<li>text：文字；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_detectTypes;
                    bool m_detectTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGEERASELOGOCONFIG_H_
