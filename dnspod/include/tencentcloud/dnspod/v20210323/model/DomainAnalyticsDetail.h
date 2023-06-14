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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSDETAIL_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 当前统计维度解析量小计
                */
                class DomainAnalyticsDetail : public AbstractModel
                {
                public:
                    DomainAnalyticsDetail();
                    ~DomainAnalyticsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前统计维度解析量小计
                     * @return Num 当前统计维度解析量小计
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置当前统计维度解析量小计
                     * @param _num 当前统计维度解析量小计
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取按天统计时，为统计日期
                     * @return DateKey 按天统计时，为统计日期
                     * 
                     */
                    std::string GetDateKey() const;

                    /**
                     * 设置按天统计时，为统计日期
                     * @param _dateKey 按天统计时，为统计日期
                     * 
                     */
                    void SetDateKey(const std::string& _dateKey);

                    /**
                     * 判断参数 DateKey 是否已赋值
                     * @return DateKey 是否已赋值
                     * 
                     */
                    bool DateKeyHasBeenSet() const;

                    /**
                     * 获取按小时统计时，为统计的当前时间的小时数(0-23)，例：HourKey为23时，统计周期为22点-23点的解析量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HourKey 按小时统计时，为统计的当前时间的小时数(0-23)，例：HourKey为23时，统计周期为22点-23点的解析量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHourKey() const;

                    /**
                     * 设置按小时统计时，为统计的当前时间的小时数(0-23)，例：HourKey为23时，统计周期为22点-23点的解析量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hourKey 按小时统计时，为统计的当前时间的小时数(0-23)，例：HourKey为23时，统计周期为22点-23点的解析量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHourKey(const uint64_t& _hourKey);

                    /**
                     * 判断参数 HourKey 是否已赋值
                     * @return HourKey 是否已赋值
                     * 
                     */
                    bool HourKeyHasBeenSet() const;

                private:

                    /**
                     * 当前统计维度解析量小计
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 按天统计时，为统计日期
                     */
                    std::string m_dateKey;
                    bool m_dateKeyHasBeenSet;

                    /**
                     * 按小时统计时，为统计的当前时间的小时数(0-23)，例：HourKey为23时，统计周期为22点-23点的解析量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hourKey;
                    bool m_hourKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINANALYTICSDETAIL_H_
