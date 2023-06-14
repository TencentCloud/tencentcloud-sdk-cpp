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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_OPENINGENDINGTASKRESULTITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_OPENINGENDINGTASKRESULTITEM_H_

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
                * 片头片尾识别结果项
                */
                class OpeningEndingTaskResultItem : public AbstractModel
                {
                public:
                    OpeningEndingTaskResultItem();
                    ~OpeningEndingTaskResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频片头的结束时间点，单位：秒。
                     * @return OpeningTimeOffset 视频片头的结束时间点，单位：秒。
                     * 
                     */
                    double GetOpeningTimeOffset() const;

                    /**
                     * 设置视频片头的结束时间点，单位：秒。
                     * @param _openingTimeOffset 视频片头的结束时间点，单位：秒。
                     * 
                     */
                    void SetOpeningTimeOffset(const double& _openingTimeOffset);

                    /**
                     * 判断参数 OpeningTimeOffset 是否已赋值
                     * @return OpeningTimeOffset 是否已赋值
                     * 
                     */
                    bool OpeningTimeOffsetHasBeenSet() const;

                    /**
                     * 获取片头识别置信度，取值范围是 0 到 100。
                     * @return OpeningConfidence 片头识别置信度，取值范围是 0 到 100。
                     * 
                     */
                    double GetOpeningConfidence() const;

                    /**
                     * 设置片头识别置信度，取值范围是 0 到 100。
                     * @param _openingConfidence 片头识别置信度，取值范围是 0 到 100。
                     * 
                     */
                    void SetOpeningConfidence(const double& _openingConfidence);

                    /**
                     * 判断参数 OpeningConfidence 是否已赋值
                     * @return OpeningConfidence 是否已赋值
                     * 
                     */
                    bool OpeningConfidenceHasBeenSet() const;

                    /**
                     * 获取视频片尾的开始时间点，单位：秒。
                     * @return EndingTimeOffset 视频片尾的开始时间点，单位：秒。
                     * 
                     */
                    double GetEndingTimeOffset() const;

                    /**
                     * 设置视频片尾的开始时间点，单位：秒。
                     * @param _endingTimeOffset 视频片尾的开始时间点，单位：秒。
                     * 
                     */
                    void SetEndingTimeOffset(const double& _endingTimeOffset);

                    /**
                     * 判断参数 EndingTimeOffset 是否已赋值
                     * @return EndingTimeOffset 是否已赋值
                     * 
                     */
                    bool EndingTimeOffsetHasBeenSet() const;

                    /**
                     * 获取片尾识别置信度，取值范围是 0 到 100。
                     * @return EndingConfidence 片尾识别置信度，取值范围是 0 到 100。
                     * 
                     */
                    double GetEndingConfidence() const;

                    /**
                     * 设置片尾识别置信度，取值范围是 0 到 100。
                     * @param _endingConfidence 片尾识别置信度，取值范围是 0 到 100。
                     * 
                     */
                    void SetEndingConfidence(const double& _endingConfidence);

                    /**
                     * 判断参数 EndingConfidence 是否已赋值
                     * @return EndingConfidence 是否已赋值
                     * 
                     */
                    bool EndingConfidenceHasBeenSet() const;

                private:

                    /**
                     * 视频片头的结束时间点，单位：秒。
                     */
                    double m_openingTimeOffset;
                    bool m_openingTimeOffsetHasBeenSet;

                    /**
                     * 片头识别置信度，取值范围是 0 到 100。
                     */
                    double m_openingConfidence;
                    bool m_openingConfidenceHasBeenSet;

                    /**
                     * 视频片尾的开始时间点，单位：秒。
                     */
                    double m_endingTimeOffset;
                    bool m_endingTimeOffsetHasBeenSet;

                    /**
                     * 片尾识别置信度，取值范围是 0 到 100。
                     */
                    double m_endingConfidence;
                    bool m_endingConfidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_OPENINGENDINGTASKRESULTITEM_H_
