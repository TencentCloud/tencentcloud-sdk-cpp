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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICEUPDATESTATUS_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICEUPDATESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 设备固件更新状态
                */
                class DeviceUpdateStatus : public AbstractModel
                {
                public:
                    DeviceUpdateStatus();
                    ~DeviceUpdateStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param _deviceName 设备名
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取最后处理时间
                     * @return LastProcessTime 最后处理时间
                     * 
                     */
                    uint64_t GetLastProcessTime() const;

                    /**
                     * 设置最后处理时间
                     * @param _lastProcessTime 最后处理时间
                     * 
                     */
                    void SetLastProcessTime(const uint64_t& _lastProcessTime);

                    /**
                     * 判断参数 LastProcessTime 是否已赋值
                     * @return LastProcessTime 是否已赋值
                     * 
                     */
                    bool LastProcessTimeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取错误消息
                     * @return ErrMsg 错误消息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置错误消息
                     * @param _errMsg 错误消息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取返回码
                     * @return Retcode 返回码
                     * 
                     */
                    int64_t GetRetcode() const;

                    /**
                     * 设置返回码
                     * @param _retcode 返回码
                     * 
                     */
                    void SetRetcode(const int64_t& _retcode);

                    /**
                     * 判断参数 Retcode 是否已赋值
                     * @return Retcode 是否已赋值
                     * 
                     */
                    bool RetcodeHasBeenSet() const;

                    /**
                     * 获取目标更新版本
                     * @return DstVersion 目标更新版本
                     * 
                     */
                    std::string GetDstVersion() const;

                    /**
                     * 设置目标更新版本
                     * @param _dstVersion 目标更新版本
                     * 
                     */
                    void SetDstVersion(const std::string& _dstVersion);

                    /**
                     * 判断参数 DstVersion 是否已赋值
                     * @return DstVersion 是否已赋值
                     * 
                     */
                    bool DstVersionHasBeenSet() const;

                    /**
                     * 获取下载中状态时的下载进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent 下载中状态时的下载进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置下载中状态时的下载进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _percent 下载中状态时的下载进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取原版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriVersion 原版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriVersion() const;

                    /**
                     * 设置原版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oriVersion 原版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriVersion(const std::string& _oriVersion);

                    /**
                     * 判断参数 OriVersion 是否已赋值
                     * @return OriVersion 是否已赋值
                     * 
                     */
                    bool OriVersionHasBeenSet() const;

                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 最后处理时间
                     */
                    uint64_t m_lastProcessTime;
                    bool m_lastProcessTimeHasBeenSet;

                    /**
                     * 状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误消息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 返回码
                     */
                    int64_t m_retcode;
                    bool m_retcodeHasBeenSet;

                    /**
                     * 目标更新版本
                     */
                    std::string m_dstVersion;
                    bool m_dstVersionHasBeenSet;

                    /**
                     * 下载中状态时的下载进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 原版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oriVersion;
                    bool m_oriVersionHasBeenSet;

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_DEVICEUPDATESTATUS_H_
