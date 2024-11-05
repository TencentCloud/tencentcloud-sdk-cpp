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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTPLANRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTPLANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AndroidPlan.h>
#include <tencentcloud/ms/v20180408/model/AppletPlan.h>
#include <tencentcloud/ms/v20180408/model/IOSPlan.h>
#include <tencentcloud/ms/v20180408/model/SDKPlan.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeEncryptPlan返回参数结构体
                */
                class DescribeEncryptPlanResponse : public AbstractModel
                {
                public:
                    DescribeEncryptPlanResponse();
                    ~DescribeEncryptPlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取平台类型整型值  
                     * @return PlatformType 平台类型整型值  
                     * 
                     */
                    int64_t GetPlatformType() const;

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取平台类型描述 1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @return PlatformTypeDesc 平台类型描述 1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    std::string GetPlatformTypeDesc() const;

                    /**
                     * 判断参数 PlatformTypeDesc 是否已赋值
                     * @return PlatformTypeDesc 是否已赋值
                     * 
                     */
                    bool PlatformTypeDescHasBeenSet() const;

                    /**
                     * 获取1- 在线加固 2-输出工具加固
                     * @return EncryptOpType 1- 在线加固 2-输出工具加固
                     * 
                     */
                    int64_t GetEncryptOpType() const;

                    /**
                     * 判断参数 EncryptOpType 是否已赋值
                     * @return EncryptOpType 是否已赋值
                     * 
                     */
                    bool EncryptOpTypeHasBeenSet() const;

                    /**
                     * 获取1- 在线加固 2-输出工具加固
                     * @return EncryptOpTypeDesc 1- 在线加固 2-输出工具加固
                     * 
                     */
                    std::string GetEncryptOpTypeDesc() const;

                    /**
                     * 判断参数 EncryptOpTypeDesc 是否已赋值
                     * @return EncryptOpTypeDesc 是否已赋值
                     * 
                     */
                    bool EncryptOpTypeDescHasBeenSet() const;

                    /**
                     * 获取订单收费类型枚举值
                     * @return OrderType 订单收费类型枚举值
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取订单收费类型描述
                     * @return OrderTypeDesc 订单收费类型描述
                     * 
                     */
                    std::string GetOrderTypeDesc() const;

                    /**
                     * 判断参数 OrderTypeDesc 是否已赋值
                     * @return OrderTypeDesc 是否已赋值
                     * 
                     */
                    bool OrderTypeDescHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取上次加固策略
                     * @return AndroidPlan 上次加固策略
                     * 
                     */
                    AndroidPlan GetAndroidPlan() const;

                    /**
                     * 判断参数 AndroidPlan 是否已赋值
                     * @return AndroidPlan 是否已赋值
                     * 
                     */
                    bool AndroidPlanHasBeenSet() const;

                    /**
                     * 获取上次小程序加固策略
                     * @return AppletPlan 上次小程序加固策略
                     * 
                     */
                    AppletPlan GetAppletPlan() const;

                    /**
                     * 判断参数 AppletPlan 是否已赋值
                     * @return AppletPlan 是否已赋值
                     * 
                     */
                    bool AppletPlanHasBeenSet() const;

                    /**
                     * 获取上次ios源码混淆加固配置
                     * @return IOSPlan 上次ios源码混淆加固配置
                     * 
                     */
                    IOSPlan GetIOSPlan() const;

                    /**
                     * 判断参数 IOSPlan 是否已赋值
                     * @return IOSPlan 是否已赋值
                     * 
                     */
                    bool IOSPlanHasBeenSet() const;

                    /**
                     * 获取上次sdk加固配置
                     * @return SDKPlan 上次sdk加固配置
                     * 
                     */
                    SDKPlan GetSDKPlan() const;

                    /**
                     * 判断参数 SDKPlan 是否已赋值
                     * @return SDKPlan 是否已赋值
                     * 
                     */
                    bool SDKPlanHasBeenSet() const;

                private:

                    /**
                     * 平台类型整型值  
                     */
                    int64_t m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 平台类型描述 1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     */
                    std::string m_platformTypeDesc;
                    bool m_platformTypeDescHasBeenSet;

                    /**
                     * 1- 在线加固 2-输出工具加固
                     */
                    int64_t m_encryptOpType;
                    bool m_encryptOpTypeHasBeenSet;

                    /**
                     * 1- 在线加固 2-输出工具加固
                     */
                    std::string m_encryptOpTypeDesc;
                    bool m_encryptOpTypeDescHasBeenSet;

                    /**
                     * 订单收费类型枚举值
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 订单收费类型描述
                     */
                    std::string m_orderTypeDesc;
                    bool m_orderTypeDescHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 上次加固策略
                     */
                    AndroidPlan m_androidPlan;
                    bool m_androidPlanHasBeenSet;

                    /**
                     * 上次小程序加固策略
                     */
                    AppletPlan m_appletPlan;
                    bool m_appletPlanHasBeenSet;

                    /**
                     * 上次ios源码混淆加固配置
                     */
                    IOSPlan m_iOSPlan;
                    bool m_iOSPlanHasBeenSet;

                    /**
                     * 上次sdk加固配置
                     */
                    SDKPlan m_sDKPlan;
                    bool m_sDKPlanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTPLANRESPONSE_H_
