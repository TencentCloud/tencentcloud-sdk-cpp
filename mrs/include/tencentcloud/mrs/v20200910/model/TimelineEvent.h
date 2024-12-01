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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TIMELINEEVENT_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TIMELINEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Rectangle.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 时间轴事件
                */
                class TimelineEvent : public AbstractModel
                {
                public:
                    TimelineEvent();
                    ~TimelineEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件类型
                     * @return Type 事件类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型
                     * @param _type 事件类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取原文本
                     * @return Src 原文本
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文本
                     * @param _src 原文本
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取事件子类型
                     * @return SubType 事件子类型
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置事件子类型
                     * @param _subType 事件子类型
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取事件发生时间
                     * @return Time 事件发生时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置事件发生时间
                     * @param _time 事件发生时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取事件值
                     * @return Value 事件值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置事件值
                     * @param _value 事件值
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
                     * 获取位置坐标
                     * @return Rectangle 位置坐标
                     * 
                     */
                    Rectangle GetRectangle() const;

                    /**
                     * 设置位置坐标
                     * @param _rectangle 位置坐标
                     * 
                     */
                    void SetRectangle(const Rectangle& _rectangle);

                    /**
                     * 判断参数 Rectangle 是否已赋值
                     * @return Rectangle 是否已赋值
                     * 
                     */
                    bool RectangleHasBeenSet() const;

                    /**
                     * 获取事件发生地点
                     * @return Place 事件发生地点
                     * 
                     */
                    std::string GetPlace() const;

                    /**
                     * 设置事件发生地点
                     * @param _place 事件发生地点
                     * 
                     */
                    void SetPlace(const std::string& _place);

                    /**
                     * 判断参数 Place 是否已赋值
                     * @return Place 是否已赋值
                     * 
                     */
                    bool PlaceHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 事件类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 原文本
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 事件子类型
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 事件发生时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 事件值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 位置坐标
                     */
                    Rectangle m_rectangle;
                    bool m_rectangleHasBeenSet;

                    /**
                     * 事件发生地点
                     */
                    std::string m_place;
                    bool m_placeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TIMELINEEVENT_H_
