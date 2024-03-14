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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATECOSMIGRATETOSERVERLESSINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATECOSMIGRATETOSERVERLESSINSTANCEREQUEST_H_

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
                * CreateCosMigrateToServerlessInstance请求参数结构体
                */
                class CreateCosMigrateToServerlessInstanceRequest : public AbstractModel
                {
                public:
                    CreateCosMigrateToServerlessInstanceRequest();
                    ~CreateCosMigrateToServerlessInstanceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取cos 桶名
                     * @return CosBucket cos 桶名
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置cos 桶名
                     * @param _cosBucket cos 桶名
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
                     * 获取BasePath 路径
                     * @return BasePath BasePath 路径
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置BasePath 路径
                     * @param _basePath BasePath 路径
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
                     * 获取云上集群 id
                     * @return ClusterInstanceId 云上集群 id
                     * 
                     */
                    std::string GetClusterInstanceId() const;

                    /**
                     * 设置云上集群 id
                     * @param _clusterInstanceId 云上集群 id
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
                     * 获取待迁移普通索引名列表
                     * @return CommonIndexArr 待迁移普通索引名列表
                     * 
                     */
                    std::vector<std::string> GetCommonIndexArr() const;

                    /**
                     * 设置待迁移普通索引名列表
                     * @param _commonIndexArr 待迁移普通索引名列表
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
                     * 获取待迁移自治索引名列表
                     * @return DataStreamArr 待迁移自治索引名列表
                     * 
                     */
                    std::vector<std::string> GetDataStreamArr() const;

                    /**
                     * 设置待迁移自治索引名列表
                     * @param _dataStreamArr 待迁移自治索引名列表
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
                     * 快照名
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * 索引 id
                     */
                    std::string m_serverlessId;
                    bool m_serverlessIdHasBeenSet;

                    /**
                     * cos 桶名
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * BasePath 路径
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * 云上集群 id
                     */
                    std::string m_clusterInstanceId;
                    bool m_clusterInstanceIdHasBeenSet;

                    /**
                     * 待迁移普通索引名列表
                     */
                    std::vector<std::string> m_commonIndexArr;
                    bool m_commonIndexArrHasBeenSet;

                    /**
                     * 待迁移自治索引名列表
                     */
                    std::vector<std::string> m_dataStreamArr;
                    bool m_dataStreamArrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATECOSMIGRATETOSERVERLESSINSTANCEREQUEST_H_
