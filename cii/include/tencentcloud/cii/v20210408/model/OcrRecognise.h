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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_OCRRECOGNISE_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_OCRRECOGNISE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cii/v20210408/model/Location.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * Ocr识别结果
                */
                class OcrRecognise : public AbstractModel
                {
                public:
                    OcrRecognise();
                    ~OcrRecognise() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原文字段
                     * @return OriginalField 原文字段
                     * 
                     */
                    std::string GetOriginalField() const;

                    /**
                     * 设置原文字段
                     * @param _originalField 原文字段
                     * 
                     */
                    void SetOriginalField(const std::string& _originalField);

                    /**
                     * 判断参数 OriginalField 是否已赋值
                     * @return OriginalField 是否已赋值
                     * 
                     */
                    bool OriginalFieldHasBeenSet() const;

                    /**
                     * 获取识别结果
                     * @return Value 识别结果
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置识别结果
                     * @param _value 识别结果
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取置信度
                     * @return Confidence 置信度
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置置信度
                     * @param _confidence 置信度
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取位置信息
                     * @return Location 位置信息
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置位置信息
                     * @param _location 位置信息
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取字段名
                     * @return Field 字段名
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置字段名
                     * @param _field 字段名
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                private:

                    /**
                     * 原文字段
                     */
                    std::string m_originalField;
                    bool m_originalFieldHasBeenSet;

                    /**
                     * 识别结果
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 置信度
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 位置信息
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 字段名
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_OCRRECOGNISE_H_
