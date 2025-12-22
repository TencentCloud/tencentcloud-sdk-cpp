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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESIMPORTINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESIMPORTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Es导入信息
                */
                class EsImportInfo : public AbstractModel
                {
                public:
                    EsImportInfo();
                    ~EsImportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导入模式。
1. 导入历史数据
2. 导入实时数据
                     * @return Type 导入模式。
1. 导入历史数据
2. 导入实时数据
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置导入模式。
1. 导入历史数据
2. 导入实时数据
                     * @param _type 导入模式。
1. 导入历史数据
2. 导入实时数据
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取开始时间。 单位:秒级时间戳。

                     * @return StartTime 开始时间。 单位:秒级时间戳。

                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间。 单位:秒级时间戳。

                     * @param _startTime 开始时间。 单位:秒级时间戳。

                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。 单位：秒级时间戳。
                     * @return EndTime 结束时间。 单位：秒级时间戳。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间。 单位：秒级时间戳。
                     * @param _endTime 结束时间。 单位：秒级时间戳。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取最大延迟时间。单位：s

导入模式为 2: 导入实时数据时必填
                     * @return MaxDelay 最大延迟时间。单位：s

导入模式为 2: 导入实时数据时必填
                     * 
                     */
                    uint64_t GetMaxDelay() const;

                    /**
                     * 设置最大延迟时间。单位：s

导入模式为 2: 导入实时数据时必填
                     * @param _maxDelay 最大延迟时间。单位：s

导入模式为 2: 导入实时数据时必填
                     * 
                     */
                    void SetMaxDelay(const uint64_t& _maxDelay);

                    /**
                     * 判断参数 MaxDelay 是否已赋值
                     * @return MaxDelay 是否已赋值
                     * 
                     */
                    bool MaxDelayHasBeenSet() const;

                    /**
                     * 获取检查间隔。单位：s

导入模式为 2: 导入实时数据时必填
                     * @return CheckInterval 检查间隔。单位：s

导入模式为 2: 导入实时数据时必填
                     * 
                     */
                    uint64_t GetCheckInterval() const;

                    /**
                     * 设置检查间隔。单位：s

导入模式为 2: 导入实时数据时必填
                     * @param _checkInterval 检查间隔。单位：s

导入模式为 2: 导入实时数据时必填
                     * 
                     */
                    void SetCheckInterval(const uint64_t& _checkInterval);

                    /**
                     * 判断参数 CheckInterval 是否已赋值
                     * @return CheckInterval 是否已赋值
                     * 
                     */
                    bool CheckIntervalHasBeenSet() const;

                private:

                    /**
                     * 导入模式。
1. 导入历史数据
2. 导入实时数据
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 开始时间。 单位:秒级时间戳。

                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间。 单位：秒级时间戳。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 最大延迟时间。单位：s

导入模式为 2: 导入实时数据时必填
                     */
                    uint64_t m_maxDelay;
                    bool m_maxDelayHasBeenSet;

                    /**
                     * 检查间隔。单位：s

导入模式为 2: 导入实时数据时必填
                     */
                    uint64_t m_checkInterval;
                    bool m_checkIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESIMPORTINFO_H_
