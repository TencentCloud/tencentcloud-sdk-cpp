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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_LISTMODELSREQUEST_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_LISTMODELSREQUEST_H_

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
                * ListModels请求参数结构体
                */
                class ListModelsRequest : public AbstractModel
                {
                public:
                    ListModelsRequest();
                    ~ListModelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取部署模型的集群， `集群模式` 必填
                     * @return Cluster 部署模型的集群， `集群模式` 必填
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置部署模型的集群， `集群模式` 必填
                     * @param _cluster 部署模型的集群， `集群模式` 必填
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
                     * 获取分页参数，返回数量上限
                     * @return Limit 分页参数，返回数量上限
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数，返回数量上限
                     * @param _limit 分页参数，返回数量上限
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数，分页起始位置
                     * @return Offset 分页参数，分页起始位置
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数，分页起始位置
                     * @param _offset 分页参数，分页起始位置
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取部署类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`。
                     * @return ServType 部署类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`。
                     * 
                     */
                    std::string GetServType() const;

                    /**
                     * 设置部署类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`。
                     * @param _servType 部署类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`。
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
                     * 部署模型的集群， `集群模式` 必填
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 分页参数，返回数量上限
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，分页起始位置
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 部署类型，取值 `serverless` 即为 `无服务器模式`，否则为 `集群模式`。
                     */
                    std::string m_servType;
                    bool m_servTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_LISTMODELSREQUEST_H_
