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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 私网网关对象
                */
                class PrivateNatGateway : public AbstractModel
                {
                public:
                    PrivateNatGateway();
                    ~PrivateNatGateway() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私网网关`ID`。
                     * @return NatGatewayId 私网网关`ID`。
                     * 
                     */
                    std::string GetNatGatewayId() const;

                    /**
                     * 设置私网网关`ID`。
                     * @param _natGatewayId 私网网关`ID`。
                     * 
                     */
                    void SetNatGatewayId(const std::string& _natGatewayId);

                    /**
                     * 判断参数 NatGatewayId 是否已赋值
                     * @return NatGatewayId 是否已赋值
                     * 
                     */
                    bool NatGatewayIdHasBeenSet() const;

                    /**
                     * 获取私网网关名称。
                     * @return NatGatewayName 私网网关名称。
                     * 
                     */
                    std::string GetNatGatewayName() const;

                    /**
                     * 设置私网网关名称。
                     * @param _natGatewayName 私网网关名称。
                     * 
                     */
                    void SetNatGatewayName(const std::string& _natGatewayName);

                    /**
                     * 判断参数 NatGatewayName 是否已赋值
                     * @return NatGatewayName 是否已赋值
                     * 
                     */
                    bool NatGatewayNameHasBeenSet() const;

                    /**
                     * 获取私网网关关联`VPC`实例`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私网网关关联`VPC`实例`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私网网关关联`VPC`实例`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 私网网关关联`VPC`实例`ID`。
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
                     * 获取私网网关当前状态。
                     * @return Status 私网网关当前状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置私网网关当前状态。
                     * @param _status 私网网关当前状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取私网网关跨域标志。
                     * @return CrossDomain 私网网关跨域标志。
                     * 
                     */
                    bool GetCrossDomain() const;

                    /**
                     * 设置私网网关跨域标志。
                     * @param _crossDomain 私网网关跨域标志。
                     * 
                     */
                    void SetCrossDomain(const bool& _crossDomain);

                    /**
                     * 判断参数 CrossDomain 是否已赋值
                     * @return CrossDomain 是否已赋值
                     * 
                     */
                    bool CrossDomainHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedTime 创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间
                     * @param _createdTime 创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagSet 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 私网网关`ID`。
                     */
                    std::string m_natGatewayId;
                    bool m_natGatewayIdHasBeenSet;

                    /**
                     * 私网网关名称。
                     */
                    std::string m_natGatewayName;
                    bool m_natGatewayNameHasBeenSet;

                    /**
                     * 私网网关关联`VPC`实例`ID`。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私网网关当前状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 私网网关跨域标志。
                     */
                    bool m_crossDomain;
                    bool m_crossDomainHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签键值对。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAY_H_
