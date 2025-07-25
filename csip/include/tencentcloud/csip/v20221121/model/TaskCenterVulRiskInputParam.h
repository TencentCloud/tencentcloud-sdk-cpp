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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERVULRISKINPUTPARAM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERVULRISKINPUTPARAM_H_

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
                * 漏洞风险高级配置
                */
                class TaskCenterVulRiskInputParam : public AbstractModel
                {
                public:
                    TaskCenterVulRiskInputParam();
                    ~TaskCenterVulRiskInputParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险ID
                     * @return RiskId 风险ID
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置风险ID
                     * @param _riskId 风险ID
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取是否开启，0-不开启，1-开启
                     * @return Enable 是否开启，0-不开启，1-开启
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否开启，0-不开启，1-开启
                     * @param _enable 是否开启，0-不开启，1-开启
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 风险ID
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 是否开启，0-不开启，1-开启
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TASKCENTERVULRISKINPUTPARAM_H_
