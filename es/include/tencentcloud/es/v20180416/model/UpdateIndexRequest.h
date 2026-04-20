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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINDEXREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINDEXREQUEST_H_

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
                * UpdateIndex请求参数结构体
                */
                class UpdateIndexRequest : public AbstractModel
                {
                public:
                    UpdateIndexRequest();
                    ~UpdateIndexRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ES集群ID</p>
                     * @return InstanceId <p>ES集群ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ES集群ID</p>
                     * @param _instanceId <p>ES集群ID</p>
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
                     * 获取<p>更新的索引类型。auto：自治索引；normal：普通索引</p>
                     * @return IndexType <p>更新的索引类型。auto：自治索引；normal：普通索引</p>
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置<p>更新的索引类型。auto：自治索引；normal：普通索引</p>
                     * @param _indexType <p>更新的索引类型。auto：自治索引；normal：普通索引</p>
                     * 
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     * 
                     */
                    bool IndexTypeHasBeenSet() const;

                    /**
                     * 获取<p>更新的索引名</p>
                     * @return IndexName <p>更新的索引名</p>
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>更新的索引名</p>
                     * @param _indexName <p>更新的索引名</p>
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取<p>更新的索引元数据JSON，如mappings、settings</p>
                     * @return UpdateMetaJson <p>更新的索引元数据JSON，如mappings、settings</p>
                     * 
                     */
                    std::string GetUpdateMetaJson() const;

                    /**
                     * 设置<p>更新的索引元数据JSON，如mappings、settings</p>
                     * @param _updateMetaJson <p>更新的索引元数据JSON，如mappings、settings</p>
                     * 
                     */
                    void SetUpdateMetaJson(const std::string& _updateMetaJson);

                    /**
                     * 判断参数 UpdateMetaJson 是否已赋值
                     * @return UpdateMetaJson 是否已赋值
                     * 
                     */
                    bool UpdateMetaJsonHasBeenSet() const;

                    /**
                     * 获取<p>集群访问用户名</p>
                     * @return Username <p>集群访问用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>集群访问用户名</p>
                     * @param _username <p>集群访问用户名</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>集群访问密码</p>
                     * @return Password <p>集群访问密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>集群访问密码</p>
                     * @param _password <p>集群访问密码</p>
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
                     * 获取<p>是否滚动后备索引</p>
                     * @return RolloverBackingIndex <p>是否滚动后备索引</p>
                     * 
                     */
                    bool GetRolloverBackingIndex() const;

                    /**
                     * 设置<p>是否滚动后备索引</p>
                     * @param _rolloverBackingIndex <p>是否滚动后备索引</p>
                     * 
                     */
                    void SetRolloverBackingIndex(const bool& _rolloverBackingIndex);

                    /**
                     * 判断参数 RolloverBackingIndex 是否已赋值
                     * @return RolloverBackingIndex 是否已赋值
                     * 
                     */
                    bool RolloverBackingIndexHasBeenSet() const;

                    /**
                     * 获取<p>是否为取回完全卸载索引</p>
                     * @return MountIndex <p>是否为取回完全卸载索引</p>
                     * 
                     */
                    bool GetMountIndex() const;

                    /**
                     * 设置<p>是否为取回完全卸载索引</p>
                     * @param _mountIndex <p>是否为取回完全卸载索引</p>
                     * 
                     */
                    void SetMountIndex(const bool& _mountIndex);

                    /**
                     * 判断参数 MountIndex 是否已赋值
                     * @return MountIndex 是否已赋值
                     * 
                     */
                    bool MountIndexHasBeenSet() const;

                    /**
                     * 获取<p>索引Uuid</p>
                     * @return IndexUuid <p>索引Uuid</p>
                     * 
                     */
                    std::string GetIndexUuid() const;

                    /**
                     * 设置<p>索引Uuid</p>
                     * @param _indexUuid <p>索引Uuid</p>
                     * 
                     */
                    void SetIndexUuid(const std::string& _indexUuid);

                    /**
                     * 判断参数 IndexUuid 是否已赋值
                     * @return IndexUuid 是否已赋值
                     * 
                     */
                    bool IndexUuidHasBeenSet() const;

                    /**
                     * 获取<p>后备索引名</p>
                     * @return BackingIndexName <p>后备索引名</p>
                     * 
                     */
                    std::string GetBackingIndexName() const;

                    /**
                     * 设置<p>后备索引名</p>
                     * @param _backingIndexName <p>后备索引名</p>
                     * 
                     */
                    void SetBackingIndexName(const std::string& _backingIndexName);

                    /**
                     * 判断参数 BackingIndexName 是否已赋值
                     * @return BackingIndexName 是否已赋值
                     * 
                     */
                    bool BackingIndexNameHasBeenSet() const;

                private:

                    /**
                     * <p>ES集群ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>更新的索引类型。auto：自治索引；normal：普通索引</p>
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * <p>更新的索引名</p>
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>更新的索引元数据JSON，如mappings、settings</p>
                     */
                    std::string m_updateMetaJson;
                    bool m_updateMetaJsonHasBeenSet;

                    /**
                     * <p>集群访问用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>集群访问密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>是否滚动后备索引</p>
                     */
                    bool m_rolloverBackingIndex;
                    bool m_rolloverBackingIndexHasBeenSet;

                    /**
                     * <p>是否为取回完全卸载索引</p>
                     */
                    bool m_mountIndex;
                    bool m_mountIndexHasBeenSet;

                    /**
                     * <p>索引Uuid</p>
                     */
                    std::string m_indexUuid;
                    bool m_indexUuidHasBeenSet;

                    /**
                     * <p>后备索引名</p>
                     */
                    std::string m_backingIndexName;
                    bool m_backingIndexNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINDEXREQUEST_H_
