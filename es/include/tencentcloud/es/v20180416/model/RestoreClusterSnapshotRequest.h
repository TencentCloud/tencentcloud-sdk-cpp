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
                     * 获取<p>集群实例Id，格式：es-xxxx</p>
                     * @return InstanceId <p>集群实例Id，格式：es-xxxx</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>集群实例Id，格式：es-xxxx</p>
                     * @param _instanceId <p>集群实例Id，格式：es-xxxx</p>
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
                     * 获取<p>仓库名称</p>
                     * @return RepositoryName <p>仓库名称</p>
                     * 
                     */
                    std::string GetRepositoryName() const;

                    /**
                     * 设置<p>仓库名称</p>
                     * @param _repositoryName <p>仓库名称</p>
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
                     * 获取<p>集群快照名称</p>
                     * @return SnapshotName <p>集群快照名称</p>
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置<p>集群快照名称</p>
                     * @param _snapshotName <p>集群快照名称</p>
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
                     * 获取<p>目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致</p>
                     * @return TargetInstanceId <p>目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致</p>
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置<p>目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致</p>
                     * @param _targetInstanceId <p>目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致</p>
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
                     * 获取<p>elastic用户名对应的密码信息</p>
                     * @return Password <p>elastic用户名对应的密码信息</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>elastic用户名对应的密码信息</p>
                     * @param _password <p>elastic用户名对应的密码信息</p>
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
                     * 获取<p>要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。</p>
                     * @return IndexSettings <p>要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。</p>
                     * 
                     */
                    std::string GetIndexSettings() const;

                    /**
                     * 设置<p>要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。</p>
                     * @param _indexSettings <p>要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。</p>
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
                     * 获取<p>不应从快照还原的以逗号分隔的索引设置列表。</p>
                     * @return IncludeGlobalState <p>不应从快照还原的以逗号分隔的索引设置列表。</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeGlobalState() const;

                    /**
                     * 设置<p>不应从快照还原的以逗号分隔的索引设置列表。</p>
                     * @param _includeGlobalState <p>不应从快照还原的以逗号分隔的索引设置列表。</p>
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
                     * 获取<p>需要恢复的索引名称，非必填，为空则表示恢复所有</p><p>支持传多个索引名称</p>
                     * @return Indices <p>需要恢复的索引名称，非必填，为空则表示恢复所有</p><p>支持传多个索引名称</p>
                     * 
                     */
                    std::string GetIndices() const;

                    /**
                     * 设置<p>需要恢复的索引名称，非必填，为空则表示恢复所有</p><p>支持传多个索引名称</p>
                     * @param _indices <p>需要恢复的索引名称，非必填，为空则表示恢复所有</p><p>支持传多个索引名称</p>
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
                     * 获取<p>如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,</p><p>如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空</p>
                     * @return Partial <p>如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,</p><p>如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空</p>
                     * 
                     */
                    std::string GetPartial() const;

                    /**
                     * 设置<p>如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,</p><p>如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空</p>
                     * @param _partial <p>如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,</p><p>如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空</p>
                     * 
                     */
                    void SetPartial(const std::string& _partial);

                    /**
                     * 判断参数 Partial 是否已赋值
                     * @return Partial 是否已赋值
                     * 
                     */
                    bool PartialHasBeenSet() const;

                    /**
                     * 获取<p>快照恢复速率（单位mb）</p>
                     * @return MaxRestorePerSec <p>快照恢复速率（单位mb）</p>
                     * 
                     */
                    std::string GetMaxRestorePerSec() const;

                    /**
                     * 设置<p>快照恢复速率（单位mb）</p>
                     * @param _maxRestorePerSec <p>快照恢复速率（单位mb）</p>
                     * 
                     */
                    void SetMaxRestorePerSec(const std::string& _maxRestorePerSec);

                    /**
                     * 判断参数 MaxRestorePerSec 是否已赋值
                     * @return MaxRestorePerSec 是否已赋值
                     * 
                     */
                    bool MaxRestorePerSecHasBeenSet() const;

                private:

                    /**
                     * <p>集群实例Id，格式：es-xxxx</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>仓库名称</p>
                     */
                    std::string m_repositoryName;
                    bool m_repositoryNameHasBeenSet;

                    /**
                     * <p>集群快照名称</p>
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * <p>目标集群实例Id，格式：es-xxxx，如果是恢复到本地，则和InstanceId一致</p>
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * <p>elastic用户名对应的密码信息</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>要在所有恢复的索引中添加或更改的设置的逗号分隔列表。使用此参数可以在恢复快照时覆盖索引设置。</p>
                     */
                    std::string m_indexSettings;
                    bool m_indexSettingsHasBeenSet;

                    /**
                     * <p>不应从快照还原的以逗号分隔的索引设置列表。</p>
                     */
                    std::vector<std::string> m_includeGlobalState;
                    bool m_includeGlobalStateHasBeenSet;

                    /**
                     * <p>需要恢复的索引名称，非必填，为空则表示恢复所有</p><p>支持传多个索引名称</p>
                     */
                    std::string m_indices;
                    bool m_indicesHasBeenSet;

                    /**
                     * <p>如果为 false，则如果快照中包含的一个或多个索引没有所有主分片可用，则整个恢复操作将失败。默认为 false,</p><p>如果为 true，则允许恢复具有不可用分片的索引的部分快照。只有成功包含在快照中的分片才会被恢复。所有丢失的碎片将被重新创建为空</p>
                     */
                    std::string m_partial;
                    bool m_partialHasBeenSet;

                    /**
                     * <p>快照恢复速率（单位mb）</p>
                     */
                    std::string m_maxRestorePerSec;
                    bool m_maxRestorePerSecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_RESTORECLUSTERSNAPSHOTREQUEST_H_
