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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETFIELDSAMPLESREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETFIELDSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDspmAssetFieldSamples请求参数结构体
                */
                class DescribeDspmAssetFieldSamplesRequest : public AbstractModel
                {
                public:
                    DescribeDspmAssetFieldSamplesRequest();
                    ~DescribeDspmAssetFieldSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资产实例ID</p>
                     * @return AssetId <p>资产实例ID</p>
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产实例ID</p>
                     * @param _assetId <p>资产实例ID</p>
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>数据库名</p>
                     * @return DbName <p>数据库名</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名</p>
                     * @param _dbName <p>数据库名</p>
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取<p>表名</p>
                     * @return TableName <p>表名</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名</p>
                     * @param _tableName <p>表名</p>
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
                     * 获取<p>字段名</p>
                     * @return FieldName <p>字段名</p>
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>字段名</p>
                     * @param _fieldName <p>字段名</p>
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>schema名</p>
                     * @return SchemaName <p>schema名</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>schema名</p>
                     * @param _schemaName <p>schema名</p>
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                private:

                    /**
                     * <p>资产实例ID</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>数据库名</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>表名</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>字段名</p>
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>schema名</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMASSETFIELDSAMPLESREQUEST_H_
