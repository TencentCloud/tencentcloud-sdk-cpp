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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATELOGSTASHINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATELOGSTASHINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/LogstashBindedES.h>
#include <tencentcloud/es/v20180416/model/LogstashExtendedFile.h>
#include <tencentcloud/es/v20180416/model/OperationDurationUpdated.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateLogstashInstance请求参数结构体
                */
                class UpdateLogstashInstanceRequest : public AbstractModel
                {
                public:
                    UpdateLogstashInstanceRequest();
                    ~UpdateLogstashInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例节点数量
                     * @return NodeNum 实例节点数量
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置实例节点数量
                     * @param _nodeNum 实例节点数量
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取实例YML配置
                     * @return YMLConfig 实例YML配置
                     * 
                     */
                    std::string GetYMLConfig() const;

                    /**
                     * 设置实例YML配置
                     * @param _yMLConfig 实例YML配置
                     * 
                     */
                    void SetYMLConfig(const std::string& _yMLConfig);

                    /**
                     * 判断参数 YMLConfig 是否已赋值
                     * @return YMLConfig 是否已赋值
                     * 
                     */
                    bool YMLConfigHasBeenSet() const;

                    /**
                     * 获取实例绑定的ES集群信息
                     * @return BindedES 实例绑定的ES集群信息
                     * 
                     */
                    LogstashBindedES GetBindedES() const;

                    /**
                     * 设置实例绑定的ES集群信息
                     * @param _bindedES 实例绑定的ES集群信息
                     * 
                     */
                    void SetBindedES(const LogstashBindedES& _bindedES);

                    /**
                     * 判断参数 BindedES 是否已赋值
                     * @return BindedES 是否已赋值
                     * 
                     */
                    bool BindedESHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取扩展文件列表
                     * @return ExtendedFiles 扩展文件列表
                     * 
                     */
                    std::vector<LogstashExtendedFile> GetExtendedFiles() const;

                    /**
                     * 设置扩展文件列表
                     * @param _extendedFiles 扩展文件列表
                     * 
                     */
                    void SetExtendedFiles(const std::vector<LogstashExtendedFile>& _extendedFiles);

                    /**
                     * 判断参数 ExtendedFiles 是否已赋值
                     * @return ExtendedFiles 是否已赋值
                     * 
                     */
                    bool ExtendedFilesHasBeenSet() const;

                    /**
                     * 获取实例规格
                     * @return NodeType 实例规格
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置实例规格
                     * @param _nodeType 实例规格
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点磁盘容量
                     * @return DiskSize 节点磁盘容量
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置节点磁盘容量
                     * @param _diskSize 节点磁盘容量
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取可维护时间段
                     * @return OperationDuration 可维护时间段
                     * 
                     */
                    OperationDurationUpdated GetOperationDuration() const;

                    /**
                     * 设置可维护时间段
                     * @param _operationDuration 可维护时间段
                     * 
                     */
                    void SetOperationDuration(const OperationDurationUpdated& _operationDuration);

                    /**
                     * 判断参数 OperationDuration 是否已赋值
                     * @return OperationDuration 是否已赋值
                     * 
                     */
                    bool OperationDurationHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例节点数量
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 实例YML配置
                     */
                    std::string m_yMLConfig;
                    bool m_yMLConfigHasBeenSet;

                    /**
                     * 实例绑定的ES集群信息
                     */
                    LogstashBindedES m_bindedES;
                    bool m_bindedESHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 扩展文件列表
                     */
                    std::vector<LogstashExtendedFile> m_extendedFiles;
                    bool m_extendedFilesHasBeenSet;

                    /**
                     * 实例规格
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点磁盘容量
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 可维护时间段
                     */
                    OperationDurationUpdated m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATELOGSTASHINSTANCEREQUEST_H_
