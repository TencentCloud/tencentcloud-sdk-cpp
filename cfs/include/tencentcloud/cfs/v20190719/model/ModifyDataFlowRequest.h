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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYDATAFLOWREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYDATAFLOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyDataFlow请求参数结构体
                */
                class ModifyDataFlowRequest : public AbstractModel
                {
                public:
                    ModifyDataFlowRequest();
                    ~ModifyDataFlowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据流动管理 ID ，通过查询数据流动接口获取
                     * @return DataFlowId 数据流动管理 ID ，通过查询数据流动接口获取
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置数据流动管理 ID ，通过查询数据流动接口获取
                     * @param _dataFlowId 数据流动管理 ID ，通过查询数据流动接口获取
                     * 
                     */
                    void SetDataFlowId(const std::string& _dataFlowId);

                    /**
                     * 判断参数 DataFlowId 是否已赋值
                     * @return DataFlowId 是否已赋值
                     * 
                     */
                    bool DataFlowIdHasBeenSet() const;

                    /**
                     * 获取文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     * @return FileSystemId 文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     * @param _fileSystemId 文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取数据流动名称；支持不超过64字符长度，支持中文、数字、_、-
                     * @return DataFlowName 数据流动名称；支持不超过64字符长度，支持中文、数字、_、-
                     * 
                     */
                    std::string GetDataFlowName() const;

                    /**
                     * 设置数据流动名称；支持不超过64字符长度，支持中文、数字、_、-
                     * @param _dataFlowName 数据流动名称；支持不超过64字符长度，支持中文、数字、_、-
                     * 
                     */
                    void SetDataFlowName(const std::string& _dataFlowName);

                    /**
                     * 判断参数 DataFlowName 是否已赋值
                     * @return DataFlowName 是否已赋值
                     * 
                     */
                    bool DataFlowNameHasBeenSet() const;

                    /**
                     * 获取密钥 ID
                     * @return SecretId 密钥 ID
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置密钥 ID
                     * @param _secretId 密钥 ID
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取密钥 key
                     * @return SecretKey 密钥 key
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置密钥 key
                     * @param _secretKey 密钥 key
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取KafkaConsumer 消费时使用的Topic参数
                     * @return UserKafkaTopic KafkaConsumer 消费时使用的Topic参数
                     * 
                     */
                    std::string GetUserKafkaTopic() const;

                    /**
                     * 设置KafkaConsumer 消费时使用的Topic参数
                     * @param _userKafkaTopic KafkaConsumer 消费时使用的Topic参数
                     * 
                     */
                    void SetUserKafkaTopic(const std::string& _userKafkaTopic);

                    /**
                     * 判断参数 UserKafkaTopic 是否已赋值
                     * @return UserKafkaTopic 是否已赋值
                     * 
                     */
                    bool UserKafkaTopicHasBeenSet() const;

                    /**
                     * 获取服务地址
                     * @return ServerAddr 服务地址
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置服务地址
                     * @param _serverAddr 服务地址
                     * 
                     */
                    void SetServerAddr(const std::string& _serverAddr);

                    /**
                     * 判断参数 ServerAddr 是否已赋值
                     * @return ServerAddr 是否已赋值
                     * 
                     */
                    bool ServerAddrHasBeenSet() const;

                    /**
                     * 获取name
                     * @return UserName name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置name
                     * @param _userName name
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Kafka消费用户密码
                     * @return Password Kafka消费用户密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Kafka消费用户密码
                     * @param _password Kafka消费用户密码
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
                     * 获取元数据增量更新开关；1开启，0关闭
                     * @return AutoRefresh 元数据增量更新开关；1开启，0关闭
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置元数据增量更新开关；1开启，0关闭
                     * @param _autoRefresh 元数据增量更新开关；1开启，0关闭
                     * 
                     */
                    void SetAutoRefresh(const uint64_t& _autoRefresh);

                    /**
                     * 判断参数 AutoRefresh 是否已赋值
                     * @return AutoRefresh 是否已赋值
                     * 
                     */
                    bool AutoRefreshHasBeenSet() const;

                private:

                    /**
                     * 数据流动管理 ID ，通过查询数据流动接口获取
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * 文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 数据流动名称；支持不超过64字符长度，支持中文、数字、_、-
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

                    /**
                     * 密钥 ID
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * 密钥 key
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * KafkaConsumer 消费时使用的Topic参数
                     */
                    std::string m_userKafkaTopic;
                    bool m_userKafkaTopicHasBeenSet;

                    /**
                     * 服务地址
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Kafka消费用户密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 元数据增量更新开关；1开启，0关闭
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_MODIFYDATAFLOWREQUEST_H_
