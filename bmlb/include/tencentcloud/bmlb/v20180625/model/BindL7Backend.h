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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_BINDL7BACKEND_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_BINDL7BACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 待与七层监听器转发规则绑定的物理机主机、虚拟机或半托管主机信息。目前一个七层转发路径下面最多允许绑定255个主机端口。
                */
                class BindL7Backend : public AbstractModel
                {
                public:
                    BindL7Backend();
                    ~BindL7Backend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待绑定的主机端口，可选值1~65535。
                     * @return Port 待绑定的主机端口，可选值1~65535。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置待绑定的主机端口，可选值1~65535。
                     * @param _port 待绑定的主机端口，可选值1~65535。
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
                     * 获取黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * @return InstanceId 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     * @param _instanceId 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
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
                     * 获取待绑定的主机权重，可选值0~100。
                     * @return Weight 待绑定的主机权重，可选值0~100。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置待绑定的主机权重，可选值0~100。
                     * @param _weight 待绑定的主机权重，可选值0~100。
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
                     * 待绑定的主机端口，可选值1~65535。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 黑石物理机主机ID、虚拟机IP或者是半托管主机ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 待绑定的主机权重，可选值0~100。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_BINDL7BACKEND_H_
