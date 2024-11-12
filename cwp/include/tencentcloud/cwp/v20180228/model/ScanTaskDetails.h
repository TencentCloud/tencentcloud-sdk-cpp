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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKDETAILS_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKDETAILS_H_

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
                * 扫描任务详情列表信息
                */
                class ScanTaskDetails : public AbstractModel
                {
                public:
                    ScanTaskDetails();
                    ~ScanTaskDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务器IP
                     * @return HostIp 服务器IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置服务器IP
                     * @param _hostIp 服务器IP
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
                     * 获取服务器名称
                     * @return HostName 服务器名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置服务器名称
                     * @param _hostName 服务器名称
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
                     * 获取操作系统
                     * @return OsName 操作系统
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置操作系统
                     * @param _osName 操作系统
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取风险数量
                     * @return RiskNum 风险数量
                     * 
                     */
                    uint64_t GetRiskNum() const;

                    /**
                     * 设置风险数量
                     * @param _riskNum 风险数量
                     * 
                     */
                    void SetRiskNum(const uint64_t& _riskNum);

                    /**
                     * 判断参数 RiskNum 是否已赋值
                     * @return RiskNum 是否已赋值
                     * 
                     */
                    bool RiskNumHasBeenSet() const;

                    /**
                     * 获取扫描开始时间
                     * @return ScanBeginTime 扫描开始时间
                     * 
                     */
                    std::string GetScanBeginTime() const;

                    /**
                     * 设置扫描开始时间
                     * @param _scanBeginTime 扫描开始时间
                     * 
                     */
                    void SetScanBeginTime(const std::string& _scanBeginTime);

                    /**
                     * 判断参数 ScanBeginTime 是否已赋值
                     * @return ScanBeginTime 是否已赋值
                     * 
                     */
                    bool ScanBeginTimeHasBeenSet() const;

                    /**
                     * 获取扫描结束时间
                     * @return ScanEndTime 扫描结束时间
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置扫描结束时间
                     * @param _scanEndTime 扫描结束时间
                     * 
                     */
                    void SetScanEndTime(const std::string& _scanEndTime);

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取唯一Uuid
                     * @return Uuid 唯一Uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置唯一Uuid
                     * @param _uuid 唯一Uuid
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
                     * 获取唯一Quuid
                     * @return Quuid 唯一Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置唯一Quuid
                     * @param _quuid 唯一Quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取状态码Scanning、Ok、Fail
                     * @return Status 状态码Scanning、Ok、Fail
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态码Scanning、Ok、Fail
                     * @param _status 状态码Scanning、Ok、Fail
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取id唯一
                     * @return Id id唯一
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置id唯一
                     * @param _id id唯一
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取失败类型  3离线、4超时、5失败、8agent版本过低
                     * @return FailType 失败类型  3离线、4超时、5失败、8agent版本过低
                     * 
                     */
                    uint64_t GetFailType() const;

                    /**
                     * 设置失败类型  3离线、4超时、5失败、8agent版本过低
                     * @param _failType 失败类型  3离线、4超时、5失败、8agent版本过低
                     * 
                     */
                    void SetFailType(const uint64_t& _failType);

                    /**
                     * 判断参数 FailType 是否已赋值
                     * @return FailType 是否已赋值
                     * 
                     */
                    bool FailTypeHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return MachineWanIp 外网ip
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置外网ip
                     * @param _machineWanIp 外网ip
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取附加信息
                     * @return MachineExtraInfo 附加信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置附加信息
                     * @param _machineExtraInfo 附加信息
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
                     * 服务器IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 服务器名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 操作系统
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * 风险数量
                     */
                    uint64_t m_riskNum;
                    bool m_riskNumHasBeenSet;

                    /**
                     * 扫描开始时间
                     */
                    std::string m_scanBeginTime;
                    bool m_scanBeginTimeHasBeenSet;

                    /**
                     * 扫描结束时间
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * 唯一Uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 唯一Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 状态码Scanning、Ok、Fail
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * id唯一
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 失败类型  3离线、4超时、5失败、8agent版本过低
                     */
                    uint64_t m_failType;
                    bool m_failTypeHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKDETAILS_H_
