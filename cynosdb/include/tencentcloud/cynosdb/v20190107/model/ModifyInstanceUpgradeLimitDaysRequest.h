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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEUPGRADELIMITDAYSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEUPGRADELIMITDAYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ModifyInstanceUpgradeLimitDays请求参数结构体
                */
                class ModifyInstanceUpgradeLimitDaysRequest : public AbstractModel
                {
                public:
                    ModifyInstanceUpgradeLimitDaysRequest();
                    ~ModifyInstanceUpgradeLimitDaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

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
                     * 获取升级限制时间
                     * @return UpgradeLimitDays 升级限制时间
                     * 
                     */
                    int64_t GetUpgradeLimitDays() const;

                    /**
                     * 设置升级限制时间
                     * @param _upgradeLimitDays 升级限制时间
                     * 
                     */
                    void SetUpgradeLimitDays(const int64_t& _upgradeLimitDays);

                    /**
                     * 判断参数 UpgradeLimitDays 是否已赋值
                     * @return UpgradeLimitDays 是否已赋值
                     * 
                     */
                    bool UpgradeLimitDaysHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 升级限制时间
                     */
                    int64_t m_upgradeLimitDays;
                    bool m_upgradeLimitDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYINSTANCEUPGRADELIMITDAYSREQUEST_H_
