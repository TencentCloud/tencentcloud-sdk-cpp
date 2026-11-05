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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESERVERLESSQUOTARESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESERVERLESSQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ClusterServerlessQuotaConfig.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceServerlessQuotaInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceServerlessQuota返回参数结构体
                */
                class DescribeInstanceServerlessQuotaResponse : public AbstractModel
                {
                public:
                    DescribeInstanceServerlessQuotaResponse();
                    ~DescribeInstanceServerlessQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群实例Serveless弹性配置</p>
                     * @return QuotaConfigs <p>集群实例Serveless弹性配置</p>
                     * 
                     */
                    std::vector<ClusterServerlessQuotaConfig> GetQuotaConfigs() const;

                    /**
                     * 判断参数 QuotaConfigs 是否已赋值
                     * @return QuotaConfigs 是否已赋值
                     * 
                     */
                    bool QuotaConfigsHasBeenSet() const;

                    /**
                     * 获取<p>集群实例Serverless弹性状态</p>
                     * @return InstanceQuotas <p>集群实例Serverless弹性状态</p>
                     * 
                     */
                    std::vector<InstanceServerlessQuotaInfo> GetInstanceQuotas() const;

                    /**
                     * 判断参数 InstanceQuotas 是否已赋值
                     * @return InstanceQuotas 是否已赋值
                     * 
                     */
                    bool InstanceQuotasHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例Serveless弹性配置</p>
                     */
                    std::vector<ClusterServerlessQuotaConfig> m_quotaConfigs;
                    bool m_quotaConfigsHasBeenSet;

                    /**
                     * <p>集群实例Serverless弹性状态</p>
                     */
                    std::vector<InstanceServerlessQuotaInfo> m_instanceQuotas;
                    bool m_instanceQuotasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCESERVERLESSQUOTARESPONSE_H_
