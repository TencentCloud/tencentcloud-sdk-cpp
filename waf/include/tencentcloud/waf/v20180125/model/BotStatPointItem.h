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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTSTATPOINTITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTSTATPOINTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * bot的趋势图对象
                */
                class BotStatPointItem : public AbstractModel
                {
                public:
                    BotStatPointItem();
                    ~BotStatPointItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取横坐标
                     * @return TimeStamp 横坐标
                     * 
                     */
                    std::string GetTimeStamp() const;

                    /**
                     * 设置横坐标
                     * @param _timeStamp 横坐标
                     * 
                     */
                    void SetTimeStamp(const std::string& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     * 
                     */
                    bool TimeStampHasBeenSet() const;

                    /**
                     * 获取value的所属对象
                     * @return Key value的所属对象
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置value的所属对象
                     * @param _key value的所属对象
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取纵列表
                     * @return Value 纵列表
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置纵列表
                     * @param _value 纵列表
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Key对应的页面展示内容
                     * @return Label Key对应的页面展示内容
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Key对应的页面展示内容
                     * @param _label Key对应的页面展示内容
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 横坐标
                     */
                    std::string m_timeStamp;
                    bool m_timeStampHasBeenSet;

                    /**
                     * value的所属对象
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 纵列表
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Key对应的页面展示内容
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTSTATPOINTITEM_H_
