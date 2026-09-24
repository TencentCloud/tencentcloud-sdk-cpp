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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHUPDATEFIRMWAREREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHUPDATEFIRMWAREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * BatchUpdateFirmware请求参数结构体
                */
                class BatchUpdateFirmwareRequest : public AbstractModel
                {
                public:
                    BatchUpdateFirmwareRequest();
                    ~BatchUpdateFirmwareRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductID <p>产品ID</p>
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productID <p>产品ID</p>
                     * 
                     */
                    void SetProductID(const std::string& _productID);

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取<p>固件新版本号</p>
                     * @return FirmwareVersion <p>固件新版本号</p>
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置<p>固件新版本号</p>
                     * @param _firmwareVersion <p>固件新版本号</p>
                     * 
                     */
                    void SetFirmwareVersion(const std::string& _firmwareVersion);

                    /**
                     * 判断参数 FirmwareVersion 是否已赋值
                     * @return FirmwareVersion 是否已赋值
                     * 
                     */
                    bool FirmwareVersionHasBeenSet() const;

                    /**
                     * 获取<p>固件原版本号</p>
                     * @return FirmwareOriVersion <p>固件原版本号</p>
                     * 
                     */
                    std::string GetFirmwareOriVersion() const;

                    /**
                     * 设置<p>固件原版本号</p>
                     * @param _firmwareOriVersion <p>固件原版本号</p>
                     * 
                     */
                    void SetFirmwareOriVersion(const std::string& _firmwareOriVersion);

                    /**
                     * 判断参数 FirmwareOriVersion 是否已赋值
                     * @return FirmwareOriVersion 是否已赋值
                     * 
                     */
                    bool FirmwareOriVersionHasBeenSet() const;

                    /**
                     * 获取<p>升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式</p>
                     * @return UpgradeMethod <p>升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式</p>
                     * 
                     */
                    uint64_t GetUpgradeMethod() const;

                    /**
                     * 设置<p>升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式</p>
                     * @param _upgradeMethod <p>升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式</p>
                     * 
                     */
                    void SetUpgradeMethod(const uint64_t& _upgradeMethod);

                    /**
                     * 判断参数 UpgradeMethod 是否已赋值
                     * @return UpgradeMethod 是否已赋值
                     * 
                     */
                    bool UpgradeMethodHasBeenSet() const;

                    /**
                     * 获取<p>设备列表文件名称，根据文件列表升级固件需要填写此参数</p>
                     * @return FileName <p>设备列表文件名称，根据文件列表升级固件需要填写此参数</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>设备列表文件名称，根据文件列表升级固件需要填写此参数</p>
                     * @param _fileName <p>设备列表文件名称，根据文件列表升级固件需要填写此参数</p>
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
                     * 获取<p>设备列表的文件md5值</p>
                     * @return FileMd5 <p>设备列表的文件md5值</p>
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置<p>设备列表的文件md5值</p>
                     * @param _fileMd5 <p>设备列表的文件md5值</p>
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
                     * 获取<p>设备列表的文件大小值</p>
                     * @return FileSize <p>设备列表的文件大小值</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>设备列表的文件大小值</p>
                     * @param _fileSize <p>设备列表的文件大小值</p>
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
                     * 获取<p>需要升级的设备名称列表</p>
                     * @return DeviceNames <p>需要升级的设备名称列表</p>
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置<p>需要升级的设备名称列表</p>
                     * @param _deviceNames <p>需要升级的设备名称列表</p>
                     * 
                     */
                    void SetDeviceNames(const std::vector<std::string>& _deviceNames);

                    /**
                     * 判断参数 DeviceNames 是否已赋值
                     * @return DeviceNames 是否已赋值
                     * 
                     */
                    bool DeviceNamesHasBeenSet() const;

                    /**
                     * 获取<p>固件升级任务，默认超时时间。 最小取值120秒，最大为900秒</p>
                     * @return TimeoutInterval <p>固件升级任务，默认超时时间。 最小取值120秒，最大为900秒</p>
                     * 
                     */
                    uint64_t GetTimeoutInterval() const;

                    /**
                     * 设置<p>固件升级任务，默认超时时间。 最小取值120秒，最大为900秒</p>
                     * @param _timeoutInterval <p>固件升级任务，默认超时时间。 最小取值120秒，最大为900秒</p>
                     * 
                     */
                    void SetTimeoutInterval(const uint64_t& _timeoutInterval);

                    /**
                     * 判断参数 TimeoutInterval 是否已赋值
                     * @return TimeoutInterval 是否已赋值
                     * 
                     */
                    bool TimeoutIntervalHasBeenSet() const;

                    /**
                     * 获取<p>固件升级任务类型，默认静态升级值为空或1，动态升级值为7</p>
                     * @return Type <p>固件升级任务类型，默认静态升级值为空或1，动态升级值为7</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>固件升级任务类型，默认静态升级值为空或1，动态升级值为7</p>
                     * @param _type <p>固件升级任务类型，默认静态升级值为空或1，动态升级值为7</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>任务延迟时间</p>
                     * @return DelayTime <p>任务延迟时间</p>
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置<p>任务延迟时间</p>
                     * @param _delayTime <p>任务延迟时间</p>
                     * 
                     */
                    void SetDelayTime(const int64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否覆盖，0不覆盖，1覆盖</p>
                     * @return OverrideMode <p>是否覆盖，0不覆盖，1覆盖</p>
                     * 
                     */
                    uint64_t GetOverrideMode() const;

                    /**
                     * 设置<p>是否覆盖，0不覆盖，1覆盖</p>
                     * @param _overrideMode <p>是否覆盖，0不覆盖，1覆盖</p>
                     * 
                     */
                    void SetOverrideMode(const uint64_t& _overrideMode);

                    /**
                     * 判断参数 OverrideMode 是否已赋值
                     * @return OverrideMode 是否已赋值
                     * 
                     */
                    bool OverrideModeHasBeenSet() const;

                    /**
                     * 获取<p>失败重试次数</p>
                     * @return MaxRetryNum <p>失败重试次数</p>
                     * 
                     */
                    uint64_t GetMaxRetryNum() const;

                    /**
                     * 设置<p>失败重试次数</p>
                     * @param _maxRetryNum <p>失败重试次数</p>
                     * 
                     */
                    void SetMaxRetryNum(const uint64_t& _maxRetryNum);

                    /**
                     * 判断参数 MaxRetryNum 是否已赋值
                     * @return MaxRetryNum 是否已赋值
                     * 
                     */
                    bool MaxRetryNumHasBeenSet() const;

                    /**
                     * 获取<p>重试间隔min</p>
                     * @return RetryInterval <p>重试间隔min</p>
                     * 
                     */
                    uint64_t GetRetryInterval() const;

                    /**
                     * 设置<p>重试间隔min</p>
                     * @param _retryInterval <p>重试间隔min</p>
                     * 
                     */
                    void SetRetryInterval(const uint64_t& _retryInterval);

                    /**
                     * 判断参数 RetryInterval 是否已赋值
                     * @return RetryInterval 是否已赋值
                     * 
                     */
                    bool RetryIntervalHasBeenSet() const;

                    /**
                     * 获取<p>固件模块</p>
                     * @return FwType <p>固件模块</p>
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置<p>固件模块</p>
                     * @param _fwType <p>固件模块</p>
                     * 
                     */
                    void SetFwType(const std::string& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义信息</p>
                     * @return TaskUserDefine <p>用户自定义信息</p>
                     * 
                     */
                    std::string GetTaskUserDefine() const;

                    /**
                     * 设置<p>用户自定义信息</p>
                     * @param _taskUserDefine <p>用户自定义信息</p>
                     * 
                     */
                    void SetTaskUserDefine(const std::string& _taskUserDefine);

                    /**
                     * 判断参数 TaskUserDefine 是否已赋值
                     * @return TaskUserDefine 是否已赋值
                     * 
                     */
                    bool TaskUserDefineHasBeenSet() const;

                    /**
                     * 获取<p>每分钟下发设备量</p>
                     * @return RateLimit <p>每分钟下发设备量</p>
                     * 
                     */
                    int64_t GetRateLimit() const;

                    /**
                     * 设置<p>每分钟下发设备量</p>
                     * @param _rateLimit <p>每分钟下发设备量</p>
                     * 
                     */
                    void SetRateLimit(const int64_t& _rateLimit);

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                    /**
                     * 获取<p>任务截止时间，Unix 时间戳（单位：秒）。传入 0 或不传表示不设截止，任务按原重试/超时策略执行完毕。</p><p>单位：秒</p>
                     * @return EndTime <p>任务截止时间，Unix 时间戳（单位：秒）。传入 0 或不传表示不设截止，任务按原重试/超时策略执行完毕。</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>任务截止时间，Unix 时间戳（单位：秒）。传入 0 或不传表示不设截止，任务按原重试/超时策略执行完毕。</p><p>单位：秒</p>
                     * @param _endTime <p>任务截止时间，Unix 时间戳（单位：秒）。传入 0 或不传表示不设截止，任务按原重试/超时策略执行完毕。</p><p>单位：秒</p>
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务开始调度时间，Unix 时间戳（单位：秒）。传入 0 或不传时任务立即创建执行，与 DelayTime 同时传入时，本参数优先生效。</p><p>单位：秒</p>
                     * @return StartTime <p>任务开始调度时间，Unix 时间戳（单位：秒）。传入 0 或不传时任务立即创建执行，与 DelayTime 同时传入时，本参数优先生效。</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>任务开始调度时间，Unix 时间戳（单位：秒）。传入 0 或不传时任务立即创建执行，与 DelayTime 同时传入时，本参数优先生效。</p><p>单位：秒</p>
                     * @param _startTime <p>任务开始调度时间，Unix 时间戳（单位：秒）。传入 0 或不传时任务立即创建执行，与 DelayTime 同时传入时，本参数优先生效。</p><p>单位：秒</p>
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                private:

                    /**
                     * <p>产品ID</p>
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * <p>固件新版本号</p>
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * <p>固件原版本号</p>
                     */
                    std::string m_firmwareOriVersion;
                    bool m_firmwareOriVersionHasBeenSet;

                    /**
                     * <p>升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式</p>
                     */
                    uint64_t m_upgradeMethod;
                    bool m_upgradeMethodHasBeenSet;

                    /**
                     * <p>设备列表文件名称，根据文件列表升级固件需要填写此参数</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>设备列表的文件md5值</p>
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * <p>设备列表的文件大小值</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>需要升级的设备名称列表</p>
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                    /**
                     * <p>固件升级任务，默认超时时间。 最小取值120秒，最大为900秒</p>
                     */
                    uint64_t m_timeoutInterval;
                    bool m_timeoutIntervalHasBeenSet;

                    /**
                     * <p>固件升级任务类型，默认静态升级值为空或1，动态升级值为7</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>任务延迟时间</p>
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>是否覆盖，0不覆盖，1覆盖</p>
                     */
                    uint64_t m_overrideMode;
                    bool m_overrideModeHasBeenSet;

                    /**
                     * <p>失败重试次数</p>
                     */
                    uint64_t m_maxRetryNum;
                    bool m_maxRetryNumHasBeenSet;

                    /**
                     * <p>重试间隔min</p>
                     */
                    uint64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * <p>固件模块</p>
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * <p>用户自定义信息</p>
                     */
                    std::string m_taskUserDefine;
                    bool m_taskUserDefineHasBeenSet;

                    /**
                     * <p>每分钟下发设备量</p>
                     */
                    int64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                    /**
                     * <p>任务截止时间，Unix 时间戳（单位：秒）。传入 0 或不传表示不设截止，任务按原重试/超时策略执行完毕。</p><p>单位：秒</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>任务开始调度时间，Unix 时间戳（单位：秒）。传入 0 或不传时任务立即创建执行，与 DelayTime 同时传入时，本参数优先生效。</p><p>单位：秒</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHUPDATEFIRMWAREREQUEST_H_
