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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 流量镜像采集目标类型
                */
                class TrafficMirrorTarget : public AbstractModel
                {
                public:
                    TrafficMirrorTarget();
                    ~TrafficMirrorTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量镜像的接收IP
                     * @return TargetIps 流量镜像的接收IP
                     * 
                     */
                    std::vector<std::string> GetTargetIps() const;

                    /**
                     * 设置流量镜像的接收IP
                     * @param _targetIps 流量镜像的接收IP
                     * 
                     */
                    void SetTargetIps(const std::vector<std::string>& _targetIps);

                    /**
                     * 判断参数 TargetIps 是否已赋值
                     * @return TargetIps 是否已赋值
                     * 
                     */
                    bool TargetIpsHasBeenSet() const;

                    /**
                     * 获取流量镜像接收IP组，均衡规则，支持ENI/FIVE_TUPLE_FLOW（vpc），FIVE_TUPLE_FLOW（公网IP）
                     * @return AlgHash 流量镜像接收IP组，均衡规则，支持ENI/FIVE_TUPLE_FLOW（vpc），FIVE_TUPLE_FLOW（公网IP）
                     * 
                     */
                    std::string GetAlgHash() const;

                    /**
                     * 设置流量镜像接收IP组，均衡规则，支持ENI/FIVE_TUPLE_FLOW（vpc），FIVE_TUPLE_FLOW（公网IP）
                     * @param _algHash 流量镜像接收IP组，均衡规则，支持ENI/FIVE_TUPLE_FLOW（vpc），FIVE_TUPLE_FLOW（公网IP）
                     * 
                     */
                    void SetAlgHash(const std::string& _algHash);

                    /**
                     * 判断参数 AlgHash 是否已赋值
                     * @return AlgHash 是否已赋值
                     * 
                     */
                    bool AlgHashHasBeenSet() const;

                    /**
                     * 获取流量镜像的接收endpoint（公网IP）
                     * @return TargetEndPoints 流量镜像的接收endpoint（公网IP）
                     * 
                     */
                    std::vector<std::string> GetTargetEndPoints() const;

                    /**
                     * 设置流量镜像的接收endpoint（公网IP）
                     * @param _targetEndPoints 流量镜像的接收endpoint（公网IP）
                     * 
                     */
                    void SetTargetEndPoints(const std::vector<std::string>& _targetEndPoints);

                    /**
                     * 判断参数 TargetEndPoints 是否已赋值
                     * @return TargetEndPoints 是否已赋值
                     * 
                     */
                    bool TargetEndPointsHasBeenSet() const;

                    /**
                     * 获取流量镜像的接收类型，分别为：IP/ENI/CLB
                     * @return TargetType 流量镜像的接收类型，分别为：IP/ENI/CLB
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置流量镜像的接收类型，分别为：IP/ENI/CLB
                     * @param _targetType 流量镜像的接收类型，分别为：IP/ENI/CLB
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                private:

                    /**
                     * 流量镜像的接收IP
                     */
                    std::vector<std::string> m_targetIps;
                    bool m_targetIpsHasBeenSet;

                    /**
                     * 流量镜像接收IP组，均衡规则，支持ENI/FIVE_TUPLE_FLOW（vpc），FIVE_TUPLE_FLOW（公网IP）
                     */
                    std::string m_algHash;
                    bool m_algHashHasBeenSet;

                    /**
                     * 流量镜像的接收endpoint（公网IP）
                     */
                    std::vector<std::string> m_targetEndPoints;
                    bool m_targetEndPointsHasBeenSet;

                    /**
                     * 流量镜像的接收类型，分别为：IP/ENI/CLB
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICMIRRORTARGET_H_
