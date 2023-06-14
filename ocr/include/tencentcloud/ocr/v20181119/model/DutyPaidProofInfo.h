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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_DUTYPAIDPROOFINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_DUTYPAIDPROOFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Rect.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 识别出的字段
                */
                class DutyPaidProofInfo : public AbstractModel
                {
                public:
                    DutyPaidProofInfo();
                    ~DutyPaidProofInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别出的字段名称(关键字)，支持以下字段：
税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。
                     * @return Name 识别出的字段名称(关键字)，支持以下字段：
税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别出的字段名称(关键字)，支持以下字段：
税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。
                     * @param _name 识别出的字段名称(关键字)，支持以下字段：
税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     * @return Value 识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     * @param _value 识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
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
                     * 获取文本行在旋转纠正之后的图像中的像素坐标。
                     * @return Rect 文本行在旋转纠正之后的图像中的像素坐标。
                     * 
                     */
                    Rect GetRect() const;

                    /**
                     * 设置文本行在旋转纠正之后的图像中的像素坐标。
                     * @param _rect 文本行在旋转纠正之后的图像中的像素坐标。
                     * 
                     */
                    void SetRect(const Rect& _rect);

                    /**
                     * 判断参数 Rect 是否已赋值
                     * @return Rect 是否已赋值
                     * 
                     */
                    bool RectHasBeenSet() const;

                private:

                    /**
                     * 识别出的字段名称(关键字)，支持以下字段：
税号 、纳税人识别号 、纳税人名称 、金额合计大写 、金额合计小写 、填发日期 、税务机关 、填票人。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 识别出的字段名称对应的值，也就是字段Name对应的字符串结果。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 文本行在旋转纠正之后的图像中的像素坐标。
                     */
                    Rect m_rect;
                    bool m_rectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_DUTYPAIDPROOFINFO_H_
