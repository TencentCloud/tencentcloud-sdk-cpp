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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_ICEBERGPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_ICEBERGPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Iceberg接入参数
                */
                class IcebergParam : public AbstractModel
                {
                public:
                    IcebergParam();
                    ~IcebergParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Iceberg 连接资源 (EMR 实例)</p>
                     * @return Resource <p>Iceberg 连接资源 (EMR 实例)</p>
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置<p>Iceberg 连接资源 (EMR 实例)</p>
                     * @param _resource <p>Iceberg 连接资源 (EMR 实例)</p>
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取<p>目标数据库名（Hive catalog 下的 namespace），必填</p>
                     * @return Database <p>目标数据库名（Hive catalog 下的 namespace），必填</p>
                     * 
                     */
                    std::string GetDatabase() const;

                    /**
                     * 设置<p>目标数据库名（Hive catalog 下的 namespace），必填</p>
                     * @param _database <p>目标数据库名（Hive catalog 下的 namespace），必填</p>
                     * 
                     */
                    void SetDatabase(const std::string& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取<p>目标表名</p>
                     * @return TableName <p>目标表名</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>目标表名</p>
                     * @param _tableName <p>目标表名</p>
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取<p>消息解析格式，当前仅支持 JSON</p><p>枚举值：</p><ul><li>JSON： JSON解析格式</li></ul>
                     * @return SchemeType <p>消息解析格式，当前仅支持 JSON</p><p>枚举值：</p><ul><li>JSON： JSON解析格式</li></ul>
                     * 
                     */
                    std::string GetSchemeType() const;

                    /**
                     * 设置<p>消息解析格式，当前仅支持 JSON</p><p>枚举值：</p><ul><li>JSON： JSON解析格式</li></ul>
                     * @param _schemeType <p>消息解析格式，当前仅支持 JSON</p><p>枚举值：</p><ul><li>JSON： JSON解析格式</li></ul>
                     * 
                     */
                    void SetSchemeType(const std::string& _schemeType);

                    /**
                     * 判断参数 SchemeType 是否已赋值
                     * @return SchemeType 是否已赋值
                     * 
                     */
                    bool SchemeTypeHasBeenSet() const;

                    /**
                     * 获取<p>表字段扩展开关</p><p>枚举值：</p><ul><li>true： 开</li><li>false： 关</li></ul>
                     * @return EnableFieldExtension <p>表字段扩展开关</p><p>枚举值：</p><ul><li>true： 开</li><li>false： 关</li></ul>
                     * 
                     */
                    bool GetEnableFieldExtension() const;

                    /**
                     * 设置<p>表字段扩展开关</p><p>枚举值：</p><ul><li>true： 开</li><li>false： 关</li></ul>
                     * @param _enableFieldExtension <p>表字段扩展开关</p><p>枚举值：</p><ul><li>true： 开</li><li>false： 关</li></ul>
                     * 
                     */
                    void SetEnableFieldExtension(const bool& _enableFieldExtension);

                    /**
                     * 判断参数 EnableFieldExtension 是否已赋值
                     * @return EnableFieldExtension 是否已赋值
                     * 
                     */
                    bool EnableFieldExtensionHasBeenSet() const;

                    /**
                     * 获取<p>Upset/CDC 模式，默认off</p><p>枚举值：</p><ul><li>Off： Off</li><li>UPSERT： UPSERT</li><li>CDC： CDC</li></ul>
                     * @return UpsertMode <p>Upset/CDC 模式，默认off</p><p>枚举值：</p><ul><li>Off： Off</li><li>UPSERT： UPSERT</li><li>CDC： CDC</li></ul>
                     * 
                     */
                    std::string GetUpsertMode() const;

                    /**
                     * 设置<p>Upset/CDC 模式，默认off</p><p>枚举值：</p><ul><li>Off： Off</li><li>UPSERT： UPSERT</li><li>CDC： CDC</li></ul>
                     * @param _upsertMode <p>Upset/CDC 模式，默认off</p><p>枚举值：</p><ul><li>Off： Off</li><li>UPSERT： UPSERT</li><li>CDC： CDC</li></ul>
                     * 
                     */
                    void SetUpsertMode(const std::string& _upsertMode);

                    /**
                     * 判断参数 UpsertMode 是否已赋值
                     * @return UpsertMode 是否已赋值
                     * 
                     */
                    bool UpsertModeHasBeenSet() const;

                    /**
                     * 获取<p>主键字段：UPSERT / CDC 模式必填（多个字段以英文逗号分隔）</p>
                     * @return PrimaryKeys <p>主键字段：UPSERT / CDC 模式必填（多个字段以英文逗号分隔）</p>
                     * 
                     */
                    std::string GetPrimaryKeys() const;

                    /**
                     * 设置<p>主键字段：UPSERT / CDC 模式必填（多个字段以英文逗号分隔）</p>
                     * @param _primaryKeys <p>主键字段：UPSERT / CDC 模式必填（多个字段以英文逗号分隔）</p>
                     * 
                     */
                    void SetPrimaryKeys(const std::string& _primaryKeys);

                    /**
                     * 判断参数 PrimaryKeys 是否已赋值
                     * @return PrimaryKeys 是否已赋值
                     * 
                     */
                    bool PrimaryKeysHasBeenSet() const;

                private:

                    /**
                     * <p>Iceberg 连接资源 (EMR 实例)</p>
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * <p>目标数据库名（Hive catalog 下的 namespace），必填</p>
                     */
                    std::string m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * <p>目标表名</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>消息解析格式，当前仅支持 JSON</p><p>枚举值：</p><ul><li>JSON： JSON解析格式</li></ul>
                     */
                    std::string m_schemeType;
                    bool m_schemeTypeHasBeenSet;

                    /**
                     * <p>表字段扩展开关</p><p>枚举值：</p><ul><li>true： 开</li><li>false： 关</li></ul>
                     */
                    bool m_enableFieldExtension;
                    bool m_enableFieldExtensionHasBeenSet;

                    /**
                     * <p>Upset/CDC 模式，默认off</p><p>枚举值：</p><ul><li>Off： Off</li><li>UPSERT： UPSERT</li><li>CDC： CDC</li></ul>
                     */
                    std::string m_upsertMode;
                    bool m_upsertModeHasBeenSet;

                    /**
                     * <p>主键字段：UPSERT / CDC 模式必填（多个字段以英文逗号分隔）</p>
                     */
                    std::string m_primaryKeys;
                    bool m_primaryKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_ICEBERGPARAM_H_
