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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGET_H_

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
                * 转发目标，即绑定在负载均衡上的后端机器
                */
                class Target : public AbstractModel
                {
                public:
                    Target();
                    ~Target() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取后端云服务器监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port 后端云服务器监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置后端云服务器监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port 后端云服务器监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取转发目标的类型，目前仅可取值为 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 转发目标的类型，目前仅可取值为 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置转发目标的类型，目前仅可取值为 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 转发目标的类型，目前仅可取值为 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     * @return Weight 后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     * @param Weight 后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 云服务器的唯一 ID，可通过 DescribeInstances 接口返回字段中的 unInstanceId 字段获取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 后端云服务器监听端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 转发目标的类型，目前仅可取值为 CVM
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 后端云服务器的转发权重，取值范围：0~100，默认为 10。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGET_H_
