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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_IOTAPPLICATION_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_IOTAPPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 应用信息
                */
                class IotApplication : public AbstractModel
                {
                public:
                    IotApplication();
                    ~IotApplication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用 ID
                     * @return IotAppID 应用 ID
                     * 
                     */
                    std::string GetIotAppID() const;

                    /**
                     * 设置应用 ID
                     * @param _iotAppID 应用 ID
                     * 
                     */
                    void SetIotAppID(const std::string& _iotAppID);

                    /**
                     * 判断参数 IotAppID 是否已赋值
                     * @return IotAppID 是否已赋值
                     * 
                     */
                    bool IotAppIDHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return AppName 应用名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称
                     * @param _appName 应用名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取应用说明
                     * @return Description 应用说明
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置应用说明
                     * @param _description 应用说明
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取开发模式
                     * @return DevMode 开发模式
                     * 
                     */
                    int64_t GetDevMode() const;

                    /**
                     * 设置开发模式
                     * @param _devMode 开发模式
                     * 
                     */
                    void SetDevMode(const int64_t& _devMode);

                    /**
                     * 判断参数 DevMode 是否已赋值
                     * @return DevMode 是否已赋值
                     * 
                     */
                    bool DevModeHasBeenSet() const;

                    /**
                     * 获取iOS 平台 AppKey
                     * @return IOSAppKey iOS 平台 AppKey
                     * 
                     */
                    std::string GetIOSAppKey() const;

                    /**
                     * 设置iOS 平台 AppKey
                     * @param _iOSAppKey iOS 平台 AppKey
                     * 
                     */
                    void SetIOSAppKey(const std::string& _iOSAppKey);

                    /**
                     * 判断参数 IOSAppKey 是否已赋值
                     * @return IOSAppKey 是否已赋值
                     * 
                     */
                    bool IOSAppKeyHasBeenSet() const;

                    /**
                     * 获取iOS 平台 AppSecret
                     * @return IOSAppSecret iOS 平台 AppSecret
                     * 
                     */
                    std::string GetIOSAppSecret() const;

                    /**
                     * 设置iOS 平台 AppSecret
                     * @param _iOSAppSecret iOS 平台 AppSecret
                     * 
                     */
                    void SetIOSAppSecret(const std::string& _iOSAppSecret);

                    /**
                     * 判断参数 IOSAppSecret 是否已赋值
                     * @return IOSAppSecret 是否已赋值
                     * 
                     */
                    bool IOSAppSecretHasBeenSet() const;

                    /**
                     * 获取Android 平台 AppKey
                     * @return AndroidAppKey Android 平台 AppKey
                     * 
                     */
                    std::string GetAndroidAppKey() const;

                    /**
                     * 设置Android 平台 AppKey
                     * @param _androidAppKey Android 平台 AppKey
                     * 
                     */
                    void SetAndroidAppKey(const std::string& _androidAppKey);

                    /**
                     * 判断参数 AndroidAppKey 是否已赋值
                     * @return AndroidAppKey 是否已赋值
                     * 
                     */
                    bool AndroidAppKeyHasBeenSet() const;

                    /**
                     * 获取Android 平台 AppSecret
                     * @return AndroidAppSecret Android 平台 AppSecret
                     * 
                     */
                    std::string GetAndroidAppSecret() const;

                    /**
                     * 设置Android 平台 AppSecret
                     * @param _androidAppSecret Android 平台 AppSecret
                     * 
                     */
                    void SetAndroidAppSecret(const std::string& _androidAppSecret);

                    /**
                     * 判断参数 AndroidAppSecret 是否已赋值
                     * @return AndroidAppSecret 是否已赋值
                     * 
                     */
                    bool AndroidAppSecretHasBeenSet() const;

                    /**
                     * 获取绑定的产品列表，数据为：ProdcutID 数组 JSON 序列化后的字符串
                     * @return Products 绑定的产品列表，数据为：ProdcutID 数组 JSON 序列化后的字符串
                     * 
                     */
                    std::string GetProducts() const;

                    /**
                     * 设置绑定的产品列表，数据为：ProdcutID 数组 JSON 序列化后的字符串
                     * @param _products 绑定的产品列表，数据为：ProdcutID 数组 JSON 序列化后的字符串
                     * 
                     */
                    void SetProducts(const std::string& _products);

                    /**
                     * 判断参数 Products 是否已赋值
                     * @return Products 是否已赋值
                     * 
                     */
                    bool ProductsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取信鸽推送APP ID
                     * @return PushSecretID 信鸽推送APP ID
                     * 
                     */
                    std::string GetPushSecretID() const;

                    /**
                     * 设置信鸽推送APP ID
                     * @param _pushSecretID 信鸽推送APP ID
                     * 
                     */
                    void SetPushSecretID(const std::string& _pushSecretID);

                    /**
                     * 判断参数 PushSecretID 是否已赋值
                     * @return PushSecretID 是否已赋值
                     * 
                     */
                    bool PushSecretIDHasBeenSet() const;

                    /**
                     * 获取信鸽推送SECRET KEY
                     * @return PushSecretKey 信鸽推送SECRET KEY
                     * 
                     */
                    std::string GetPushSecretKey() const;

                    /**
                     * 设置信鸽推送SECRET KEY
                     * @param _pushSecretKey 信鸽推送SECRET KEY
                     * 
                     */
                    void SetPushSecretKey(const std::string& _pushSecretKey);

                    /**
                     * 判断参数 PushSecretKey 是否已赋值
                     * @return PushSecretKey 是否已赋值
                     * 
                     */
                    bool PushSecretKeyHasBeenSet() const;

                    /**
                     * 获取iOS平台推送环境
                     * @return PushEnvironment iOS平台推送环境
                     * 
                     */
                    std::string GetPushEnvironment() const;

                    /**
                     * 设置iOS平台推送环境
                     * @param _pushEnvironment iOS平台推送环境
                     * 
                     */
                    void SetPushEnvironment(const std::string& _pushEnvironment);

                    /**
                     * 判断参数 PushEnvironment 是否已赋值
                     * @return PushEnvironment 是否已赋值
                     * 
                     */
                    bool PushEnvironmentHasBeenSet() const;

                    /**
                     * 获取小程序平台 AppKey
                     * @return MiniProgramAppKey 小程序平台 AppKey
                     * 
                     */
                    std::string GetMiniProgramAppKey() const;

                    /**
                     * 设置小程序平台 AppKey
                     * @param _miniProgramAppKey 小程序平台 AppKey
                     * 
                     */
                    void SetMiniProgramAppKey(const std::string& _miniProgramAppKey);

                    /**
                     * 判断参数 MiniProgramAppKey 是否已赋值
                     * @return MiniProgramAppKey 是否已赋值
                     * 
                     */
                    bool MiniProgramAppKeyHasBeenSet() const;

                    /**
                     * 获取小程序平台 AppSecret
                     * @return MiniProgramAppSecret 小程序平台 AppSecret
                     * 
                     */
                    std::string GetMiniProgramAppSecret() const;

                    /**
                     * 设置小程序平台 AppSecret
                     * @param _miniProgramAppSecret 小程序平台 AppSecret
                     * 
                     */
                    void SetMiniProgramAppSecret(const std::string& _miniProgramAppSecret);

                    /**
                     * 判断参数 MiniProgramAppSecret 是否已赋值
                     * @return MiniProgramAppSecret 是否已赋值
                     * 
                     */
                    bool MiniProgramAppSecretHasBeenSet() const;

                    /**
                     * 获取TPNS服务iOS应用AccessID，TPNS全称为腾讯移动推送（Tencent Push Notification Service），详见：https://cloud.tencent.com/document/product/548
                     * @return TPNSiOSAccessID TPNS服务iOS应用AccessID，TPNS全称为腾讯移动推送（Tencent Push Notification Service），详见：https://cloud.tencent.com/document/product/548
                     * 
                     */
                    std::string GetTPNSiOSAccessID() const;

                    /**
                     * 设置TPNS服务iOS应用AccessID，TPNS全称为腾讯移动推送（Tencent Push Notification Service），详见：https://cloud.tencent.com/document/product/548
                     * @param _tPNSiOSAccessID TPNS服务iOS应用AccessID，TPNS全称为腾讯移动推送（Tencent Push Notification Service），详见：https://cloud.tencent.com/document/product/548
                     * 
                     */
                    void SetTPNSiOSAccessID(const std::string& _tPNSiOSAccessID);

                    /**
                     * 判断参数 TPNSiOSAccessID 是否已赋值
                     * @return TPNSiOSAccessID 是否已赋值
                     * 
                     */
                    bool TPNSiOSAccessIDHasBeenSet() const;

                    /**
                     * 获取TPNS服务iOS应用SecretKey
                     * @return TPNSiOSSecretKey TPNS服务iOS应用SecretKey
                     * 
                     */
                    std::string GetTPNSiOSSecretKey() const;

                    /**
                     * 设置TPNS服务iOS应用SecretKey
                     * @param _tPNSiOSSecretKey TPNS服务iOS应用SecretKey
                     * 
                     */
                    void SetTPNSiOSSecretKey(const std::string& _tPNSiOSSecretKey);

                    /**
                     * 判断参数 TPNSiOSSecretKey 是否已赋值
                     * @return TPNSiOSSecretKey 是否已赋值
                     * 
                     */
                    bool TPNSiOSSecretKeyHasBeenSet() const;

                    /**
                     * 获取TPNS服务iOS应用推送环境
                     * @return TPNSiOSPushEnvironment TPNS服务iOS应用推送环境
                     * 
                     */
                    std::string GetTPNSiOSPushEnvironment() const;

                    /**
                     * 设置TPNS服务iOS应用推送环境
                     * @param _tPNSiOSPushEnvironment TPNS服务iOS应用推送环境
                     * 
                     */
                    void SetTPNSiOSPushEnvironment(const std::string& _tPNSiOSPushEnvironment);

                    /**
                     * 判断参数 TPNSiOSPushEnvironment 是否已赋值
                     * @return TPNSiOSPushEnvironment 是否已赋值
                     * 
                     */
                    bool TPNSiOSPushEnvironmentHasBeenSet() const;

                    /**
                     * 获取TPNS服务Android应用AccessID
                     * @return TPNSAndroidAccessID TPNS服务Android应用AccessID
                     * 
                     */
                    std::string GetTPNSAndroidAccessID() const;

                    /**
                     * 设置TPNS服务Android应用AccessID
                     * @param _tPNSAndroidAccessID TPNS服务Android应用AccessID
                     * 
                     */
                    void SetTPNSAndroidAccessID(const std::string& _tPNSAndroidAccessID);

                    /**
                     * 判断参数 TPNSAndroidAccessID 是否已赋值
                     * @return TPNSAndroidAccessID 是否已赋值
                     * 
                     */
                    bool TPNSAndroidAccessIDHasBeenSet() const;

                    /**
                     * 获取TPNS服务Android应用SecretKey
                     * @return TPNSAndroidSecretKey TPNS服务Android应用SecretKey
                     * 
                     */
                    std::string GetTPNSAndroidSecretKey() const;

                    /**
                     * 设置TPNS服务Android应用SecretKey
                     * @param _tPNSAndroidSecretKey TPNS服务Android应用SecretKey
                     * 
                     */
                    void SetTPNSAndroidSecretKey(const std::string& _tPNSAndroidSecretKey);

                    /**
                     * 判断参数 TPNSAndroidSecretKey 是否已赋值
                     * @return TPNSAndroidSecretKey 是否已赋值
                     * 
                     */
                    bool TPNSAndroidSecretKeyHasBeenSet() const;

                    /**
                     * 获取TPNS服务iOS应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     * @return TPNSiOSRegion TPNS服务iOS应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     * 
                     */
                    std::string GetTPNSiOSRegion() const;

                    /**
                     * 设置TPNS服务iOS应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     * @param _tPNSiOSRegion TPNS服务iOS应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     * 
                     */
                    void SetTPNSiOSRegion(const std::string& _tPNSiOSRegion);

                    /**
                     * 判断参数 TPNSiOSRegion 是否已赋值
                     * @return TPNSiOSRegion 是否已赋值
                     * 
                     */
                    bool TPNSiOSRegionHasBeenSet() const;

                    /**
                     * 获取TPNS服务Android应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     * @return TPNSAndroidRegion TPNS服务Android应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     * 
                     */
                    std::string GetTPNSAndroidRegion() const;

                    /**
                     * 设置TPNS服务Android应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     * @param _tPNSAndroidRegion TPNS服务Android应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     * 
                     */
                    void SetTPNSAndroidRegion(const std::string& _tPNSAndroidRegion);

                    /**
                     * 判断参数 TPNSAndroidRegion 是否已赋值
                     * @return TPNSAndroidRegion 是否已赋值
                     * 
                     */
                    bool TPNSAndroidRegionHasBeenSet() const;

                    /**
                     * 获取自主短信配置APPID
                     * @return SelfSmsAppId 自主短信配置APPID
                     * 
                     */
                    std::string GetSelfSmsAppId() const;

                    /**
                     * 设置自主短信配置APPID
                     * @param _selfSmsAppId 自主短信配置APPID
                     * 
                     */
                    void SetSelfSmsAppId(const std::string& _selfSmsAppId);

                    /**
                     * 判断参数 SelfSmsAppId 是否已赋值
                     * @return SelfSmsAppId 是否已赋值
                     * 
                     */
                    bool SelfSmsAppIdHasBeenSet() const;

                    /**
                     * 获取自主短信配置APPKey
                     * @return SelfSmsAppKey 自主短信配置APPKey
                     * 
                     */
                    std::string GetSelfSmsAppKey() const;

                    /**
                     * 设置自主短信配置APPKey
                     * @param _selfSmsAppKey 自主短信配置APPKey
                     * 
                     */
                    void SetSelfSmsAppKey(const std::string& _selfSmsAppKey);

                    /**
                     * 判断参数 SelfSmsAppKey 是否已赋值
                     * @return SelfSmsAppKey 是否已赋值
                     * 
                     */
                    bool SelfSmsAppKeyHasBeenSet() const;

                    /**
                     * 获取自主短信配置签名
                     * @return SelfSmsSign 自主短信配置签名
                     * 
                     */
                    std::string GetSelfSmsSign() const;

                    /**
                     * 设置自主短信配置签名
                     * @param _selfSmsSign 自主短信配置签名
                     * 
                     */
                    void SetSelfSmsSign(const std::string& _selfSmsSign);

                    /**
                     * 判断参数 SelfSmsSign 是否已赋值
                     * @return SelfSmsSign 是否已赋值
                     * 
                     */
                    bool SelfSmsSignHasBeenSet() const;

                    /**
                     * 获取自主短信配置模板ID
                     * @return SelfSmsTemplateId 自主短信配置模板ID
                     * 
                     */
                    int64_t GetSelfSmsTemplateId() const;

                    /**
                     * 设置自主短信配置模板ID
                     * @param _selfSmsTemplateId 自主短信配置模板ID
                     * 
                     */
                    void SetSelfSmsTemplateId(const int64_t& _selfSmsTemplateId);

                    /**
                     * 判断参数 SelfSmsTemplateId 是否已赋值
                     * @return SelfSmsTemplateId 是否已赋值
                     * 
                     */
                    bool SelfSmsTemplateIdHasBeenSet() const;

                    /**
                     * 获取第三方小程序强提醒开关 0：关闭；1：开启
                     * @return WechatNotifyStatus 第三方小程序强提醒开关 0：关闭；1：开启
                     * 
                     */
                    int64_t GetWechatNotifyStatus() const;

                    /**
                     * 设置第三方小程序强提醒开关 0：关闭；1：开启
                     * @param _wechatNotifyStatus 第三方小程序强提醒开关 0：关闭；1：开启
                     * 
                     */
                    void SetWechatNotifyStatus(const int64_t& _wechatNotifyStatus);

                    /**
                     * 判断参数 WechatNotifyStatus 是否已赋值
                     * @return WechatNotifyStatus 是否已赋值
                     * 
                     */
                    bool WechatNotifyStatusHasBeenSet() const;

                    /**
                     * 获取互联互通产品ID列表
                     * @return InterconnectionProducts 互联互通产品ID列表
                     * 
                     */
                    std::string GetInterconnectionProducts() const;

                    /**
                     * 设置互联互通产品ID列表
                     * @param _interconnectionProducts 互联互通产品ID列表
                     * 
                     */
                    void SetInterconnectionProducts(const std::string& _interconnectionProducts);

                    /**
                     * 判断参数 InterconnectionProducts 是否已赋值
                     * @return InterconnectionProducts 是否已赋值
                     * 
                     */
                    bool InterconnectionProductsHasBeenSet() const;

                private:

                    /**
                     * 应用 ID
                     */
                    std::string m_iotAppID;
                    bool m_iotAppIDHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 应用说明
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 开发模式
                     */
                    int64_t m_devMode;
                    bool m_devModeHasBeenSet;

                    /**
                     * iOS 平台 AppKey
                     */
                    std::string m_iOSAppKey;
                    bool m_iOSAppKeyHasBeenSet;

                    /**
                     * iOS 平台 AppSecret
                     */
                    std::string m_iOSAppSecret;
                    bool m_iOSAppSecretHasBeenSet;

                    /**
                     * Android 平台 AppKey
                     */
                    std::string m_androidAppKey;
                    bool m_androidAppKeyHasBeenSet;

                    /**
                     * Android 平台 AppSecret
                     */
                    std::string m_androidAppSecret;
                    bool m_androidAppSecretHasBeenSet;

                    /**
                     * 绑定的产品列表，数据为：ProdcutID 数组 JSON 序列化后的字符串
                     */
                    std::string m_products;
                    bool m_productsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 信鸽推送APP ID
                     */
                    std::string m_pushSecretID;
                    bool m_pushSecretIDHasBeenSet;

                    /**
                     * 信鸽推送SECRET KEY
                     */
                    std::string m_pushSecretKey;
                    bool m_pushSecretKeyHasBeenSet;

                    /**
                     * iOS平台推送环境
                     */
                    std::string m_pushEnvironment;
                    bool m_pushEnvironmentHasBeenSet;

                    /**
                     * 小程序平台 AppKey
                     */
                    std::string m_miniProgramAppKey;
                    bool m_miniProgramAppKeyHasBeenSet;

                    /**
                     * 小程序平台 AppSecret
                     */
                    std::string m_miniProgramAppSecret;
                    bool m_miniProgramAppSecretHasBeenSet;

                    /**
                     * TPNS服务iOS应用AccessID，TPNS全称为腾讯移动推送（Tencent Push Notification Service），详见：https://cloud.tencent.com/document/product/548
                     */
                    std::string m_tPNSiOSAccessID;
                    bool m_tPNSiOSAccessIDHasBeenSet;

                    /**
                     * TPNS服务iOS应用SecretKey
                     */
                    std::string m_tPNSiOSSecretKey;
                    bool m_tPNSiOSSecretKeyHasBeenSet;

                    /**
                     * TPNS服务iOS应用推送环境
                     */
                    std::string m_tPNSiOSPushEnvironment;
                    bool m_tPNSiOSPushEnvironmentHasBeenSet;

                    /**
                     * TPNS服务Android应用AccessID
                     */
                    std::string m_tPNSAndroidAccessID;
                    bool m_tPNSAndroidAccessIDHasBeenSet;

                    /**
                     * TPNS服务Android应用SecretKey
                     */
                    std::string m_tPNSAndroidSecretKey;
                    bool m_tPNSAndroidSecretKeyHasBeenSet;

                    /**
                     * TPNS服务iOS应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     */
                    std::string m_tPNSiOSRegion;
                    bool m_tPNSiOSRegionHasBeenSet;

                    /**
                     * TPNS服务Android应用所属地域，详细说明参见 ModifyApplication 同名入参。
                     */
                    std::string m_tPNSAndroidRegion;
                    bool m_tPNSAndroidRegionHasBeenSet;

                    /**
                     * 自主短信配置APPID
                     */
                    std::string m_selfSmsAppId;
                    bool m_selfSmsAppIdHasBeenSet;

                    /**
                     * 自主短信配置APPKey
                     */
                    std::string m_selfSmsAppKey;
                    bool m_selfSmsAppKeyHasBeenSet;

                    /**
                     * 自主短信配置签名
                     */
                    std::string m_selfSmsSign;
                    bool m_selfSmsSignHasBeenSet;

                    /**
                     * 自主短信配置模板ID
                     */
                    int64_t m_selfSmsTemplateId;
                    bool m_selfSmsTemplateIdHasBeenSet;

                    /**
                     * 第三方小程序强提醒开关 0：关闭；1：开启
                     */
                    int64_t m_wechatNotifyStatus;
                    bool m_wechatNotifyStatusHasBeenSet;

                    /**
                     * 互联互通产品ID列表
                     */
                    std::string m_interconnectionProducts;
                    bool m_interconnectionProductsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_IOTAPPLICATION_H_
