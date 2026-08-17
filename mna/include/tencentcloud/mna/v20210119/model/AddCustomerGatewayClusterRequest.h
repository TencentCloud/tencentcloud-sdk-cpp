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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ADDCUSTOMERGATEWAYCLUSTERREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ADDCUSTOMERGATEWAYCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * AddCustomerGatewayCluster请求参数结构体
                */
                class AddCustomerGatewayClusterRequest : public AbstractModel
                {
                public:
                    AddCustomerGatewayClusterRequest();
                    ~AddCustomerGatewayClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群名称。最大 64 字符，支持字母、数字、中划线、下划线、点及中文。</p>
                     * @return ClusterName <p>集群名称。最大 64 字符，支持字母、数字、中划线、下划线、点及中文。</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称。最大 64 字符，支持字母、数字、中划线、下划线、点及中文。</p>
                     * @param _clusterName <p>集群名称。最大 64 字符，支持字母、数字、中划线、下划线、点及中文。</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>部署大区标识。最大 32 字符。例如 CN 表示中国大陆。</p>
                     * @return BigArea <p>部署大区标识。最大 32 字符。例如 CN 表示中国大陆。</p>
                     * 
                     */
                    std::string GetBigArea() const;

                    /**
                     * 设置<p>部署大区标识。最大 32 字符。例如 CN 表示中国大陆。</p>
                     * @param _bigArea <p>部署大区标识。最大 32 字符。例如 CN 表示中国大陆。</p>
                     * 
                     */
                    void SetBigArea(const std::string& _bigArea);

                    /**
                     * 判断参数 BigArea 是否已赋值
                     * @return BigArea 是否已赋值
                     * 
                     */
                    bool BigAreaHasBeenSet() const;

                    /**
                     * 获取<p>地域标识。最大 32 字符。例如 ap-guangzhou。</p>
                     * @return RegionId <p>地域标识。最大 32 字符。例如 ap-guangzhou。</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>地域标识。最大 32 字符。例如 ap-guangzhou。</p>
                     * @param _regionId <p>地域标识。最大 32 字符。例如 ap-guangzhou。</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群名称。最大 64 字符，支持字母、数字、中划线、下划线、点及中文。</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>部署大区标识。最大 32 字符。例如 CN 表示中国大陆。</p>
                     */
                    std::string m_bigArea;
                    bool m_bigAreaHasBeenSet;

                    /**
                     * <p>地域标识。最大 32 字符。例如 ap-guangzhou。</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ADDCUSTOMERGATEWAYCLUSTERREQUEST_H_
