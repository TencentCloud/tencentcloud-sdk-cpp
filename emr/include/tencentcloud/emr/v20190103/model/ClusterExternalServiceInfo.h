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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTEREXTERNALSERVICEINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTEREXTERNALSERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 当前集群共用组件与集群对应关系
                */
                class ClusterExternalServiceInfo : public AbstractModel
                {
                public:
                    ClusterExternalServiceInfo();
                    ~ClusterExternalServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取依赖关系，0:被其他集群依赖，1:依赖其他集群
                     * @return DependType 依赖关系，0:被其他集群依赖，1:依赖其他集群
                     * 
                     */
                    int64_t GetDependType() const;

                    /**
                     * 设置依赖关系，0:被其他集群依赖，1:依赖其他集群
                     * @param _dependType 依赖关系，0:被其他集群依赖，1:依赖其他集群
                     * 
                     */
                    void SetDependType(const int64_t& _dependType);

                    /**
                     * 判断参数 DependType 是否已赋值
                     * @return DependType 是否已赋值
                     * 
                     */
                    bool DependTypeHasBeenSet() const;

                    /**
                     * 获取共用组件
                     * @return Service 共用组件
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置共用组件
                     * @param _service 共用组件
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取共用集群
                     * @return ClusterId 共用集群
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置共用集群
                     * @param _clusterId 共用集群
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
                     * 获取共用集群状态
                     * @return ClusterStatus 共用集群状态
                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置共用集群状态
                     * @param _clusterStatus 共用集群状态
                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                private:

                    /**
                     * 依赖关系，0:被其他集群依赖，1:依赖其他集群
                     */
                    int64_t m_dependType;
                    bool m_dependTypeHasBeenSet;

                    /**
                     * 共用组件
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 共用集群
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 共用集群状态
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_CLUSTEREXTERNALSERVICEINFO_H_
