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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyGroupInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyNodeInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeProxies返回参数结构体
                */
                class DescribeProxiesResponse : public AbstractModel
                {
                public:
                    DescribeProxiesResponse();
                    ~DescribeProxiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库代理组数
                     * @return TotalCount 数据库代理组数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取数据库代理组列表
                     * @return ProxyGroupInfos 数据库代理组列表
                     * 
                     */
                    std::vector<ProxyGroupInfo> GetProxyGroupInfos() const;

                    /**
                     * 判断参数 ProxyGroupInfos 是否已赋值
                     * @return ProxyGroupInfos 是否已赋值
                     * 
                     */
                    bool ProxyGroupInfosHasBeenSet() const;

                    /**
                     * 获取数据库代理节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyNodeInfos 数据库代理节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProxyNodeInfo> GetProxyNodeInfos() const;

                    /**
                     * 判断参数 ProxyNodeInfos 是否已赋值
                     * @return ProxyNodeInfos 是否已赋值
                     * 
                     */
                    bool ProxyNodeInfosHasBeenSet() const;

                private:

                    /**
                     * 数据库代理组数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据库代理组列表
                     */
                    std::vector<ProxyGroupInfo> m_proxyGroupInfos;
                    bool m_proxyGroupInfosHasBeenSet;

                    /**
                     * 数据库代理节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProxyNodeInfo> m_proxyNodeInfos;
                    bool m_proxyNodeInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEPROXIESRESPONSE_H_
