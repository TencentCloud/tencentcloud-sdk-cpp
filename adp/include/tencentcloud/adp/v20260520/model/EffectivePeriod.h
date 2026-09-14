/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_EFFECTIVEPERIOD_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_EFFECTIVEPERIOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 有效期
                */
                class EffectivePeriod : public AbstractModel
                {
                public:
                    EffectivePeriod();
                    ~EffectivePeriod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>有效期结束时间（Unix 秒，0 表示永久有效）</p>
                     * @return EndTime <p>有效期结束时间（Unix 秒，0 表示永久有效）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>有效期结束时间（Unix 秒，0 表示永久有效）</p>
                     * @param _endTime <p>有效期结束时间（Unix 秒，0 表示永久有效）</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>有效期开始时间（Unix 秒）</p>
                     * @return StartTime <p>有效期开始时间（Unix 秒）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>有效期开始时间（Unix 秒）</p>
                     * @param _startTime <p>有效期开始时间（Unix 秒）</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>有效期结束时间（Unix 秒，0 表示永久有效）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>有效期开始时间（Unix 秒）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_EFFECTIVEPERIOD_H_
