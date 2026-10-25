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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_NAMEIDENTIFIER_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_NAMEIDENTIFIER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 名称标识符，用于各层级（catalog/schema/table/view等）名称列表接口的返回条目
                */
                class NameIdentifier : public AbstractModel
                {
                public:
                    NameIdentifier();
                    ~NameIdentifier() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::vector<std::string>& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>元数据来源，取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。响应体始终返回具体来源值，不会返回CATALOG_SOURCE_ALL。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogSource <p>元数据来源，取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。响应体始终返回具体来源值，不会返回CATALOG_SOURCE_ALL。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置<p>元数据来源，取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。响应体始终返回具体来源值，不会返回CATALOG_SOURCE_ALL。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogSource <p>元数据来源，取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。响应体始终返回具体来源值，不会返回CATALOG_SOURCE_ALL。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogSource(const std::string& _catalogSource);

                    /**
                     * 判断参数 CatalogSource 是否已赋值
                     * @return CatalogSource 是否已赋值
                     * 
                     */
                    bool CatalogSourceHasBeenSet() const;

                    /**
                     * 获取<p>TCLAKE Catalog取值：（注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5）<br>SETATS Catalog取值：（Creating=30, Available=31, Deleted=32, Scaling=33, Isolated=34, Failed=35，未知=0）</p>
                     * @return Status <p>TCLAKE Catalog取值：（注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5）<br>SETATS Catalog取值：（Creating=30, Available=31, Deleted=32, Scaling=33, Isolated=34, Failed=35，未知=0）</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>TCLAKE Catalog取值：（注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5）<br>SETATS Catalog取值：（Creating=30, Available=31, Deleted=32, Scaling=33, Isolated=34, Failed=35，未知=0）</p>
                     * @param _status <p>TCLAKE Catalog取值：（注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5）<br>SETATS Catalog取值：（Creating=30, Available=31, Deleted=32, Scaling=33, Isolated=34, Failed=35，未知=0）</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>元数据来源，取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。响应体始终返回具体来源值，不会返回CATALOG_SOURCE_ALL。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                    /**
                     * <p>TCLAKE Catalog取值：（注册中0，待测试1，连接成功2，连接失败3，删除中4，已删除5）<br>SETATS Catalog取值：（Creating=30, Available=31, Deleted=32, Scaling=33, Isolated=34, Failed=35，未知=0）</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_NAMEIDENTIFIER_H_
