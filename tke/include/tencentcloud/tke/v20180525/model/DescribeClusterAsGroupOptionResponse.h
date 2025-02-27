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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERASGROUPOPTIONRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERASGROUPOPTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ClusterAsGroupOption.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterAsGroupOption返回参数结构体
                */
                class DescribeClusterAsGroupOptionResponse : public AbstractModel
                {
                public:
                    DescribeClusterAsGroupOptionResponse();
                    ~DescribeClusterAsGroupOptionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群弹性伸缩属性
                     * @return ClusterAsGroupOption 集群弹性伸缩属性
                     * 
                     */
                    ClusterAsGroupOption GetClusterAsGroupOption() const;

                    /**
                     * 判断参数 ClusterAsGroupOption 是否已赋值
                     * @return ClusterAsGroupOption 是否已赋值
                     * 
                     */
                    bool ClusterAsGroupOptionHasBeenSet() const;

                private:

                    /**
                     * 集群弹性伸缩属性
                     */
                    ClusterAsGroupOption m_clusterAsGroupOption;
                    bool m_clusterAsGroupOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERASGROUPOPTIONRESPONSE_H_
