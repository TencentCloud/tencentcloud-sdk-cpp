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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifySLInstance请求参数结构体
                */
                class ModifySLInstanceRequest : public AbstractModel
                {
                public:
                    ModifySLInstanceRequest();
                    ~ModifySLInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例唯一标识符（字符串表示）。</p>
                     * @return InstanceId <p>实例唯一标识符（字符串表示）。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例唯一标识符（字符串表示）。</p>
                     * @param _instanceId <p>实例唯一标识符（字符串表示）。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>需要变更的区域名称。</p>
                     * @return Zone <p>需要变更的区域名称。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>需要变更的区域名称。</p>
                     * @param _zone <p>需要变更的区域名称。</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。</p>
                     * @return NodeNum <p>该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。</p>
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置<p>该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。</p>
                     * @param _nodeNum <p>该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。</p>
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取<p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * @return ClientToken <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * @param _clientToken <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>存储空间大小，需要是100的倍数，且不允许比当前存储空间小（只允许扩容）</p><p>单位：GB</p>
                     * @return DiskSize <p>存储空间大小，需要是100的倍数，且不允许比当前存储空间小（只允许扩容）</p><p>单位：GB</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>存储空间大小，需要是100的倍数，且不允许比当前存储空间小（只允许扩容）</p><p>单位：GB</p>
                     * @param _diskSize <p>存储空间大小，需要是100的倍数，且不允许比当前存储空间小（只允许扩容）</p><p>单位：GB</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * <p>实例唯一标识符（字符串表示）。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>需要变更的区域名称。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。</p>
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-<strong><strong>-</strong></strong>-****-fae360632808</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>存储空间大小，需要是100的倍数，且不允许比当前存储空间小（只允许扩容）</p><p>单位：GB</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_
