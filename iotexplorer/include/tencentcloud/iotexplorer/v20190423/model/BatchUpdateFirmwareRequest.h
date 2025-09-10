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
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 设置产品ID
                     * @param _productID 产品ID
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
                     * 获取固件新版本号
                     * @return FirmwareVersion 固件新版本号
                     * 
                     */
                    std::string GetFirmwareVersion() const;

                    /**
                     * 设置固件新版本号
                     * @param _firmwareVersion 固件新版本号
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
                     * 获取固件原版本号
                     * @return FirmwareOriVersion 固件原版本号
                     * 
                     */
                    std::string GetFirmwareOriVersion() const;

                    /**
                     * 设置固件原版本号
                     * @param _firmwareOriVersion 固件原版本号
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
                     * 获取升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式
                     * @return UpgradeMethod 升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式
                     * 
                     */
                    uint64_t GetUpgradeMethod() const;

                    /**
                     * 设置升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式
                     * @param _upgradeMethod 升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式
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
                     * 获取设备列表文件名称，根据文件列表升级固件需要填写此参数
                     * @return FileName 设备列表文件名称，根据文件列表升级固件需要填写此参数
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置设备列表文件名称，根据文件列表升级固件需要填写此参数
                     * @param _fileName 设备列表文件名称，根据文件列表升级固件需要填写此参数
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
                     * 获取设备列表的文件md5值
                     * @return FileMd5 设备列表的文件md5值
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置设备列表的文件md5值
                     * @param _fileMd5 设备列表的文件md5值
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
                     * 获取设备列表的文件大小值
                     * @return FileSize 设备列表的文件大小值
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置设备列表的文件大小值
                     * @param _fileSize 设备列表的文件大小值
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
                     * 获取需要升级的设备名称列表
                     * @return DeviceNames 需要升级的设备名称列表
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置需要升级的设备名称列表
                     * @param _deviceNames 需要升级的设备名称列表
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
                     * 获取固件升级任务，默认超时时间。 最小取值120秒，最大为900秒
                     * @return TimeoutInterval 固件升级任务，默认超时时间。 最小取值120秒，最大为900秒
                     * 
                     */
                    uint64_t GetTimeoutInterval() const;

                    /**
                     * 设置固件升级任务，默认超时时间。 最小取值120秒，最大为900秒
                     * @param _timeoutInterval 固件升级任务，默认超时时间。 最小取值120秒，最大为900秒
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
                     * 获取固件升级任务类型，默认静态升级值为空或1，动态升级值为7
                     * @return Type 固件升级任务类型，默认静态升级值为空或1，动态升级值为7
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置固件升级任务类型，默认静态升级值为空或1，动态升级值为7
                     * @param _type 固件升级任务类型，默认静态升级值为空或1，动态升级值为7
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
                     * 获取任务延迟时间
                     * @return DelayTime 任务延迟时间
                     * 
                     */
                    int64_t GetDelayTime() const;

                    /**
                     * 设置任务延迟时间
                     * @param _delayTime 任务延迟时间
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
                     * 获取是否覆盖，0不覆盖，1覆盖
                     * @return OverrideMode 是否覆盖，0不覆盖，1覆盖
                     * 
                     */
                    uint64_t GetOverrideMode() const;

                    /**
                     * 设置是否覆盖，0不覆盖，1覆盖
                     * @param _overrideMode 是否覆盖，0不覆盖，1覆盖
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
                     * 获取失败重试次数
                     * @return MaxRetryNum 失败重试次数
                     * 
                     */
                    uint64_t GetMaxRetryNum() const;

                    /**
                     * 设置失败重试次数
                     * @param _maxRetryNum 失败重试次数
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
                     * 获取重试间隔min
                     * @return RetryInterval 重试间隔min
                     * 
                     */
                    uint64_t GetRetryInterval() const;

                    /**
                     * 设置重试间隔min
                     * @param _retryInterval 重试间隔min
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
                     * 获取固件模块
                     * @return FwType 固件模块
                     * 
                     */
                    std::string GetFwType() const;

                    /**
                     * 设置固件模块
                     * @param _fwType 固件模块
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
                     * 获取用户自定义信息
                     * @return TaskUserDefine 用户自定义信息
                     * 
                     */
                    std::string GetTaskUserDefine() const;

                    /**
                     * 设置用户自定义信息
                     * @param _taskUserDefine 用户自定义信息
                     * 
                     */
                    void SetTaskUserDefine(const std::string& _taskUserDefine);

                    /**
                     * 判断参数 TaskUserDefine 是否已赋值
                     * @return TaskUserDefine 是否已赋值
                     * 
                     */
                    bool TaskUserDefineHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 固件新版本号
                     */
                    std::string m_firmwareVersion;
                    bool m_firmwareVersionHasBeenSet;

                    /**
                     * 固件原版本号
                     */
                    std::string m_firmwareOriVersion;
                    bool m_firmwareOriVersionHasBeenSet;

                    /**
                     * 升级方式，0 静默升级  1 用户确认升级。 不填默认为静默升级方式
                     */
                    uint64_t m_upgradeMethod;
                    bool m_upgradeMethodHasBeenSet;

                    /**
                     * 设备列表文件名称，根据文件列表升级固件需要填写此参数
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 设备列表的文件md5值
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * 设备列表的文件大小值
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 需要升级的设备名称列表
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                    /**
                     * 固件升级任务，默认超时时间。 最小取值120秒，最大为900秒
                     */
                    uint64_t m_timeoutInterval;
                    bool m_timeoutIntervalHasBeenSet;

                    /**
                     * 固件升级任务类型，默认静态升级值为空或1，动态升级值为7
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务延迟时间
                     */
                    int64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 是否覆盖，0不覆盖，1覆盖
                     */
                    uint64_t m_overrideMode;
                    bool m_overrideModeHasBeenSet;

                    /**
                     * 失败重试次数
                     */
                    uint64_t m_maxRetryNum;
                    bool m_maxRetryNumHasBeenSet;

                    /**
                     * 重试间隔min
                     */
                    uint64_t m_retryInterval;
                    bool m_retryIntervalHasBeenSet;

                    /**
                     * 固件模块
                     */
                    std::string m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 用户自定义信息
                     */
                    std::string m_taskUserDefine;
                    bool m_taskUserDefineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHUPDATEFIRMWAREREQUEST_H_
