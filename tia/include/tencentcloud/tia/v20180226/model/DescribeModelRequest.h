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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_DESCRIBEMODELREQUEST_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_DESCRIBEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * DescribeModel请求参数结构体
                */
                class DescribeModelRequest : public AbstractModel
                {
                public:
                    DescribeModelRequest();
                    ~DescribeModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型名称
                     * @return Name 模型名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型名称
                     * @param _name 模型名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取模型所在集群名称，`集群模式` 必填
                     * @return Cluster 模型所在集群名称，`集群模式` 必填
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置模型所在集群名称，`集群模式` 必填
                     * @param _cluster 模型所在集群名称，`集群模式` 必填
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取模型类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`
                     * @return ServType 模型类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`
                     * 
                     */
                    std::string GetServType() const;

                    /**
                     * 设置模型类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`
                     * @param _servType 模型类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`
                     * 
                     */
                    void SetServType(const std::string& _servType);

                    /**
                     * 判断参数 ServType 是否已赋值
                     * @return ServType 是否已赋值
                     * 
                     */
                    bool ServTypeHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模型所在集群名称，`集群模式` 必填
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 模型类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`
                     */
                    std::string m_servType;
                    bool m_servTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_DESCRIBEMODELREQUEST_H_
