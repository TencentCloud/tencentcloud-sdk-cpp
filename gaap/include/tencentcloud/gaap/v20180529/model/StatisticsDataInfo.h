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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_STATISTICSDATAINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_STATISTICSDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 统计数据信息
                */
                class StatisticsDataInfo : public AbstractModel
                {
                public:
                    StatisticsDataInfo();
                    ~StatisticsDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应的时间点
                     * @return Time 对应的时间点
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置对应的时间点
                     * @param _time 对应的时间点
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
                     * 获取统计数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 统计数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetData() const;

                    /**
                     * 设置统计数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 统计数据值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const double& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 对应的时间点
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 统计数据值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_STATISTICSDATAINFO_H_
