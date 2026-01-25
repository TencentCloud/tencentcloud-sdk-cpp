/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DESTIPINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DESTIPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 目标IP信息
                */
                class DestIpInfo : public AbstractModel
                {
                public:
                    DestIpInfo();
                    ~DestIpInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间：s
                     * @return Time 时间：s
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间：s
                     * @param _time 时间：s
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取网关IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayIp 网关IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayIp() const;

                    /**
                     * 设置网关IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayIp 网关IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayIp(const std::string& _gatewayIp);

                    /**
                     * 判断参数 GatewayIp 是否已赋值
                     * @return GatewayIp 是否已赋值
                     * 
                     */
                    bool GatewayIpHasBeenSet() const;

                    /**
                     * 获取网关地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewaySite 网关地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewaySite() const;

                    /**
                     * 设置网关地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewaySite 网关地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewaySite(const std::string& _gatewaySite);

                    /**
                     * 判断参数 GatewaySite 是否已赋值
                     * @return GatewaySite 是否已赋值
                     * 
                     */
                    bool GatewaySiteHasBeenSet() const;

                    /**
                     * 获取目标IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpCount 目标IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIpCount() const;

                    /**
                     * 设置目标IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipCount 目标IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpCount(const int64_t& _ipCount);

                    /**
                     * 判断参数 IpCount 是否已赋值
                     * @return IpCount 是否已赋值
                     * 
                     */
                    bool IpCountHasBeenSet() const;

                    /**
                     * 获取目标IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpList 目标IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置目标IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipList 目标IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * 时间：s
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 网关IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayIp;
                    bool m_gatewayIpHasBeenSet;

                    /**
                     * 网关地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewaySite;
                    bool m_gatewaySiteHasBeenSet;

                    /**
                     * 目标IP数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ipCount;
                    bool m_ipCountHasBeenSet;

                    /**
                     * 目标IP列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DESTIPINFO_H_
