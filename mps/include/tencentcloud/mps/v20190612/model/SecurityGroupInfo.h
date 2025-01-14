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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SECURITYGROUPINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SECURITYGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 安全组信息。
                */
                class SecurityGroupInfo : public AbstractModel
                {
                public:
                    SecurityGroupInfo();
                    ~SecurityGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取安全组 ID。
                     * @return Id 安全组 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置安全组 ID。
                     * @param _id 安全组 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取安全组名称。
                     * @return Name 安全组名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置安全组名称。
                     * @param _name 安全组名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取白名单列表。
                     * @return Whitelist 白名单列表。
                     * 
                     */
                    std::vector<std::string> GetWhitelist() const;

                    /**
                     * 设置白名单列表。
                     * @param _whitelist 白名单列表。
                     * 
                     */
                    void SetWhitelist(const std::vector<std::string>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     * 
                     */
                    bool WhitelistHasBeenSet() const;

                    /**
                     * 获取绑定的输入流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OccupiedInputs 绑定的输入流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOccupiedInputs() const;

                    /**
                     * 设置绑定的输入流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _occupiedInputs 绑定的输入流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOccupiedInputs(const std::vector<std::string>& _occupiedInputs);

                    /**
                     * 判断参数 OccupiedInputs 是否已赋值
                     * @return OccupiedInputs 是否已赋值
                     * 
                     */
                    bool OccupiedInputsHasBeenSet() const;

                    /**
                     * 获取安全组地址。
                     * @return Region 安全组地址。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置安全组地址。
                     * @param _region 安全组地址。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取绑定的输出流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OccupiedOutputs 绑定的输出流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOccupiedOutputs() const;

                    /**
                     * 设置绑定的输出流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _occupiedOutputs 绑定的输出流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOccupiedOutputs(const std::vector<std::string>& _occupiedOutputs);

                    /**
                     * 判断参数 OccupiedOutputs 是否已赋值
                     * @return OccupiedOutputs 是否已赋值
                     * 
                     */
                    bool OccupiedOutputsHasBeenSet() const;

                private:

                    /**
                     * 安全组 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 安全组名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 白名单列表。
                     */
                    std::vector<std::string> m_whitelist;
                    bool m_whitelistHasBeenSet;

                    /**
                     * 绑定的输入流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_occupiedInputs;
                    bool m_occupiedInputsHasBeenSet;

                    /**
                     * 安全组地址。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 绑定的输出流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_occupiedOutputs;
                    bool m_occupiedOutputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SECURITYGROUPINFO_H_
