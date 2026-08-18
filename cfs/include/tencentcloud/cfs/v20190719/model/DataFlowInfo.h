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
                     * 获取<p>数据流动管理 ID</p>
                     * @return DataFlowId <p>数据流动管理 ID</p>
                     * 
                     */
                    std::string GetDataFlowId() const;

                    /**
                     * 设置<p>数据流动管理 ID</p>
                     * @param _dataFlowId <p>数据流动管理 ID</p>
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
                     * 获取<p>数据流动名称</p>
                     * @return DataFlowName <p>数据流动名称</p>
                     * 
                     */
                    std::string GetDataFlowName() const;

                    /**
                     * 设置<p>数据流动名称</p>
                     * @param _dataFlowName <p>数据流动名称</p>
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
                     * 获取<p>源端数据类型</p>
                     * @return SourceStorageType <p>源端数据类型</p>
                     * 
                     */
                    std::string GetSourceStorageType() const;

                    /**
                     * 设置<p>源端数据类型</p>
                     * @param _sourceStorageType <p>源端数据类型</p>
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
                     * 获取<p>available：已生效<br>pending：配置中<br>unavailable：失效<br>deleting：删除中</p>
                     * @return Status <p>available：已生效<br>pending：配置中<br>unavailable：失效<br>deleting：删除中</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>available：已生效<br>pending：配置中<br>unavailable：失效<br>deleting：删除中</p>
                     * @param _status <p>available：已生效<br>pending：配置中<br>unavailable：失效<br>deleting：删除中</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreationTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _creationTime <p>创建时间</p>
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
                     * 获取<p>文件系统 ID</p>
                     * @return FileSystemId <p>文件系统 ID</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统 ID</p>
                     * @param _fileSystemId <p>文件系统 ID</p>
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
                     * 获取<p>0：不开启自动更新</p><p>1：开启自动更新</p>
                     * @return AutoRefresh <p>0：不开启自动更新</p><p>1：开启自动更新</p>
                     * 
                     */
                    uint64_t GetAutoRefresh() const;

                    /**
                     * 设置<p>0：不开启自动更新</p><p>1：开启自动更新</p>
                     * @param _autoRefresh <p>0：不开启自动更新</p><p>1：开启自动更新</p>
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
                     * 获取<p>服务地址</p>
                     * @return ServerAddr <p>服务地址</p>
                     * 
                     */
                    std::string GetServerAddr() const;

                    /**
                     * 设置<p>服务地址</p>
                     * @param _serverAddr <p>服务地址</p>
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
                     * 获取<p>Kafka消费用户名</p>
                     * @return UserName <p>Kafka消费用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>Kafka消费用户名</p>
                     * @param _userName <p>Kafka消费用户名</p>
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
                     * 获取<p>自动刷新的状态，available：已生效<br>pending：配置中<br>unavailable：失效</p>
                     * @return AutoRefreshStatus <p>自动刷新的状态，available：已生效<br>pending：配置中<br>unavailable：失效</p>
                     * 
                     */
                    std::string GetAutoRefreshStatus() const;

                    /**
                     * 设置<p>自动刷新的状态，available：已生效<br>pending：配置中<br>unavailable：失效</p>
                     * @param _autoRefreshStatus <p>自动刷新的状态，available：已生效<br>pending：配置中<br>unavailable：失效</p>
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
                     * 获取<p>自动刷新开启时间</p>
                     * @return AutoRefreshTime <p>自动刷新开启时间</p>
                     * 
                     */
                    std::string GetAutoRefreshTime() const;

                    /**
                     * 设置<p>自动刷新开启时间</p>
                     * @param _autoRefreshTime <p>自动刷新开启时间</p>
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
                     * <p>数据流动管理 ID</p>
                     */
                    std::string m_dataFlowId;
                    bool m_dataFlowIdHasBeenSet;

                    /**
                     * <p>数据流动名称</p>
                     */
                    std::string m_dataFlowName;
                    bool m_dataFlowNameHasBeenSet;

                    /**
                     * <p>源端数据类型</p>
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
                     * <p>available：已生效<br>pending：配置中<br>unavailable：失效<br>deleting：删除中</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * <p>文件系统 ID</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>0：不开启自动更新</p><p>1：开启自动更新</p>
                     */
                    uint64_t m_autoRefresh;
                    bool m_autoRefreshHasBeenSet;

                    /**
                     * <p>KafkaConsumer 消费时使用的Topic参数</p>
                     */
                    std::string m_userKafkaTopic;
                    bool m_userKafkaTopicHasBeenSet;

                    /**
                     * <p>服务地址</p>
                     */
                    std::string m_serverAddr;
                    bool m_serverAddrHasBeenSet;

                    /**
                     * <p>Kafka消费用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>自动刷新的状态，available：已生效<br>pending：配置中<br>unavailable：失效</p>
                     */
                    std::string m_autoRefreshStatus;
                    bool m_autoRefreshStatusHasBeenSet;

                    /**
                     * <p>自动刷新开启时间</p>
                     */
                    std::string m_autoRefreshTime;
                    bool m_autoRefreshTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DATAFLOWINFO_H_
