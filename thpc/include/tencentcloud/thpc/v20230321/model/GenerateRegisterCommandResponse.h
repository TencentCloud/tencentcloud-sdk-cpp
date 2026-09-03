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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCOMMANDRESPONSE_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCOMMANDRESPONSE_H_

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
                * GenerateRegisterCommand返回参数结构体
                */
                class GenerateRegisterCommandResponse : public AbstractModel
                {
                public:
                    GenerateRegisterCommandResponse();
                    ~GenerateRegisterCommandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>渲染好的节点注册命令，可直接在IDC机器上以root身份执行。</p>
                     * @return RegisterCommand <p>渲染好的节点注册命令，可直接在IDC机器上以root身份执行。</p>
                     * 
                     */
                    std::string GetRegisterCommand() const;

                    /**
                     * 判断参数 RegisterCommand 是否已赋值
                     * @return RegisterCommand 是否已赋值
                     * 
                     */
                    bool RegisterCommandHasBeenSet() const;

                    /**
                     * 获取<p>节点注册码。作为不透明凭证使用，请妥善保管，仅在节点注册纳管时传入。</p>
                     * @return RegisterCode <p>节点注册码。作为不透明凭证使用，请妥善保管，仅在节点注册纳管时传入。</p>
                     * 
                     */
                    std::string GetRegisterCode() const;

                    /**
                     * 判断参数 RegisterCode 是否已赋值
                     * @return RegisterCode 是否已赋值
                     * 
                     */
                    bool RegisterCodeHasBeenSet() const;

                    /**
                     * 获取<p>注册码到期的Unix时间戳，单位：秒。</p>
                     * @return ExpireAt <p>注册码到期的Unix时间戳，单位：秒。</p>
                     * 
                     */
                    int64_t GetExpireAt() const;

                    /**
                     * 判断参数 ExpireAt 是否已赋值
                     * @return ExpireAt 是否已赋值
                     * 
                     */
                    bool ExpireAtHasBeenSet() const;

                    /**
                     * 获取<p>回显本次是否走内网专线代理。</p>
                     * @return Proxy <p>回显本次是否走内网专线代理。</p>
                     * 
                     */
                    bool GetProxy() const;

                    /**
                     * 判断参数 Proxy 是否已赋值
                     * @return Proxy 是否已赋值
                     * 
                     */
                    bool ProxyHasBeenSet() const;

                    /**
                     * 获取<p>代理终端节点VIP地址。当<code>Proxy=true</code>且终端节点就绪时非空。</p>
                     * @return EndPointVip <p>代理终端节点VIP地址。当<code>Proxy=true</code>且终端节点就绪时非空。</p>
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
                     * 获取<p>终端节点状态。取值范围：</p><li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li><p></p>
                     * @return EndPointStatus <p>终端节点状态。取值范围：</p><li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li><p></p>
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
                     * 获取<p>回显集群ID。</p>
                     * @return ClusterId <p>回显集群ID。</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * <p>渲染好的节点注册命令，可直接在IDC机器上以root身份执行。</p>
                     */
                    std::string m_registerCommand;
                    bool m_registerCommandHasBeenSet;

                    /**
                     * <p>节点注册码。作为不透明凭证使用，请妥善保管，仅在节点注册纳管时传入。</p>
                     */
                    std::string m_registerCode;
                    bool m_registerCodeHasBeenSet;

                    /**
                     * <p>注册码到期的Unix时间戳，单位：秒。</p>
                     */
                    int64_t m_expireAt;
                    bool m_expireAtHasBeenSet;

                    /**
                     * <p>回显本次是否走内网专线代理。</p>
                     */
                    bool m_proxy;
                    bool m_proxyHasBeenSet;

                    /**
                     * <p>代理终端节点VIP地址。当<code>Proxy=true</code>且终端节点就绪时非空。</p>
                     */
                    std::string m_endPointVip;
                    bool m_endPointVipHasBeenSet;

                    /**
                     * <p>终端节点状态。取值范围：</p><li>ACTIVE：已激活</li><li>BINDCHANGE：变更中</li><li>BINDINGCREATE：创建中</li><li>BINDINGDELETE：删除中</li><p></p>
                     */
                    std::string m_endPointStatus;
                    bool m_endPointStatusHasBeenSet;

                    /**
                     * <p>回显集群ID。</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_GENERATEREGISTERCOMMANDRESPONSE_H_
