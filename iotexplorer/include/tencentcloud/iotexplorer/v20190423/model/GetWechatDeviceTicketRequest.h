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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETWECHATDEVICETICKETREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETWECHATDEVICETICKETREQUEST_H_

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
                * GetWechatDeviceTicket请求参数结构体
                */
                class GetWechatDeviceTicketRequest : public AbstractModel
                {
                public:
                    GetWechatDeviceTicketRequest();
                    ~GetWechatDeviceTicketRequest() = default;
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
                     * 获取产品名称
                     * @return DeviceName 产品名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置产品名称
                     * @param _deviceName 产品名称
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
                     * 获取是否第三方小程序
                     * @return IsThirdApp 是否第三方小程序
                     * 
                     */
                    int64_t GetIsThirdApp() const;

                    /**
                     * 设置是否第三方小程序
                     * @param _isThirdApp 是否第三方小程序
                     * 
                     */
                    void SetIsThirdApp(const int64_t& _isThirdApp);

                    /**
                     * 判断参数 IsThirdApp 是否已赋值
                     * @return IsThirdApp 是否已赋值
                     * 
                     */
                    bool IsThirdAppHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return ModelId 模板ID
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置模板ID
                     * @param _modelId 模板ID
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取小程序APPID
                     * @return MiniProgramAppId 小程序APPID
                     * 
                     */
                    std::string GetMiniProgramAppId() const;

                    /**
                     * 设置小程序APPID
                     * @param _miniProgramAppId 小程序APPID
                     * 
                     */
                    void SetMiniProgramAppId(const std::string& _miniProgramAppId);

                    /**
                     * 判断参数 MiniProgramAppId 是否已赋值
                     * @return MiniProgramAppId 是否已赋值
                     * 
                     */
                    bool MiniProgramAppIdHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 是否第三方小程序
                     */
                    int64_t m_isThirdApp;
                    bool m_isThirdAppHasBeenSet;

                    /**
                     * 模板ID
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 小程序APPID
                     */
                    std::string m_miniProgramAppId;
                    bool m_miniProgramAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETWECHATDEVICETICKETREQUEST_H_
