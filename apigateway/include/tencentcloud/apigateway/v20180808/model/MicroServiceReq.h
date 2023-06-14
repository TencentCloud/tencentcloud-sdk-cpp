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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MICROSERVICEREQ_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MICROSERVICEREQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * tsf类型入参
                */
                class MicroServiceReq : public AbstractModel
                {
                public:
                    MicroServiceReq();
                    ~MicroServiceReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取微服务集群。
                     * @return ClusterId 微服务集群。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置微服务集群。
                     * @param _clusterId 微服务集群。
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
                     * 获取微服务命名空间。
                     * @return NamespaceId 微服务命名空间。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置微服务命名空间。
                     * @param _namespaceId 微服务命名空间。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取微服务名称。
                     * @return MicroServiceName 微服务名称。
                     * 
                     */
                    std::string GetMicroServiceName() const;

                    /**
                     * 设置微服务名称。
                     * @param _microServiceName 微服务名称。
                     * 
                     */
                    void SetMicroServiceName(const std::string& _microServiceName);

                    /**
                     * 判断参数 MicroServiceName 是否已赋值
                     * @return MicroServiceName 是否已赋值
                     * 
                     */
                    bool MicroServiceNameHasBeenSet() const;

                private:

                    /**
                     * 微服务集群。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 微服务命名空间。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 微服务名称。
                     */
                    std::string m_microServiceName;
                    bool m_microServiceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_MICROSERVICEREQ_H_
