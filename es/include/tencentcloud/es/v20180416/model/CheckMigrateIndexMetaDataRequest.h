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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CHECKMIGRATEINDEXMETADATAREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CHECKMIGRATEINDEXMETADATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CheckMigrateIndexMetaData请求参数结构体
                */
                class CheckMigrateIndexMetaDataRequest : public AbstractModel
                {
                public:
                    CheckMigrateIndexMetaDataRequest();
                    ~CheckMigrateIndexMetaDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取索引 id
                     * @return ServerlessId 索引 id
                     * 
                     */
                    std::string GetServerlessId() const;

                    /**
                     * 设置索引 id
                     * @param _serverlessId 索引 id
                     * 
                     */
                    void SetServerlessId(const std::string& _serverlessId);

                    /**
                     * 判断参数 ServerlessId 是否已赋值
                     * @return ServerlessId 是否已赋值
                     * 
                     */
                    bool ServerlessIdHasBeenSet() const;

                    /**
                     * 获取快照名
                     * @return Snapshot 快照名
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置快照名
                     * @param _snapshot 快照名
                     * 
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取Cos桶名
                     * @return CosBucket Cos桶名
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置Cos桶名
                     * @param _cosBucket Cos桶名
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取BasePath路径
                     * @return BasePath BasePath路径
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置BasePath路径
                     * @param _basePath BasePath路径
                     * 
                     */
                    void SetBasePath(const std::string& _basePath);

                    /**
                     * 判断参数 BasePath 是否已赋值
                     * @return BasePath 是否已赋值
                     * 
                     */
                    bool BasePathHasBeenSet() const;

                    /**
                     * 获取云上集群名
                     * @return ClusterInstanceId 云上集群名
                     * 
                     */
                    std::string GetClusterInstanceId() const;

                    /**
                     * 设置云上集群名
                     * @param _clusterInstanceId 云上集群名
                     * 
                     */
                    void SetClusterInstanceId(const std::string& _clusterInstanceId);

                    /**
                     * 判断参数 ClusterInstanceId 是否已赋值
                     * @return ClusterInstanceId 是否已赋值
                     * 
                     */
                    bool ClusterInstanceIdHasBeenSet() const;

                    /**
                     * 获取普通索引名列表
                     * @return CommonIndexArr 普通索引名列表
                     * 
                     */
                    std::vector<std::string> GetCommonIndexArr() const;

                    /**
                     * 设置普通索引名列表
                     * @param _commonIndexArr 普通索引名列表
                     * 
                     */
                    void SetCommonIndexArr(const std::vector<std::string>& _commonIndexArr);

                    /**
                     * 判断参数 CommonIndexArr 是否已赋值
                     * @return CommonIndexArr 是否已赋值
                     * 
                     */
                    bool CommonIndexArrHasBeenSet() const;

                    /**
                     * 获取自治索引名列表
                     * @return DataStreamArr 自治索引名列表
                     * 
                     */
                    std::vector<std::string> GetDataStreamArr() const;

                    /**
                     * 设置自治索引名列表
                     * @param _dataStreamArr 自治索引名列表
                     * 
                     */
                    void SetDataStreamArr(const std::vector<std::string>& _dataStreamArr);

                    /**
                     * 判断参数 DataStreamArr 是否已赋值
                     * @return DataStreamArr 是否已赋值
                     * 
                     */
                    bool DataStreamArrHasBeenSet() const;

                private:

                    /**
                     * 索引 id
                     */
                    std::string m_serverlessId;
                    bool m_serverlessIdHasBeenSet;

                    /**
                     * 快照名
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * Cos桶名
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * BasePath路径
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * 云上集群名
                     */
                    std::string m_clusterInstanceId;
                    bool m_clusterInstanceIdHasBeenSet;

                    /**
                     * 普通索引名列表
                     */
                    std::vector<std::string> m_commonIndexArr;
                    bool m_commonIndexArrHasBeenSet;

                    /**
                     * 自治索引名列表
                     */
                    std::vector<std::string> m_dataStreamArr;
                    bool m_dataStreamArrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CHECKMIGRATEINDEXMETADATAREQUEST_H_
