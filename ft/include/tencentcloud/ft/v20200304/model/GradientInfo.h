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

#ifndef TENCENTCLOUD_FT_V20200304_MODEL_GRADIENTINFO_H_
#define TENCENTCLOUD_FT_V20200304_MODEL_GRADIENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ft
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 渐变参数
                */
                class GradientInfo : public AbstractModel
                {
                public:
                    GradientInfo();
                    ~GradientInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片的展示时长，即单张图片静止不变的时间。GIF默认每张图片0.7s，视频默认每张图片0.5s。最大取值1s。
                     * @return Tempo 图片的展示时长，即单张图片静止不变的时间。GIF默认每张图片0.7s，视频默认每张图片0.5s。最大取值1s。
                     * 
                     */
                    double GetTempo() const;

                    /**
                     * 设置图片的展示时长，即单张图片静止不变的时间。GIF默认每张图片0.7s，视频默认每张图片0.5s。最大取值1s。
                     * @param _tempo 图片的展示时长，即单张图片静止不变的时间。GIF默认每张图片0.7s，视频默认每张图片0.5s。最大取值1s。
                     * 
                     */
                    void SetTempo(const double& _tempo);

                    /**
                     * 判断参数 Tempo 是否已赋值
                     * @return Tempo 是否已赋值
                     * 
                     */
                    bool TempoHasBeenSet() const;

                    /**
                     * 获取人像渐变的最长时间，即单张图片使用渐变特效的时间。 GIF默认值为0.5s，视频默值认为1s。最大取值1s。
                     * @return MorphTime 人像渐变的最长时间，即单张图片使用渐变特效的时间。 GIF默认值为0.5s，视频默值认为1s。最大取值1s。
                     * 
                     */
                    double GetMorphTime() const;

                    /**
                     * 设置人像渐变的最长时间，即单张图片使用渐变特效的时间。 GIF默认值为0.5s，视频默值认为1s。最大取值1s。
                     * @param _morphTime 人像渐变的最长时间，即单张图片使用渐变特效的时间。 GIF默认值为0.5s，视频默值认为1s。最大取值1s。
                     * 
                     */
                    void SetMorphTime(const double& _morphTime);

                    /**
                     * 判断参数 MorphTime 是否已赋值
                     * @return MorphTime 是否已赋值
                     * 
                     */
                    bool MorphTimeHasBeenSet() const;

                private:

                    /**
                     * 图片的展示时长，即单张图片静止不变的时间。GIF默认每张图片0.7s，视频默认每张图片0.5s。最大取值1s。
                     */
                    double m_tempo;
                    bool m_tempoHasBeenSet;

                    /**
                     * 人像渐变的最长时间，即单张图片使用渐变特效的时间。 GIF默认值为0.5s，视频默值认为1s。最大取值1s。
                     */
                    double m_morphTime;
                    bool m_morphTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FT_V20200304_MODEL_GRADIENTINFO_H_
