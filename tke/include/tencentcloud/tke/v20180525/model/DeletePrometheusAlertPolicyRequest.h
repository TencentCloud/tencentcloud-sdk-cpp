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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSALERTPOLICYREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSALERTPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeletePrometheusAlertPolicy请求参数结构体
                */
                class DeletePrometheusAlertPolicyRequest : public AbstractModel
                {
                public:
                    DeletePrometheusAlertPolicyRequest();
                    ~DeletePrometheusAlertPolicyRequest() = default;
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
                     * 获取告警策略id列表
                     * @return AlertIds 告警策略id列表
                     * 
                     */
                    std::vector<std::string> GetAlertIds() const;

                    /**
                     * 设置告警策略id列表
                     * @param _alertIds 告警策略id列表
                     * 
                     */
                    void SetAlertIds(const std::vector<std::string>& _alertIds);

                    /**
                     * 判断参数 AlertIds 是否已赋值
                     * @return AlertIds 是否已赋值
                     * 
                     */
                    bool AlertIdsHasBeenSet() const;

                    /**
                     * 获取告警策略名称
                     * @return Names 告警策略名称
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置告警策略名称
                     * @param _names 告警策略名称
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 告警策略id列表
                     */
                    std::vector<std::string> m_alertIds;
                    bool m_alertIdsHasBeenSet;

                    /**
                     * 告警策略名称
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSALERTPOLICYREQUEST_H_
