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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_ENCRYPTRESULTS_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_ENCRYPTRESULTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/AndroidResult.h>
#include <tencentcloud/ms/v20180408/model/IOSResult.h>
#include <tencentcloud/ms/v20180408/model/SDKResult.h>
#include <tencentcloud/ms/v20180408/model/AppletResult.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 渠道合作加固结果信息
                */
                class EncryptResults : public AbstractModel
                {
                public:
                    EncryptResults();
                    ~EncryptResults() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台类型枚举值  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     * @return PlatformType 平台类型枚举值  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     * 
                     */
                    int64_t GetPlatformType() const;

                    /**
                     * 设置平台类型枚举值  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     * @param _platformType 平台类型枚举值  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
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
                     * 获取平台类型描述  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     * @return PlatformDesc 平台类型描述  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     * 
                     */
                    std::string GetPlatformDesc() const;

                    /**
                     * 设置平台类型描述  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     * @param _platformDesc 平台类型描述  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     * 
                     */
                    void SetPlatformDesc(const std::string& _platformDesc);

                    /**
                     * 判断参数 PlatformDesc 是否已赋值
                     * @return PlatformDesc 是否已赋值
                     * 
                     */
                    bool PlatformDescHasBeenSet() const;

                    /**
                     * 获取订单采购类型枚举值， 1-免费试用 2-按年收费 3-按次收费
                     * @return OrderType 订单采购类型枚举值， 1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置订单采购类型枚举值， 1-免费试用 2-按年收费 3-按次收费
                     * @param _orderType 订单采购类型枚举值， 1-免费试用 2-按年收费 3-按次收费
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
                     * 获取订单采购类型 描述：1-免费试用 2-按年收费 3-按次收费
                     * @return OrderTypeDesc 订单采购类型 描述：1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    std::string GetOrderTypeDesc() const;

                    /**
                     * 设置订单采购类型 描述：1-免费试用 2-按年收费 3-按次收费
                     * @param _orderTypeDesc 订单采购类型 描述：1-免费试用 2-按年收费 3-按次收费
                     * 
                     */
                    void SetOrderTypeDesc(const std::string& _orderTypeDesc);

                    /**
                     * 判断参数 OrderTypeDesc 是否已赋值
                     * @return OrderTypeDesc 是否已赋值
                     * 
                     */
                    bool OrderTypeDescHasBeenSet() const;

                    /**
                     * 获取枚举值：1-在线加固 或 2-输出工具加固
                     * @return EncryptOpType 枚举值：1-在线加固 或 2-输出工具加固
                     * 
                     */
                    int64_t GetEncryptOpType() const;

                    /**
                     * 设置枚举值：1-在线加固 或 2-输出工具加固
                     * @param _encryptOpType 枚举值：1-在线加固 或 2-输出工具加固
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
                     * 获取描述：1-在线加固 或 2-输出工具加固
                     * @return EncryptOpTypeDesc 描述：1-在线加固 或 2-输出工具加固
                     * 
                     */
                    std::string GetEncryptOpTypeDesc() const;

                    /**
                     * 设置描述：1-在线加固 或 2-输出工具加固
                     * @param _encryptOpTypeDesc 描述：1-在线加固 或 2-输出工具加固
                     * 
                     */
                    void SetEncryptOpTypeDesc(const std::string& _encryptOpTypeDesc);

                    /**
                     * 判断参数 EncryptOpTypeDesc 是否已赋值
                     * @return EncryptOpTypeDesc 是否已赋值
                     * 
                     */
                    bool EncryptOpTypeDescHasBeenSet() const;

                    /**
                     * 获取与当前任务关联的资源Id
                     * @return ResourceId 与当前任务关联的资源Id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置与当前任务关联的资源Id
                     * @param _resourceId 与当前任务关联的资源Id
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
                     * 获取与当前任务关联的订单Id
                     * @return OrderId 与当前任务关联的订单Id
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置与当前任务关联的订单Id
                     * @param _orderId 与当前任务关联的订单Id
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取对应PlatformType平台类型值   1-android加固结果
                     * @return AndroidResult 对应PlatformType平台类型值   1-android加固结果
                     * 
                     */
                    AndroidResult GetAndroidResult() const;

                    /**
                     * 设置对应PlatformType平台类型值   1-android加固结果
                     * @param _androidResult 对应PlatformType平台类型值   1-android加固结果
                     * 
                     */
                    void SetAndroidResult(const AndroidResult& _androidResult);

                    /**
                     * 判断参数 AndroidResult 是否已赋值
                     * @return AndroidResult 是否已赋值
                     * 
                     */
                    bool AndroidResultHasBeenSet() const;

                    /**
                     * 获取对应PlatformType平台类型值   2-ios源码混淆加固结果
                     * @return IOSResult 对应PlatformType平台类型值   2-ios源码混淆加固结果
                     * 
                     */
                    IOSResult GetIOSResult() const;

                    /**
                     * 设置对应PlatformType平台类型值   2-ios源码混淆加固结果
                     * @param _iOSResult 对应PlatformType平台类型值   2-ios源码混淆加固结果
                     * 
                     */
                    void SetIOSResult(const IOSResult& _iOSResult);

                    /**
                     * 判断参数 IOSResult 是否已赋值
                     * @return IOSResult 是否已赋值
                     * 
                     */
                    bool IOSResultHasBeenSet() const;

                    /**
                     * 获取对应PlatformType平台类型值   3-sdk加固结果
                     * @return SDKResult 对应PlatformType平台类型值   3-sdk加固结果
                     * 
                     */
                    SDKResult GetSDKResult() const;

                    /**
                     * 设置对应PlatformType平台类型值   3-sdk加固结果
                     * @param _sDKResult 对应PlatformType平台类型值   3-sdk加固结果
                     * 
                     */
                    void SetSDKResult(const SDKResult& _sDKResult);

                    /**
                     * 判断参数 SDKResult 是否已赋值
                     * @return SDKResult 是否已赋值
                     * 
                     */
                    bool SDKResultHasBeenSet() const;

                    /**
                     * 获取对应PlatformType平台类型值   4-applet小程序加固结果
                     * @return AppletResult 对应PlatformType平台类型值   4-applet小程序加固结果
                     * 
                     */
                    AppletResult GetAppletResult() const;

                    /**
                     * 设置对应PlatformType平台类型值   4-applet小程序加固结果
                     * @param _appletResult 对应PlatformType平台类型值   4-applet小程序加固结果
                     * 
                     */
                    void SetAppletResult(const AppletResult& _appletResult);

                    /**
                     * 判断参数 AppletResult 是否已赋值
                     * @return AppletResult 是否已赋值
                     * 
                     */
                    bool AppletResultHasBeenSet() const;

                private:

                    /**
                     * 平台类型枚举值  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     */
                    int64_t m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 平台类型描述  1-android加固   2-ios源码混淆  3-sdk加固  4-applet小程序加固
                     */
                    std::string m_platformDesc;
                    bool m_platformDescHasBeenSet;

                    /**
                     * 订单采购类型枚举值， 1-免费试用 2-按年收费 3-按次收费
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 订单采购类型 描述：1-免费试用 2-按年收费 3-按次收费
                     */
                    std::string m_orderTypeDesc;
                    bool m_orderTypeDescHasBeenSet;

                    /**
                     * 枚举值：1-在线加固 或 2-输出工具加固
                     */
                    int64_t m_encryptOpType;
                    bool m_encryptOpTypeHasBeenSet;

                    /**
                     * 描述：1-在线加固 或 2-输出工具加固
                     */
                    std::string m_encryptOpTypeDesc;
                    bool m_encryptOpTypeDescHasBeenSet;

                    /**
                     * 与当前任务关联的资源Id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 与当前任务关联的订单Id
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 对应PlatformType平台类型值   1-android加固结果
                     */
                    AndroidResult m_androidResult;
                    bool m_androidResultHasBeenSet;

                    /**
                     * 对应PlatformType平台类型值   2-ios源码混淆加固结果
                     */
                    IOSResult m_iOSResult;
                    bool m_iOSResultHasBeenSet;

                    /**
                     * 对应PlatformType平台类型值   3-sdk加固结果
                     */
                    SDKResult m_sDKResult;
                    bool m_sDKResultHasBeenSet;

                    /**
                     * 对应PlatformType平台类型值   4-applet小程序加固结果
                     */
                    AppletResult m_appletResult;
                    bool m_appletResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_ENCRYPTRESULTS_H_
