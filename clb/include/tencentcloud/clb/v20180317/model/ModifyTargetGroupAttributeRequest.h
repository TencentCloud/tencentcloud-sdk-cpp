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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupAttribute请求参数结构体
                */
                class ModifyTargetGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupAttributeRequest();
                    ~ModifyTargetGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组的ID。
                     * @return TargetGroupId 目标组的ID。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组的ID。
                     * @param _targetGroupId 目标组的ID。
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取目标组的新名称。
                     * @return TargetGroupName 目标组的新名称。
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组的新名称。
                     * @param _targetGroupName 目标组的新名称。
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
                     * 获取目标组的新默认端口。全监听目标组不支持此参数。
                     * @return Port 目标组的新默认端口。全监听目标组不支持此参数。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标组的新默认端口。全监听目标组不支持此参数。
                     * @param _port 目标组的新默认端口。全监听目标组不支持此参数。
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
                     * 获取后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li> 
</ul>
v1目标组类型不支持设置Weight参数。
                     * @return Weight 后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li> 
</ul>
v1目标组类型不支持设置Weight参数。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li> 
</ul>
v1目标组类型不支持设置Weight参数。
                     * @param _weight 后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li> 
</ul>
v1目标组类型不支持设置Weight参数。
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
                     * 获取是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，true:关闭；false:开启， 默认关闭。
                     * @return KeepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，true:关闭；false:开启， 默认关闭。
                     * 
                     */
                    bool GetKeepaliveEnable() const;

                    /**
                     * 设置是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，true:关闭；false:开启， 默认关闭。
                     * @param _keepaliveEnable 是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，true:关闭；false:开启， 默认关闭。
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
                     * 目标组的ID。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 目标组的新名称。
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * 目标组的新默认端口。全监听目标组不支持此参数。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 后端服务默认权重。
<ul>
    <li>取值范围[0, 100]</li>
    <li>设置该值后，添加后端服务到目标组时， 若后端服务不单独设置权重， 则使用这里的默认权重。 </li> 
</ul>
v1目标组类型不支持设置Weight参数。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 是否开启长连接，此参数仅适用于HTTP/HTTPS目标组，true:关闭；false:开启， 默认关闭。
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

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
