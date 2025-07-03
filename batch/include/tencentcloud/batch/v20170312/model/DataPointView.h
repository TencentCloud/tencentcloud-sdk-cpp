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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DATAPOINTVIEW_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DATAPOINTVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 监控采集的数据。
                */
                class DataPointView : public AbstractModel
                {
                public:
                    DataPointView();
                    ~DataPointView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控数据采集的时间

                     * @return Timestamps 监控数据采集的时间

                     * 
                     */
                    std::vector<int64_t> GetTimestamps() const;

                    /**
                     * 设置监控数据采集的时间

                     * @param _timestamps 监控数据采集的时间

                     * 
                     */
                    void SetTimestamps(const std::vector<int64_t>& _timestamps);

                    /**
                     * 判断参数 Timestamps 是否已赋值
                     * @return Timestamps 是否已赋值
                     * 
                     */
                    bool TimestampsHasBeenSet() const;

                    /**
                     * 获取监控指标数据; 如果涉及到多个实例的监控数据的间隙时间，取值会为null

                     * @return Values 监控指标数据; 如果涉及到多个实例的监控数据的间隙时间，取值会为null

                     * 
                     */
                    std::vector<double> GetValues() const;

                    /**
                     * 设置监控指标数据; 如果涉及到多个实例的监控数据的间隙时间，取值会为null

                     * @param _values 监控指标数据; 如果涉及到多个实例的监控数据的间隙时间，取值会为null

                     * 
                     */
                    void SetValues(const std::vector<double>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 监控数据采集的时间

                     */
                    std::vector<int64_t> m_timestamps;
                    bool m_timestampsHasBeenSet;

                    /**
                     * 监控指标数据; 如果涉及到多个实例的监控数据的间隙时间，取值会为null

                     */
                    std::vector<double> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DATAPOINTVIEW_H_
