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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/ClusterConfigsInfoFromEMR.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeClusterConfigs返回参数结构体
                */
                class DescribeClusterConfigsResponse : public AbstractModel
                {
                public:
                    DescribeClusterConfigsResponse();
                    ~DescribeClusterConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回实例的配置文件相关的信息
                     * @return ClusterConfList 返回实例的配置文件相关的信息
                     * 
                     */
                    std::vector<ClusterConfigsInfoFromEMR> GetClusterConfList() const;

                    /**
                     * 判断参数 ClusterConfList 是否已赋值
                     * @return ClusterConfList 是否已赋值
                     * 
                     */
                    bool ClusterConfListHasBeenSet() const;

                private:

                    /**
                     * 返回实例的配置文件相关的信息
                     */
                    std::vector<ClusterConfigsInfoFromEMR> m_clusterConfList;
                    bool m_clusterConfListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECLUSTERCONFIGSRESPONSE_H_
