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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTCONFIG_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/VPCOption.h>
#include <tencentcloud/omics/v20221128/model/ClusterOption.h>
#include <tencentcloud/omics/v20221128/model/DatabaseOption.h>
#include <tencentcloud/omics/v20221128/model/StorageOption.h>
#include <tencentcloud/omics/v20221128/model/CVMOption.h>
#include <tencentcloud/omics/v20221128/model/SecurityGroupOption.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 环境配置。
                */
                class EnvironmentConfig : public AbstractModel
                {
                public:
                    EnvironmentConfig();
                    ~EnvironmentConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络配置。
                     * @return VPCOption 私有网络配置。
                     * 
                     */
                    VPCOption GetVPCOption() const;

                    /**
                     * 设置私有网络配置。
                     * @param _vPCOption 私有网络配置。
                     * 
                     */
                    void SetVPCOption(const VPCOption& _vPCOption);

                    /**
                     * 判断参数 VPCOption 是否已赋值
                     * @return VPCOption 是否已赋值
                     * 
                     */
                    bool VPCOptionHasBeenSet() const;

                    /**
                     * 获取计算集群配置。
                     * @return ClusterOption 计算集群配置。
                     * 
                     */
                    ClusterOption GetClusterOption() const;

                    /**
                     * 设置计算集群配置。
                     * @param _clusterOption 计算集群配置。
                     * 
                     */
                    void SetClusterOption(const ClusterOption& _clusterOption);

                    /**
                     * 判断参数 ClusterOption 是否已赋值
                     * @return ClusterOption 是否已赋值
                     * 
                     */
                    bool ClusterOptionHasBeenSet() const;

                    /**
                     * 获取数据库配置。
                     * @return DatabaseOption 数据库配置。
                     * 
                     */
                    DatabaseOption GetDatabaseOption() const;

                    /**
                     * 设置数据库配置。
                     * @param _databaseOption 数据库配置。
                     * 
                     */
                    void SetDatabaseOption(const DatabaseOption& _databaseOption);

                    /**
                     * 判断参数 DatabaseOption 是否已赋值
                     * @return DatabaseOption 是否已赋值
                     * 
                     */
                    bool DatabaseOptionHasBeenSet() const;

                    /**
                     * 获取存储配置。
                     * @return StorageOption 存储配置。
                     * 
                     */
                    StorageOption GetStorageOption() const;

                    /**
                     * 设置存储配置。
                     * @param _storageOption 存储配置。
                     * 
                     */
                    void SetStorageOption(const StorageOption& _storageOption);

                    /**
                     * 判断参数 StorageOption 是否已赋值
                     * @return StorageOption 是否已赋值
                     * 
                     */
                    bool StorageOptionHasBeenSet() const;

                    /**
                     * 获取云服务器配置。
                     * @return CVMOption 云服务器配置。
                     * 
                     */
                    CVMOption GetCVMOption() const;

                    /**
                     * 设置云服务器配置。
                     * @param _cVMOption 云服务器配置。
                     * 
                     */
                    void SetCVMOption(const CVMOption& _cVMOption);

                    /**
                     * 判断参数 CVMOption 是否已赋值
                     * @return CVMOption 是否已赋值
                     * 
                     */
                    bool CVMOptionHasBeenSet() const;

                    /**
                     * 获取安全组配置。
                     * @return SecurityGroupOption 安全组配置。
                     * 
                     */
                    SecurityGroupOption GetSecurityGroupOption() const;

                    /**
                     * 设置安全组配置。
                     * @param _securityGroupOption 安全组配置。
                     * 
                     */
                    void SetSecurityGroupOption(const SecurityGroupOption& _securityGroupOption);

                    /**
                     * 判断参数 SecurityGroupOption 是否已赋值
                     * @return SecurityGroupOption 是否已赋值
                     * 
                     */
                    bool SecurityGroupOptionHasBeenSet() const;

                private:

                    /**
                     * 私有网络配置。
                     */
                    VPCOption m_vPCOption;
                    bool m_vPCOptionHasBeenSet;

                    /**
                     * 计算集群配置。
                     */
                    ClusterOption m_clusterOption;
                    bool m_clusterOptionHasBeenSet;

                    /**
                     * 数据库配置。
                     */
                    DatabaseOption m_databaseOption;
                    bool m_databaseOptionHasBeenSet;

                    /**
                     * 存储配置。
                     */
                    StorageOption m_storageOption;
                    bool m_storageOptionHasBeenSet;

                    /**
                     * 云服务器配置。
                     */
                    CVMOption m_cVMOption;
                    bool m_cVMOptionHasBeenSet;

                    /**
                     * 安全组配置。
                     */
                    SecurityGroupOption m_securityGroupOption;
                    bool m_securityGroupOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENTCONFIG_H_
