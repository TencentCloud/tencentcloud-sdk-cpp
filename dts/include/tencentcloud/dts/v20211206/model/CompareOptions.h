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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleRate 抽样比例;范围0,100。默认为100
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置抽样比例;范围0,100。默认为100
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sampleRate 抽样比例;范围0,100。默认为100
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取线程数，取值1-5，默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThreadCount 线程数，取值1-5，默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetThreadCount() const;

                    /**
                     * 设置线程数，取值1-5，默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _threadCount 线程数，取值1-5，默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThreadCount(const int64_t& _threadCount);

                    /**
                     * 判断参数 ThreadCount 是否已赋值
                     * @return ThreadCount 是否已赋值
                     * 
                     */
                    bool ThreadCountHasBeenSet() const;

                private:

                    /**
                     * 对比方式：dataCheck(完整数据对比)、sampleDataCheck(抽样数据对比)、rowsCount(行数对比), 默认为dataCheck
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 抽样比例;范围0,100。默认为100
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 线程数，取值1-5，默认为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_threadCount;
                    bool m_threadCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOPTIONS_H_
