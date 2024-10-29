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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_RESTORECLUSTERSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_RESTORECLUSTERSNAPSHOTREQUEST_H_

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
                * RestoreClusterSnapshot请求参数结构体
                */
                class RestoreClusterSnapshotRequest : public AbstractModel
                {
                public:
                    RestoreClusterSnapshotRequest();
                    ~RestoreClusterSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例Id，格式：es-xxxx
                     * @return InstanceId 集群实例Id，格式：es-xxxx
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例Id，格式：es-xxxx
                     * @param _instanceId 集群实例Id，格式：es-xxxx
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取仓库名称
                     * @return RepositoryName 仓库名称
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置仓库名称
                     * @param _repositoryName 仓库名称
                     * 
                     */
                    void SetRepositoryName(const std::string& _repositoryName);

                    /**
                     * 判断参数 RepositoryName 是否已赋值
                     * @return RepositoryName 是否已赋值
                     * 
                     */
                    bool RepositoryNameHasBeenSet() const;

                    /**
                     * 获取集群快照名称
                     * @return SnapshotName 集群快照名称
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置集群快照名称
                     * @param _snapshotName 集群快照名称
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致
                     * @return TargetInstanceId 目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致
                     * @param _targetInstanceId 目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取elastic用户名对应的密码信息
                     * @return Password elastic用户名对应的密码信息
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置elastic用户名对应的密码信息
                     * @param _password elastic用户名对应的密码信息
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。
                     * @return IndexSettings 要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。
                     * 
                     */
                    std::string GetIndexSettings() const;

                    /**
                     * 设置要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。
                     * @param _indexSettings 要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。
                     * 
                     */
                    void SetIndexSettings(const std::string& _indexSettings);

                    /**
                     * 判断参数 IndexSettings 是否已赋值
                     * @return IndexSettings 是否已赋值
                     * 
                     */
                    bool IndexSettingsHasBeenSet() const;

                    /**
                     * 获取不应从快照还原的以逗号分隔的索引设置列表。
                     * @return IncludeGlobalState 不应从快照还原的以逗号分隔的索引设置列表。
                     * 
                     */
                    std::vector<std::string> GetIncludeGlobalState() const;

                    /**
                     * 设置不应从快照还原的以逗号分隔的索引设置列表。
                     * @param _includeGlobalState 不应从快照还原的以逗号分隔的索引设置列表。
                     * 
                     */
                    void SetIncludeGlobalState(const std::vector<std::string>& _includeGlobalState);

                    /**
                     * 判断参数 IncludeGlobalState 是否已赋值
                     * @return IncludeGlobalState 是否已赋值
                     * 
                     */
                    bool IncludeGlobalStateHasBeenSet() const;

                    /**
                     * 获取需要恢复的索引名称，非必填，为空则表示恢复所有

支持传多个索引名称
                     * @return Indices 需要恢复的索引名称，非必填，为空则表示恢复所有

支持传多个索引名称
                     * 
                     */
                    std::string GetIndices() const;

                    /**
                     * 设置需要恢复的索引名称，非必填，为空则表示恢复所有

支持传多个索引名称
                     * @param _indices 需要恢复的索引名称，非必填，为空则表示恢复所有

支持传多个索引名称
                     * 
                     */
                    void SetIndices(const std::string& _indices);

                    /**
                     * 判断参数 Indices 是否已赋值
                     * @return Indices 是否已赋值
                     * 
                     */
                    bool IndicesHasBeenSet() const;

                    /**
                     * 获取如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,

如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空
                     * @return Partial 如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,

如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空
                     * 
                     */
                    std::string GetPartial() const;

                    /**
                     * 设置如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,

如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空
                     * @param _partial 如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,

如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空
                     * 
                     */
                    void SetPartial(const std::string& _partial);

                    /**
                     * 判断参数 Partial 是否已赋值
                     * @return Partial 是否已赋值
                     * 
                     */
                    bool PartialHasBeenSet() const;

                private:

                    /**
                     * 集群实例Id，格式：es-xxxx
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 仓库名称
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * 集群快照名称
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * elastic用户名对应的密码信息
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。
                     */
                    std::string m_indexSettings;
                    bool m_indexSettingsHasBeenSet;

                    /**
                     * 不应从快照还原的以逗号分隔的索引设置列表。
                     */
                    std::vector<std::string> m_includeGlobalState;
                    bool m_includeGlobalStateHasBeenSet;

                    /**
                     * 需要恢复的索引名称，非必填，为空则表示恢复所有

支持传多个索引名称
                     */
                    std::string m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * 如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,

如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空
                     */
                    std::string m_partial;
                    bool m_partialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTORECLUSTERSNAPSHOTREQUEST_H_
