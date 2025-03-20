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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULSCANIMAGEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULSCANIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 漏洞扫描的镜像信息
                */
                class VulScanImageInfo : public AbstractModel
                {
                public:
                    VulScanImageInfo();
                    ~VulScanImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像ID
                     * @return ImageID 镜像ID
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置镜像ID
                     * @param _imageID 镜像ID
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取镜像名称
                     * @return ImageName 镜像名称
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置镜像名称
                     * @param _imageName 镜像名称
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取镜像大小
                     * @return Size 镜像大小
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置镜像大小
                     * @param _size 镜像大小
                     * 
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取任务状态:SCANNING:扫描中 FAILED:失败 FINISHED:完成 CANCELED:取消
                     * @return ScanStatus 任务状态:SCANNING:扫描中 FAILED:失败 FINISHED:完成 CANCELED:取消
                     * 
                     */
                    std::string GetScanStatus() const;

                    /**
                     * 设置任务状态:SCANNING:扫描中 FAILED:失败 FINISHED:完成 CANCELED:取消
                     * @param _scanStatus 任务状态:SCANNING:扫描中 FAILED:失败 FINISHED:完成 CANCELED:取消
                     * 
                     */
                    void SetScanStatus(const std::string& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取扫描时长
                     * @return ScanDuration 扫描时长
                     * 
                     */
                    double GetScanDuration() const;

                    /**
                     * 设置扫描时长
                     * @param _scanDuration 扫描时长
                     * 
                     */
                    void SetScanDuration(const double& _scanDuration);

                    /**
                     * 判断参数 ScanDuration 是否已赋值
                     * @return ScanDuration 是否已赋值
                     * 
                     */
                    bool ScanDurationHasBeenSet() const;

                    /**
                     * 获取高危漏洞数
                     * @return HighLevelVulCount 高危漏洞数
                     * 
                     */
                    int64_t GetHighLevelVulCount() const;

                    /**
                     * 设置高危漏洞数
                     * @param _highLevelVulCount 高危漏洞数
                     * 
                     */
                    void SetHighLevelVulCount(const int64_t& _highLevelVulCount);

                    /**
                     * 判断参数 HighLevelVulCount 是否已赋值
                     * @return HighLevelVulCount 是否已赋值
                     * 
                     */
                    bool HighLevelVulCountHasBeenSet() const;

                    /**
                     * 获取中危漏洞数
                     * @return MediumLevelVulCount 中危漏洞数
                     * 
                     */
                    int64_t GetMediumLevelVulCount() const;

                    /**
                     * 设置中危漏洞数
                     * @param _mediumLevelVulCount 中危漏洞数
                     * 
                     */
                    void SetMediumLevelVulCount(const int64_t& _mediumLevelVulCount);

                    /**
                     * 判断参数 MediumLevelVulCount 是否已赋值
                     * @return MediumLevelVulCount 是否已赋值
                     * 
                     */
                    bool MediumLevelVulCountHasBeenSet() const;

                    /**
                     * 获取低危漏洞数
                     * @return LowLevelVulCount 低危漏洞数
                     * 
                     */
                    int64_t GetLowLevelVulCount() const;

                    /**
                     * 设置低危漏洞数
                     * @param _lowLevelVulCount 低危漏洞数
                     * 
                     */
                    void SetLowLevelVulCount(const int64_t& _lowLevelVulCount);

                    /**
                     * 判断参数 LowLevelVulCount 是否已赋值
                     * @return LowLevelVulCount 是否已赋值
                     * 
                     */
                    bool LowLevelVulCountHasBeenSet() const;

                    /**
                     * 获取严重漏洞数
                     * @return CriticalLevelVulCount 严重漏洞数
                     * 
                     */
                    int64_t GetCriticalLevelVulCount() const;

                    /**
                     * 设置严重漏洞数
                     * @param _criticalLevelVulCount 严重漏洞数
                     * 
                     */
                    void SetCriticalLevelVulCount(const int64_t& _criticalLevelVulCount);

                    /**
                     * 判断参数 CriticalLevelVulCount 是否已赋值
                     * @return CriticalLevelVulCount 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulCountHasBeenSet() const;

                    /**
                     * 获取本地镜像漏洞扫描任务ID
                     * @return TaskID 本地镜像漏洞扫描任务ID
                     * 
                     */
                    int64_t GetTaskID() const;

                    /**
                     * 设置本地镜像漏洞扫描任务ID
                     * @param _taskID 本地镜像漏洞扫描任务ID
                     * 
                     */
                    void SetTaskID(const int64_t& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取漏洞扫描的开始时间
                     * @return ScanStartTime 漏洞扫描的开始时间
                     * 
                     */
                    std::string GetScanStartTime() const;

                    /**
                     * 设置漏洞扫描的开始时间
                     * @param _scanStartTime 漏洞扫描的开始时间
                     * 
                     */
                    void SetScanStartTime(const std::string& _scanStartTime);

                    /**
                     * 判断参数 ScanStartTime 是否已赋值
                     * @return ScanStartTime 是否已赋值
                     * 
                     */
                    bool ScanStartTimeHasBeenSet() const;

                    /**
                     * 获取漏洞扫描的结束时间
                     * @return ScanEndTime 漏洞扫描的结束时间
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置漏洞扫描的结束时间
                     * @param _scanEndTime 漏洞扫描的结束时间
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
                     * 获取失败原因:TIMEOUT:超时 TOO_MANY:任务过多 OFFLINE:离线
                     * @return ErrorStatus 失败原因:TIMEOUT:超时 TOO_MANY:任务过多 OFFLINE:离线
                     * 
                     */
                    std::string GetErrorStatus() const;

                    /**
                     * 设置失败原因:TIMEOUT:超时 TOO_MANY:任务过多 OFFLINE:离线
                     * @param _errorStatus 失败原因:TIMEOUT:超时 TOO_MANY:任务过多 OFFLINE:离线
                     * 
                     */
                    void SetErrorStatus(const std::string& _errorStatus);

                    /**
                     * 判断参数 ErrorStatus 是否已赋值
                     * @return ErrorStatus 是否已赋值
                     * 
                     */
                    bool ErrorStatusHasBeenSet() const;

                private:

                    /**
                     * 镜像ID
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * 镜像名称
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * 镜像大小
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 任务状态:SCANNING:扫描中 FAILED:失败 FINISHED:完成 CANCELED:取消
                     */
                    std::string m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 扫描时长
                     */
                    double m_scanDuration;
                    bool m_scanDurationHasBeenSet;

                    /**
                     * 高危漏洞数
                     */
                    int64_t m_highLevelVulCount;
                    bool m_highLevelVulCountHasBeenSet;

                    /**
                     * 中危漏洞数
                     */
                    int64_t m_mediumLevelVulCount;
                    bool m_mediumLevelVulCountHasBeenSet;

                    /**
                     * 低危漏洞数
                     */
                    int64_t m_lowLevelVulCount;
                    bool m_lowLevelVulCountHasBeenSet;

                    /**
                     * 严重漏洞数
                     */
                    int64_t m_criticalLevelVulCount;
                    bool m_criticalLevelVulCountHasBeenSet;

                    /**
                     * 本地镜像漏洞扫描任务ID
                     */
                    int64_t m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 漏洞扫描的开始时间
                     */
                    std::string m_scanStartTime;
                    bool m_scanStartTimeHasBeenSet;

                    /**
                     * 漏洞扫描的结束时间
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * 失败原因:TIMEOUT:超时 TOO_MANY:任务过多 OFFLINE:离线
                     */
                    std::string m_errorStatus;
                    bool m_errorStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULSCANIMAGEINFO_H_
