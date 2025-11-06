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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DATAFLOWINFO_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DATAFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 数据流动信息
                */
                class DataFlowInfo : public AbstractModel
                {
                public:
                    DataFlowInfo();
                    ~DataFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据流动管理 ID
                     * @return DataFlowId 数据流动管理 ID
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置数据流动管理 ID
                     * @param _dataFlowId 数据流动管理 ID
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
                     * 获取数据流动名称
                     * @return DataFlowName 数据流动名称
                     * 
                     */
                    std::string GetDataFlowName() const;

                    /**
                     * 设置数据流动名称
                     * @param _dataFlowName 数据流动名称
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
                     * 获取源端数据类型
                     * @return SourceStorageType 源端数据类型
                     * 
                     */
                    std::string GetSourceStorageType() const;

                    /**
                     * 设置源端数据类型
                     * @param _sourceStorageType 源端数据类型
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
                     * 获取目录路径
                     * @return TargetPath 目录路径
                     * 
                     */
                    std::string GetTargetPath() const;

                    /**
                     * 设置目录路径
                     * @param _targetPath 目录路径
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
                     * 获取available：已生效
pending：配置中
unavailable：失效
deleting：删除中
                     * @return Status available：已生效
pending：配置中
unavailable：失效
deleting：删除中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置available：已生效
pending：配置中
unavailable：失效
deleting：删除中
                     * @param _status available：已生效
pending：配置中
unavailable：失效
deleting：删除中
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
                     * 获取创建时间
                     * @return CreationTime 创建时间
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间
                     * @param _creationTime 创建时间
                     * 
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     * 
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取文件系统 ID
                     * @return FileSystemId 文件系统 ID
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置文件系统 ID
                     * @param _fileSystemId 文件系统 ID
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
                     * 获取0：不开启自动更新

1：开启自动更新
                     * @return AutoRefresh 0：不开启自动更新

1：开启自动更新
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置0：不开启自动更新

1：开启自动更新
                     * @param _autoRefresh 0：不开启自动更新

1：开启自动更新
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
                     * 获取Kafka消费用户名
                     * @return UserName Kafka消费用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Kafka消费用户名
                     * @param _userName Kafka消费用户名
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
                     * 获取自动刷新的状态，available：已生效
pending：配置中
unavailable：失效
                     * @return AutoRefreshStatus 自动刷新的状态，available：已生效
pending：配置中
unavailable：失效
                     * 
                     */
                    std::string GetAutoRefreshStatus() const;

                    /**
                     * 设置自动刷新的状态，available：已生效
pending：配置中
unavailable：失效
                     * @param _autoRefreshStatus 自动刷新的状态，available：已生效
pending：配置中
unavailable：失效
                     * 
                     */
                    void SetAutoRefreshStatus(const std::string& _autoRefreshStatus);

                    /**
                     * 判断参数 AutoRefreshStatus 是否已赋值
                     * @return AutoRefreshStatus 是否已赋值
                     * 
                     */
                    bool AutoRefreshStatusHasBeenSet() const;

                    /**
                     * 获取自动刷新开启时间
                     * @return AutoRefreshTime 自动刷新开启时间
                     * 
                     */
                    std::string GetAutoRefreshTime() const;

                    /**
                     * 设置自动刷新开启时间
                     * @param _autoRefreshTime 自动刷新开启时间
                     * 
                     */
                    void SetAutoRefreshTime(const std::string& _autoRefreshTime);

                    /**
                     * 判断参数 AutoRefreshTime 是否已赋值
                     * @return AutoRefreshTime 是否已赋值
                     * 
                     */
                    bool AutoRefreshTimeHasBeenSet() const;

                private:

                    /**
                     * 数据流动管理 ID
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * 数据流动名称
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

                    /**
                     * 源端数据类型
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
                     * 目录路径
                     */
                    std::string m_targetPath;
                    bool m_targetPathHasBeenSet;

                    /**
                     * available：已生效
pending：配置中
unavailable：失效
deleting：删除中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 文件系统 ID
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * 0：不开启自动更新

1：开启自动更新
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

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
                     * Kafka消费用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 自动刷新的状态，available：已生效
pending：配置中
unavailable：失效
                     */
                    std::string m_autoRefreshStatus;
                    bool m_autoRefreshStatusHasBeenSet;

                    /**
                     * 自动刷新开启时间
                     */
                    std::string m_autoRefreshTime;
                    bool m_autoRefreshTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DATAFLOWINFO_H_
