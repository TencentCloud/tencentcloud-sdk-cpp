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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEPROMETHEUSALERTRULEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEPROMETHEUSALERTRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/PrometheusAlertRuleDetail.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreatePrometheusAlertRule请求参数结构体
                */
                class CreatePrometheusAlertRuleRequest : public AbstractModel
                {
                public:
                    CreatePrometheusAlertRuleRequest();
                    ~CreatePrometheusAlertRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取告警配置
                     * @return AlertRule 告警配置
                     * 
                     */
                    PrometheusAlertRuleDetail GetAlertRule() const;

                    /**
                     * 设置告警配置
                     * @param _alertRule 告警配置
                     * 
                     */
                    void SetAlertRule(const PrometheusAlertRuleDetail& _alertRule);

                    /**
                     * 判断参数 AlertRule 是否已赋值
                     * @return AlertRule 是否已赋值
                     * 
                     */
                    bool AlertRuleHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 告警配置
                     */
                    PrometheusAlertRuleDetail m_alertRule;
                    bool m_alertRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEPROMETHEUSALERTRULEREQUEST_H_
