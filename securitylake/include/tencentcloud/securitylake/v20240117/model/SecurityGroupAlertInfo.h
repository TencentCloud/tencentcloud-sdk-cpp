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

#ifndef TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_SECURITYGROUPALERTINFO_H_
#define TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_SECURITYGROUPALERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Securitylake
    {
        namespace V20240117
        {
            namespace Model
            {
                /**
                * 被归并的原始告警信息
                */
                class SecurityGroupAlertInfo : public AbstractModel
                {
                public:
                    SecurityGroupAlertInfo();
                    ~SecurityGroupAlertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警Uuid
                     * @return AlarmUuid 告警Uuid
                     * 
                     */
                    std::string GetAlarmUuid() const;

                    /**
                     * 设置告警Uuid
                     * @param _alarmUuid 告警Uuid
                     * 
                     */
                    void SetAlarmUuid(const std::string& _alarmUuid);

                    /**
                     * 判断参数 AlarmUuid 是否已赋值
                     * @return AlarmUuid 是否已赋值
                     * 
                     */
                    bool AlarmUuidHasBeenSet() const;

                    /**
                     * 获取告警生成时间
                     * @return Timestamp 告警生成时间
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置告警生成时间
                     * @param _timestamp 告警生成时间
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 告警Uuid
                     */
                    std::string m_alarmUuid;
                    bool m_alarmUuidHasBeenSet;

                    /**
                     * 告警生成时间
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_SECURITYGROUPALERTINFO_H_
