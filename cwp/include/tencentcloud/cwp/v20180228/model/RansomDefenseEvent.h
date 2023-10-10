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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEEVENT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 防勒索诱饵篡改事件
                */
                class RansomDefenseEvent : public AbstractModel
                {
                public:
                    RansomDefenseEvent();
                    ~RansomDefenseEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件id
                     * @return Id 事件id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置事件id
                     * @param _id 事件id
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
                     * 获取主机uuid
                     * @return Uuid 主机uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
                     * @param _uuid 主机uuid
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
                     * 获取cvm uuid
                     * @return Quuid cvm uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置cvm uuid
                     * @param _quuid cvm uuid
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
                     * 获取事件状态 0待处理，1已处理，2已信任，3处理中，4已恢复备份
                     * @return Status 事件状态 0待处理，1已处理，2已信任，3处理中，4已恢复备份
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置事件状态 0待处理，1已处理，2已信任，3处理中，4已恢复备份
                     * @param _status 事件状态 0待处理，1已处理，2已信任，3处理中，4已恢复备份
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取被篡改文件路径
                     * @return BaitFilePath 被篡改文件路径
                     * 
                     */
                    std::string GetBaitFilePath() const;

                    /**
                     * 设置被篡改文件路径
                     * @param _baitFilePath 被篡改文件路径
                     * 
                     */
                    void SetBaitFilePath(const std::string& _baitFilePath);

                    /**
                     * 判断参数 BaitFilePath 是否已赋值
                     * @return BaitFilePath 是否已赋值
                     * 
                     */
                    bool BaitFilePathHasBeenSet() const;

                    /**
                     * 获取恶意文件路径
                     * @return FilePath 恶意文件路径
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置恶意文件路径
                     * @param _filePath 恶意文件路径
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取恶意进程id
                     * @return Pid 恶意进程id
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置恶意进程id
                     * @param _pid 恶意进程id
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取恶意进程参数
                     * @return PidParam 恶意进程参数
                     * 
                     */
                    std::string GetPidParam() const;

                    /**
                     * 设置恶意进程参数
                     * @param _pidParam 恶意进程参数
                     * 
                     */
                    void SetPidParam(const std::string& _pidParam);

                    /**
                     * 判断参数 PidParam 是否已赋值
                     * @return PidParam 是否已赋值
                     * 
                     */
                    bool PidParamHasBeenSet() const;

                    /**
                     * 获取恶意文件大小
                     * @return FileSize 恶意文件大小
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置恶意文件大小
                     * @param _fileSize 恶意文件大小
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取恶意文件md5
                     * @return FileMd5 恶意文件md5
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置恶意文件md5
                     * @param _fileMd5 恶意文件md5
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取事件类型：0加密勒索，1文件篡改
                     * @return Type 事件类型：0加密勒索，1文件篡改
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置事件类型：0加密勒索，1文件篡改
                     * @param _type 事件类型：0加密勒索，1文件篡改
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件发送时间
                     * @return CreateTime 事件发送时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置事件发送时间
                     * @param _createTime 事件发送时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取cvm 实例id
                     * @return InstanceId cvm 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置cvm 实例id
                     * @param _instanceId cvm 实例id
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
                     * 获取事件修改事件
                     * @return ModifyTime 事件修改事件
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置事件修改事件
                     * @param _modifyTime 事件修改事件
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取策略id
                     * @return StrategyId 策略id
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置策略id
                     * @param _strategyId 策略id
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return StrategyName 策略名称
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称
                     * @param _strategyName 策略名称
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取主机外网ip
                     * @return HostIp 主机外网ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机外网ip
                     * @param _hostIp 主机外网ip
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
                     * 获取主机内网ip
                     * @return WanIp 主机内网ip
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置主机内网ip
                     * @param _wanIp 主机内网ip
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
                     * 获取进程树 base64 json
                     * @return PsTree 进程树 base64 json
                     * 
                     */
                    std::string GetPsTree() const;

                    /**
                     * 设置进程树 base64 json
                     * @param _psTree 进程树 base64 json
                     * 
                     */
                    void SetPsTree(const std::string& _psTree);

                    /**
                     * 判断参数 PsTree 是否已赋值
                     * @return PsTree 是否已赋值
                     * 
                     */
                    bool PsTreeHasBeenSet() const;

                    /**
                     * 获取进程启动时间
                     * @return ProcessStartTime 进程启动时间
                     * 
                     */
                    std::string GetProcessStartTime() const;

                    /**
                     * 设置进程启动时间
                     * @param _processStartTime 进程启动时间
                     * 
                     */
                    void SetProcessStartTime(const std::string& _processStartTime);

                    /**
                     * 判断参数 ProcessStartTime 是否已赋值
                     * @return ProcessStartTime 是否已赋值
                     * 
                     */
                    bool ProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取主机拥有快照备份数
                     * @return SnapshotNum 主机拥有快照备份数
                     * 
                     */
                    uint64_t GetSnapshotNum() const;

                    /**
                     * 设置主机拥有快照备份数
                     * @param _snapshotNum 主机拥有快照备份数
                     * 
                     */
                    void SetSnapshotNum(const uint64_t& _snapshotNum);

                    /**
                     * 判断参数 SnapshotNum 是否已赋值
                     * @return SnapshotNum 是否已赋值
                     * 
                     */
                    bool SnapshotNumHasBeenSet() const;

                private:

                    /**
                     * 事件id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * cvm uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 事件状态 0待处理，1已处理，2已信任，3处理中，4已恢复备份
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 被篡改文件路径
                     */
                    std::string m_baitFilePath;
                    bool m_baitFilePathHasBeenSet;

                    /**
                     * 恶意文件路径
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 恶意进程id
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 恶意进程参数
                     */
                    std::string m_pidParam;
                    bool m_pidParamHasBeenSet;

                    /**
                     * 恶意文件大小
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 恶意文件md5
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 事件类型：0加密勒索，1文件篡改
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件发送时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * cvm 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 事件修改事件
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 策略id
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 主机外网ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 主机内网ip
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * 进程树 base64 json
                     */
                    std::string m_psTree;
                    bool m_psTreeHasBeenSet;

                    /**
                     * 进程启动时间
                     */
                    std::string m_processStartTime;
                    bool m_processStartTimeHasBeenSet;

                    /**
                     * 主机拥有快照备份数
                     */
                    uint64_t m_snapshotNum;
                    bool m_snapshotNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEEVENT_H_
