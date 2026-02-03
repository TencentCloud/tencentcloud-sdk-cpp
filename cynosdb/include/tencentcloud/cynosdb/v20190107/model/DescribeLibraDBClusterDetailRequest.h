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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERDETAILREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeLibraDBClusterDetail请求参数结构体
                */
                class DescribeLibraDBClusterDetailRequest : public AbstractModel
                {
                public:
                    DescribeLibraDBClusterDetailRequest();
                    ~DescribeLibraDBClusterDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分析集群 ID
                     * @return ClusterId 分析集群 ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置分析集群 ID
                     * @param _clusterId 分析集群 ID
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
                     * 获取是否获取更多服务器信息，可选值yes no
                     * @return GetServerInfo 是否获取更多服务器信息，可选值yes no
                     * 
                     */
                    std::string GetGetServerInfo() const;

                    /**
                     * 设置是否获取更多服务器信息，可选值yes no
                     * @param _getServerInfo 是否获取更多服务器信息，可选值yes no
                     * 
                     */
                    void SetGetServerInfo(const std::string& _getServerInfo);

                    /**
                     * 判断参数 GetServerInfo 是否已赋值
                     * @return GetServerInfo 是否已赋值
                     * 
                     */
                    bool GetServerInfoHasBeenSet() const;

                private:

                    /**
                     * 分析集群 ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 是否获取更多服务器信息，可选值yes no
                     */
                    std::string m_getServerInfo;
                    bool m_getServerInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERDETAILREQUEST_H_
