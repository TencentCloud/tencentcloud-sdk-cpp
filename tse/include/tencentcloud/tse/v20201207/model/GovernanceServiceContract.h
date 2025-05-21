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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICECONTRACT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICECONTRACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/GovernanceInterfaceDescription.h>
#include <tencentcloud/tse/v20201207/model/Metadata.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务契约定义
                */
                class GovernanceServiceContract : public AbstractModel
                {
                public:
                    GovernanceServiceContract();
                    ~GovernanceServiceContract() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取契约名称
                     * @return Name 契约名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置契约名称
                     * @param _name 契约名称
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
                     * 获取所属服务命名空间
                     * @return Namespace 所属服务命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置所属服务命名空间
                     * @param _namespace 所属服务命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取契约ID
                     * @return ID 契约ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置契约ID
                     * @param _iD 契约ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取所属服务名称
                     * @return Service 所属服务名称
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置所属服务名称
                     * @param _service 所属服务名称
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param _version 版本
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
                     * 获取信息摘要
                     * @return Revision 信息摘要
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置信息摘要
                     * @param _revision 信息摘要
                     * 
                     */
                    void SetRevision(const std::string& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                    /**
                     * 获取额外内容描述
                     * @return Content 额外内容描述
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置额外内容描述
                     * @param _content 额外内容描述
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取契约接口列表
                     * @return Interfaces 契约接口列表
                     * 
                     */
                    std::vector<GovernanceInterfaceDescription> GetInterfaces() const;

                    /**
                     * 设置契约接口列表
                     * @param _interfaces 契约接口列表
                     * 
                     */
                    void SetInterfaces(const std::vector<GovernanceInterfaceDescription>& _interfaces);

                    /**
                     * 判断参数 Interfaces 是否已赋值
                     * @return Interfaces 是否已赋值
                     * 
                     */
                    bool InterfacesHasBeenSet() const;

                    /**
                     * 获取元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadatas 元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Metadata> GetMetadatas() const;

                    /**
                     * 设置元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadatas 元数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadatas(const std::vector<Metadata>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                private:

                    /**
                     * 契约名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 所属服务命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 契约ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 所属服务名称
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 信息摘要
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * 额外内容描述
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 契约接口列表
                     */
                    std::vector<GovernanceInterfaceDescription> m_interfaces;
                    bool m_interfacesHasBeenSet;

                    /**
                     * 元数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Metadata> m_metadatas;
                    bool m_metadatasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCESERVICECONTRACT_H_
