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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_ETCD_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_ETCD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdMember.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * etcd信息
                */
                class Etcd : public AbstractModel
                {
                public:
                    Etcd();
                    ~Etcd() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取实例名
                     * @return Name 实例名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名
                     * @param _name 实例名
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
                     * 获取实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 实例描述
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
                     * 获取实例所属vpcId
                     * @return VpcId 实例所属vpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例所属vpcId
                     * @param _vpcId 实例所属vpcId
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取etcd版本
                     * @return Version etcd版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置etcd版本
                     * @param _version etcd版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return Status 实例状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态
                     * @param _status 实例状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取etcd成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Members etcd成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EtcdMember> GetMembers() const;

                    /**
                     * 设置etcd成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _members etcd成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMembers(const std::vector<EtcdMember>& _members);

                    /**
                     * 判断参数 Members 是否已赋值
                     * @return Members 是否已赋值
                     * 
                     */
                    bool MembersHasBeenSet() const;

                    /**
                     * 获取对外访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoint 对外访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置对外访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoint 对外访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取删除保护，true 删除保护开启；false删除保护关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeletionProtection 删除保护，true 删除保护开启；false删除保护关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置删除保护，true 删除保护开启；false删除保护关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deletionProtection 删除保护，true 删除保护开启；false删除保护关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 实例所属vpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * etcd版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * etcd成员信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EtcdMember> m_members;
                    bool m_membersHasBeenSet;

                    /**
                     * 对外访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 删除保护，true 删除保护开启；false删除保护关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_ETCD_H_
