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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTINFO_H_

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
                * 可视文本识别结果信息(OCR)
                */
                class TextInfo : public AbstractModel
                {
                public:
                    TextInfo();
                    ~TextInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OCR提取的内容
                     * @return Content OCR提取的内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置OCR提取的内容
                     * @param _content OCR提取的内容
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
                     * 获取OCR起始时间戳，从0开始
                     * @return StartTimeStamp OCR起始时间戳，从0开始
                     * 
                     */
                    double GetStartTimeStamp() const;

                    /**
                     * 设置OCR起始时间戳，从0开始
                     * @param _startTimeStamp OCR起始时间戳，从0开始
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
                     * 获取OCR结束时间戳，从0开始
                     * @return EndTimeStamp OCR结束时间戳，从0开始
                     * 
                     */
                    double GetEndTimeStamp() const;

                    /**
                     * 设置OCR结束时间戳，从0开始
                     * @param _endTimeStamp OCR结束时间戳，从0开始
                     * 
                     */
                    void SetEndTimeStamp(const double& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     * 
                     */
                    bool EndTimeStampHasBeenSet() const;

                    /**
                     * 获取OCR标签信息
                     * @return Tag OCR标签信息
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置OCR标签信息
                     * @param _tag OCR标签信息
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * OCR提取的内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * OCR起始时间戳，从0开始
                     */
                    double m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * OCR结束时间戳，从0开始
                     */
                    double m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * OCR标签信息
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_TEXTINFO_H_
