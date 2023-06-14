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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEBASEOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEBASEOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeBaseOverview返回参数结构体
                */
                class DescribeBaseOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBaseOverviewResponse();
                    ~DescribeBaseOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模块数量，单位：个
                     * @return ModuleNum 模块数量，单位：个
                     * 
                     */
                    int64_t GetModuleNum() const;

                    /**
                     * 判断参数 ModuleNum 是否已赋值
                     * @return ModuleNum 是否已赋值
                     * 
                     */
                    bool ModuleNumHasBeenSet() const;

                    /**
                     * 获取节点数量，单位：个
                     * @return NodeNum 节点数量，单位：个
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取cpu核数，单位：个
                     * @return VcpuNum cpu核数，单位：个
                     * 
                     */
                    int64_t GetVcpuNum() const;

                    /**
                     * 判断参数 VcpuNum 是否已赋值
                     * @return VcpuNum 是否已赋值
                     * 
                     */
                    bool VcpuNumHasBeenSet() const;

                    /**
                     * 获取内存大小，单位：G
                     * @return MemoryNum 内存大小，单位：G
                     * 
                     */
                    int64_t GetMemoryNum() const;

                    /**
                     * 判断参数 MemoryNum 是否已赋值
                     * @return MemoryNum 是否已赋值
                     * 
                     */
                    bool MemoryNumHasBeenSet() const;

                    /**
                     * 获取硬盘大小，单位：G
                     * @return StorageNum 硬盘大小，单位：G
                     * 
                     */
                    int64_t GetStorageNum() const;

                    /**
                     * 判断参数 StorageNum 是否已赋值
                     * @return StorageNum 是否已赋值
                     * 
                     */
                    bool StorageNumHasBeenSet() const;

                    /**
                     * 获取昨日网络峰值,单位：M
                     * @return NetworkNum 昨日网络峰值,单位：M
                     * 
                     */
                    int64_t GetNetworkNum() const;

                    /**
                     * 判断参数 NetworkNum 是否已赋值
                     * @return NetworkNum 是否已赋值
                     * 
                     */
                    bool NetworkNumHasBeenSet() const;

                    /**
                     * 获取实例数量，单位：台
                     * @return InstanceNum 实例数量，单位：台
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取运行中数量，单位：台
                     * @return RunningNum 运行中数量，单位：台
                     * 
                     */
                    int64_t GetRunningNum() const;

                    /**
                     * 判断参数 RunningNum 是否已赋值
                     * @return RunningNum 是否已赋值
                     * 
                     */
                    bool RunningNumHasBeenSet() const;

                    /**
                     * 获取安全隔离数量，单位：台
                     * @return IsolationNum 安全隔离数量，单位：台
                     * 
                     */
                    int64_t GetIsolationNum() const;

                    /**
                     * 判断参数 IsolationNum 是否已赋值
                     * @return IsolationNum 是否已赋值
                     * 
                     */
                    bool IsolationNumHasBeenSet() const;

                    /**
                     * 获取过期实例数量，单位：台
                     * @return ExpiredNum 过期实例数量，单位：台
                     * 
                     */
                    int64_t GetExpiredNum() const;

                    /**
                     * 判断参数 ExpiredNum 是否已赋值
                     * @return ExpiredNum 是否已赋值
                     * 
                     */
                    bool ExpiredNumHasBeenSet() const;

                    /**
                     * 获取即将过期实例数量，单位：台
                     * @return WillExpireNum 即将过期实例数量，单位：台
                     * 
                     */
                    int64_t GetWillExpireNum() const;

                    /**
                     * 判断参数 WillExpireNum 是否已赋值
                     * @return WillExpireNum 是否已赋值
                     * 
                     */
                    bool WillExpireNumHasBeenSet() const;

                private:

                    /**
                     * 模块数量，单位：个
                     */
                    int64_t m_moduleNum;
                    bool m_moduleNumHasBeenSet;

                    /**
                     * 节点数量，单位：个
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * cpu核数，单位：个
                     */
                    int64_t m_vcpuNum;
                    bool m_vcpuNumHasBeenSet;

                    /**
                     * 内存大小，单位：G
                     */
                    int64_t m_memoryNum;
                    bool m_memoryNumHasBeenSet;

                    /**
                     * 硬盘大小，单位：G
                     */
                    int64_t m_storageNum;
                    bool m_storageNumHasBeenSet;

                    /**
                     * 昨日网络峰值,单位：M
                     */
                    int64_t m_networkNum;
                    bool m_networkNumHasBeenSet;

                    /**
                     * 实例数量，单位：台
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 运行中数量，单位：台
                     */
                    int64_t m_runningNum;
                    bool m_runningNumHasBeenSet;

                    /**
                     * 安全隔离数量，单位：台
                     */
                    int64_t m_isolationNum;
                    bool m_isolationNumHasBeenSet;

                    /**
                     * 过期实例数量，单位：台
                     */
                    int64_t m_expiredNum;
                    bool m_expiredNumHasBeenSet;

                    /**
                     * 即将过期实例数量，单位：台
                     */
                    int64_t m_willExpireNum;
                    bool m_willExpireNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEBASEOVERVIEWRESPONSE_H_
