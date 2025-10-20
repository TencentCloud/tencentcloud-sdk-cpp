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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BEAUTYEFFECTITEMCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BEAUTYEFFECTITEMCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 美颜效果配置项
                */
                class BeautyEffectItemConfig : public AbstractModel
                {
                public:
                    BeautyEffectItemConfig();
                    ~BeautyEffectItemConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型名称。取值如下：
<li>Whiten：美白</li>
<li>BlackAlpha1：美黑</li>
<li>BlackAlpha2：较强美黑</li>
<li>FoundationAlpha2：美白-粉白</li>
<li>Clear：清晰度</li>
<li>Sharpen：锐化</li>
<li>Smooth：磨皮</li>
<li>BeautyThinFace：瘦脸</li>
<li>NatureFace：自然脸型</li>
<li>VFace：V脸</li>
<li>EnlargeEye：大眼</li>
<li>EyeLighten：亮眼</li>
<li>RemoveEyeBags：祛眼袋</li>
<li>ThinNose：瘦鼻</li>
<li>RemoveLawLine：祛法令纹</li>
<li>CheekboneThin：瘦颧骨</li>
<li>FaceFeatureLipsLut：口红</li>
<li>ToothWhiten：牙齿美白</li>
<li>FaceFeatureSoftlight：柔光</li>
<li>Makeup：美妆</li>
                     * @return Type 类型名称。取值如下：
<li>Whiten：美白</li>
<li>BlackAlpha1：美黑</li>
<li>BlackAlpha2：较强美黑</li>
<li>FoundationAlpha2：美白-粉白</li>
<li>Clear：清晰度</li>
<li>Sharpen：锐化</li>
<li>Smooth：磨皮</li>
<li>BeautyThinFace：瘦脸</li>
<li>NatureFace：自然脸型</li>
<li>VFace：V脸</li>
<li>EnlargeEye：大眼</li>
<li>EyeLighten：亮眼</li>
<li>RemoveEyeBags：祛眼袋</li>
<li>ThinNose：瘦鼻</li>
<li>RemoveLawLine：祛法令纹</li>
<li>CheekboneThin：瘦颧骨</li>
<li>FaceFeatureLipsLut：口红</li>
<li>ToothWhiten：牙齿美白</li>
<li>FaceFeatureSoftlight：柔光</li>
<li>Makeup：美妆</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型名称。取值如下：
<li>Whiten：美白</li>
<li>BlackAlpha1：美黑</li>
<li>BlackAlpha2：较强美黑</li>
<li>FoundationAlpha2：美白-粉白</li>
<li>Clear：清晰度</li>
<li>Sharpen：锐化</li>
<li>Smooth：磨皮</li>
<li>BeautyThinFace：瘦脸</li>
<li>NatureFace：自然脸型</li>
<li>VFace：V脸</li>
<li>EnlargeEye：大眼</li>
<li>EyeLighten：亮眼</li>
<li>RemoveEyeBags：祛眼袋</li>
<li>ThinNose：瘦鼻</li>
<li>RemoveLawLine：祛法令纹</li>
<li>CheekboneThin：瘦颧骨</li>
<li>FaceFeatureLipsLut：口红</li>
<li>ToothWhiten：牙齿美白</li>
<li>FaceFeatureSoftlight：柔光</li>
<li>Makeup：美妆</li>
                     * @param _type 类型名称。取值如下：
<li>Whiten：美白</li>
<li>BlackAlpha1：美黑</li>
<li>BlackAlpha2：较强美黑</li>
<li>FoundationAlpha2：美白-粉白</li>
<li>Clear：清晰度</li>
<li>Sharpen：锐化</li>
<li>Smooth：磨皮</li>
<li>BeautyThinFace：瘦脸</li>
<li>NatureFace：自然脸型</li>
<li>VFace：V脸</li>
<li>EnlargeEye：大眼</li>
<li>EyeLighten：亮眼</li>
<li>RemoveEyeBags：祛眼袋</li>
<li>ThinNose：瘦鼻</li>
<li>RemoveLawLine：祛法令纹</li>
<li>CheekboneThin：瘦颧骨</li>
<li>FaceFeatureLipsLut：口红</li>
<li>ToothWhiten：牙齿美白</li>
<li>FaceFeatureSoftlight：柔光</li>
<li>Makeup：美妆</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * @return Switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     * @param _switch 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
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
                     * 获取效果强度，值范围：[0, 100]。
                     * @return Value 效果强度，值范围：[0, 100]。
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置效果强度，值范围：[0, 100]。
                     * @param _value 效果强度，值范围：[0, 100]。
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取附加资源路径。
                     * @return ResourcePath 附加资源路径。
                     * 
                     */
                    std::string GetResourcePath() const;

                    /**
                     * 设置附加资源路径。
                     * @param _resourcePath 附加资源路径。
                     * 
                     */
                    void SetResourcePath(const std::string& _resourcePath);

                    /**
                     * 判断参数 ResourcePath 是否已赋值
                     * @return ResourcePath 是否已赋值
                     * 
                     */
                    bool ResourcePathHasBeenSet() const;

                    /**
                     * 获取自定义参数。
                     * @return ExtInfo 自定义参数。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置自定义参数。
                     * @param _extInfo 自定义参数。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * 类型名称。取值如下：
<li>Whiten：美白</li>
<li>BlackAlpha1：美黑</li>
<li>BlackAlpha2：较强美黑</li>
<li>FoundationAlpha2：美白-粉白</li>
<li>Clear：清晰度</li>
<li>Sharpen：锐化</li>
<li>Smooth：磨皮</li>
<li>BeautyThinFace：瘦脸</li>
<li>NatureFace：自然脸型</li>
<li>VFace：V脸</li>
<li>EnlargeEye：大眼</li>
<li>EyeLighten：亮眼</li>
<li>RemoveEyeBags：祛眼袋</li>
<li>ThinNose：瘦鼻</li>
<li>RemoveLawLine：祛法令纹</li>
<li>CheekboneThin：瘦颧骨</li>
<li>FaceFeatureLipsLut：口红</li>
<li>ToothWhiten：牙齿美白</li>
<li>FaceFeatureSoftlight：柔光</li>
<li>Makeup：美妆</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 能力配置开关，可选值：
<li>ON：开启；</li>
<li>OFF：关闭。</li>
默认值：ON。
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 效果强度，值范围：[0, 100]。
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 附加资源路径。
                     */
                    std::string m_resourcePath;
                    bool m_resourcePathHasBeenSet;

                    /**
                     * 自定义参数。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BEAUTYEFFECTITEMCONFIG_H_
