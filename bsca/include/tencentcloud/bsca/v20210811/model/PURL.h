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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_PURL_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_PURL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/Qualifier.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * PURL(Package URL)用于定位一个产品或组件，见 https://github.com/package-url/purl-spec。
                */
                class PURL : public AbstractModel
                {
                public:
                    PURL();
                    ~PURL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件名称
                     * @return Name 组件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置组件名称
                     * @param _name 组件名称
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
                     * 获取组件所属的类型，如：github, gitlab, generic, deb, rpm, maven 等
                     * @return Protocol 组件所属的类型，如：github, gitlab, generic, deb, rpm, maven 等
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置组件所属的类型，如：github, gitlab, generic, deb, rpm, maven 等
                     * @param _protocol 组件所属的类型，如：github, gitlab, generic, deb, rpm, maven 等
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
                     * 获取组件名的前缀名，如github和gitlab的用户名，deb的操作系统，maven包的group id等
                     * @return Namespace 组件名的前缀名，如github和gitlab的用户名，deb的操作系统，maven包的group id等
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置组件名的前缀名，如github和gitlab的用户名，deb的操作系统，maven包的group id等
                     * @param _namespace 组件名的前缀名，如github和gitlab的用户名，deb的操作系统，maven包的group id等
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
                     * 获取修饰组件的额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qualifiers 修饰组件的额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Qualifier> GetQualifiers() const;

                    /**
                     * 设置修饰组件的额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qualifiers 修饰组件的额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQualifiers(const std::vector<Qualifier>& _qualifiers);

                    /**
                     * 判断参数 Qualifiers 是否已赋值
                     * @return Qualifiers 是否已赋值
                     * 
                     */
                    bool QualifiersHasBeenSet() const;

                    /**
                     * 获取相对于组件包根位置的子目录
                     * @return Subpath 相对于组件包根位置的子目录
                     * 
                     */
                    std::string GetSubpath() const;

                    /**
                     * 设置相对于组件包根位置的子目录
                     * @param _subpath 相对于组件包根位置的子目录
                     * 
                     */
                    void SetSubpath(const std::string& _subpath);

                    /**
                     * 判断参数 Subpath 是否已赋值
                     * @return Subpath 是否已赋值
                     * 
                     */
                    bool SubpathHasBeenSet() const;

                    /**
                     * 获取组件版本号
                     * @return Version 组件版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置组件版本号
                     * @param _version 组件版本号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 组件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 组件所属的类型，如：github, gitlab, generic, deb, rpm, maven 等
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 组件名的前缀名，如github和gitlab的用户名，deb的操作系统，maven包的group id等
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 修饰组件的额外属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Qualifier> m_qualifiers;
                    bool m_qualifiersHasBeenSet;

                    /**
                     * 相对于组件包根位置的子目录
                     */
                    std::string m_subpath;
                    bool m_subpathHasBeenSet;

                    /**
                     * 组件版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_PURL_H_
