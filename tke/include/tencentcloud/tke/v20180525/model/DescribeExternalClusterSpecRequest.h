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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALCLUSTERSPECREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALCLUSTERSPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeExternalClusterSpec请求参数结构体
                */
                class DescribeExternalClusterSpecRequest : public AbstractModel
                {
                public:
                    DescribeExternalClusterSpecRequest();
                    ~DescribeExternalClusterSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取注册集群ID
                     * @return ClusterId 注册集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置注册集群ID
                     * @param ClusterId 注册集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取默认false 获取内网，是否获取外网版注册命令
                     * @return IsExtranet 默认false 获取内网，是否获取外网版注册命令
                     */
                    bool GetIsExtranet() const;

                    /**
                     * 设置默认false 获取内网，是否获取外网版注册命令
                     * @param IsExtranet 默认false 获取内网，是否获取外网版注册命令
                     */
                    void SetIsExtranet(const bool& _isExtranet);

                    /**
                     * 判断参数 IsExtranet 是否已赋值
                     * @return IsExtranet 是否已赋值
                     */
                    bool IsExtranetHasBeenSet() const;

                    /**
                     * 获取默认false 不刷新有效时间 ，true刷新有效时间
                     * @return IsRefreshExpirationTime 默认false 不刷新有效时间 ，true刷新有效时间
                     */
                    bool GetIsRefreshExpirationTime() const;

                    /**
                     * 设置默认false 不刷新有效时间 ，true刷新有效时间
                     * @param IsRefreshExpirationTime 默认false 不刷新有效时间 ，true刷新有效时间
                     */
                    void SetIsRefreshExpirationTime(const bool& _isRefreshExpirationTime);

                    /**
                     * 判断参数 IsRefreshExpirationTime 是否已赋值
                     * @return IsRefreshExpirationTime 是否已赋值
                     */
                    bool IsRefreshExpirationTimeHasBeenSet() const;

                private:

                    /**
                     * 注册集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 默认false 获取内网，是否获取外网版注册命令
                     */
                    bool m_isExtranet;
                    bool m_isExtranetHasBeenSet;

                    /**
                     * 默认false 不刷新有效时间 ，true刷新有效时间
                     */
                    bool m_isRefreshExpirationTime;
                    bool m_isRefreshExpirationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALCLUSTERSPECREQUEST_H_
