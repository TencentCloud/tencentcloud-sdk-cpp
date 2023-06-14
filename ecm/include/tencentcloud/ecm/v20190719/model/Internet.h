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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INTERNET_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INTERNET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PrivateIPAddressInfo.h>
#include <tencentcloud/ecm/v20190719/model/PublicIPAddressInfo.h>
#include <tencentcloud/ecm/v20190719/model/InstanceNetworkInfo.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 实例的网络相关信息。
                */
                class Internet : public AbstractModel
                {
                public:
                    Internet();
                    ~Internet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例的内网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateIPAddressSet 实例的内网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PrivateIPAddressInfo> GetPrivateIPAddressSet() const;

                    /**
                     * 设置实例的内网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateIPAddressSet 实例的内网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateIPAddressSet(const std::vector<PrivateIPAddressInfo>& _privateIPAddressSet);

                    /**
                     * 判断参数 PrivateIPAddressSet 是否已赋值
                     * @return PrivateIPAddressSet 是否已赋值
                     * 
                     */
                    bool PrivateIPAddressSetHasBeenSet() const;

                    /**
                     * 获取实例的公网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIPAddressSet 实例的公网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PublicIPAddressInfo> GetPublicIPAddressSet() const;

                    /**
                     * 设置实例的公网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicIPAddressSet 实例的公网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicIPAddressSet(const std::vector<PublicIPAddressInfo>& _publicIPAddressSet);

                    /**
                     * 判断参数 PublicIPAddressSet 是否已赋值
                     * @return PublicIPAddressSet 是否已赋值
                     * 
                     */
                    bool PublicIPAddressSetHasBeenSet() const;

                    /**
                     * 获取实例网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceNetworkInfoSet 实例网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNetworkInfo> GetInstanceNetworkInfoSet() const;

                    /**
                     * 设置实例网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceNetworkInfoSet 实例网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceNetworkInfoSet(const std::vector<InstanceNetworkInfo>& _instanceNetworkInfoSet);

                    /**
                     * 判断参数 InstanceNetworkInfoSet 是否已赋值
                     * @return InstanceNetworkInfoSet 是否已赋值
                     * 
                     */
                    bool InstanceNetworkInfoSetHasBeenSet() const;

                private:

                    /**
                     * 实例的内网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PrivateIPAddressInfo> m_privateIPAddressSet;
                    bool m_privateIPAddressSetHasBeenSet;

                    /**
                     * 实例的公网相关信息列表。顺序为主网卡在前，辅助网卡按绑定先后顺序排列。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PublicIPAddressInfo> m_publicIPAddressSet;
                    bool m_publicIPAddressSetHasBeenSet;

                    /**
                     * 实例网络相关信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNetworkInfo> m_instanceNetworkInfoSet;
                    bool m_instanceNetworkInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INTERNET_H_
