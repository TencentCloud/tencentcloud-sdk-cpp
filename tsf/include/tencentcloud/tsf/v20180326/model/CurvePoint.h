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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CURVEPOINT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CURVEPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 构成监控数据图的曲线坐标点
                */
                class CurvePoint : public AbstractModel
                {
                public:
                    CurvePoint();
                    ~CurvePoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前坐标 X轴的值 当前是日期格式:"yyyy-MM-dd HH:mm:ss"
                     * @return Label 当前坐标 X轴的值 当前是日期格式:"yyyy-MM-dd HH:mm:ss"
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置当前坐标 X轴的值 当前是日期格式:"yyyy-MM-dd HH:mm:ss"
                     * @param _label 当前坐标 X轴的值 当前是日期格式:"yyyy-MM-dd HH:mm:ss"
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取当前坐标 Y轴的值
                     * @return Value 当前坐标 Y轴的值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置当前坐标 Y轴的值
                     * @param _value 当前坐标 Y轴的值
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
                     * 获取该坐标点时间戳
                     * @return Timestamp 该坐标点时间戳
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置该坐标点时间戳
                     * @param _timestamp 该坐标点时间戳
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 当前坐标 X轴的值 当前是日期格式:"yyyy-MM-dd HH:mm:ss"
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 当前坐标 Y轴的值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 该坐标点时间戳
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CURVEPOINT_H_
