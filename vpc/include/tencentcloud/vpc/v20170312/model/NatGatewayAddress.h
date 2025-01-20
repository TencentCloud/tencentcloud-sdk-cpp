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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYADDRESS_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYADDRESS_H_

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
                * NAT网关绑定的弹性IP
                */
                class NatGatewayAddress : public AbstractModel
                {
                public:
                    NatGatewayAddress();
                    ~NatGatewayAddress() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取弹性公网IP（EIP）的唯一 ID，形如：`eip-11112222`。
                     * @return AddressId 弹性公网IP（EIP）的唯一 ID，形如：`eip-11112222`。
                     * 
                     */
                    std::string GetAddressId() const;

                    /**
                     * 设置弹性公网IP（EIP）的唯一 ID，形如：`eip-11112222`。
                     * @param _addressId 弹性公网IP（EIP）的唯一 ID，形如：`eip-11112222`。
                     * 
                     */
                    void SetAddressId(const std::string& _addressId);

                    /**
                     * 判断参数 AddressId 是否已赋值
                     * @return AddressId 是否已赋值
                     * 
                     */
                    bool AddressIdHasBeenSet() const;

                    /**
                     * 获取外网IP地址，形如：`123.121.34.33`。
                     * @return PublicIpAddress 外网IP地址，形如：`123.121.34.33`。
                     * 
                     */
                    std::string GetPublicIpAddress() const;

                    /**
                     * 设置外网IP地址，形如：`123.121.34.33`。
                     * @param _publicIpAddress 外网IP地址，形如：`123.121.34.33`。
                     * 
                     */
                    void SetPublicIpAddress(const std::string& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取资源封堵状态。true表示弹性ip处于封堵状态，false表示弹性ip处于未封堵状态。
                     * @return IsBlocked 资源封堵状态。true表示弹性ip处于封堵状态，false表示弹性ip处于未封堵状态。
                     * 
                     */
                    bool GetIsBlocked() const;

                    /**
                     * 设置资源封堵状态。true表示弹性ip处于封堵状态，false表示弹性ip处于未封堵状态。
                     * @param _isBlocked 资源封堵状态。true表示弹性ip处于封堵状态，false表示弹性ip处于未封堵状态。
                     * 
                     */
                    void SetIsBlocked(const bool& _isBlocked);

                    /**
                     * 判断参数 IsBlocked 是否已赋值
                     * @return IsBlocked 是否已赋值
                     * 
                     */
                    bool IsBlockedHasBeenSet() const;

                    /**
                     * 获取资源封堵类型。NORMAL表示未封禁，SECURITY表示安全封禁，USER表示用户封禁，OTHER表示其他封禁，多个原因封禁时用&连接，比如：SECURITY&USER&OTHER。
                     * @return BlockType 资源封堵类型。NORMAL表示未封禁，SECURITY表示安全封禁，USER表示用户封禁，OTHER表示其他封禁，多个原因封禁时用&连接，比如：SECURITY&USER&OTHER。
                     * 
                     */
                    std::string GetBlockType() const;

                    /**
                     * 设置资源封堵类型。NORMAL表示未封禁，SECURITY表示安全封禁，USER表示用户封禁，OTHER表示其他封禁，多个原因封禁时用&连接，比如：SECURITY&USER&OTHER。
                     * @param _blockType 资源封堵类型。NORMAL表示未封禁，SECURITY表示安全封禁，USER表示用户封禁，OTHER表示其他封禁，多个原因封禁时用&连接，比如：SECURITY&USER&OTHER。
                     * 
                     */
                    void SetBlockType(const std::string& _blockType);

                    /**
                     * 判断参数 BlockType 是否已赋值
                     * @return BlockType 是否已赋值
                     * 
                     */
                    bool BlockTypeHasBeenSet() const;

                private:

                    /**
                     * 弹性公网IP（EIP）的唯一 ID，形如：`eip-11112222`。
                     */
                    std::string m_addressId;
                    bool m_addressIdHasBeenSet;

                    /**
                     * 外网IP地址，形如：`123.121.34.33`。
                     */
                    std::string m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * 资源封堵状态。true表示弹性ip处于封堵状态，false表示弹性ip处于未封堵状态。
                     */
                    bool m_isBlocked;
                    bool m_isBlockedHasBeenSet;

                    /**
                     * 资源封堵类型。NORMAL表示未封禁，SECURITY表示安全封禁，USER表示用户封禁，OTHER表示其他封禁，多个原因封禁时用&连接，比如：SECURITY&USER&OTHER。
                     */
                    std::string m_blockType;
                    bool m_blockTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NATGATEWAYADDRESS_H_
