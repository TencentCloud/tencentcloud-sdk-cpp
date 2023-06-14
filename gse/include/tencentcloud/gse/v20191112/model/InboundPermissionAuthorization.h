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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_INBOUNDPERMISSIONAUTHORIZATION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_INBOUNDPERMISSIONAUTHORIZATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 用于新增安全组
                */
                class InboundPermissionAuthorization : public AbstractModel
                {
                public:
                    InboundPermissionAuthorization();
                    ~InboundPermissionAuthorization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取起始端口号
                     * @return FromPort 起始端口号
                     * 
                     */
                    uint64_t GetFromPort() const;

                    /**
                     * 设置起始端口号
                     * @param _fromPort 起始端口号
                     * 
                     */
                    void SetFromPort(const uint64_t& _fromPort);

                    /**
                     * 判断参数 FromPort 是否已赋值
                     * @return FromPort 是否已赋值
                     * 
                     */
                    bool FromPortHasBeenSet() const;

                    /**
                     * 获取IP 端范围，CIDR方式划分
                     * @return IpRange IP 端范围，CIDR方式划分
                     * 
                     */
                    std::string GetIpRange() const;

                    /**
                     * 设置IP 端范围，CIDR方式划分
                     * @param _ipRange IP 端范围，CIDR方式划分
                     * 
                     */
                    void SetIpRange(const std::string& _ipRange);

                    /**
                     * 判断参数 IpRange 是否已赋值
                     * @return IpRange 是否已赋值
                     * 
                     */
                    bool IpRangeHasBeenSet() const;

                    /**
                     * 获取协议类型
                     * @return Protocol 协议类型
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型
                     * @param _protocol 协议类型
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取终止端口号
                     * @return ToPort 终止端口号
                     * 
                     */
                    uint64_t GetToPort() const;

                    /**
                     * 设置终止端口号
                     * @param _toPort 终止端口号
                     * 
                     */
                    void SetToPort(const uint64_t& _toPort);

                    /**
                     * 判断参数 ToPort 是否已赋值
                     * @return ToPort 是否已赋值
                     * 
                     */
                    bool ToPortHasBeenSet() const;

                private:

                    /**
                     * 起始端口号
                     */
                    uint64_t m_fromPort;
                    bool m_fromPortHasBeenSet;

                    /**
                     * IP 端范围，CIDR方式划分
                     */
                    std::string m_ipRange;
                    bool m_ipRangeHasBeenSet;

                    /**
                     * 协议类型
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 终止端口号
                     */
                    uint64_t m_toPort;
                    bool m_toPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_INBOUNDPERMISSIONAUTHORIZATION_H_
