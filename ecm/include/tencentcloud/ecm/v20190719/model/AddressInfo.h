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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESSINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PublicIPAddressInfo.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIPAddressInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ip地址相关信息结构体。
                */
                class AddressInfo : public AbstractModel
                {
                public:
                    AddressInfo();
                    ~AddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例的外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIPAddressInfo 实例的外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PublicIPAddressInfo GetPublicIPAddressInfo() const;

                    /**
                     * 设置实例的外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIPAddressInfo 实例的外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIPAddressInfo(const PublicIPAddressInfo& _publicIPAddressInfo);

                    /**
                     * 判断参数 PublicIPAddressInfo 是否已赋值
                     * @return PublicIPAddressInfo 是否已赋值
                     * 
                     */
                    bool PublicIPAddressInfoHasBeenSet() const;

                    /**
                     * 获取实例的内网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIPAddressInfo 实例的内网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PrivateIPAddressInfo GetPrivateIPAddressInfo() const;

                    /**
                     * 设置实例的内网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIPAddressInfo 实例的内网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIPAddressInfo(const PrivateIPAddressInfo& _privateIPAddressInfo);

                    /**
                     * 判断参数 PrivateIPAddressInfo 是否已赋值
                     * @return PrivateIPAddressInfo 是否已赋值
                     * 
                     */
                    bool PrivateIPAddressInfoHasBeenSet() const;

                    /**
                     * 获取实例的外网ipv6相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIPv6AddressInfo 实例的外网ipv6相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PublicIPAddressInfo GetPublicIPv6AddressInfo() const;

                    /**
                     * 设置实例的外网ipv6相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIPv6AddressInfo 实例的外网ipv6相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIPv6AddressInfo(const PublicIPAddressInfo& _publicIPv6AddressInfo);

                    /**
                     * 判断参数 PublicIPv6AddressInfo 是否已赋值
                     * @return PublicIPv6AddressInfo 是否已赋值
                     * 
                     */
                    bool PublicIPv6AddressInfoHasBeenSet() const;

                private:

                    /**
                     * 实例的外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PublicIPAddressInfo m_publicIPAddressInfo;
                    bool m_publicIPAddressInfoHasBeenSet;

                    /**
                     * 实例的内网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PrivateIPAddressInfo m_privateIPAddressInfo;
                    bool m_privateIPAddressInfoHasBeenSet;

                    /**
                     * 实例的外网ipv6相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PublicIPAddressInfo m_publicIPv6AddressInfo;
                    bool m_publicIPv6AddressInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ADDRESSINFO_H_
