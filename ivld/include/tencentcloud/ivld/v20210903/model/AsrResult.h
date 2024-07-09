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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_ASRRESULT_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_ASRRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 一条 asr 语音结果的结构
                */
                class AsrResult : public AbstractModel
                {
                public:
                    AsrResult();
                    ~AsrResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ASR提取的文字信息
                     * @return Content ASR提取的文字信息
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置ASR提取的文字信息
                     * @param _content ASR提取的文字信息
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取ASR起始时间戳，从0开始
                     * @return StartTimeStamp ASR起始时间戳，从0开始
                     * 
                     */
                    double GetStartTimeStamp() const;

                    /**
                     * 设置ASR起始时间戳，从0开始
                     * @param _startTimeStamp ASR起始时间戳，从0开始
                     * 
                     */
                    void SetStartTimeStamp(const double& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     * 
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取ASR结束时间戳，从0开始
                     * @return EndTimeStamp ASR结束时间戳，从0开始
                     * 
                     */
                    double GetEndTimeStamp() const;

                    /**
                     * 设置ASR结束时间戳，从0开始
                     * @param _endTimeStamp ASR结束时间戳，从0开始
                     * 
                     */
                    void SetEndTimeStamp(const double& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                private:

                    /**
                     * ASR提取的文字信息
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * ASR起始时间戳，从0开始
                     */
                    double m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * ASR结束时间戳，从0开始
                     */
                    double m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_ASRRESULT_H_
