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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGTABLENAMESPAGEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGTABLENAMESPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeCatalogTableNamesPage请求参数结构体
                */
                class DescribeCatalogTableNamesPageRequest : public AbstractModel
                {
                public:
                    DescribeCatalogTableNamesPageRequest();
                    ~DescribeCatalogTableNamesPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>catalog名称</p>
                     * @return CatalogName <p>catalog名称</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>catalog名称</p>
                     * @param _catalogName <p>catalog名称</p>
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取<p>Schema名称</p>
                     * @return SchemaName <p>Schema名称</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>Schema名称</p>
                     * @param _schemaName <p>Schema名称</p>
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取<p>每页大小</p>
                     * @return Limit <p>每页大小</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页大小</p>
                     * @param _limit <p>每页大小</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>页数</p>
                     * @return Offset <p>页数</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>页数</p>
                     * @param _offset <p>页数</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>是否基于快照</p>
                     * @return SnapshotBased <p>是否基于快照</p>
                     * 
                     */
                    bool GetSnapshotBased() const;

                    /**
                     * 设置<p>是否基于快照</p>
                     * @param _snapshotBased <p>是否基于快照</p>
                     * 
                     */
                    void SetSnapshotBased(const bool& _snapshotBased);

                    /**
                     * 判断参数 SnapshotBased 是否已赋值
                     * @return SnapshotBased 是否已赋值
                     * 
                     */
                    bool SnapshotBasedHasBeenSet() const;

                    /**
                     * 获取<p>快照id</p>
                     * @return SnapshotId <p>快照id</p>
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置<p>快照id</p>
                     * @param _snapshotId <p>快照id</p>
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取<p>table匹配规则</p>
                     * @return TableNamePattern <p>table匹配规则</p>
                     * 
                     */
                    std::string GetTableNamePattern() const;

                    /**
                     * 设置<p>table匹配规则</p>
                     * @param _tableNamePattern <p>table匹配规则</p>
                     * 
                     */
                    void SetTableNamePattern(const std::string& _tableNamePattern);

                    /**
                     * 判断参数 TableNamePattern 是否已赋值
                     * @return TableNamePattern 是否已赋值
                     * 
                     */
                    bool TableNamePatternHasBeenSet() const;

                private:

                    /**
                     * <p>catalog名称</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>Schema名称</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>每页大小</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>页数</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>是否基于快照</p>
                     */
                    bool m_snapshotBased;
                    bool m_snapshotBasedHasBeenSet;

                    /**
                     * <p>快照id</p>
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * <p>table匹配规则</p>
                     */
                    std::string m_tableNamePattern;
                    bool m_tableNamePatternHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECATALOGTABLENAMESPAGEREQUEST_H_
