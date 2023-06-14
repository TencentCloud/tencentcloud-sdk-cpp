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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKINFO_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/AddressInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 实例网卡ip网络信息数组
                */
                class InstanceNetworkInfo : public AbstractModel
                {
                public:
                    InstanceNetworkInfo();
                    ~InstanceNetworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例内外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressInfoSet 实例内外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AddressInfo> GetAddressInfoSet() const;

                    /**
                     * 设置实例内外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressInfoSet 实例内外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressInfoSet(const std::vector<AddressInfo>& _addressInfoSet);

                    /**
                     * 判断参数 AddressInfoSet 是否已赋值
                     * @return AddressInfoSet 是否已赋值
                     * 
                     */
                    bool AddressInfoSetHasBeenSet() const;

                    /**
                     * 获取网卡ID。
                     * @return NetworkInterfaceId 网卡ID。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置网卡ID。
                     * @param _networkInterfaceId 网卡ID。
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取网卡名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkInterfaceName 网卡名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetworkInterfaceName() const;

                    /**
                     * 设置网卡名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkInterfaceName 网卡名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkInterfaceName(const std::string& _networkInterfaceName);

                    /**
                     * 判断参数 NetworkInterfaceName 是否已赋值
                     * @return NetworkInterfaceName 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceNameHasBeenSet() const;

                    /**
                     * 获取主网卡属性。true为主网卡，false为辅助网卡。
                     * @return Primary 主网卡属性。true为主网卡，false为辅助网卡。
                     * 
                     */
                    bool GetPrimary() const;

                    /**
                     * 设置主网卡属性。true为主网卡，false为辅助网卡。
                     * @param _primary 主网卡属性。true为主网卡，false为辅助网卡。
                     * 
                     */
                    void SetPrimary(const bool& _primary);

                    /**
                     * 判断参数 Primary 是否已赋值
                     * @return Primary 是否已赋值
                     * 
                     */
                    bool PrimaryHasBeenSet() const;

                private:

                    /**
                     * 实例内外网ip相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AddressInfo> m_addressInfoSet;
                    bool m_addressInfoSetHasBeenSet;

                    /**
                     * 网卡ID。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 网卡名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_networkInterfaceName;
                    bool m_networkInterfaceNameHasBeenSet;

                    /**
                     * 主网卡属性。true为主网卡，false为辅助网卡。
                     */
                    bool m_primary;
                    bool m_primaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCENETWORKINFO_H_
