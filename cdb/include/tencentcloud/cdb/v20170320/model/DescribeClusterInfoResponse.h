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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLUSTERINFORESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLUSTERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AddressInfo.h>
#include <tencentcloud/cdb/v20170320/model/ClusterNodeInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeClusterInfo返回参数结构体
                */
                class DescribeClusterInfoResponse : public AbstractModel
                {
                public:
                    DescribeClusterInfoResponse();
                    ~DescribeClusterInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例名称。</p>
                     * @return ClusterName <p>实例名称。</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>云盘版实例的读写地址信息。</p>
                     * @return ReadWriteAddress <p>云盘版实例的读写地址信息。</p>
                     * 
                     */
                    AddressInfo GetReadWriteAddress() const;

                    /**
                     * 判断参数 ReadWriteAddress 是否已赋值
                     * @return ReadWriteAddress 是否已赋值
                     * 
                     */
                    bool ReadWriteAddressHasBeenSet() const;

                    /**
                     * 获取<p>云盘版实例的只读地址信息。</p>
                     * @return ReadOnlyAddress <p>云盘版实例的只读地址信息。</p>
                     * 
                     */
                    std::vector<AddressInfo> GetReadOnlyAddress() const;

                    /**
                     * 判断参数 ReadOnlyAddress 是否已赋值
                     * @return ReadOnlyAddress 是否已赋值
                     * 
                     */
                    bool ReadOnlyAddressHasBeenSet() const;

                    /**
                     * 获取<p>云盘版实例的节点列表信息。</p>
                     * @return NodeList <p>云盘版实例的节点列表信息。</p>
                     * 
                     */
                    std::vector<ClusterNodeInfo> GetNodeList() const;

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                    /**
                     * 获取<p>只读空间保护阈值,单位GB</p>
                     * @return ReadonlyLimit <p>只读空间保护阈值,单位GB</p>
                     * 
                     */
                    int64_t GetReadonlyLimit() const;

                    /**
                     * 判断参数 ReadonlyLimit 是否已赋值
                     * @return ReadonlyLimit 是否已赋值
                     * 
                     */
                    bool ReadonlyLimitHasBeenSet() const;

                    /**
                     * 获取<p>实例节点数。</p>
                     * @return NodeCount <p>实例节点数。</p>
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                private:

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>云盘版实例的读写地址信息。</p>
                     */
                    AddressInfo m_readWriteAddress;
                    bool m_readWriteAddressHasBeenSet;

                    /**
                     * <p>云盘版实例的只读地址信息。</p>
                     */
                    std::vector<AddressInfo> m_readOnlyAddress;
                    bool m_readOnlyAddressHasBeenSet;

                    /**
                     * <p>云盘版实例的节点列表信息。</p>
                     */
                    std::vector<ClusterNodeInfo> m_nodeList;
                    bool m_nodeListHasBeenSet;

                    /**
                     * <p>只读空间保护阈值,单位GB</p>
                     */
                    int64_t m_readonlyLimit;
                    bool m_readonlyLimitHasBeenSet;

                    /**
                     * <p>实例节点数。</p>
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECLUSTERINFORESPONSE_H_
