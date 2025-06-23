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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEVIDEOSKEYWORDSANALYZERREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEVIDEOSKEYWORDSANALYZERREQUEST_H_

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
                * InvokeVideosKeywordsAnalyzer请求参数结构体
                */
                class InvokeVideosKeywordsAnalyzerRequest : public AbstractModel
                {
                public:
                    InvokeVideosKeywordsAnalyzerRequest();
                    ~InvokeVideosKeywordsAnalyzerRequest() = default;
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
                     * 获取开始时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     * @return StartTimeMs 开始时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置开始时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     * @param _startTimeMs 开始时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     * 
                     */
                    void SetStartTimeMs(const int64_t& _startTimeMs);

                    /**
                     * 判断参数 StartTimeMs 是否已赋值
                     * @return StartTimeMs 是否已赋值
                     * 
                     */
                    bool StartTimeMsHasBeenSet() const;

                    /**
                     * 获取结束时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     * @return EndTimeMs 结束时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置结束时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     * @param _endTimeMs 结束时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     * 
                     */
                    void SetEndTimeMs(const int64_t& _endTimeMs);

                    /**
                     * 判断参数 EndTimeMs 是否已赋值
                     * @return EndTimeMs 是否已赋值
                     * 
                     */
                    bool EndTimeMsHasBeenSet() const;

                    /**
                     * 获取返回的关键字最大数量，默认为5；最大不能超过10
                     * @return KeywordsMaxNum 返回的关键字最大数量，默认为5；最大不能超过10
                     * 
                     */
                    uint64_t GetKeywordsMaxNum() const;

                    /**
                     * 设置返回的关键字最大数量，默认为5；最大不能超过10
                     * @param _keywordsMaxNum 返回的关键字最大数量，默认为5；最大不能超过10
                     * 
                     */
                    void SetKeywordsMaxNum(const uint64_t& _keywordsMaxNum);

                    /**
                     * 判断参数 KeywordsMaxNum 是否已赋值
                     * @return KeywordsMaxNum 是否已赋值
                     * 
                     */
                    bool KeywordsMaxNumHasBeenSet() const;

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
                     * 开始时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * 结束时间。

注：
1. 单位为毫秒（ms）
2. 时间区间必须控制在某一个自然天内，不支持跨天
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * 返回的关键字最大数量，默认为5；最大不能超过10
                     */
                    uint64_t m_keywordsMaxNum;
                    bool m_keywordsMaxNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_INVOKEVIDEOSKEYWORDSANALYZERREQUEST_H_
