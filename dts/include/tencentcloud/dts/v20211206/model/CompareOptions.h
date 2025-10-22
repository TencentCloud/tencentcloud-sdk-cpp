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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOPTIONS_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 一致性校验选项
                */
                class CompareOptions : public AbstractModel
                {
                public:
                    CompareOptions();
                    ~CompareOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
                     * @return Method 对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
                     * @param _method 对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取抽样比例;范围0,100。默认为100
                     * @return SampleRate 抽样比例;范围0,100。默认为100
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置抽样比例;范围0,100。默认为100
                     * @param _sampleRate 抽样比例;范围0,100。默认为100
                     * 
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     * 
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取线程数，取值1-8，默认为1
                     * @return ThreadCount 线程数，取值1-8，默认为1
                     * 
                     */
                    int64_t GetThreadCount() const;

                    /**
                     * 设置线程数，取值1-8，默认为1
                     * @param _threadCount 线程数，取值1-8，默认为1
                     * 
                     */
                    void SetThreadCount(const int64_t& _threadCount);

                    /**
                     * 判断参数 ThreadCount 是否已赋值
                     * @return ThreadCount 是否已赋值
                     * 
                     */
                    bool ThreadCountHasBeenSet() const;

                    /**
                     * 获取对比类型：builtin（内置校验）、independent（独立校验）。默认为builtin，mongodb及redis链路不支持独立校验。
                     * @return Type 对比类型：builtin（内置校验）、independent（独立校验）。默认为builtin，mongodb及redis链路不支持独立校验。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置对比类型：builtin（内置校验）、independent（独立校验）。默认为builtin，mongodb及redis链路不支持独立校验。
                     * @param _type 对比类型：builtin（内置校验）、independent（独立校验）。默认为builtin，mongodb及redis链路不支持独立校验。
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
                     * 获取校验类型，枚举值：structureCheck-结构校验(目前仅postgresql支持)、full-全量校验、increment-增量校验(如果勾选了增量校验，Method只能选dataCheck)、advanceObject-数据库信息校验(目前仅mongodb支持) 
                     * @return CompareMode 校验类型，枚举值：structureCheck-结构校验(目前仅postgresql支持)、full-全量校验、increment-增量校验(如果勾选了增量校验，Method只能选dataCheck)、advanceObject-数据库信息校验(目前仅mongodb支持) 
                     * 
                     */
                    std::vector<std::string> GetCompareMode() const;

                    /**
                     * 设置校验类型，枚举值：structureCheck-结构校验(目前仅postgresql支持)、full-全量校验、increment-增量校验(如果勾选了增量校验，Method只能选dataCheck)、advanceObject-数据库信息校验(目前仅mongodb支持) 
                     * @param _compareMode 校验类型，枚举值：structureCheck-结构校验(目前仅postgresql支持)、full-全量校验、increment-增量校验(如果勾选了增量校验，Method只能选dataCheck)、advanceObject-数据库信息校验(目前仅mongodb支持) 
                     * 
                     */
                    void SetCompareMode(const std::vector<std::string>& _compareMode);

                    /**
                     * 判断参数 CompareMode 是否已赋值
                     * @return CompareMode 是否已赋值
                     * 
                     */
                    bool CompareModeHasBeenSet() const;

                    /**
                     * 获取复检次数
                     * @return ReCheckTime 复检次数
                     * 
                     */
                    int64_t GetReCheckTime() const;

                    /**
                     * 设置复检次数
                     * @param _reCheckTime 复检次数
                     * 
                     */
                    void SetReCheckTime(const int64_t& _reCheckTime);

                    /**
                     * 判断参数 ReCheckTime 是否已赋值
                     * @return ReCheckTime 是否已赋值
                     * 
                     */
                    bool ReCheckTimeHasBeenSet() const;

                    /**
                     * 获取复检时间间隔，单位为分钟，取值 1-60
                     * @return ReCheckInterval 复检时间间隔，单位为分钟，取值 1-60
                     * 
                     */
                    int64_t GetReCheckInterval() const;

                    /**
                     * 设置复检时间间隔，单位为分钟，取值 1-60
                     * @param _reCheckInterval 复检时间间隔，单位为分钟，取值 1-60
                     * 
                     */
                    void SetReCheckInterval(const int64_t& _reCheckInterval);

                    /**
                     * 判断参数 ReCheckInterval 是否已赋值
                     * @return ReCheckInterval 是否已赋值
                     * 
                     */
                    bool ReCheckIntervalHasBeenSet() const;

                private:

                    /**
                     * 对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 抽样比例;范围0,100。默认为100
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 线程数，取值1-8，默认为1
                     */
                    int64_t m_threadCount;
                    bool m_threadCountHasBeenSet;

                    /**
                     * 对比类型：builtin（内置校验）、independent（独立校验）。默认为builtin，mongodb及redis链路不支持独立校验。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 校验类型，枚举值：structureCheck-结构校验(目前仅postgresql支持)、full-全量校验、increment-增量校验(如果勾选了增量校验，Method只能选dataCheck)、advanceObject-数据库信息校验(目前仅mongodb支持) 
                     */
                    std::vector<std::string> m_compareMode;
                    bool m_compareModeHasBeenSet;

                    /**
                     * 复检次数
                     */
                    int64_t m_reCheckTime;
                    bool m_reCheckTimeHasBeenSet;

                    /**
                     * 复检时间间隔，单位为分钟，取值 1-60
                     */
                    int64_t m_reCheckInterval;
                    bool m_reCheckIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOPTIONS_H_
