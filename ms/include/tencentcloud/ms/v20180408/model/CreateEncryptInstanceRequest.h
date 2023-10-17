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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATEENCRYPTINSTANCEREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATEENCRYPTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AndroidAppInfo.h>
#include <tencentcloud/ms/v20180408/model/AndroidPlan.h>
#include <tencentcloud/ms/v20180408/model/AppletInfo.h>
#include <tencentcloud/ms/v20180408/model/IOSInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateEncryptInstance请求参数结构体
                */
                class CreateEncryptInstanceRequest : public AbstractModel
                {
                public:
                    CreateEncryptInstanceRequest();
                    ~CreateEncryptInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @return PlatformType 平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    int64_t GetPlatformType() const;

                    /**
                     * 设置平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @param _platformType 平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * 
                     */
                    void SetPlatformType(const int64_t& _platformType);

                    /**
                     * 判断参数 PlatformType 是否已赋值
                     * @return PlatformType 是否已赋值
                     * 
                     */
                    bool PlatformTypeHasBeenSet() const;

                    /**
                     * 获取订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * @return OrderType 订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * @param _orderType 订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取1-在线加固、  2-输出工具加固
                     * @return EncryptOpType 1-在线加固、  2-输出工具加固
                     * 
                     */
                    int64_t GetEncryptOpType() const;

                    /**
                     * 设置1-在线加固、  2-输出工具加固
                     * @param _encryptOpType 1-在线加固、  2-输出工具加固
                     * 
                     */
                    void SetEncryptOpType(const int64_t& _encryptOpType);

                    /**
                     * 判断参数 EncryptOpType 是否已赋值
                     * @return EncryptOpType 是否已赋值
                     * 
                     */
                    bool EncryptOpTypeHasBeenSet() const;

                    /**
                     * 获取本次加固使用的资源id
                     * @return ResourceId 本次加固使用的资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置本次加固使用的资源id
                     * @param _resourceId 本次加固使用的资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取渠道合作android加固App信息 
                     * @return AndroidAppInfo 渠道合作android加固App信息 
                     * 
                     */
                    AndroidAppInfo GetAndroidAppInfo() const;

                    /**
                     * 设置渠道合作android加固App信息 
                     * @param _androidAppInfo 渠道合作android加固App信息 
                     * 
                     */
                    void SetAndroidAppInfo(const AndroidAppInfo& _androidAppInfo);

                    /**
                     * 判断参数 AndroidAppInfo 是否已赋值
                     * @return AndroidAppInfo 是否已赋值
                     * 
                     */
                    bool AndroidAppInfoHasBeenSet() const;

                    /**
                     * 获取渠道合作android加固策略信息
                     * @return AndroidPlan 渠道合作android加固策略信息
                     * 
                     */
                    AndroidPlan GetAndroidPlan() const;

                    /**
                     * 设置渠道合作android加固策略信息
                     * @param _androidPlan 渠道合作android加固策略信息
                     * 
                     */
                    void SetAndroidPlan(const AndroidPlan& _androidPlan);

                    /**
                     * 判断参数 AndroidPlan 是否已赋值
                     * @return AndroidPlan 是否已赋值
                     * 
                     */
                    bool AndroidPlanHasBeenSet() const;

                    /**
                     * 获取小程序加固信息
                     * @return AppletInfo 小程序加固信息
                     * 
                     */
                    AppletInfo GetAppletInfo() const;

                    /**
                     * 设置小程序加固信息
                     * @param _appletInfo 小程序加固信息
                     * 
                     */
                    void SetAppletInfo(const AppletInfo& _appletInfo);

                    /**
                     * 判断参数 AppletInfo 是否已赋值
                     * @return AppletInfo 是否已赋值
                     * 
                     */
                    bool AppletInfoHasBeenSet() const;

                    /**
                     * 获取iOS混淆信息
                     * @return IOSInfo iOS混淆信息
                     * 
                     */
                    IOSInfo GetIOSInfo() const;

                    /**
                     * 设置iOS混淆信息
                     * @param _iOSInfo iOS混淆信息
                     * 
                     */
                    void SetIOSInfo(const IOSInfo& _iOSInfo);

                    /**
                     * 判断参数 IOSInfo 是否已赋值
                     * @return IOSInfo 是否已赋值
                     * 
                     */
                    bool IOSInfoHasBeenSet() const;

                private:

                    /**
                     * 平台类型  1.android加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     */
                    int64_t m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 订单采购类型 1-免费试用 2-按年收费 3-按次收费
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 1-在线加固、  2-输出工具加固
                     */
                    int64_t m_encryptOpType;
                    bool m_encryptOpTypeHasBeenSet;

                    /**
                     * 本次加固使用的资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 渠道合作android加固App信息 
                     */
                    AndroidAppInfo m_androidAppInfo;
                    bool m_androidAppInfoHasBeenSet;

                    /**
                     * 渠道合作android加固策略信息
                     */
                    AndroidPlan m_androidPlan;
                    bool m_androidPlanHasBeenSet;

                    /**
                     * 小程序加固信息
                     */
                    AppletInfo m_appletInfo;
                    bool m_appletInfoHasBeenSet;

                    /**
                     * iOS混淆信息
                     */
                    IOSInfo m_iOSInfo;
                    bool m_iOSInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATEENCRYPTINSTANCEREQUEST_H_
