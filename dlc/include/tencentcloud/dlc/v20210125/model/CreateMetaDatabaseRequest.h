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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMETADATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMETADATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/MetaDatabaseInfo.h>
#include <tencentcloud/dlc/v20210125/model/DataGovernPolicy.h>
#include <tencentcloud/dlc/v20210125/model/SmartPolicy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateMetaDatabase请求参数结构体
                */
                class CreateMetaDatabaseRequest : public AbstractModel
                {
                public:
                    CreateMetaDatabaseRequest();
                    ~CreateMetaDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源名称，默认DataLakeCatalog
                     * @return DatasourceConnectionName 数据源名称，默认DataLakeCatalog
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源名称，默认DataLakeCatalog
                     * @param _datasourceConnectionName 数据源名称，默认DataLakeCatalog
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取元数据库基本信息
                     * @return MetaDatabaseInfo 元数据库基本信息
                     * 
                     */
                    MetaDatabaseInfo GetMetaDatabaseInfo() const;

                    /**
                     * 设置元数据库基本信息
                     * @param _metaDatabaseInfo 元数据库基本信息
                     * 
                     */
                    void SetMetaDatabaseInfo(const MetaDatabaseInfo& _metaDatabaseInfo);

                    /**
                     * 判断参数 MetaDatabaseInfo 是否已赋值
                     * @return MetaDatabaseInfo 是否已赋值
                     * 
                     */
                    bool MetaDatabaseInfoHasBeenSet() const;

                    /**
                     * 获取数据治理配置项
                     * @return GovernPolicy 数据治理配置项
                     * 
                     */
                    DataGovernPolicy GetGovernPolicy() const;

                    /**
                     * 设置数据治理配置项
                     * @param _governPolicy 数据治理配置项
                     * 
                     */
                    void SetGovernPolicy(const DataGovernPolicy& _governPolicy);

                    /**
                     * 判断参数 GovernPolicy 是否已赋值
                     * @return GovernPolicy 是否已赋值
                     * 
                     */
                    bool GovernPolicyHasBeenSet() const;

                    /**
                     * 获取智能数据治理配置
                     * @return SmartPolicy 智能数据治理配置
                     * 
                     */
                    SmartPolicy GetSmartPolicy() const;

                    /**
                     * 设置智能数据治理配置
                     * @param _smartPolicy 智能数据治理配置
                     * 
                     */
                    void SetSmartPolicy(const SmartPolicy& _smartPolicy);

                    /**
                     * 判断参数 SmartPolicy 是否已赋值
                     * @return SmartPolicy 是否已赋值
                     * 
                     */
                    bool SmartPolicyHasBeenSet() const;

                private:

                    /**
                     * 数据源名称，默认DataLakeCatalog
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 元数据库基本信息
                     */
                    MetaDatabaseInfo m_metaDatabaseInfo;
                    bool m_metaDatabaseInfoHasBeenSet;

                    /**
                     * 数据治理配置项
                     */
                    DataGovernPolicy m_governPolicy;
                    bool m_governPolicyHasBeenSet;

                    /**
                     * 智能数据治理配置
                     */
                    SmartPolicy m_smartPolicy;
                    bool m_smartPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEMETADATABASEREQUEST_H_
