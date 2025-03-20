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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATISTICDATAINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATISTICDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 统计分析维度下的统计数据详情
                */
                class StatisticDataInfo : public AbstractModel
                {
                public:
                    StatisticDataInfo();
                    ~StatisticDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计维度的值。
                     * @return Name 统计维度的值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置统计维度的值。
                     * @param _name 统计维度的值。
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
                     * 获取平均时间。
                     * @return TimeAvg 平均时间。
                     * 
                     */
                    double GetTimeAvg() const;

                    /**
                     * 设置平均时间。
                     * @param _timeAvg 平均时间。
                     * 
                     */
                    void SetTimeAvg(const double& _timeAvg);

                    /**
                     * 判断参数 TimeAvg 是否已赋值
                     * @return TimeAvg 是否已赋值
                     * 
                     */
                    bool TimeAvgHasBeenSet() const;

                    /**
                     * 获取总时间。
                     * @return TimeSum 总时间。
                     * 
                     */
                    double GetTimeSum() const;

                    /**
                     * 设置总时间。
                     * @param _timeSum 总时间。
                     * 
                     */
                    void SetTimeSum(const double& _timeSum);

                    /**
                     * 判断参数 TimeSum 是否已赋值
                     * @return TimeSum 是否已赋值
                     * 
                     */
                    bool TimeSumHasBeenSet() const;

                    /**
                     * 获取数量。
                     * @return Count 数量。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置数量。
                     * @param _count 数量。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 统计维度的值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 平均时间。
                     */
                    double m_timeAvg;
                    bool m_timeAvgHasBeenSet;

                    /**
                     * 总时间。
                     */
                    double m_timeSum;
                    bool m_timeSumHasBeenSet;

                    /**
                     * 数量。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_STATISTICDATAINFO_H_
