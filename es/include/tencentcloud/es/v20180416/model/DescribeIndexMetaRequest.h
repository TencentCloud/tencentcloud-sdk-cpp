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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXMETAREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXMETAREQUEST_H_

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
                * DescribeIndexMeta请求参数结构体
                */
                class DescribeIndexMetaRequest : public AbstractModel
                {
                public:
                    DescribeIndexMetaRequest();
                    ~DescribeIndexMetaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES集群ID
                     * @return InstanceId ES集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES集群ID
                     * @param _instanceId ES集群ID
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
                     * 获取索引类型。auto：自治索引；normal：普通索引
                     * @return IndexType 索引类型。auto：自治索引；normal：普通索引
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置索引类型。auto：自治索引；normal：普通索引
                     * @param _indexType 索引类型。auto：自治索引；normal：普通索引
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
                     * 获取索引名，若填空则获取所有索引
                     * @return IndexName 索引名，若填空则获取所有索引
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名，若填空则获取所有索引
                     * @param _indexName 索引名，若填空则获取所有索引
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
                     * 获取集群访问用户名
                     * @return Username 集群访问用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置集群访问用户名
                     * @param _username 集群访问用户名
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
                     * 获取集群访问密码
                     * @return Password 集群访问密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置集群访问密码
                     * @param _password 集群访问密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                private:

                    /**
                     * ES集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 索引类型。auto：自治索引；normal：普通索引
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * 索引名，若填空则获取所有索引
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 集群访问用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 集群访问密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXMETAREQUEST_H_
