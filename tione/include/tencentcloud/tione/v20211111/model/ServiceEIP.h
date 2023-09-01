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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEEIP_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEEIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 服务共享弹性网卡设置
                */
                class ServiceEIP : public AbstractModel
                {
                public:
                    ServiceEIP();
                    ~ServiceEIP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启TIONE内网到外部的访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableEIP 是否开启TIONE内网到外部的访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableEIP() const;

                    /**
                     * 设置是否开启TIONE内网到外部的访问
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableEIP 是否开启TIONE内网到外部的访问
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableEIP(const bool& _enableEIP);

                    /**
                     * 判断参数 EnableEIP 是否已赋值
                     * @return EnableEIP 是否已赋值
                     * 
                     */
                    bool EnableEIPHasBeenSet() const;

                    /**
                     * 获取用户VpcId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 用户VpcId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置用户VpcId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 用户VpcId
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户subnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 用户subnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置用户subnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 用户subnetId
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 是否开启TIONE内网到外部的访问
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableEIP;
                    bool m_enableEIPHasBeenSet;

                    /**
                     * 用户VpcId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 用户subnetId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEEIP_H_
