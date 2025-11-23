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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LIMITWINDOW_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LIMITWINDOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 限流窗口大小
                */
                class LimitWindow : public AbstractModel
                {
                public:
                    LimitWindow();
                    ~LimitWindow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取每秒允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Second 每秒允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSecond() const;

                    /**
                     * 设置每秒允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _second 每秒允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecond(const int64_t& _second);

                    /**
                     * 判断参数 Second 是否已赋值
                     * @return Second 是否已赋值
                     * 
                     */
                    bool SecondHasBeenSet() const;

                    /**
                     * 获取每分钟允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Minute 每分钟允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinute() const;

                    /**
                     * 设置每分钟允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minute 每分钟允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinute(const int64_t& _minute);

                    /**
                     * 判断参数 Minute 是否已赋值
                     * @return Minute 是否已赋值
                     * 
                     */
                    bool MinuteHasBeenSet() const;

                    /**
                     * 获取每小时允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hour 每小时允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHour() const;

                    /**
                     * 设置每小时允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hour 每小时允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHour(const int64_t& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                    /**
                     * 获取是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaShare 是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetQuotaShare() const;

                    /**
                     * 设置是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaShare 是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaShare(const bool& _quotaShare);

                    /**
                     * 判断参数 QuotaShare 是否已赋值
                     * @return QuotaShare 是否已赋值
                     * 
                     */
                    bool QuotaShareHasBeenSet() const;

                private:

                    /**
                     * 每秒允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_second;
                    bool m_secondHasBeenSet;

                    /**
                     * 每分钟允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minute;
                    bool m_minuteHasBeenSet;

                    /**
                     * 每小时允许通过的最大请求数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hour;
                    bool m_hourHasBeenSet;

                    /**
                     * 是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_quotaShare;
                    bool m_quotaShareHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LIMITWINDOW_H_
