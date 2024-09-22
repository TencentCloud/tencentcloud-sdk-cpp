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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSREQUEST_H_

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
                * DeleteLogConfigs请求参数结构体
                */
                class DeleteLogConfigsRequest : public AbstractModel
                {
                public:
                    DeleteLogConfigsRequest();
                    ~DeleteLogConfigsRequest() = default;
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
                     * 获取待删除采集规则名称，多个采集规则使用","分隔
                     * @return LogConfigNames 待删除采集规则名称，多个采集规则使用","分隔
                     * 
                     */
                    std::string GetLogConfigNames() const;

                    /**
                     * 设置待删除采集规则名称，多个采集规则使用","分隔
                     * @param _logConfigNames 待删除采集规则名称，多个采集规则使用","分隔
                     * 
                     */
                    void SetLogConfigNames(const std::string& _logConfigNames);

                    /**
                     * 判断参数 LogConfigNames 是否已赋值
                     * @return LogConfigNames 是否已赋值
                     * 
                     */
                    bool LogConfigNamesHasBeenSet() const;

                    /**
                     * 获取集群集群类型, tke/eks 默认为 tke 集群
                     * @return ClusterType 集群集群类型, tke/eks 默认为 tke 集群
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群集群类型, tke/eks 默认为 tke 集群
                     * @param _clusterType 集群集群类型, tke/eks 默认为 tke 集群
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待删除采集规则名称，多个采集规则使用","分隔
                     */
                    std::string m_logConfigNames;
                    bool m_logConfigNamesHasBeenSet;

                    /**
                     * 集群集群类型, tke/eks 默认为 tke 集群
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETELOGCONFIGSREQUEST_H_
