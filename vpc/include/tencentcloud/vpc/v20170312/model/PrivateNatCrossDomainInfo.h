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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATCROSSDOMAININFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATCROSSDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 私网NAT网关跨域信息
                */
                class PrivateNatCrossDomainInfo : public AbstractModel
                {
                public:
                    PrivateNatCrossDomainInfo();
                    ~PrivateNatCrossDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取跨域私网NAT关联的云联网ID
                     * @return CcnId 跨域私网NAT关联的云联网ID
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置跨域私网NAT关联的云联网ID
                     * @param _ccnId 跨域私网NAT关联的云联网ID
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取跨域私网NAT本端Vpc
                     * @return LocalVpcId 跨域私网NAT本端Vpc
                     * 
                     */
                    std::string GetLocalVpcId() const;

                    /**
                     * 设置跨域私网NAT本端Vpc
                     * @param _localVpcId 跨域私网NAT本端Vpc
                     * 
                     */
                    void SetLocalVpcId(const std::string& _localVpcId);

                    /**
                     * 判断参数 LocalVpcId 是否已赋值
                     * @return LocalVpcId 是否已赋值
                     * 
                     */
                    bool LocalVpcIdHasBeenSet() const;

                    /**
                     * 获取跨域私网NAT对端Vpc
                     * @return PeerVpcId 跨域私网NAT对端Vpc
                     * 
                     */
                    std::string GetPeerVpcId() const;

                    /**
                     * 设置跨域私网NAT对端Vpc
                     * @param _peerVpcId 跨域私网NAT对端Vpc
                     * 
                     */
                    void SetPeerVpcId(const std::string& _peerVpcId);

                    /**
                     * 判断参数 PeerVpcId 是否已赋值
                     * @return PeerVpcId 是否已赋值
                     * 
                     */
                    bool PeerVpcIdHasBeenSet() const;

                private:

                    /**
                     * 跨域私网NAT关联的云联网ID
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 跨域私网NAT本端Vpc
                     */
                    std::string m_localVpcId;
                    bool m_localVpcIdHasBeenSet;

                    /**
                     * 跨域私网NAT对端Vpc
                     */
                    std::string m_peerVpcId;
                    bool m_peerVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATCROSSDOMAININFO_H_
