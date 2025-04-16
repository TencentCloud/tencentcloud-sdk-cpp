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
                     * 获取实例唯一标识符（字符串表示）。
                     * @return InstanceId 实例唯一标识符（字符串表示）。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例唯一标识符（字符串表示）。
                     * @param _instanceId 实例唯一标识符（字符串表示）。
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
                     * 获取需要变更的区域名称。
                     * @return Zone 需要变更的区域名称。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置需要变更的区域名称。
                     * @param _zone 需要变更的区域名称。
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
                     * 获取该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。
                     * @return NodeNum 该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。
                     * @param _nodeNum 该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。
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
                     * 获取唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     * @return ClientToken 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     * @param _clientToken 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 实例唯一标识符（字符串表示）。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要变更的区域名称。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 该区域变配后的目标节点数量，所有区域节点总数应大于等于3，小于等于50。
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 唯一随机标识，时效性为5分钟，需要调用者指定 防止客户端重复创建资源，例如 a9a90aa6-****-****-****-fae360632808	
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYSLINSTANCEREQUEST_H_
