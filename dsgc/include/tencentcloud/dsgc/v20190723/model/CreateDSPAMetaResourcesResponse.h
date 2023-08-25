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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAMETARESOURCESRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAMETARESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateDSPAMetaResources返回参数结构体
                */
                class CreateDSPAMetaResourcesResponse : public AbstractModel
                {
                public:
                    CreateDSPAMetaResourcesResponse();
                    ~CreateDSPAMetaResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次更新的ID号，用来标记一次完整的更新过程。
                     * @return UpdateId 本次更新的ID号，用来标记一次完整的更新过程。
                     * 
                     */
                    std::string GetUpdateId() const;

                    /**
                     * 判断参数 UpdateId 是否已赋值
                     * @return UpdateId 是否已赋值
                     * 
                     */
                    bool UpdateIdHasBeenSet() const;

                    /**
                     * 获取资源类型，支持：cdb（云数据库 MySQL）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbpg（TDSQL-C PostgreSQL版）、cynosdbmysql（TDSQL-C MySQL版）
                     * @return MetaType 资源类型，支持：cdb（云数据库 MySQL）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbpg（TDSQL-C PostgreSQL版）、cynosdbmysql（TDSQL-C MySQL版）
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取DSPA实例ID。
                     * @return DspaId DSPA实例ID。
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取资源所处地域。
                     * @return ResourceRegion 资源所处地域。
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                private:

                    /**
                     * 本次更新的ID号，用来标记一次完整的更新过程。
                     */
                    std::string m_updateId;
                    bool m_updateIdHasBeenSet;

                    /**
                     * 资源类型，支持：cdb（云数据库 MySQL）、dcdb（TDSQL MySQL版）、mariadb（云数据库 MariaDB）、postgres（云数据库 PostgreSQL）、cynosdbpg（TDSQL-C PostgreSQL版）、cynosdbmysql（TDSQL-C MySQL版）
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * DSPA实例ID。
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 资源所处地域。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEDSPAMETARESOURCESRESPONSE_H_
