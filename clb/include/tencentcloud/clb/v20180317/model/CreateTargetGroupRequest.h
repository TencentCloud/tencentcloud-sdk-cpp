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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupInstance.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateTargetGroup请求参数结构体
                */
                class CreateTargetGroupRequest : public AbstractModel
                {
                public:
                    CreateTargetGroupRequest();
                    ~CreateTargetGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组名称，限定50个字符
                     * @return TargetGroupName 目标组名称，限定50个字符
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组名称，限定50个字符
                     * @param _targetGroupName 目标组名称，限定50个字符
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取目标组的vpcid属性，不填则使用默认vpc
                     * @return VpcId 目标组的vpcid属性，不填则使用默认vpc
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置目标组的vpcid属性，不填则使用默认vpc
                     * @param _vpcId 目标组的vpcid属性，不填则使用默认vpc
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
                     * 获取目标组的默认端口， 后续添加服务器时可使用该默认端口。全监听目标组不支持此参数，非全监听目标组Port和TargetGroupInstances.N中的port二者必填其一。

                     * @return Port 目标组的默认端口， 后续添加服务器时可使用该默认端口。全监听目标组不支持此参数，非全监听目标组Port和TargetGroupInstances.N中的port二者必填其一。

                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标组的默认端口， 后续添加服务器时可使用该默认端口。全监听目标组不支持此参数，非全监听目标组Port和TargetGroupInstances.N中的port二者必填其一。

                     * @param _port 目标组的默认端口， 后续添加服务器时可使用该默认端口。全监听目标组不支持此参数，非全监听目标组Port和TargetGroupInstances.N中的port二者必填其一。

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
                     * 获取目标组绑定的后端服务器，单次最多支持50个。
                     * @return TargetGroupInstances 目标组绑定的后端服务器，单次最多支持50个。
                     * 
                     */
                    std::vector<TargetGroupInstance> GetTargetGroupInstances() const;

                    /**
                     * 设置目标组绑定的后端服务器，单次最多支持50个。
                     * @param _targetGroupInstances 目标组绑定的后端服务器，单次最多支持50个。
                     * 
                     */
                    void SetTargetGroupInstances(const std::vector<TargetGroupInstance>& _targetGroupInstances);

                    /**
                     * 判断参数 TargetGroupInstances 是否已赋值
                     * @return TargetGroupInstances 是否已赋值
                     * 
                     */
                    bool TargetGroupInstancesHasBeenSet() const;

                    /**
                     * 获取目标组类型，当前支持v1(旧版目标组), v2(新版目标组), 默认为v1(旧版目标组)。
                     * @return Type 目标组类型，当前支持v1(旧版目标组), v2(新版目标组), 默认为v1(旧版目标组)。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置目标组类型，当前支持v1(旧版目标组), v2(新版目标组), 默认为v1(旧版目标组)。
                     * @param _type 目标组类型，当前支持v1(旧版目标组), v2(新版目标组), 默认为v1(旧版目标组)。
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
                     * 获取目标组后端转发协议。v2新版目标组该项必填。目前支持tcp、udp。
                     * @return Protocol 目标组后端转发协议。v2新版目标组该项必填。目前支持tcp、udp。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置目标组后端转发协议。v2新版目标组该项必填。目前支持tcp、udp。
                     * @param _protocol 目标组后端转发协议。v2新版目标组该项必填。目前支持tcp、udp。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取标签。
                     * @return Tags 标签。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签。
                     * @param _tags 标签。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li>
</ul>
v1 目标组类型不支持设置 Weight 参数。
                     * @return Weight 后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li>
</ul>
v1 目标组类型不支持设置 Weight 参数。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li>
</ul>
v1 目标组类型不支持设置 Weight 参数。
                     * @param _weight 后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li>
</ul>
v1 目标组类型不支持设置 Weight 参数。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取全监听目标组标识，为true表示是全监听目标组，false表示不是全监听目标组。
                     * @return FullListenSwitch 全监听目标组标识，为true表示是全监听目标组，false表示不是全监听目标组。
                     * 
                     */
                    bool GetFullListenSwitch() const;

                    /**
                     * 设置全监听目标组标识，为true表示是全监听目标组，false表示不是全监听目标组。
                     * @param _fullListenSwitch 全监听目标组标识，为true表示是全监听目标组，false表示不是全监听目标组。
                     * 
                     */
                    void SetFullListenSwitch(const bool& _fullListenSwitch);

                    /**
                     * 判断参数 FullListenSwitch 是否已赋值
                     * @return FullListenSwitch 是否已赋值
                     * 
                     */
                    bool FullListenSwitchHasBeenSet() const;

                    /**
                     * 获取是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，0:关闭；1:开启， 默认关闭。
                     * @return KeepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，0:关闭；1:开启， 默认关闭。
                     * 
                     */
                    bool GetKeepaliveEnable() const;

                    /**
                     * 设置是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，0:关闭；1:开启， 默认关闭。
                     * @param _keepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，0:关闭；1:开启， 默认关闭。
                     * 
                     */
                    void SetKeepaliveEnable(const bool& _keepaliveEnable);

                    /**
                     * 判断参数 KeepaliveEnable 是否已赋值
                     * @return KeepaliveEnable 是否已赋值
                     * 
                     */
                    bool KeepaliveEnableHasBeenSet() const;

                    /**
                     * 获取会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。TCP/UDP目标组不支持该参数。
                     * @return SessionExpireTime 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。TCP/UDP目标组不支持该参数。
                     * 
                     */
                    uint64_t GetSessionExpireTime() const;

                    /**
                     * 设置会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。TCP/UDP目标组不支持该参数。
                     * @param _sessionExpireTime 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。TCP/UDP目标组不支持该参数。
                     * 
                     */
                    void SetSessionExpireTime(const uint64_t& _sessionExpireTime);

                    /**
                     * 判断参数 SessionExpireTime 是否已赋值
                     * @return SessionExpireTime 是否已赋值
                     * 
                     */
                    bool SessionExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 目标组名称，限定50个字符
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * 目标组的vpcid属性，不填则使用默认vpc
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 目标组的默认端口， 后续添加服务器时可使用该默认端口。全监听目标组不支持此参数，非全监听目标组Port和TargetGroupInstances.N中的port二者必填其一。

                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 目标组绑定的后端服务器，单次最多支持50个。
                     */
                    std::vector<TargetGroupInstance> m_targetGroupInstances;
                    bool m_targetGroupInstancesHasBeenSet;

                    /**
                     * 目标组类型，当前支持v1(旧版目标组), v2(新版目标组), 默认为v1(旧版目标组)。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 目标组后端转发协议。v2新版目标组该项必填。目前支持tcp、udp。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li>
</ul>
v1 目标组类型不支持设置 Weight 参数。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 全监听目标组标识，为true表示是全监听目标组，false表示不是全监听目标组。
                     */
                    bool m_fullListenSwitch;
                    bool m_fullListenSwitchHasBeenSet;

                    /**
                     * 是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，0:关闭；1:开启， 默认关闭。
                     */
                    bool m_keepaliveEnable;
                    bool m_keepaliveEnableHasBeenSet;

                    /**
                     * 会话保持时间，单位：秒。可选值：30~3600，默认 0，表示不开启。TCP/UDP目标组不支持该参数。
                     */
                    uint64_t m_sessionExpireTime;
                    bool m_sessionExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATETARGETGROUPREQUEST_H_
