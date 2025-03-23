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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_PROMETHEUSDTO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_PROMETHEUSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 普罗米修斯打通的vipVport
                */
                class PrometheusDTO : public AbstractModel
                {
                public:
                    PrometheusDTO();
                    ~PrometheusDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取export类型（jmx_export\node_export）
                     * @return Type export类型（jmx_export\node_export）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置export类型（jmx_export\node_export）
                     * @param _type export类型（jmx_export\node_export）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取vip
                     * @return SourceIp vip
                     * 
                     */
                    std::string GetSourceIp() const;

                    /**
                     * 设置vip
                     * @param _sourceIp vip
                     * 
                     */
                    void SetSourceIp(const std::string& _sourceIp);

                    /**
                     * 判断参数 SourceIp 是否已赋值
                     * @return SourceIp 是否已赋值
                     * 
                     */
                    bool SourceIpHasBeenSet() const;

                    /**
                     * 获取vport
                     * @return SourcePort vport
                     * 
                     */
                    int64_t GetSourcePort() const;

                    /**
                     * 设置vport
                     * @param _sourcePort vport
                     * 
                     */
                    void SetSourcePort(const int64_t& _sourcePort);

                    /**
                     * 判断参数 SourcePort 是否已赋值
                     * @return SourcePort 是否已赋值
                     * 
                     */
                    bool SourcePortHasBeenSet() const;

                    /**
                     * 获取broker地址
                     * @return BrokerIp broker地址
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置broker地址
                     * @param _brokerIp broker地址
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取VPC ID信息
                     * @return VpcId VPC ID信息
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC ID信息
                     * @param _vpcId VPC ID信息
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID信息
                     * @return SubnetId 子网ID信息
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID信息
                     * @param _subnetId 子网ID信息
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * export类型（jmx_export\node_export）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * vip
                     */
                    std::string m_sourceIp;
                    bool m_sourceIpHasBeenSet;

                    /**
                     * vport
                     */
                    int64_t m_sourcePort;
                    bool m_sourcePortHasBeenSet;

                    /**
                     * broker地址
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * VPC ID信息
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID信息
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_PROMETHEUSDTO_H_
