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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPADBMETARESOURCESREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPADBMETARESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaCloudResourceMeta.h>
#include <tencentcloud/dsgc/v20190723/model/CloudResourceItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateDSPADbMetaResources请求参数结构体
                */
                class CreateDSPADbMetaResourcesRequest : public AbstractModel
                {
                public:
                    CreateDSPADbMetaResourcesRequest();
                    ~CreateDSPADbMetaResourcesRequest() = default;
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
                     * 获取资源类型，支持：cdb（云数据库 MySQL）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbpg（TDSQL-C PostgreSQL版）、cynosdbmysql（TDSQL-C MySQL版）
                     * @return MetaType 资源类型，支持：cdb（云数据库 MySQL）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbpg（TDSQL-C PostgreSQL版）、cynosdbmysql（TDSQL-C MySQL版）
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置资源类型，支持：cdb（云数据库 MySQL）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbpg（TDSQL-C PostgreSQL版）、cynosdbmysql（TDSQL-C MySQL版）
                     * @param _metaType 资源类型，支持：cdb（云数据库 MySQL）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbpg（TDSQL-C PostgreSQL版）、cynosdbmysql（TDSQL-C MySQL版）
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取资源所处地域。
                     * @return ResourceRegion 资源所处地域。
                     * @deprecated
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所处地域。
                     * @param _resourceRegion 资源所处地域。
                     * @deprecated
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * @deprecated
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取用来标记本次更新是否已经是最后一次，可选值：continue（后续还需要更新）、finished（本次是最后一次更新）。
                     * @return UpdateStatus 用来标记本次更新是否已经是最后一次，可选值：continue（后续还需要更新）、finished（本次是最后一次更新）。
                     * @deprecated
                     */
                    std::string GetUpdateStatus() const;

                    /**
                     * 设置用来标记本次更新是否已经是最后一次，可选值：continue（后续还需要更新）、finished（本次是最后一次更新）。
                     * @param _updateStatus 用来标记本次更新是否已经是最后一次，可选值：continue（后续还需要更新）、finished（本次是最后一次更新）。
                     * @deprecated
                     */
                    void SetUpdateStatus(const std::string& _updateStatus);

                    /**
                     * 判断参数 UpdateStatus 是否已赋值
                     * @return UpdateStatus 是否已赋值
                     * @deprecated
                     */
                    bool UpdateStatusHasBeenSet() const;

                    /**
                     * 获取本次更新的ID号，用来标记一次完整的更新过程。
                     * @return UpdateId 本次更新的ID号，用来标记一次完整的更新过程。
                     * @deprecated
                     */
                    std::string GetUpdateId() const;

                    /**
                     * 设置本次更新的ID号，用来标记一次完整的更新过程。
                     * @param _updateId 本次更新的ID号，用来标记一次完整的更新过程。
                     * @deprecated
                     */
                    void SetUpdateId(const std::string& _updateId);

                    /**
                     * 判断参数 UpdateId 是否已赋值
                     * @return UpdateId 是否已赋值
                     * @deprecated
                     */
                    bool UpdateIdHasBeenSet() const;

                    /**
                     * 获取云上资源列表。
                     * @return Items 云上资源列表。
                     * @deprecated
                     */
                    std::vector<DspaCloudResourceMeta> GetItems() const;

                    /**
                     * 设置云上资源列表。
                     * @param _items 云上资源列表。
                     * @deprecated
                     */
                    void SetItems(const std::vector<DspaCloudResourceMeta>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * @deprecated
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取必填，云数据库资源列表。
                     * @return CloudResourceItems 必填，云数据库资源列表。
                     * 
                     */
                    std::vector<CloudResourceItem> GetCloudResourceItems() const;

                    /**
                     * 设置必填，云数据库资源列表。
                     * @param _cloudResourceItems 必填，云数据库资源列表。
                     * 
                     */
                    void SetCloudResourceItems(const std::vector<CloudResourceItem>& _cloudResourceItems);

                    /**
                     * 判断参数 CloudResourceItems 是否已赋值
                     * @return CloudResourceItems 是否已赋值
                     * 
                     */
                    bool CloudResourceItemsHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 资源类型，支持：cdb（云数据库 MySQL）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbpg（TDSQL-C PostgreSQL版）、cynosdbmysql（TDSQL-C MySQL版）
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * 资源所处地域。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 用来标记本次更新是否已经是最后一次，可选值：continue（后续还需要更新）、finished（本次是最后一次更新）。
                     */
                    std::string m_updateStatus;
                    bool m_updateStatusHasBeenSet;

                    /**
                     * 本次更新的ID号，用来标记一次完整的更新过程。
                     */
                    std::string m_updateId;
                    bool m_updateIdHasBeenSet;

                    /**
                     * 云上资源列表。
                     */
                    std::vector<DspaCloudResourceMeta> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 必填，云数据库资源列表。
                     */
                    std::vector<CloudResourceItem> m_cloudResourceItems;
                    bool m_cloudResourceItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPADBMETARESOURCESREQUEST_H_
