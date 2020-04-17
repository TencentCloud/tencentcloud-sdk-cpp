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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_WORKERDETAIL_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_WORKERDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 机器详细信息
                */
                class WorkerDetail : public AbstractModel
                {
                public:
                    WorkerDetail();
                    ~WorkerDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户appid
                     * @return AppId 客户appid
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置客户appid
                     * @param AppId 客户appid
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取资源池编号
                     * @return SetNo 资源池编号
                     */
                    uint64_t GetSetNo() const;

                    /**
                     * 设置资源池编号
                     * @param SetNo 资源池编号
                     */
                    void SetSetNo(const uint64_t& _setNo);

                    /**
                     * 判断参数 SetNo 是否已赋值
                     * @return SetNo 是否已赋值
                     */
                    bool SetNoHasBeenSet() const;

                    /**
                     * 获取机器所属区域
                     * @return Region 机器所属区域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置机器所属区域
                     * @param Region 机器所属区域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取机器ID
                     * @return InstanceId 机器ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置机器ID
                     * @param InstanceId 机器ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取机器类型：
LARGE-大型
MEDIUM-中型
SMALL-小型
                     * @return InstanceType 机器类型：
LARGE-大型
MEDIUM-中型
SMALL-小型
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机器类型：
LARGE-大型
MEDIUM-中型
SMALL-小型
                     * @param InstanceType 机器类型：
LARGE-大型
MEDIUM-中型
SMALL-小型
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取机器IP
                     * @return Ip 机器IP
                     */
                    std::string GetIp() const;

                    /**
                     * 设置机器IP
                     * @param Ip 机器IP
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取服务状态：
IDLE-空闲
LOCK-锁定
ESTABLISHED-游戏中
RECONNECT-等待重连
RECOVERY-清理恢复
FORBID-禁用
UNAVAILABLE-不可用
                     * @return ServiceState 服务状态：
IDLE-空闲
LOCK-锁定
ESTABLISHED-游戏中
RECONNECT-等待重连
RECOVERY-清理恢复
FORBID-禁用
UNAVAILABLE-不可用
                     */
                    std::string GetServiceState() const;

                    /**
                     * 设置服务状态：
IDLE-空闲
LOCK-锁定
ESTABLISHED-游戏中
RECONNECT-等待重连
RECOVERY-清理恢复
FORBID-禁用
UNAVAILABLE-不可用
                     * @param ServiceState 服务状态：
IDLE-空闲
LOCK-锁定
ESTABLISHED-游戏中
RECONNECT-等待重连
RECOVERY-清理恢复
FORBID-禁用
UNAVAILABLE-不可用
                     */
                    void SetServiceState(const std::string& _serviceState);

                    /**
                     * 判断参数 ServiceState 是否已赋值
                     * @return ServiceState 是否已赋值
                     */
                    bool ServiceStateHasBeenSet() const;

                private:

                    /**
                     * 客户appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 资源池编号
                     */
                    uint64_t m_setNo;
                    bool m_setNoHasBeenSet;

                    /**
                     * 机器所属区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 机器ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 机器类型：
LARGE-大型
MEDIUM-中型
SMALL-小型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 机器IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 服务状态：
IDLE-空闲
LOCK-锁定
ESTABLISHED-游戏中
RECONNECT-等待重连
RECOVERY-清理恢复
FORBID-禁用
UNAVAILABLE-不可用
                     */
                    std::string m_serviceState;
                    bool m_serviceStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_WORKERDETAIL_H_
