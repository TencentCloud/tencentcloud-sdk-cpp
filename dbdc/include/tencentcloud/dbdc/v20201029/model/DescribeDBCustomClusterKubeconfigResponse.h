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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERKUBECONFIGRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERKUBECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomClusterKubeconfig返回参数结构体
                */
                class DescribeDBCustomClusterKubeconfigResponse : public AbstractModel
                {
                public:
                    DescribeDBCustomClusterKubeconfigResponse();
                    ~DescribeDBCustomClusterKubeconfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群APIServer信息</p>
                     * @return Kubeconfig <p>集群APIServer信息</p>
                     * 
                     */
                    std::string GetKubeconfig() const;

                    /**
                     * 判断参数 Kubeconfig 是否已赋值
                     * @return Kubeconfig 是否已赋值
                     * 
                     */
                    bool KubeconfigHasBeenSet() const;

                private:

                    /**
                     * <p>集群APIServer信息</p>
                     */
                    std::string m_kubeconfig;
                    bool m_kubeconfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMCLUSTERKUBECONFIGRESPONSE_H_
