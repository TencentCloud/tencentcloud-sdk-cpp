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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_NOSQLINSTANCE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_NOSQLINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * NOSQL类型的数据源实例
                */
                class NOSQLInstance : public AbstractModel
                {
                public:
                    NOSQLInstance();
                    ~NOSQLInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceId 数据源id
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取cdb, dcdb, mariadb, postgres, cynosdbpg, cynosdbmysql, cos, mysql_like_proto, postgre_like_proto,mongodb
                     * @return DataSourceType cdb, dcdb, mariadb, postgres, cynosdbpg, cynosdbmysql, cos, mysql_like_proto, postgre_like_proto,mongodb
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置cdb, dcdb, mariadb, postgres, cynosdbpg, cynosdbmysql, cos, mysql_like_proto, postgre_like_proto,mongodb
                     * @param _dataSourceType cdb, dcdb, mariadb, postgres, cynosdbpg, cynosdbmysql, cos, mysql_like_proto, postgre_like_proto,mongodb
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                    /**
                     * 获取资源所在地域
                     * @return ResourceRegion 资源所在地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所在地域
                     * @param _resourceRegion 资源所在地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取根据实例创建的敏感数据识别扫描任务Id
                     * @return DiscoveryTaskId 根据实例创建的敏感数据识别扫描任务Id
                     * 
                     */
                    int64_t GetDiscoveryTaskId() const;

                    /**
                     * 设置根据实例创建的敏感数据识别扫描任务Id
                     * @param _discoveryTaskId 根据实例创建的敏感数据识别扫描任务Id
                     * 
                     */
                    void SetDiscoveryTaskId(const int64_t& _discoveryTaskId);

                    /**
                     * 判断参数 DiscoveryTaskId 是否已赋值
                     * @return DiscoveryTaskId 是否已赋值
                     * 
                     */
                    bool DiscoveryTaskIdHasBeenSet() const;

                    /**
                     * 获取敏感数据识别任务实例id
                     * @return DiscoveryTaskInstanceID 敏感数据识别任务实例id
                     * 
                     */
                    int64_t GetDiscoveryTaskInstanceID() const;

                    /**
                     * 设置敏感数据识别任务实例id
                     * @param _discoveryTaskInstanceID 敏感数据识别任务实例id
                     * 
                     */
                    void SetDiscoveryTaskInstanceID(const int64_t& _discoveryTaskInstanceID);

                    /**
                     * 判断参数 DiscoveryTaskInstanceID 是否已赋值
                     * @return DiscoveryTaskInstanceID 是否已赋值
                     * 
                     */
                    bool DiscoveryTaskInstanceIDHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * cdb, dcdb, mariadb, postgres, cynosdbpg, cynosdbmysql, cos, mysql_like_proto, postgre_like_proto,mongodb
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 资源所在地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 根据实例创建的敏感数据识别扫描任务Id
                     */
                    int64_t m_discoveryTaskId;
                    bool m_discoveryTaskIdHasBeenSet;

                    /**
                     * 敏感数据识别任务实例id
                     */
                    int64_t m_discoveryTaskInstanceID;
                    bool m_discoveryTaskInstanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_NOSQLINSTANCE_H_
