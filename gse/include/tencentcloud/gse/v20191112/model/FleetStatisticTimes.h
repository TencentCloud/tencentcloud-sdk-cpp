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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_FLEETSTATISTICTIMES_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_FLEETSTATISTICTIMES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 舰队统计总时长
                */
                class FleetStatisticTimes : public AbstractModel
                {
                public:
                    FleetStatisticTimes();
                    ~FleetStatisticTimes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BeginTime 统计开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置统计开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _beginTime 统计开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取统计总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalUsedTimeSeconds 统计总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTotalUsedTimeSeconds() const;

                    /**
                     * 设置统计总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalUsedTimeSeconds 统计总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalUsedTimeSeconds(const std::string& _totalUsedTimeSeconds);

                    /**
                     * 判断参数 TotalUsedTimeSeconds 是否已赋值
                     * @return TotalUsedTimeSeconds 是否已赋值
                     * 
                     */
                    bool TotalUsedTimeSecondsHasBeenSet() const;

                private:

                    /**
                     * 统计开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 统计总时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_totalUsedTimeSeconds;
                    bool m_totalUsedTimeSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_FLEETSTATISTICTIMES_H_
