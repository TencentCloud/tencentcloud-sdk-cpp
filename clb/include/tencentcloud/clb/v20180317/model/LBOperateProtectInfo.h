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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_LBOPERATEPROTECTINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_LBOPERATEPROTECTINFO_H_

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
                * 负载均衡的操作保护信息
                */
                class LBOperateProtectInfo : public AbstractModel
                {
                public:
                    LBOperateProtectInfo();
                    ~LBOperateProtectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡实例 ID。
                     * @return LoadBalancerId 负载均衡实例 ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param _loadBalancerId 负载均衡实例 ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取保护状态，true：表示开启了操作保护，false：表示未开启操作保护。
                     * @return ProtectState 保护状态，true：表示开启了操作保护，false：表示未开启操作保护。
                     * 
                     */
                    bool GetProtectState() const;

                    /**
                     * 设置保护状态，true：表示开启了操作保护，false：表示未开启操作保护。
                     * @param _protectState 保护状态，true：表示开启了操作保护，false：表示未开启操作保护。
                     * 
                     */
                    void SetProtectState(const bool& _protectState);

                    /**
                     * 判断参数 ProtectState 是否已赋值
                     * @return ProtectState 是否已赋值
                     * 
                     */
                    bool ProtectStateHasBeenSet() const;

                    /**
                     * 获取操作保护的设置uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUin 操作保护的设置uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorUin() const;

                    /**
                     * 设置操作保护的设置uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorUin 操作保护的设置uin。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorUin(const std::string& _operatorUin);

                    /**
                     * 判断参数 OperatorUin 是否已赋值
                     * @return OperatorUin 是否已赋值
                     * 
                     */
                    bool OperatorUinHasBeenSet() const;

                    /**
                     * 获取设置操作保护时的描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 设置操作保护时的描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置设置操作保护时的描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 设置操作保护时的描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取最后修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 最后修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置最后修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 最后修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 保护状态，true：表示开启了操作保护，false：表示未开启操作保护。
                     */
                    bool m_protectState;
                    bool m_protectStateHasBeenSet;

                    /**
                     * 操作保护的设置uin。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorUin;
                    bool m_operatorUinHasBeenSet;

                    /**
                     * 设置操作保护时的描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 最后修改时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_LBOPERATEPROTECTINFO_H_
