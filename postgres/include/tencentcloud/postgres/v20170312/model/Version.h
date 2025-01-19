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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_VERSION_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_VERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 数据库版本号信息
                */
                class Version : public AbstractModel
                {
                public:
                    Version();
                    ~Version() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     * @return DBEngine 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     * @param _dBEngine 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                    /**
                     * 获取数据库版本，例如：12.4
                     * @return DBVersion 数据库版本，例如：12.4
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置数据库版本，例如：12.4
                     * @param _dBVersion 数据库版本，例如：12.4
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取数据库主要版本，例如：12
                     * @return DBMajorVersion 数据库主要版本，例如：12
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置数据库主要版本，例如：12
                     * @param _dBMajorVersion 数据库主要版本，例如：12
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取数据库内核版本，例如：v12.4_r1.3
                     * @return DBKernelVersion 数据库内核版本，例如：v12.4_r1.3
                     * 
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置数据库内核版本，例如：v12.4_r1.3
                     * @param _dBKernelVersion 数据库内核版本，例如：v12.4_r1.3
                     * 
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     * 
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取数据库内核支持的特性列表。例如，
TDE：支持数据加密。
                     * @return SupportedFeatureNames 数据库内核支持的特性列表。例如，
TDE：支持数据加密。
                     * 
                     */
                    std::vector<std::string> GetSupportedFeatureNames() const;

                    /**
                     * 设置数据库内核支持的特性列表。例如，
TDE：支持数据加密。
                     * @param _supportedFeatureNames 数据库内核支持的特性列表。例如，
TDE：支持数据加密。
                     * 
                     */
                    void SetSupportedFeatureNames(const std::vector<std::string>& _supportedFeatureNames);

                    /**
                     * 判断参数 SupportedFeatureNames 是否已赋值
                     * @return SupportedFeatureNames 是否已赋值
                     * 
                     */
                    bool SupportedFeatureNamesHasBeenSet() const;

                    /**
                     * 获取数据库版本状态，包括：
AVAILABLE：可用；
UPGRADE_ONLY：不可创建，此版本仅可升级至高版本；
DEPRECATED：已弃用。
                     * @return Status 数据库版本状态，包括：
AVAILABLE：可用；
UPGRADE_ONLY：不可创建，此版本仅可升级至高版本；
DEPRECATED：已弃用。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置数据库版本状态，包括：
AVAILABLE：可用；
UPGRADE_ONLY：不可创建，此版本仅可升级至高版本；
DEPRECATED：已弃用。
                     * @param _status 数据库版本状态，包括：
AVAILABLE：可用；
UPGRADE_ONLY：不可创建，此版本仅可升级至高版本；
DEPRECATED：已弃用。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取该数据库版本（DBKernelVersion）可以升级到的版本号列表。其中包含可升级的小版本号和可升级的大版本号（完整内核版本格式示例：v15.1_v1.6）。
                     * @return AvailableUpgradeTarget 该数据库版本（DBKernelVersion）可以升级到的版本号列表。其中包含可升级的小版本号和可升级的大版本号（完整内核版本格式示例：v15.1_v1.6）。
                     * 
                     */
                    std::vector<std::string> GetAvailableUpgradeTarget() const;

                    /**
                     * 设置该数据库版本（DBKernelVersion）可以升级到的版本号列表。其中包含可升级的小版本号和可升级的大版本号（完整内核版本格式示例：v15.1_v1.6）。
                     * @param _availableUpgradeTarget 该数据库版本（DBKernelVersion）可以升级到的版本号列表。其中包含可升级的小版本号和可升级的大版本号（完整内核版本格式示例：v15.1_v1.6）。
                     * 
                     */
                    void SetAvailableUpgradeTarget(const std::vector<std::string>& _availableUpgradeTarget);

                    /**
                     * 判断参数 AvailableUpgradeTarget 是否已赋值
                     * @return AvailableUpgradeTarget 是否已赋值
                     * 
                     */
                    bool AvailableUpgradeTargetHasBeenSet() const;

                private:

                    /**
                     * 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * 数据库版本，例如：12.4
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 数据库主要版本，例如：12
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * 数据库内核版本，例如：v12.4_r1.3
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * 数据库内核支持的特性列表。例如，
TDE：支持数据加密。
                     */
                    std::vector<std::string> m_supportedFeatureNames;
                    bool m_supportedFeatureNamesHasBeenSet;

                    /**
                     * 数据库版本状态，包括：
AVAILABLE：可用；
UPGRADE_ONLY：不可创建，此版本仅可升级至高版本；
DEPRECATED：已弃用。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 该数据库版本（DBKernelVersion）可以升级到的版本号列表。其中包含可升级的小版本号和可升级的大版本号（完整内核版本格式示例：v15.1_v1.6）。
                     */
                    std::vector<std::string> m_availableUpgradeTarget;
                    bool m_availableUpgradeTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_VERSION_H_
