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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPAMETARESOURCESREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPAMETARESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDataSourceMngFilter.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ListDSPAMetaResources请求参数结构体
                */
                class ListDSPAMetaResourcesRequest : public AbstractModel
                {
                public:
                    ListDSPAMetaResourcesRequest();
                    ~ListDSPAMetaResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID。
                     * @param _dspaId DSPA实例ID。
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
                     * 获取过滤项。
可过滤值包括：
ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

AuthStatus - authorized（已授权）、unauthorized（未授权）、deleted（资源已被删除），不支持模糊匹配，需要填写完整。

BuildType - cloud（云原生资源）、build（用户自建资源），不支持模糊匹配，需要填写完整。

MetaType - cdb（云数据Mysql）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbmysql（TDSQL-C MySQL版）、cos（对象存储）、mysql_like_proto（自建型Mysql协议类关系型数据库）、postgre_like_proto（自建型Postgre协议类关系型数据库）。

ResourceId - 资源ID，支持模糊搜索。

CvmID - 自建资源对应CvmId，如：ins-xxxxxxxx。该字段用于casb调用dsgc接口时，根据cvmId和vport确定具体的自建实例
                     * @return Filters 过滤项。
可过滤值包括：
ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

AuthStatus - authorized（已授权）、unauthorized（未授权）、deleted（资源已被删除），不支持模糊匹配，需要填写完整。

BuildType - cloud（云原生资源）、build（用户自建资源），不支持模糊匹配，需要填写完整。

MetaType - cdb（云数据Mysql）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbmysql（TDSQL-C MySQL版）、cos（对象存储）、mysql_like_proto（自建型Mysql协议类关系型数据库）、postgre_like_proto（自建型Postgre协议类关系型数据库）。

ResourceId - 资源ID，支持模糊搜索。

CvmID - 自建资源对应CvmId，如：ins-xxxxxxxx。该字段用于casb调用dsgc接口时，根据cvmId和vport确定具体的自建实例
                     * 
                     */
                    std::vector<DspaDataSourceMngFilter> GetFilters() const;

                    /**
                     * 设置过滤项。
可过滤值包括：
ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

AuthStatus - authorized（已授权）、unauthorized（未授权）、deleted（资源已被删除），不支持模糊匹配，需要填写完整。

BuildType - cloud（云原生资源）、build（用户自建资源），不支持模糊匹配，需要填写完整。

MetaType - cdb（云数据Mysql）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbmysql（TDSQL-C MySQL版）、cos（对象存储）、mysql_like_proto（自建型Mysql协议类关系型数据库）、postgre_like_proto（自建型Postgre协议类关系型数据库）。

ResourceId - 资源ID，支持模糊搜索。

CvmID - 自建资源对应CvmId，如：ins-xxxxxxxx。该字段用于casb调用dsgc接口时，根据cvmId和vport确定具体的自建实例
                     * @param _filters 过滤项。
可过滤值包括：
ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

AuthStatus - authorized（已授权）、unauthorized（未授权）、deleted（资源已被删除），不支持模糊匹配，需要填写完整。

BuildType - cloud（云原生资源）、build（用户自建资源），不支持模糊匹配，需要填写完整。

MetaType - cdb（云数据Mysql）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbmysql（TDSQL-C MySQL版）、cos（对象存储）、mysql_like_proto（自建型Mysql协议类关系型数据库）、postgre_like_proto（自建型Postgre协议类关系型数据库）。

ResourceId - 资源ID，支持模糊搜索。

CvmID - 自建资源对应CvmId，如：ins-xxxxxxxx。该字段用于casb调用dsgc接口时，根据cvmId和vport确定具体的自建实例
                     * 
                     */
                    void SetFilters(const std::vector<DspaDataSourceMngFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页步长，默认为100。
                     * @return Limit 分页步长，默认为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页步长，默认为100。
                     * @param _limit 分页步长，默认为100。
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
                     * 获取分页偏移量，默认为0。
                     * @return Offset 分页偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认为0。
                     * @param _offset 分页偏移量，默认为0。
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
                     * 获取资源绑定状态过滤，默认为全部
                     * @return BindType 资源绑定状态过滤，默认为全部
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置资源绑定状态过滤，默认为全部
                     * @param _bindType 资源绑定状态过滤，默认为全部
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 过滤项。
可过滤值包括：
ResoureRegion - 资源所处地域，需要填写完整地域名称，不支持模糊匹配。

AuthStatus - authorized（已授权）、unauthorized（未授权）、deleted（资源已被删除），不支持模糊匹配，需要填写完整。

BuildType - cloud（云原生资源）、build（用户自建资源），不支持模糊匹配，需要填写完整。

MetaType - cdb（云数据Mysql）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbmysql（TDSQL-C MySQL版）、cos（对象存储）、mysql_like_proto（自建型Mysql协议类关系型数据库）、postgre_like_proto（自建型Postgre协议类关系型数据库）。

ResourceId - 资源ID，支持模糊搜索。

CvmID - 自建资源对应CvmId，如：ins-xxxxxxxx。该字段用于casb调用dsgc接口时，根据cvmId和vport确定具体的自建实例
                     */
                    std::vector<DspaDataSourceMngFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页步长，默认为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 资源绑定状态过滤，默认为全部
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_LISTDSPAMETARESOURCESREQUEST_H_
