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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeClusterConfigs请求参数结构体
                */
                class DescribeClusterConfigsRequest : public AbstractModel
                {
                public:
                    DescribeClusterConfigsRequest();
                    ~DescribeClusterConfigsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例ID
                     * @return InstanceId 集群实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群实例ID
                     * @param _instanceId 集群实例ID
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
                     * 获取 0 公有云查询；1青鹅查询，青鹅查询显示所有需要展示的
                     * @return ConfigType  0 公有云查询；1青鹅查询，青鹅查询显示所有需要展示的
                     * 
                     */
                    int64_t GetConfigType() const;

                    /**
                     * 设置 0 公有云查询；1青鹅查询，青鹅查询显示所有需要展示的
                     * @param _configType  0 公有云查询；1青鹅查询，青鹅查询显示所有需要展示的
                     * 
                     */
                    void SetConfigType(const int64_t& _configType);

                    /**
                     * 判断参数 ConfigType 是否已赋值
                     * @return ConfigType 是否已赋值
                     * 
                     */
                    bool ConfigTypeHasBeenSet() const;

                    /**
                     * 获取模糊搜索关键字文件
                     * @return FileName 模糊搜索关键字文件
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置模糊搜索关键字文件
                     * @param _fileName 模糊搜索关键字文件
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取0集群维度 1节点维度 2启动脚本 3计算组维度
                     * @return ClusterConfigType 0集群维度 1节点维度 2启动脚本 3计算组维度
                     * 
                     */
                    int64_t GetClusterConfigType() const;

                    /**
                     * 设置0集群维度 1节点维度 2启动脚本 3计算组维度
                     * @param _clusterConfigType 0集群维度 1节点维度 2启动脚本 3计算组维度
                     * 
                     */
                    void SetClusterConfigType(const int64_t& _clusterConfigType);

                    /**
                     * 判断参数 ClusterConfigType 是否已赋值
                     * @return ClusterConfigType 是否已赋值
                     * 
                     */
                    bool ClusterConfigTypeHasBeenSet() const;

                    /**
                     * 获取eth0的ip地址
                     * @return IPAddress eth0的ip地址
                     * 
                     */
                    std::string GetIPAddress() const;

                    /**
                     * 设置eth0的ip地址
                     * @param _iPAddress eth0的ip地址
                     * 
                     */
                    void SetIPAddress(const std::string& _iPAddress);

                    /**
                     * 判断参数 IPAddress 是否已赋值
                     * @return IPAddress 是否已赋值
                     * 
                     */
                    bool IPAddressHasBeenSet() const;

                    /**
                     * 获取计算组id
                     * @return ComputeGroupId 计算组id
                     * 
                     */
                    std::string GetComputeGroupId() const;

                    /**
                     * 设置计算组id
                     * @param _computeGroupId 计算组id
                     * 
                     */
                    void SetComputeGroupId(const std::string& _computeGroupId);

                    /**
                     * 判断参数 ComputeGroupId 是否已赋值
                     * @return ComputeGroupId 是否已赋值
                     * 
                     */
                    bool ComputeGroupIdHasBeenSet() const;

                private:

                    /**
                     * 集群实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     *  0 公有云查询；1青鹅查询，青鹅查询显示所有需要展示的
                     */
                    int64_t m_configType;
                    bool m_configTypeHasBeenSet;

                    /**
                     * 模糊搜索关键字文件
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 0集群维度 1节点维度 2启动脚本 3计算组维度
                     */
                    int64_t m_clusterConfigType;
                    bool m_clusterConfigTypeHasBeenSet;

                    /**
                     * eth0的ip地址
                     */
                    std::string m_iPAddress;
                    bool m_iPAddressHasBeenSet;

                    /**
                     * 计算组id
                     */
                    std::string m_computeGroupId;
                    bool m_computeGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBECLUSTERCONFIGSREQUEST_H_
