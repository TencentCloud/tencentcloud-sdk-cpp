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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyAutoRenewFlag请求参数结构体
                */
                class ModifyAutoRenewFlagRequest : public AbstractModel
                {
                public:
                    ModifyAutoRenewFlagRequest();
                    ~ModifyAutoRenewFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取实例ID
                     * @return ResourceIds 实例ID
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置实例ID
                     * @param _resourceIds 实例ID
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。
                     * @return RenewFlag NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。
                     * @param _renewFlag NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取计算资源id
                     * @return ComputeResourceId 计算资源id
                     * 
                     */
                    std::string GetComputeResourceId() const;

                    /**
                     * 设置计算资源id
                     * @param _computeResourceId 计算资源id
                     * 
                     */
                    void SetComputeResourceId(const std::string& _computeResourceId);

                    /**
                     * 判断参数 ComputeResourceId 是否已赋值
                     * @return ComputeResourceId 是否已赋值
                     * 
                     */
                    bool ComputeResourceIdHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * NOTIFY_AND_MANUAL_RENEW：表示通知即将过期，但不自动续费  NOTIFY_AND_AUTO_RENEW：表示通知即将过期，而且自动续费  DISABLE_NOTIFY_AND_MANUAL_RENEW：表示不通知即将过期，也不自动续费。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 计算资源id
                     */
                    std::string m_computeResourceId;
                    bool m_computeResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYAUTORENEWFLAGREQUEST_H_
