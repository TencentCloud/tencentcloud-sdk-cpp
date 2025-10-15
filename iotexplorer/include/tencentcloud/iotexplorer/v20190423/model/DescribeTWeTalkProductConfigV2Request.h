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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKPRODUCTCONFIGV2REQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKPRODUCTCONFIGV2REQUEST_H_

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
                * DescribeTWeTalkProductConfigV2请求参数结构体
                */
                class DescribeTWeTalkProductConfigV2Request : public AbstractModel
                {
                public:
                    DescribeTWeTalkProductConfigV2Request();
                    ~DescribeTWeTalkProductConfigV2Request() = default;
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
                     * 获取支持的语言，zh-中文；en-英文；默认zh
                     * @return TargetLanguage 支持的语言，zh-中文；en-英文；默认zh
                     * 
                     */
                    std::string GetTargetLanguage() const;

                    /**
                     * 设置支持的语言，zh-中文；en-英文；默认zh
                     * @param _targetLanguage 支持的语言，zh-中文；en-英文；默认zh
                     * 
                     */
                    void SetTargetLanguage(const std::string& _targetLanguage);

                    /**
                     * 判断参数 TargetLanguage 是否已赋值
                     * @return TargetLanguage 是否已赋值
                     * 
                     */
                    bool TargetLanguageHasBeenSet() const;

                    /**
                     * 获取是否脱敏
                     * @return IncludeCredentials 是否脱敏
                     * 
                     */
                    bool GetIncludeCredentials() const;

                    /**
                     * 设置是否脱敏
                     * @param _includeCredentials 是否脱敏
                     * 
                     */
                    void SetIncludeCredentials(const bool& _includeCredentials);

                    /**
                     * 判断参数 IncludeCredentials 是否已赋值
                     * @return IncludeCredentials 是否已赋值
                     * 
                     */
                    bool IncludeCredentialsHasBeenSet() const;

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
                     * 支持的语言，zh-中文；en-英文；默认zh
                     */
                    std::string m_targetLanguage;
                    bool m_targetLanguageHasBeenSet;

                    /**
                     * 是否脱敏
                     */
                    bool m_includeCredentials;
                    bool m_includeCredentialsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWETALKPRODUCTCONFIGV2REQUEST_H_
