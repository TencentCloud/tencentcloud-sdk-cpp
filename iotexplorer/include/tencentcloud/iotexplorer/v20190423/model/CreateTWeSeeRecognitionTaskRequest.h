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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEERECOGNITIONTASKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEERECOGNITIONTASKREQUEST_H_

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
                * CreateTWeSeeRecognitionTask请求参数结构体
                */
                class CreateTWeSeeRecognitionTaskRequest : public AbstractModel
                {
                public:
                    CreateTWeSeeRecognitionTaskRequest();
                    ~CreateTWeSeeRecognitionTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取输入视频 / 图片的 URL
                     * @return InputURL 输入视频 / 图片的 URL
                     * 
                     */
                    std::string GetInputURL() const;

                    /**
                     * 设置输入视频 / 图片的 URL
                     * @param _inputURL 输入视频 / 图片的 URL
                     * 
                     */
                    void SetInputURL(const std::string& _inputURL);

                    /**
                     * 判断参数 InputURL 是否已赋值
                     * @return InputURL 是否已赋值
                     * 
                     */
                    bool InputURLHasBeenSet() const;

                    /**
                     * 获取自定义事件 ID
                     * @return CustomId 自定义事件 ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置自定义事件 ID
                     * @param _customId 自定义事件 ID
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                    /**
                     * 获取是否保存该事件使其可被搜索
                     * @return EnableSearch 是否保存该事件使其可被搜索
                     * 
                     */
                    bool GetEnableSearch() const;

                    /**
                     * 设置是否保存该事件使其可被搜索
                     * @param _enableSearch 是否保存该事件使其可被搜索
                     * 
                     */
                    void SetEnableSearch(const bool& _enableSearch);

                    /**
                     * 判断参数 EnableSearch 是否已赋值
                     * @return EnableSearch 是否已赋值
                     * 
                     */
                    bool EnableSearchHasBeenSet() const;

                    /**
                     * 获取事件起始时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     * @return StartTimeMs 事件起始时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     * 
                     */
                    uint64_t GetStartTimeMs() const;

                    /**
                     * 设置事件起始时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     * @param _startTimeMs 事件起始时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     * 
                     */
                    void SetStartTimeMs(const uint64_t& _startTimeMs);

                    /**
                     * 判断参数 StartTimeMs 是否已赋值
                     * @return StartTimeMs 是否已赋值
                     * 
                     */
                    bool StartTimeMsHasBeenSet() const;

                    /**
                     * 获取事件结束时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     * @return EndTimeMs 事件结束时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     * 
                     */
                    uint64_t GetEndTimeMs() const;

                    /**
                     * 设置事件结束时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     * @param _endTimeMs 事件结束时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     * 
                     */
                    void SetEndTimeMs(const uint64_t& _endTimeMs);

                    /**
                     * 判断参数 EndTimeMs 是否已赋值
                     * @return EndTimeMs 是否已赋值
                     * 
                     */
                    bool EndTimeMsHasBeenSet() const;

                    /**
                     * 获取算法配置
                     * @return Config 算法配置
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置算法配置
                     * @param _config 算法配置
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取是否自定义设备，为 true 时不检查设备存在性，默认为 false
                     * @return IsCustomDevice 是否自定义设备，为 true 时不检查设备存在性，默认为 false
                     * 
                     */
                    bool GetIsCustomDevice() const;

                    /**
                     * 设置是否自定义设备，为 true 时不检查设备存在性，默认为 false
                     * @param _isCustomDevice 是否自定义设备，为 true 时不检查设备存在性，默认为 false
                     * 
                     */
                    void SetIsCustomDevice(const bool& _isCustomDevice);

                    /**
                     * 判断参数 IsCustomDevice 是否已赋值
                     * @return IsCustomDevice 是否已赋值
                     * 
                     */
                    bool IsCustomDeviceHasBeenSet() const;

                    /**
                     * 获取输入类型。可选值：

- `video`：视频（默认值）
- `image`：图片
                     * @return InputType 输入类型。可选值：

- `video`：视频（默认值）
- `image`：图片
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置输入类型。可选值：

- `video`：视频（默认值）
- `image`：图片
                     * @param _inputType 输入类型。可选值：

- `video`：视频（默认值）
- `image`：图片
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取摘要服务质量。可选值：

- `minutely`：分钟级（默认值）
- `immediate`：立即
                     * @return SummaryQOS 摘要服务质量。可选值：

- `minutely`：分钟级（默认值）
- `immediate`：立即
                     * 
                     */
                    std::string GetSummaryQOS() const;

                    /**
                     * 设置摘要服务质量。可选值：

- `minutely`：分钟级（默认值）
- `immediate`：立即
                     * @param _summaryQOS 摘要服务质量。可选值：

- `minutely`：分钟级（默认值）
- `immediate`：立即
                     * 
                     */
                    void SetSummaryQOS(const std::string& _summaryQOS);

                    /**
                     * 判断参数 SummaryQOS 是否已赋值
                     * @return SummaryQOS 是否已赋值
                     * 
                     */
                    bool SummaryQOSHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 输入视频 / 图片的 URL
                     */
                    std::string m_inputURL;
                    bool m_inputURLHasBeenSet;

                    /**
                     * 自定义事件 ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * 是否保存该事件使其可被搜索
                     */
                    bool m_enableSearch;
                    bool m_enableSearchHasBeenSet;

                    /**
                     * 事件起始时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     */
                    uint64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * 事件结束时间事件起始时间（毫秒级 UNIX 时间戳，若不传则默认为接口调用时间）
                     */
                    uint64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * 算法配置
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 是否自定义设备，为 true 时不检查设备存在性，默认为 false
                     */
                    bool m_isCustomDevice;
                    bool m_isCustomDeviceHasBeenSet;

                    /**
                     * 输入类型。可选值：

- `video`：视频（默认值）
- `image`：图片
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 摘要服务质量。可选值：

- `minutely`：分钟级（默认值）
- `immediate`：立即
                     */
                    std::string m_summaryQOS;
                    bool m_summaryQOSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATETWESEERECOGNITIONTASKREQUEST_H_
