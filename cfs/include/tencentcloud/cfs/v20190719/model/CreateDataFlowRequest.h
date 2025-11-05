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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATAFLOWREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATAFLOWREQUEST_H_

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
                * CreateDataFlow请求参数结构体
                */
                class CreateDataFlowRequest : public AbstractModel
                {
                public:
                    CreateDataFlowRequest();
                    ~CreateDataFlowRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取源端数据类型；包含S3_COS，S3_L5 
                     * @return SourceStorageType 源端数据类型；包含S3_COS，S3_L5 
                     * 
                     */
                    std::string GetSourceStorageType() const;

                    /**
                     * 设置源端数据类型；包含S3_COS，S3_L5 
                     * @param _sourceStorageType 源端数据类型；包含S3_COS，S3_L5 
                     * 
                     */
                    void SetSourceStorageType(const std::string& _sourceStorageType);

                    /**
                     * 判断参数 SourceStorageType 是否已赋值
                     * @return SourceStorageType 是否已赋值
                     * 
                     */
                    bool SourceStorageTypeHasBeenSet() const;

                    /**
                     * 获取源端存储地址
                     * @return SourceStorageAddress 源端存储地址
                     * 
                     */
                    std::string GetSourceStorageAddress() const;

                    /**
                     * 设置源端存储地址
                     * @param _sourceStorageAddress 源端存储地址
                     * 
                     */
                    void SetSourceStorageAddress(const std::string& _sourceStorageAddress);

                    /**
                     * 判断参数 SourceStorageAddress 是否已赋值
                     * @return SourceStorageAddress 是否已赋值
                     * 
                     */
                    bool SourceStorageAddressHasBeenSet() const;

                    /**
                     * 获取源端路径
                     * @return SourcePath 源端路径
                     * 
                     */
                    std::string GetSourcePath() const;

                    /**
                     * 设置源端路径
                     * @param _sourcePath 源端路径
                     * 
                     */
                    void SetSourcePath(const std::string& _sourcePath);

                    /**
                     * 判断参数 SourcePath 是否已赋值
                     * @return SourcePath 是否已赋值
                     * 
                     */
                    bool SourcePathHasBeenSet() const;

                    /**
                     * 获取文件系统内目标路径
                     * @return TargetPath 文件系统内目标路径
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置文件系统内目标路径
                     * @param _targetPath 文件系统内目标路径
                     * 
                     */
                    void SetTargetPath(const std::string& _targetPath);

                    /**
                     * 判断参数 TargetPath 是否已赋值
                     * @return TargetPath 是否已赋值
                     * 
                     */
                    bool TargetPathHasBeenSet() const;

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
                     * 获取 0：不开启自动更新  1：开启自动更新
                     * @return AutoRefresh  0：不开启自动更新  1：开启自动更新
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置 0：不开启自动更新  1：开启自动更新
                     * @param _autoRefresh  0：不开启自动更新  1：开启自动更新
                     * 
                     */
                    void SetAutoRefresh(const uint64_t& _autoRefresh);

                    /**
                     * 判断参数 AutoRefresh 是否已赋值
                     * @return AutoRefresh 是否已赋值
                     * 
                     */
                    bool AutoRefreshHasBeenSet() const;

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
                     * 获取	服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095
                     * @return ServerAddr 	服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置	服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095
                     * @param _serverAddr 	服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095
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
                     * 获取Kafka消费用户名.示例值：name
                     * @return UserName Kafka消费用户名.示例值：name
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Kafka消费用户名.示例值：name
                     * @param _userName Kafka消费用户名.示例值：name
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
                     * 获取Kafka消费用户密码。默认${SecretId}#${SecretKey}。
                     * @return Password Kafka消费用户密码。默认${SecretId}#${SecretKey}。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Kafka消费用户密码。默认${SecretId}#${SecretKey}。
                     * @param _password Kafka消费用户密码。默认${SecretId}#${SecretKey}。
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
                     * 文件系统 ID ，通过查询文件系统 [DescribeCfsFileSystems](https://cloud.tencent.com/document/product/582/38170) 获取
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 源端数据类型；包含S3_COS，S3_L5 
                     */
                    std::string m_sourceStorageType;
                    bool m_sourceStorageTypeHasBeenSet;

                    /**
                     * 源端存储地址
                     */
                    std::string m_sourceStorageAddress;
                    bool m_sourceStorageAddressHasBeenSet;

                    /**
                     * 源端路径
                     */
                    std::string m_sourcePath;
                    bool m_sourcePathHasBeenSet;

                    /**
                     * 文件系统内目标路径
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

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
                     * 数据流动名称；支持不超过64字符长度，支持中文、数字、_、-
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

                    /**
                     *  0：不开启自动更新  1：开启自动更新
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

                    /**
                     * KafkaConsumer 消费时使用的Topic参数
                     */
                    std::string m_userKafkaTopic;
                    bool m_userKafkaTopicHasBeenSet;

                    /**
                     * 	服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * Kafka消费用户名.示例值：name
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Kafka消费用户密码。默认${SecretId}#${SecretKey}。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATAFLOWREQUEST_H_
