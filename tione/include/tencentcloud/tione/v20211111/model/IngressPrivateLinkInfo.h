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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INGRESSPRIVATELINKINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INGRESSPRIVATELINKINFO_H_

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
                * 私有连接通道信息
                */
                class IngressPrivateLinkInfo : public AbstractModel
                {
                public:
                    IngressPrivateLinkInfo();
                    ~IngressPrivateLinkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取用户子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 用户子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置用户子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 用户子网ID
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

                    /**
                     * 获取内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerHttpAddr 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetInnerHttpAddr() const;

                    /**
                     * 设置内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerHttpAddr 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerHttpAddr(const std::vector<std::string>& _innerHttpAddr);

                    /**
                     * 判断参数 InnerHttpAddr 是否已赋值
                     * @return InnerHttpAddr 是否已赋值
                     * 
                     */
                    bool InnerHttpAddrHasBeenSet() const;

                    /**
                     * 获取内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerHttpsAddr 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetInnerHttpsAddr() const;

                    /**
                     * 设置内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _innerHttpsAddr 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInnerHttpsAddr(const std::vector<std::string>& _innerHttpsAddr);

                    /**
                     * 判断参数 InnerHttpsAddr 是否已赋值
                     * @return InnerHttpsAddr 是否已赋值
                     * 
                     */
                    bool InnerHttpsAddrHasBeenSet() const;

                    /**
                     * 获取私有连接状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 私有连接状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置私有连接状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 私有连接状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 用户VpcId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 用户子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 内网http调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_innerHttpAddr;
                    bool m_innerHttpAddrHasBeenSet;

                    /**
                     * 内网https调用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_innerHttpsAddr;
                    bool m_innerHttpsAddrHasBeenSet;

                    /**
                     * 私有连接状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INGRESSPRIVATELINKINFO_H_
