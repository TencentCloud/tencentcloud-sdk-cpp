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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTDETECT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTDETECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 基线主机检测
                */
                class BaselineHostDetect : public AbstractModel
                {
                public:
                    BaselineHostDetect();
                    ~BaselineHostDetect() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机Id
                     * @return HostId 主机Id
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置主机Id
                     * @param _hostId 主机Id
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取内网Ip
                     * @return HostIp 内网Ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置内网Ip
                     * @param _hostIp 内网Ip
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param _hostName 主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取外网Ip
                     * @return WanIp 外网Ip
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置外网Ip
                     * @param _wanIp 外网Ip
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取0:未通过 1:忽略 3:通过 5:检测中
                     * @return DetectStatus 0:未通过 1:忽略 3:通过 5:检测中
                     * 
                     */
                    int64_t GetDetectStatus() const;

                    /**
                     * 设置0:未通过 1:忽略 3:通过 5:检测中
                     * @param _detectStatus 0:未通过 1:忽略 3:通过 5:检测中
                     * 
                     */
                    void SetDetectStatus(const int64_t& _detectStatus);

                    /**
                     * 判断参数 DetectStatus 是否已赋值
                     * @return DetectStatus 是否已赋值
                     * 
                     */
                    bool DetectStatusHasBeenSet() const;

                    /**
                     * 获取检测通过数
                     * @return PassedItemCount 检测通过数
                     * 
                     */
                    int64_t GetPassedItemCount() const;

                    /**
                     * 设置检测通过数
                     * @param _passedItemCount 检测通过数
                     * 
                     */
                    void SetPassedItemCount(const int64_t& _passedItemCount);

                    /**
                     * 判断参数 PassedItemCount 是否已赋值
                     * @return PassedItemCount 是否已赋值
                     * 
                     */
                    bool PassedItemCountHasBeenSet() const;

                    /**
                     * 获取关联检测项数
                     * @return ItemCount 关联检测项数
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 设置关联检测项数
                     * @param _itemCount 关联检测项数
                     * 
                     */
                    void SetItemCount(const int64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取检测未通过数
                     * @return NotPassedItemCount 检测未通过数
                     * 
                     */
                    int64_t GetNotPassedItemCount() const;

                    /**
                     * 设置检测未通过数
                     * @param _notPassedItemCount 检测未通过数
                     * 
                     */
                    void SetNotPassedItemCount(const int64_t& _notPassedItemCount);

                    /**
                     * 判断参数 NotPassedItemCount 是否已赋值
                     * @return NotPassedItemCount 是否已赋值
                     * 
                     */
                    bool NotPassedItemCountHasBeenSet() const;

                    /**
                     * 获取首次检测时间
                     * @return FirstTime 首次检测时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置首次检测时间
                     * @param _firstTime 首次检测时间
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取最后检测时间
                     * @return LastTime 最后检测时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最后检测时间
                     * @param _lastTime 最后检测时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取主机安全UUID
                     * @return Uuid 主机安全UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全UUID
                     * @param _uuid 主机安全UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机额外信息
                     * @return MachineExtraInfo 主机额外信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
                     * @param _machineExtraInfo 主机额外信息
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 主机Id
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 内网Ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 外网Ip
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 0:未通过 1:忽略 3:通过 5:检测中
                     */
                    int64_t m_detectStatus;
                    bool m_detectStatusHasBeenSet;

                    /**
                     * 检测通过数
                     */
                    int64_t m_passedItemCount;
                    bool m_passedItemCountHasBeenSet;

                    /**
                     * 关联检测项数
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * 检测未通过数
                     */
                    int64_t m_notPassedItemCount;
                    bool m_notPassedItemCountHasBeenSet;

                    /**
                     * 首次检测时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最后检测时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 主机安全UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机额外信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_BASELINEHOSTDETECT_H_
