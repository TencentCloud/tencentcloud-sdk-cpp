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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERSCHEDULESTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERSCHEDULESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerScheduleStatus
                */
                class AppTriggerScheduleStatus : public AbstractModel
                {
                public:
                    AppTriggerScheduleStatus();
                    ~AppTriggerScheduleStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return LastFireTime 
                     * 
                     */
                    std::string GetLastFireTime() const;

                    /**
                     * 设置
                     * @param _lastFireTime 
                     * 
                     */
                    void SetLastFireTime(const std::string& _lastFireTime);

                    /**
                     * 判断参数 LastFireTime 是否已赋值
                     * @return LastFireTime 是否已赋值
                     * 
                     */
                    bool LastFireTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return NextFireTime 
                     * 
                     */
                    std::string GetNextFireTime() const;

                    /**
                     * 设置
                     * @param _nextFireTime 
                     * 
                     */
                    void SetNextFireTime(const std::string& _nextFireTime);

                    /**
                     * 判断参数 NextFireTime 是否已赋值
                     * @return NextFireTime 是否已赋值
                     * 
                     */
                    bool NextFireTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return PolicySummary 
                     * 
                     */
                    std::string GetPolicySummary() const;

                    /**
                     * 设置
                     * @param _policySummary 
                     * 
                     */
                    void SetPolicySummary(const std::string& _policySummary);

                    /**
                     * 判断参数 PolicySummary 是否已赋值
                     * @return PolicySummary 是否已赋值
                     * 
                     */
                    bool PolicySummaryHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_lastFireTime;
                    bool m_lastFireTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_nextFireTime;
                    bool m_nextFireTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_policySummary;
                    bool m_policySummaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERSCHEDULESTATUS_H_
