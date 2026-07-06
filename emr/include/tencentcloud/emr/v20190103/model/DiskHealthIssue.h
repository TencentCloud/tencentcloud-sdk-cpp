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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DISKHEALTHISSUE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DISKHEALTHISSUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 磁盘
                */
                class DiskHealthIssue : public AbstractModel
                {
                public:
                    DiskHealthIssue();
                    ~DiskHealthIssue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>磁盘id</p>
                     * @return DiskId <p>磁盘id</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>磁盘id</p>
                     * @param _diskId <p>磁盘id</p>
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取<p>挂载的目录</p>
                     * @return MountDir <p>挂载的目录</p>
                     * 
                     */
                    std::string GetMountDir() const;

                    /**
                     * 设置<p>挂载的目录</p>
                     * @param _mountDir <p>挂载的目录</p>
                     * 
                     */
                    void SetMountDir(const std::string& _mountDir);

                    /**
                     * 判断参数 MountDir 是否已赋值
                     * @return MountDir 是否已赋值
                     * 
                     */
                    bool MountDirHasBeenSet() const;

                    /**
                     * 获取<p>设备路径</p>
                     * @return DeviceName <p>设备路径</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备路径</p>
                     * @param _deviceName <p>设备路径</p>
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
                     * 获取<p>异常类型</p>
                     * @return CheckType <p>异常类型</p>
                     * 
                     */
                    int64_t GetCheckType() const;

                    /**
                     * 设置<p>异常类型</p>
                     * @param _checkType <p>异常类型</p>
                     * 
                     */
                    void SetCheckType(const int64_t& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取<p>优先级</p>
                     * @return Severity <p>优先级</p>
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置<p>优先级</p>
                     * @param _severity <p>优先级</p>
                     * 
                     */
                    void SetSeverity(const int64_t& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return State <p>状态</p>
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _state <p>状态</p>
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>探测来源</p>
                     * @return DetectSource <p>探测来源</p>
                     * 
                     */
                    std::string GetDetectSource() const;

                    /**
                     * 设置<p>探测来源</p>
                     * @param _detectSource <p>探测来源</p>
                     * 
                     */
                    void SetDetectSource(const std::string& _detectSource);

                    /**
                     * 判断参数 DetectSource 是否已赋值
                     * @return DetectSource 是否已赋值
                     * 
                     */
                    bool DetectSourceHasBeenSet() const;

                    /**
                     * 获取<p>第一次探测时间</p>
                     * @return FirstDetectTime <p>第一次探测时间</p>
                     * 
                     */
                    std::string GetFirstDetectTime() const;

                    /**
                     * 设置<p>第一次探测时间</p>
                     * @param _firstDetectTime <p>第一次探测时间</p>
                     * 
                     */
                    void SetFirstDetectTime(const std::string& _firstDetectTime);

                    /**
                     * 判断参数 FirstDetectTime 是否已赋值
                     * @return FirstDetectTime 是否已赋值
                     * 
                     */
                    bool FirstDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>最新探测时间</p>
                     * @return LastDetectTime <p>最新探测时间</p>
                     * 
                     */
                    std::string GetLastDetectTime() const;

                    /**
                     * 设置<p>最新探测时间</p>
                     * @param _lastDetectTime <p>最新探测时间</p>
                     * 
                     */
                    void SetLastDetectTime(const std::string& _lastDetectTime);

                    /**
                     * 判断参数 LastDetectTime 是否已赋值
                     * @return LastDetectTime 是否已赋值
                     * 
                     */
                    bool LastDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>探测信息</p>
                     * @return DetectDetail <p>探测信息</p>
                     * 
                     */
                    std::string GetDetectDetail() const;

                    /**
                     * 设置<p>探测信息</p>
                     * @param _detectDetail <p>探测信息</p>
                     * 
                     */
                    void SetDetectDetail(const std::string& _detectDetail);

                    /**
                     * 判断参数 DetectDetail 是否已赋值
                     * @return DetectDetail 是否已赋值
                     * 
                     */
                    bool DetectDetailHasBeenSet() const;

                private:

                    /**
                     * <p>磁盘id</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>挂载的目录</p>
                     */
                    std::string m_mountDir;
                    bool m_mountDirHasBeenSet;

                    /**
                     * <p>设备路径</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>异常类型</p>
                     */
                    int64_t m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * <p>优先级</p>
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>探测来源</p>
                     */
                    std::string m_detectSource;
                    bool m_detectSourceHasBeenSet;

                    /**
                     * <p>第一次探测时间</p>
                     */
                    std::string m_firstDetectTime;
                    bool m_firstDetectTimeHasBeenSet;

                    /**
                     * <p>最新探测时间</p>
                     */
                    std::string m_lastDetectTime;
                    bool m_lastDetectTimeHasBeenSet;

                    /**
                     * <p>探测信息</p>
                     */
                    std::string m_detectDetail;
                    bool m_detectDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DISKHEALTHISSUE_H_
