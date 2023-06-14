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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_LOUDNESSINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_LOUDNESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 音频响度信息
                */
                class LoudnessInfo : public AbstractModel
                {
                public:
                    LoudnessInfo();
                    ~LoudnessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频整体响度
                     * @return Loudness 音频整体响度
                     * 
                     */
                    double GetLoudness() const;

                    /**
                     * 设置音频整体响度
                     * @param _loudness 音频整体响度
                     * 
                     */
                    void SetLoudness(const double& _loudness);

                    /**
                     * 判断参数 Loudness 是否已赋值
                     * @return Loudness 是否已赋值
                     * 
                     */
                    bool LoudnessHasBeenSet() const;

                    /**
                     * 获取音频响度范围
                     * @return LoudnessRange 音频响度范围
                     * 
                     */
                    double GetLoudnessRange() const;

                    /**
                     * 设置音频响度范围
                     * @param _loudnessRange 音频响度范围
                     * 
                     */
                    void SetLoudnessRange(const double& _loudnessRange);

                    /**
                     * 判断参数 LoudnessRange 是否已赋值
                     * @return LoudnessRange 是否已赋值
                     * 
                     */
                    bool LoudnessRangeHasBeenSet() const;

                private:

                    /**
                     * 音频整体响度
                     */
                    double m_loudness;
                    bool m_loudnessHasBeenSet;

                    /**
                     * 音频响度范围
                     */
                    double m_loudnessRange;
                    bool m_loudnessRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_LOUDNESSINFO_H_
