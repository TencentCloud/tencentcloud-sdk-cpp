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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMRISKIDINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMRISKIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 告警或者风险id信息
                */
                class CosAlarmRiskIdInfo : public AbstractModel
                {
                public:
                    CosAlarmRiskIdInfo();
                    ~CosAlarmRiskIdInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警id
                     * @return AlarmRiskId 告警id
                     * 
                     */
                    int64_t GetAlarmRiskId() const;

                    /**
                     * 设置告警id
                     * @param _alarmRiskId 告警id
                     * 
                     */
                    void SetAlarmRiskId(const int64_t& _alarmRiskId);

                    /**
                     * 判断参数 AlarmRiskId 是否已赋值
                     * @return AlarmRiskId 是否已赋值
                     * 
                     */
                    bool AlarmRiskIdHasBeenSet() const;

                    /**
                     * 获取租户id
                     * @return AppId 租户id
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置租户id
                     * @param _appId 租户id
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 告警id
                     */
                    int64_t m_alarmRiskId;
                    bool m_alarmRiskIdHasBeenSet;

                    /**
                     * 租户id
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMRISKIDINFO_H_
