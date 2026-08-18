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
                     * 获取<p>文件系统 ID ，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
                     * @return FileSystemId <p>文件系统 ID ，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 ID ，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
                     * @param _fileSystemId <p>文件系统 ID ，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
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
                     * 获取<p>源端数据类型；包含S3_COS，S3_L5</p>
                     * @return SourceStorageType <p>源端数据类型；包含S3_COS，S3_L5</p>
                     * 
                     */
                    std::string GetSourceStorageType() const;

                    /**
                     * 设置<p>源端数据类型；包含S3_COS，S3_L5</p>
                     * @param _sourceStorageType <p>源端数据类型；包含S3_COS，S3_L5</p>
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
                     * 获取<p>源端存储地址</p>
                     * @return SourceStorageAddress <p>源端存储地址</p>
                     * 
                     */
                    std::string GetSourceStorageAddress() const;

                    /**
                     * 设置<p>源端存储地址</p>
                     * @param _sourceStorageAddress <p>源端存储地址</p>
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
                     * 获取<p>源端路径</p>
                     * @return SourcePath <p>源端路径</p>
                     * 
                     */
                    std::string GetSourcePath() const;

                    /**
                     * 设置<p>源端路径</p>
                     * @param _sourcePath <p>源端路径</p>
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
                     * 获取<p>设置数据流动时指定的文件系统内目标路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * @return TargetPath <p>设置数据流动时指定的文件系统内目标路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置<p>设置数据流动时指定的文件系统内目标路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     * @param _targetPath <p>设置数据流动时指定的文件系统内目标路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/subdir/test1/test2</li></ul>
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
                     * 获取<p>密钥 ID</p>
                     * @return SecretId <p>密钥 ID</p>
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置<p>密钥 ID</p>
                     * @param _secretId <p>密钥 ID</p>
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
                     * 获取<p>密钥 key</p>
                     * @return SecretKey <p>密钥 key</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>密钥 key</p>
                     * @param _secretKey <p>密钥 key</p>
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
                     * 获取<p>数据流动名称；支持不超过64字符长度，支持中文、数字、_、-</p>
                     * @return DataFlowName <p>数据流动名称；支持不超过64字符长度，支持中文、数字、_、-</p>
                     * 
                     */
                    std::string GetDataFlowName() const;

                    /**
                     * 设置<p>数据流动名称；支持不超过64字符长度，支持中文、数字、_、-</p>
                     * @param _dataFlowName <p>数据流动名称；支持不超过64字符长度，支持中文、数字、_、-</p>
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
                     * 获取<p>0：不开启自动更新  1：开启自动更新</p>
                     * @return AutoRefresh <p>0：不开启自动更新  1：开启自动更新</p>
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置<p>0：不开启自动更新  1：开启自动更新</p>
                     * @param _autoRefresh <p>0：不开启自动更新  1：开启自动更新</p>
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
                     * 获取<p>KafkaConsumer 消费时使用的Topic参数</p>
                     * @return UserKafkaTopic <p>KafkaConsumer 消费时使用的Topic参数</p>
                     * 
                     */
                    std::string GetUserKafkaTopic() const;

                    /**
                     * 设置<p>KafkaConsumer 消费时使用的Topic参数</p>
                     * @param _userKafkaTopic <p>KafkaConsumer 消费时使用的Topic参数</p>
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
                     * 获取<p>服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     * @return ServerAddr <p>服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置<p>服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     * @param _serverAddr <p>服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
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
                     * 获取<p>Kafka消费用户名.示例值：name</p>
                     * @return UserName <p>Kafka消费用户名.示例值：name</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Kafka消费用户名.示例值：name</p>
                     * @param _userName <p>Kafka消费用户名.示例值：name</p>
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
                     * 获取<p>Kafka消费用户密码。默认${SecretId}#${SecretKey}。</p>
                     * @return Password <p>Kafka消费用户密码。默认${SecretId}#${SecretKey}。</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>Kafka消费用户密码。默认${SecretId}#${SecretKey}。</p>
                     * @param _password <p>Kafka消费用户密码。默认${SecretId}#${SecretKey}。</p>
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
                     * <p>文件系统 ID ，通过查询文件系统 <a href="https://cloud.tencent.com/document/product/582/38170">DescribeCfsFileSystems</a> 获取</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>源端数据类型；包含S3_COS，S3_L5</p>
                     */
                    std::string m_sourceStorageType;
                    bool m_sourceStorageTypeHasBeenSet;

                    /**
                     * <p>源端存储地址</p>
                     */
                    std::string m_sourceStorageAddress;
                    bool m_sourceStorageAddressHasBeenSet;

                    /**
                     * <p>源端路径</p>
                     */
                    std::string m_sourcePath;
                    bool m_sourcePathHasBeenSet;

                    /**
                     * <p>设置数据流动时指定的文件系统内目标路径，必须以 /cfs/ 开头，代表文件存储实例内部的逻辑路径，而非本地挂载点路径。<br>示例：</p><ul><li>若挂载的是CFS根目录 /，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/test1/test2</li><li>若挂载的是CFS子目录 /subdir，需将对象存储上的源端目录与挂载路径下的 test1/test2 建立映射关系，则入参值为 /cfs/subdir/test1/test2</li></ul>
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * <p>密钥 ID</p>
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>密钥 key</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>数据流动名称；支持不超过64字符长度，支持中文、数字、_、-</p>
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

                    /**
                     * <p>0：不开启自动更新  1：开启自动更新</p>
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

                    /**
                     * <p>KafkaConsumer 消费时使用的Topic参数</p>
                     */
                    std::string m_userKafkaTopic;
                    bool m_userKafkaTopicHasBeenSet;

                    /**
                     * <p>服务地址 示例值：kafkaconsumer-ap-beijing.cls.tencentyun.com:9095</p>
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * <p>Kafka消费用户名.示例值：name</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>Kafka消费用户密码。默认${SecretId}#${SecretKey}。</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATAFLOWREQUEST_H_
