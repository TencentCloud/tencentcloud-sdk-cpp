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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYPROMETHEUSAGENTEXTERNALLABELSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYPROMETHEUSAGENTEXTERNALLABELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/Label.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyPrometheusAgentExternalLabels请求参数结构体
                */
                class ModifyPrometheusAgentExternalLabelsRequest : public AbstractModel
                {
                public:
                    ModifyPrometheusAgentExternalLabelsRequest();
                    ~ModifyPrometheusAgentExternalLabelsRequest() = default;
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
                     * 获取新的external_labels
                     * @return ExternalLabels 新的external_labels
                     * 
                     */
                    std::vector<Label> GetExternalLabels() const;

                    /**
                     * 设置新的external_labels
                     * @param _externalLabels 新的external_labels
                     * 
                     */
                    void SetExternalLabels(const std::vector<Label>& _externalLabels);

                    /**
                     * 判断参数 ExternalLabels 是否已赋值
                     * @return ExternalLabels 是否已赋值
                     * 
                     */
                    bool ExternalLabelsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 新的external_labels
                     */
                    std::vector<Label> m_externalLabels;
                    bool m_externalLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYPROMETHEUSAGENTEXTERNALLABELSREQUEST_H_
