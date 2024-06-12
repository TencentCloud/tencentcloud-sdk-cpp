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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_EXPORTASSETDETAILDATAREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_EXPORTASSETDETAILDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/Filter.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ExportAssetDetailData请求参数结构体
                */
                class ExportAssetDetailDataRequest : public AbstractModel
                {
                public:
                    ExportAssetDetailDataRequest();
                    ~ExportAssetDetailDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例Id，格式“dspa-xxxxxxxx”
                     * @return DspaId DSPA实例Id，格式“dspa-xxxxxxxx”
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例Id，格式“dspa-xxxxxxxx”
                     * @param _dspaId DSPA实例Id，格式“dspa-xxxxxxxx”
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取合规组id
                     * @return ComplianceId 合规组id
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置合规组id
                     * @param _complianceId 合规组id
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                    /**
                     * 获取资产类型（rdb,cvm_db,cos）
                     * @return MetaDataType 资产类型（rdb,cvm_db,cos）
                     * 
                     */
                    std::string GetMetaDataType() const;

                    /**
                     * 设置资产类型（rdb,cvm_db,cos）
                     * @param _metaDataType 资产类型（rdb,cvm_db,cos）
                     * 
                     */
                    void SetMetaDataType(const std::string& _metaDataType);

                    /**
                     * 判断参数 MetaDataType 是否已赋值
                     * @return MetaDataType 是否已赋值
                     * 
                     */
                    bool MetaDataTypeHasBeenSet() const;

                    /**
                     * 获取过滤数组。支持的Name：
DataSourceID 数据源ID
DbName 数据库名称
CategoryID 敏感数据分类ID
RuleID 规则ID
LevelID 敏感分级ID
ResourceRegion 资源所在地域
DataSourceType 数据源类型，不填默认过滤非自建的所有关系型数据源类型，填selfbuilt-db只过滤自建类型
注意：每个name默认支持最多5个values。
                     * @return Filters 过滤数组。支持的Name：
DataSourceID 数据源ID
DbName 数据库名称
CategoryID 敏感数据分类ID
RuleID 规则ID
LevelID 敏感分级ID
ResourceRegion 资源所在地域
DataSourceType 数据源类型，不填默认过滤非自建的所有关系型数据源类型，填selfbuilt-db只过滤自建类型
注意：每个name默认支持最多5个values。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤数组。支持的Name：
DataSourceID 数据源ID
DbName 数据库名称
CategoryID 敏感数据分类ID
RuleID 规则ID
LevelID 敏感分级ID
ResourceRegion 资源所在地域
DataSourceType 数据源类型，不填默认过滤非自建的所有关系型数据源类型，填selfbuilt-db只过滤自建类型
注意：每个name默认支持最多5个values。
                     * @param _filters 过滤数组。支持的Name：
DataSourceID 数据源ID
DbName 数据库名称
CategoryID 敏感数据分类ID
RuleID 规则ID
LevelID 敏感分级ID
ResourceRegion 资源所在地域
DataSourceType 数据源类型，不填默认过滤非自建的所有关系型数据源类型，填selfbuilt-db只过滤自建类型
注意：每个name默认支持最多5个values。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取casbId
                     * @return CasbId casbId
                     * 
                     */
                    std::string GetCasbId() const;

                    /**
                     * 设置casbId
                     * @param _casbId casbId
                     * 
                     */
                    void SetCasbId(const std::string& _casbId);

                    /**
                     * 判断参数 CasbId 是否已赋值
                     * @return CasbId 是否已赋值
                     * 
                     */
                    bool CasbIdHasBeenSet() const;

                private:

                    /**
                     * DSPA实例Id，格式“dspa-xxxxxxxx”
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 合规组id
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                    /**
                     * 资产类型（rdb,cvm_db,cos）
                     */
                    std::string m_metaDataType;
                    bool m_metaDataTypeHasBeenSet;

                    /**
                     * 过滤数组。支持的Name：
DataSourceID 数据源ID
DbName 数据库名称
CategoryID 敏感数据分类ID
RuleID 规则ID
LevelID 敏感分级ID
ResourceRegion 资源所在地域
DataSourceType 数据源类型，不填默认过滤非自建的所有关系型数据源类型，填selfbuilt-db只过滤自建类型
注意：每个name默认支持最多5个values。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * casbId
                     */
                    std::string m_casbId;
                    bool m_casbIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_EXPORTASSETDETAILDATAREQUEST_H_
