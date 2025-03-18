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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYAPPLICATIONREQUEST_H_

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
                * ModifyApplication请求参数结构体
                */
                class ModifyApplicationRequest : public AbstractModel
                {
                public:
                    ModifyApplicationRequest();
                    ~ModifyApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return IotAppID 应用ID
                     * 
                     */
                    std::string GetIotAppID() const;

                    /**
                     * 设置应用ID
                     * @param _iotAppID 应用ID
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
                     * 获取关联的产品
                     * @return Products 关联的产品
                     * 
                     */
                    std::string GetProducts() const;

                    /**
                     * 设置关联的产品
                     * @param _products 关联的产品
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
                     * 获取TPNS服务iOS应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
                     * @return TPNSiOSRegion TPNS服务iOS应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
                     * 
                     */
                    std::string GetTPNSiOSRegion() const;

                    /**
                     * 设置TPNS服务iOS应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
                     * @param _tPNSiOSRegion TPNS服务iOS应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
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
                     * 获取TPNS服务Android应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
                     * @return TPNSAndroidRegion TPNS服务Android应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
                     * 
                     */
                    std::string GetTPNSAndroidRegion() const;

                    /**
                     * 设置TPNS服务Android应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
                     * @param _tPNSAndroidRegion TPNS服务Android应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
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
                     * 获取TurnKey小程序托管
                     * @return TurnKeySwitch TurnKey小程序托管
                     * 
                     */
                    int64_t GetTurnKeySwitch() const;

                    /**
                     * 设置TurnKey小程序托管
                     * @param _turnKeySwitch TurnKey小程序托管
                     * 
                     */
                    void SetTurnKeySwitch(const int64_t& _turnKeySwitch);

                    /**
                     * 判断参数 TurnKeySwitch 是否已赋值
                     * @return TurnKeySwitch 是否已赋值
                     * 
                     */
                    bool TurnKeySwitchHasBeenSet() const;

                private:

                    /**
                     * 应用ID
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
                     * 关联的产品
                     */
                    std::string m_products;
                    bool m_productsHasBeenSet;

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
                     * TPNS服务iOS应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
                     */
                    std::string m_tPNSiOSRegion;
                    bool m_tPNSiOSRegionHasBeenSet;

                    /**
                     * TPNS服务Android应用所属地域，广州：ap-guangzhou，上海：ap-shanghai，中国香港：ap-hongkong，新加坡：ap-singapore。
                     */
                    std::string m_tPNSAndroidRegion;
                    bool m_tPNSAndroidRegionHasBeenSet;

                    /**
                     * TurnKey小程序托管
                     */
                    int64_t m_turnKeySwitch;
                    bool m_turnKeySwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYAPPLICATIONREQUEST_H_
