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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLUSTERDETAIL_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLUSTERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * TDSQL-C数据库详情
                */
                class ClusterDetail : public AbstractModel
                {
                public:
                    ClusterDetail();
                    ~ClusterDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启公网访问
                     * @return IsOpenPubNetAccess 是否开启公网访问
                     * 
                     */
                    bool GetIsOpenPubNetAccess() const;

                    /**
                     * 设置是否开启公网访问
                     * @param _isOpenPubNetAccess 是否开启公网访问
                     * 
                     */
                    void SetIsOpenPubNetAccess(const bool& _isOpenPubNetAccess);

                    /**
                     * 判断参数 IsOpenPubNetAccess 是否已赋值
                     * @return IsOpenPubNetAccess 是否已赋值
                     * 
                     */
                    bool IsOpenPubNetAccessHasBeenSet() const;

                    /**
                     * 获取最大算力
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxCpu 最大算力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置最大算力
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxCpu 最大算力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取最小算力
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinCpu 最小算力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置最小算力
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minCpu 最小算力
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取TDSQL-C集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status TDSQL-C集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置TDSQL-C集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status TDSQL-C集群状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取存储用量（单位：MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedStorage 存储用量（单位：MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUsedStorage() const;

                    /**
                     * 设置存储用量（单位：MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedStorage 存储用量（单位：MB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedStorage(const int64_t& _usedStorage);

                    /**
                     * 判断参数 UsedStorage 是否已赋值
                     * @return UsedStorage 是否已赋值
                     * 
                     */
                    bool UsedStorageHasBeenSet() const;

                    /**
                     * 获取最大存储量（单位：GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageLimit 最大存储量（单位：GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStorageLimit() const;

                    /**
                     * 设置最大存储量（单位：GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageLimit 最大存储量（单位：GB）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageLimit(const int64_t& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取数据库类型
                     * @return DbType 数据库类型
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型
                     * @param _dbType 数据库类型
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取数据库类型
                     * @return DbVersion 数据库类型
                     * 
                     */
                    std::string GetDbVersion() const;

                    /**
                     * 设置数据库类型
                     * @param _dbVersion 数据库类型
                     * 
                     */
                    void SetDbVersion(const std::string& _dbVersion);

                    /**
                     * 判断参数 DbVersion 是否已赋值
                     * @return DbVersion 是否已赋值
                     * 
                     */
                    bool DbVersionHasBeenSet() const;

                    /**
                     * 获取公网访问状态；open开启，opening开启中，closed关闭，closing关闭中
                     * @return WanStatus 公网访问状态；open开启，opening开启中，closed关闭，closing关闭中
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置公网访问状态；open开启，opening开启中，closed关闭，closing关闭中
                     * @param _wanStatus 公网访问状态；open开启，opening开启中，closed关闭，closing关闭中
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                    /**
                     * 获取数据库集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterStatus 数据库集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置数据库集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterStatus 数据库集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取serverless状态
                     * @return ServerlessStatus serverless状态
                     * 
                     */
                    std::string GetServerlessStatus() const;

                    /**
                     * 设置serverless状态
                     * @param _serverlessStatus serverless状态
                     * 
                     */
                    void SetServerlessStatus(const std::string& _serverlessStatus);

                    /**
                     * 判断参数 ServerlessStatus 是否已赋值
                     * @return ServerlessStatus 是否已赋值
                     * 
                     */
                    bool ServerlessStatusHasBeenSet() const;

                private:

                    /**
                     * 是否开启公网访问
                     */
                    bool m_isOpenPubNetAccess;
                    bool m_isOpenPubNetAccessHasBeenSet;

                    /**
                     * 最大算力
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * 最小算力
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * TDSQL-C集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 存储用量（单位：MB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_usedStorage;
                    bool m_usedStorageHasBeenSet;

                    /**
                     * 最大存储量（单位：GB）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 数据库类型
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 数据库类型
                     */
                    std::string m_dbVersion;
                    bool m_dbVersionHasBeenSet;

                    /**
                     * 公网访问状态；open开启，opening开启中，closed关闭，closing关闭中
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                    /**
                     * 数据库集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * serverless状态
                     */
                    std::string m_serverlessStatus;
                    bool m_serverlessStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLUSTERDETAIL_H_
