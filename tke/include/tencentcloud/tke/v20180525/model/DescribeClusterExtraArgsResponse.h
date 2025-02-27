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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTEREXTRAARGSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTEREXTRAARGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterExtraArgs.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterExtraArgs返回参数结构体
                */
                class DescribeClusterExtraArgsResponse : public AbstractModel
                {
                public:
                    DescribeClusterExtraArgsResponse();
                    ~DescribeClusterExtraArgsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群自定义参数
                     * @return ClusterExtraArgs 集群自定义参数
                     * 
                     */
                    ClusterExtraArgs GetClusterExtraArgs() const;

                    /**
                     * 判断参数 ClusterExtraArgs 是否已赋值
                     * @return ClusterExtraArgs 是否已赋值
                     * 
                     */
                    bool ClusterExtraArgsHasBeenSet() const;

                private:

                    /**
                     * 集群自定义参数
                     */
                    ClusterExtraArgs m_clusterExtraArgs;
                    bool m_clusterExtraArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTEREXTRAARGSRESPONSE_H_
