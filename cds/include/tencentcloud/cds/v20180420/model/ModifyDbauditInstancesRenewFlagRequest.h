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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_MODIFYDBAUDITINSTANCESRENEWFLAGREQUEST_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_MODIFYDBAUDITINSTANCESRENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * ModifyDbauditInstancesRenewFlag请求参数结构体
                */
                class ModifyDbauditInstancesRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyDbauditInstancesRenewFlagRequest();
                    ~ModifyDbauditInstancesRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取0，表示默认状态(用户未设置，即初始状态)；1，表示自动续费；2，表示明确不自动续费
                     * @return AutoRenewFlag 0，表示默认状态(用户未设置，即初始状态)；1，表示自动续费；2，表示明确不自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置0，表示默认状态(用户未设置，即初始状态)；1，表示自动续费；2，表示明确不自动续费
                     * @param _autoRenewFlag 0，表示默认状态(用户未设置，即初始状态)；1，表示自动续费；2，表示明确不自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0，表示默认状态(用户未设置，即初始状态)；1，表示自动续费；2，表示明确不自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_MODIFYDBAUDITINSTANCESRENEWFLAGREQUEST_H_
