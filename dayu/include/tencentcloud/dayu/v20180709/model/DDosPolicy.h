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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICY_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/ResourceIp.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyDropOption.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPortLimit.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPacketFilter.h>
#include <tencentcloud/dayu/v20180709/model/IpBlackWhite.h>
#include <tencentcloud/dayu/v20180709/model/WaterPrintPolicy.h>
#include <tencentcloud/dayu/v20180709/model/WaterPrintKey.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DDoS高级策略
                */
                class DDosPolicy : public AbstractModel
                {
                public:
                    DDosPolicy();
                    ~DDosPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略绑定的资源
                     * @return Resources 策略绑定的资源
                     * 
                     */
                    std::vector<ResourceIp> GetResources() const;

                    /**
                     * 设置策略绑定的资源
                     * @param _resources 策略绑定的资源
                     * 
                     */
                    void SetResources(const std::vector<ResourceIp>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取禁用协议
                     * @return DropOptions 禁用协议
                     * 
                     */
                    DDoSPolicyDropOption GetDropOptions() const;

                    /**
                     * 设置禁用协议
                     * @param _dropOptions 禁用协议
                     * 
                     */
                    void SetDropOptions(const DDoSPolicyDropOption& _dropOptions);

                    /**
                     * 判断参数 DropOptions 是否已赋值
                     * @return DropOptions 是否已赋值
                     * 
                     */
                    bool DropOptionsHasBeenSet() const;

                    /**
                     * 获取禁用端口
                     * @return PortLimits 禁用端口
                     * 
                     */
                    std::vector<DDoSPolicyPortLimit> GetPortLimits() const;

                    /**
                     * 设置禁用端口
                     * @param _portLimits 禁用端口
                     * 
                     */
                    void SetPortLimits(const std::vector<DDoSPolicyPortLimit>& _portLimits);

                    /**
                     * 判断参数 PortLimits 是否已赋值
                     * @return PortLimits 是否已赋值
                     * 
                     */
                    bool PortLimitsHasBeenSet() const;

                    /**
                     * 获取报文过滤
                     * @return PacketFilters 报文过滤
                     * 
                     */
                    std::vector<DDoSPolicyPacketFilter> GetPacketFilters() const;

                    /**
                     * 设置报文过滤
                     * @param _packetFilters 报文过滤
                     * 
                     */
                    void SetPacketFilters(const std::vector<DDoSPolicyPacketFilter>& _packetFilters);

                    /**
                     * 判断参数 PacketFilters 是否已赋值
                     * @return PacketFilters 是否已赋值
                     * 
                     */
                    bool PacketFiltersHasBeenSet() const;

                    /**
                     * 获取黑白IP名单
                     * @return IpBlackWhiteLists 黑白IP名单
                     * 
                     */
                    std::vector<IpBlackWhite> GetIpBlackWhiteLists() const;

                    /**
                     * 设置黑白IP名单
                     * @param _ipBlackWhiteLists 黑白IP名单
                     * 
                     */
                    void SetIpBlackWhiteLists(const std::vector<IpBlackWhite>& _ipBlackWhiteLists);

                    /**
                     * 判断参数 IpBlackWhiteLists 是否已赋值
                     * @return IpBlackWhiteLists 是否已赋值
                     * 
                     */
                    bool IpBlackWhiteListsHasBeenSet() const;

                    /**
                     * 获取策略ID
                     * @return PolicyId 策略ID
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置策略ID
                     * @param _policyId 策略ID
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return PolicyName 策略名称
                     * 
                     */
                    std::string GetPolicyName() const;

                    /**
                     * 设置策略名称
                     * @param _policyName 策略名称
                     * 
                     */
                    void SetPolicyName(const std::string& _policyName);

                    /**
                     * 判断参数 PolicyName 是否已赋值
                     * @return PolicyName 是否已赋值
                     * 
                     */
                    bool PolicyNameHasBeenSet() const;

                    /**
                     * 获取策略创建时间
                     * @return CreateTime 策略创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置策略创建时间
                     * @param _createTime 策略创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取水印策略参数，最多只有一个，当没有水印策略时数组为空
                     * @return WaterPrint 水印策略参数，最多只有一个，当没有水印策略时数组为空
                     * 
                     */
                    std::vector<WaterPrintPolicy> GetWaterPrint() const;

                    /**
                     * 设置水印策略参数，最多只有一个，当没有水印策略时数组为空
                     * @param _waterPrint 水印策略参数，最多只有一个，当没有水印策略时数组为空
                     * 
                     */
                    void SetWaterPrint(const std::vector<WaterPrintPolicy>& _waterPrint);

                    /**
                     * 判断参数 WaterPrint 是否已赋值
                     * @return WaterPrint 是否已赋值
                     * 
                     */
                    bool WaterPrintHasBeenSet() const;

                    /**
                     * 获取水印密钥，最多只有2个，当没有水印策略时数组为空
                     * @return WaterKey 水印密钥，最多只有2个，当没有水印策略时数组为空
                     * 
                     */
                    std::vector<WaterPrintKey> GetWaterKey() const;

                    /**
                     * 设置水印密钥，最多只有2个，当没有水印策略时数组为空
                     * @param _waterKey 水印密钥，最多只有2个，当没有水印策略时数组为空
                     * 
                     */
                    void SetWaterKey(const std::vector<WaterPrintKey>& _waterKey);

                    /**
                     * 判断参数 WaterKey 是否已赋值
                     * @return WaterKey 是否已赋值
                     * 
                     */
                    bool WaterKeyHasBeenSet() const;

                    /**
                     * 获取策略绑定的资源实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BoundResources 策略绑定的资源实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBoundResources() const;

                    /**
                     * 设置策略绑定的资源实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _boundResources 策略绑定的资源实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBoundResources(const std::vector<std::string>& _boundResources);

                    /**
                     * 判断参数 BoundResources 是否已赋值
                     * @return BoundResources 是否已赋值
                     * 
                     */
                    bool BoundResourcesHasBeenSet() const;

                    /**
                     * 获取策略所属的策略场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneId 策略所属的策略场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置策略所属的策略场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sceneId 策略所属的策略场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                private:

                    /**
                     * 策略绑定的资源
                     */
                    std::vector<ResourceIp> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 禁用协议
                     */
                    DDoSPolicyDropOption m_dropOptions;
                    bool m_dropOptionsHasBeenSet;

                    /**
                     * 禁用端口
                     */
                    std::vector<DDoSPolicyPortLimit> m_portLimits;
                    bool m_portLimitsHasBeenSet;

                    /**
                     * 报文过滤
                     */
                    std::vector<DDoSPolicyPacketFilter> m_packetFilters;
                    bool m_packetFiltersHasBeenSet;

                    /**
                     * 黑白IP名单
                     */
                    std::vector<IpBlackWhite> m_ipBlackWhiteLists;
                    bool m_ipBlackWhiteListsHasBeenSet;

                    /**
                     * 策略ID
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_policyName;
                    bool m_policyNameHasBeenSet;

                    /**
                     * 策略创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 水印策略参数，最多只有一个，当没有水印策略时数组为空
                     */
                    std::vector<WaterPrintPolicy> m_waterPrint;
                    bool m_waterPrintHasBeenSet;

                    /**
                     * 水印密钥，最多只有2个，当没有水印策略时数组为空
                     */
                    std::vector<WaterPrintKey> m_waterKey;
                    bool m_waterKeyHasBeenSet;

                    /**
                     * 策略绑定的资源实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_boundResources;
                    bool m_boundResourcesHasBeenSet;

                    /**
                     * 策略所属的策略场景
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DDOSPOLICY_H_
