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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_ENABLECLUSTERDEDICATEDPROXYRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_ENABLECLUSTERDEDICATEDPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * EnableClusterDedicatedProxy返回参数结构体
                */
                class EnableClusterDedicatedProxyResponse : public AbstractModel
                {
                public:
                    EnableClusterDedicatedProxyResponse();
                    ~EnableClusterDedicatedProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>终端节点ID。</p>
                     * @return EndPointId <p>终端节点ID。</p>
                     * 
                     */
                    std::string GetEndPointId() const;

                    /**
                     * 判断参数 EndPointId 是否已赋值
                     * @return EndPointId 是否已赋值
                     * 
                     */
                    bool EndPointIdHasBeenSet() const;

                    /**
                     * 获取<p>终端节点VIP地址。</p>
                     * @return EndPointVip <p>终端节点VIP地址。</p>
                     * 
                     */
                    std::string GetEndPointVip() const;

                    /**
                     * 判断参数 EndPointVip 是否已赋值
                     * @return EndPointVip 是否已赋值
                     * 
                     */
                    bool EndPointVipHasBeenSet() const;

                    /**
                     * 获取<p>终端节点是否就绪。true表示已就绪，false表示未就绪。</p>
                     * @return EndPointReady <p>终端节点是否就绪。true表示已就绪，false表示未就绪。</p>
                     * 
                     */
                    bool GetEndPointReady() const;

                    /**
                     * 判断参数 EndPointReady 是否已赋值
                     * @return EndPointReady 是否已赋值
                     * 
                     */
                    bool EndPointReadyHasBeenSet() const;

                    /**
                     * 获取<p>终端节点状态。取值范围：<li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li></p>
                     * @return EndPointStatus <p>终端节点状态。取值范围：<li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li></p>
                     * 
                     */
                    std::string GetEndPointStatus() const;

                    /**
                     * 判断参数 EndPointStatus 是否已赋值
                     * @return EndPointStatus 是否已赋值
                     * 
                     */
                    bool EndPointStatusHasBeenSet() const;

                    /**
                     * 获取<p>私有网络ID。</p>
                     * @return VpcId <p>私有网络ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网ID。</p>
                     * @return SubnetId <p>子网ID。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * <p>终端节点ID。</p>
                     */
                    std::string m_endPointId;
                    bool m_endPointIdHasBeenSet;

                    /**
                     * <p>终端节点VIP地址。</p>
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * <p>终端节点是否就绪。true表示已就绪，false表示未就绪。</p>
                     */
                    bool m_endPointReady;
                    bool m_endPointReadyHasBeenSet;

                    /**
                     * <p>终端节点状态。取值范围：<li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li></p>
                     */
                    std::string m_endPointStatus;
                    bool m_endPointStatusHasBeenSet;

                    /**
                     * <p>私有网络ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网ID。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_ENABLECLUSTERDEDICATEDPROXYRESPONSE_H_
