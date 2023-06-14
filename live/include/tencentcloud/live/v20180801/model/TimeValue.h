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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMEVALUE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 某个时间点的指标的数值是多少。
                */
                class TimeValue : public AbstractModel
                {
                public:
                    TimeValue();
                    ~TimeValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UTC 时间，时间格式：yyyy-mm-ddTHH:MM:SSZ。
                     * @return Time UTC 时间，时间格式：yyyy-mm-ddTHH:MM:SSZ。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置UTC 时间，时间格式：yyyy-mm-ddTHH:MM:SSZ。
                     * @param _time UTC 时间，时间格式：yyyy-mm-ddTHH:MM:SSZ。
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
                     * 获取数值。
                     * @return Num 数值。
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置数值。
                     * @param _num 数值。
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * UTC 时间，时间格式：yyyy-mm-ddTHH:MM:SSZ。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 数值。
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMEVALUE_H_
