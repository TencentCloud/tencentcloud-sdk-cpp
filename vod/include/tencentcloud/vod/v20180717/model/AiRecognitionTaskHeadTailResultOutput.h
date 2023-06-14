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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULTOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频片头片尾识别输出。
                */
                class AiRecognitionTaskHeadTailResultOutput : public AbstractModel
                {
                public:
                    AiRecognitionTaskHeadTailResultOutput();
                    ~AiRecognitionTaskHeadTailResultOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片头识别置信度。取值：0~100。
                     * @return HeadConfidence 片头识别置信度。取值：0~100。
                     * 
                     */
                    double GetHeadConfidence() const;

                    /**
                     * 设置片头识别置信度。取值：0~100。
                     * @param _headConfidence 片头识别置信度。取值：0~100。
                     * 
                     */
                    void SetHeadConfidence(const double& _headConfidence);

                    /**
                     * 判断参数 HeadConfidence 是否已赋值
                     * @return HeadConfidence 是否已赋值
                     * 
                     */
                    bool HeadConfidenceHasBeenSet() const;

                    /**
                     * 获取视频片头的结束时间点，单位：秒。
                     * @return HeadTimeOffset 视频片头的结束时间点，单位：秒。
                     * 
                     */
                    double GetHeadTimeOffset() const;

                    /**
                     * 设置视频片头的结束时间点，单位：秒。
                     * @param _headTimeOffset 视频片头的结束时间点，单位：秒。
                     * 
                     */
                    void SetHeadTimeOffset(const double& _headTimeOffset);

                    /**
                     * 判断参数 HeadTimeOffset 是否已赋值
                     * @return HeadTimeOffset 是否已赋值
                     * 
                     */
                    bool HeadTimeOffsetHasBeenSet() const;

                    /**
                     * 获取片尾识别置信度。取值：0~100。
                     * @return TailConfidence 片尾识别置信度。取值：0~100。
                     * 
                     */
                    double GetTailConfidence() const;

                    /**
                     * 设置片尾识别置信度。取值：0~100。
                     * @param _tailConfidence 片尾识别置信度。取值：0~100。
                     * 
                     */
                    void SetTailConfidence(const double& _tailConfidence);

                    /**
                     * 判断参数 TailConfidence 是否已赋值
                     * @return TailConfidence 是否已赋值
                     * 
                     */
                    bool TailConfidenceHasBeenSet() const;

                    /**
                     * 获取视频片尾的开始时间点，单位：秒。
                     * @return TailTimeOffset 视频片尾的开始时间点，单位：秒。
                     * 
                     */
                    double GetTailTimeOffset() const;

                    /**
                     * 设置视频片尾的开始时间点，单位：秒。
                     * @param _tailTimeOffset 视频片尾的开始时间点，单位：秒。
                     * 
                     */
                    void SetTailTimeOffset(const double& _tailTimeOffset);

                    /**
                     * 判断参数 TailTimeOffset 是否已赋值
                     * @return TailTimeOffset 是否已赋值
                     * 
                     */
                    bool TailTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 片头识别置信度。取值：0~100。
                     */
                    double m_headConfidence;
                    bool m_headConfidenceHasBeenSet;

                    /**
                     * 视频片头的结束时间点，单位：秒。
                     */
                    double m_headTimeOffset;
                    bool m_headTimeOffsetHasBeenSet;

                    /**
                     * 片尾识别置信度。取值：0~100。
                     */
                    double m_tailConfidence;
                    bool m_tailConfidenceHasBeenSet;

                    /**
                     * 视频片尾的开始时间点，单位：秒。
                     */
                    double m_tailTimeOffset;
                    bool m_tailTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKHEADTAILRESULTOUTPUT_H_
