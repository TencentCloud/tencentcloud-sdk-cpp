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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LBRSTARGETS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LBRSTARGETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 反查结果数据类型。
                */
                class LbRsTargets : public AbstractModel
                {
                public:
                    LbRsTargets();
                    ~LbRsTargets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网ip类型。“cvm”或“eni”
                     * @return Type 内网ip类型。“cvm”或“eni”
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置内网ip类型。“cvm”或“eni”
                     * @param _type 内网ip类型。“cvm”或“eni”
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
                     * 获取后端实例的内网ip。
                     * @return PrivateIp 后端实例的内网ip。
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置后端实例的内网ip。
                     * @param _privateIp 后端实例的内网ip。
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取绑定后端实例的端口。
                     * @return Port 绑定后端实例的端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置绑定后端实例的端口。
                     * @param _port 绑定后端实例的端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取rs的vpcId
                     * @return VpcId rs的vpcId
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置rs的vpcId
                     * @param _vpcId rs的vpcId
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取rs的权重
                     * @return Weight rs的权重
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置rs的权重
                     * @param _weight rs的权重
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 内网ip类型。“cvm”或“eni”
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 后端实例的内网ip。
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 绑定后端实例的端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * rs的vpcId
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * rs的权重
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LBRSTARGETS_H_
