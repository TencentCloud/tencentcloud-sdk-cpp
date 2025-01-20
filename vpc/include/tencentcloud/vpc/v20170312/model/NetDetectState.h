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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTSTATE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NetDetectIpState.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 网络探测验证结果。
                */
                class NetDetectState : public AbstractModel
                {
                public:
                    NetDetectState();
                    ~NetDetectState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络探测实例ID。形如：netd-12345678。
                     * @return NetDetectId 网络探测实例ID。形如：netd-12345678。
                     * 
                     */
                    std::string GetNetDetectId() const;

                    /**
                     * 设置网络探测实例ID。形如：netd-12345678。
                     * @param _netDetectId 网络探测实例ID。形如：netd-12345678。
                     * 
                     */
                    void SetNetDetectId(const std::string& _netDetectId);

                    /**
                     * 判断参数 NetDetectId 是否已赋值
                     * @return NetDetectId 是否已赋值
                     * 
                     */
                    bool NetDetectIdHasBeenSet() const;

                    /**
                     * 获取网络探测目的IP验证结果对象数组。
                     * @return NetDetectIpStateSet 网络探测目的IP验证结果对象数组。
                     * 
                     */
                    std::vector<NetDetectIpState> GetNetDetectIpStateSet() const;

                    /**
                     * 设置网络探测目的IP验证结果对象数组。
                     * @param _netDetectIpStateSet 网络探测目的IP验证结果对象数组。
                     * 
                     */
                    void SetNetDetectIpStateSet(const std::vector<NetDetectIpState>& _netDetectIpStateSet);

                    /**
                     * 判断参数 NetDetectIpStateSet 是否已赋值
                     * @return NetDetectIpStateSet 是否已赋值
                     * 
                     */
                    bool NetDetectIpStateSetHasBeenSet() const;

                private:

                    /**
                     * 网络探测实例ID。形如：netd-12345678。
                     */
                    std::string m_netDetectId;
                    bool m_netDetectIdHasBeenSet;

                    /**
                     * 网络探测目的IP验证结果对象数组。
                     */
                    std::vector<NetDetectIpState> m_netDetectIpStateSet;
                    bool m_netDetectIpStateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETDETECTSTATE_H_
