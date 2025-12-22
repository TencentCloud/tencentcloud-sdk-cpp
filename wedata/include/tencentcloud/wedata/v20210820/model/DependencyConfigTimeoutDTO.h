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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIGTIMEOUTDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIGTIMEOUTDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 超时弱依赖配置
                */
                class DependencyConfigTimeoutDTO : public AbstractModel
                {
                public:
                    DependencyConfigTimeoutDTO();
                    ~DependencyConfigTimeoutDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取超时类型
WAIT_TOTAL_TIMEOUT 等待总时长

RUNNING_TIMEOUT 运行时长

WAIT_TIME_POINT_TIMEOUT 等待超过配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutType 超时类型
WAIT_TOTAL_TIMEOUT 等待总时长

RUNNING_TIMEOUT 运行时长

WAIT_TIME_POINT_TIMEOUT 等待超过配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeoutType() const;

                    /**
                     * 设置超时类型
WAIT_TOTAL_TIMEOUT 等待总时长

RUNNING_TIMEOUT 运行时长

WAIT_TIME_POINT_TIMEOUT 等待超过配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutType 超时类型
WAIT_TOTAL_TIMEOUT 等待总时长

RUNNING_TIMEOUT 运行时长

WAIT_TIME_POINT_TIMEOUT 等待超过配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeoutType(const std::string& _timeoutType);

                    /**
                     * 判断参数 TimeoutType 是否已赋值
                     * @return TimeoutType 是否已赋值
                     * 
                     */
                    bool TimeoutTypeHasBeenSet() const;

                    /**
                     * 获取超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutValue 超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTimeoutValue() const;

                    /**
                     * 设置超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutValue 超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeoutValue(const int64_t& _timeoutValue);

                    /**
                     * 判断参数 TimeoutValue 是否已赋值
                     * @return TimeoutValue 是否已赋值
                     * 
                     */
                    bool TimeoutValueHasBeenSet() const;

                    /**
                     * 获取固定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeoutPoint 固定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimeoutPoint() const;

                    /**
                     * 设置固定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeoutPoint 固定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeoutPoint(const std::string& _timeoutPoint);

                    /**
                     * 判断参数 TimeoutPoint 是否已赋值
                     * @return TimeoutPoint 是否已赋值
                     * 
                     */
                    bool TimeoutPointHasBeenSet() const;

                private:

                    /**
                     * 超时类型
WAIT_TOTAL_TIMEOUT 等待总时长

RUNNING_TIMEOUT 运行时长

WAIT_TIME_POINT_TIMEOUT 等待超过配置时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeoutType;
                    bool m_timeoutTypeHasBeenSet;

                    /**
                     * 超时时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_timeoutValue;
                    bool m_timeoutValueHasBeenSet;

                    /**
                     * 固定时间点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timeoutPoint;
                    bool m_timeoutPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DEPENDENCYCONFIGTIMEOUTDTO_H_
