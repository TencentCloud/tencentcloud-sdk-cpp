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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINELOGINTYPE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINELOGINTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机登录方式
                */
                class MachineLoginType : public AbstractModel
                {
                public:
                    MachineLoginType();
                    ~MachineLoginType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>主机Quuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid <p>主机Quuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机Quuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quuid <p>主机Quuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>登录方式：0-原始登录方式，1-扫码免密登录，2-开启扫码中，3-关闭扫码中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginType <p>登录方式：0-原始登录方式，1-扫码免密登录，2-开启扫码中，3-关闭扫码中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLoginType() const;

                    /**
                     * 设置<p>登录方式：0-原始登录方式，1-扫码免密登录，2-开启扫码中，3-关闭扫码中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loginType <p>登录方式：0-原始登录方式，1-扫码免密登录，2-开启扫码中，3-关闭扫码中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoginType(const uint64_t& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主机Quuid</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>登录方式：0-原始登录方式，1-扫码免密登录，2-开启扫码中，3-关闭扫码中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_loginType;
                    bool m_loginTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MACHINELOGINTYPE_H_
