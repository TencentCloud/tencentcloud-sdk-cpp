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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCBINDRECORD_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCBINDRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * vcp绑定记录
                */
                class VpcBindRecord : public AbstractModel
                {
                public:
                    VpcBindRecord();
                    ~VpcBindRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户Vpc Id
                     * @return UniqueVpcId 租户Vpc Id
                     * 
                     */
                    std::string GetUniqueVpcId() const;

                    /**
                     * 设置租户Vpc Id
                     * @param _uniqueVpcId 租户Vpc Id
                     * 
                     */
                    void SetUniqueVpcId(const std::string& _uniqueVpcId);

                    /**
                     * 判断参数 UniqueVpcId 是否已赋值
                     * @return UniqueVpcId 是否已赋值
                     * 
                     */
                    bool UniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取租户Vpc子网Id
                     * @return UniqueSubnetId 租户Vpc子网Id
                     * 
                     */
                    std::string GetUniqueSubnetId() const;

                    /**
                     * 设置租户Vpc子网Id
                     * @param _uniqueSubnetId 租户Vpc子网Id
                     * 
                     */
                    void SetUniqueSubnetId(const std::string& _uniqueSubnetId);

                    /**
                     * 判断参数 UniqueSubnetId 是否已赋值
                     * @return UniqueSubnetId 是否已赋值
                     * 
                     */
                    bool UniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取路由Id
                     * @return RouterId 路由Id
                     * 
                     */
                    std::string GetRouterId() const;

                    /**
                     * 设置路由Id
                     * @param _routerId 路由Id
                     * 
                     */
                    void SetRouterId(const std::string& _routerId);

                    /**
                     * 判断参数 RouterId 是否已赋值
                     * @return RouterId 是否已赋值
                     * 
                     */
                    bool RouterIdHasBeenSet() const;

                    /**
                     * 获取Vpc的Id
                     * @return Ip Vpc的Id
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置Vpc的Id
                     * @param _ip Vpc的Id
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取Vpc的Port
                     * @return Port Vpc的Port
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置Vpc的Port
                     * @param _port Vpc的Port
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取说明，128个字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明，128个字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明，128个字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 说明，128个字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 租户Vpc Id
                     */
                    std::string m_uniqueVpcId;
                    bool m_uniqueVpcIdHasBeenSet;

                    /**
                     * 租户Vpc子网Id
                     */
                    std::string m_uniqueSubnetId;
                    bool m_uniqueSubnetIdHasBeenSet;

                    /**
                     * 路由Id
                     */
                    std::string m_routerId;
                    bool m_routerIdHasBeenSet;

                    /**
                     * Vpc的Id
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * Vpc的Port
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 说明，128个字符以内
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_VPCBINDRECORD_H_
