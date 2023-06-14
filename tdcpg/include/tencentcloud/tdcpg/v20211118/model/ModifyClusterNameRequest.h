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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERNAMEREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * ModifyClusterName请求参数结构体
                */
                class ModifyClusterNameRequest : public AbstractModel
                {
                public:
                    ModifyClusterNameRequest();
                    ~ModifyClusterNameRequest() = default;
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
                     * 获取集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."
                     * @return ClusterName 集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."
                     * @param _clusterName 集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名，1-60个字符，可以包含中文、英文、数字和符号"-"、"_"、"."
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERNAMEREQUEST_H_
