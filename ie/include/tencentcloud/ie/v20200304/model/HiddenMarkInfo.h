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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_HIDDENMARKINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_HIDDENMARKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/CosInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 数字水印
                */
                class HiddenMarkInfo : public AbstractModel
                {
                public:
                    HiddenMarkInfo();
                    ~HiddenMarkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数字水印路径,，如果不从Cos拉取水印，则必填
                     * @return Path 数字水印路径,，如果不从Cos拉取水印，则必填
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置数字水印路径,，如果不从Cos拉取水印，则必填
                     * @param _path 数字水印路径,，如果不从Cos拉取水印，则必填
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取数字水印频率，可选值：[1,256]，默认值为30
                     * @return Frequency 数字水印频率，可选值：[1,256]，默认值为30
                     * 
                     */
                    int64_t GetFrequency() const;

                    /**
                     * 设置数字水印频率，可选值：[1,256]，默认值为30
                     * @param _frequency 数字水印频率，可选值：[1,256]，默认值为30
                     * 
                     */
                    void SetFrequency(const int64_t& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取数字水印强度，可选值：[32,128]，默认值为64
                     * @return Strength 数字水印强度，可选值：[32,128]，默认值为64
                     * 
                     */
                    int64_t GetStrength() const;

                    /**
                     * 设置数字水印强度，可选值：[32,128]，默认值为64
                     * @param _strength 数字水印强度，可选值：[32,128]，默认值为64
                     * 
                     */
                    void SetStrength(const int64_t& _strength);

                    /**
                     * 判断参数 Strength 是否已赋值
                     * @return Strength 是否已赋值
                     * 
                     */
                    bool StrengthHasBeenSet() const;

                    /**
                     * 获取数字水印的Cos 信息，从Cos上拉取图片水印时必填。
                     * @return CosInfo 数字水印的Cos 信息，从Cos上拉取图片水印时必填。
                     * 
                     */
                    CosInfo GetCosInfo() const;

                    /**
                     * 设置数字水印的Cos 信息，从Cos上拉取图片水印时必填。
                     * @param _cosInfo 数字水印的Cos 信息，从Cos上拉取图片水印时必填。
                     * 
                     */
                    void SetCosInfo(const CosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                private:

                    /**
                     * 数字水印路径,，如果不从Cos拉取水印，则必填
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 数字水印频率，可选值：[1,256]，默认值为30
                     */
                    int64_t m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 数字水印强度，可选值：[32,128]，默认值为64
                     */
                    int64_t m_strength;
                    bool m_strengthHasBeenSet;

                    /**
                     * 数字水印的Cos 信息，从Cos上拉取图片水印时必填。
                     */
                    CosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_HIDDENMARKINFO_H_
