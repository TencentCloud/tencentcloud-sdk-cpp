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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_TIMEVALUE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_TIMEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 查询指标返回的时间序列
                */
                class TimeValue : public AbstractModel
                {
                public:
                    TimeValue();
                    ~TimeValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unix时间戳，单位秒
                     * @return Time Unix时间戳，单位秒
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Unix时间戳，单位秒
                     * @param _time Unix时间戳，单位秒
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取查询指标对应当前时间的值
                     * @return Value 查询指标对应当前时间的值
                     * 
                     */
                    double GetValue() const;

                    /**
                     * 设置查询指标对应当前时间的值
                     * @param _value 查询指标对应当前时间的值
                     * 
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Unix时间戳，单位秒
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 查询指标对应当前时间的值
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_TIMEVALUE_H_
