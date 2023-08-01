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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATEORDERINSTANCEREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATEORDERINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateOrderInstance请求参数结构体
                */
                class CreateOrderInstanceRequest : public AbstractModel
                {
                public:
                    CreateOrderInstanceRequest();
                    ~CreateOrderInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台类型枚举值：1-android加固  ；2-ios源码混淆 ； 3-sdk加固 ； 4-applet小程序加固
                     * @return PlatformType 平台类型枚举值：1-android加固  ；2-ios源码混淆 ； 3-sdk加固 ； 4-applet小程序加固
                     * 
                     */
                    int64_t GetPlatformType() const;

                    /**
                     * 设置平台类型枚举值：1-android加固  ；2-ios源码混淆 ； 3-sdk加固 ； 4-applet小程序加固
                     * @param _platformType 平台类型枚举值：1-android加固  ；2-ios源码混淆 ； 3-sdk加固 ； 4-applet小程序加固
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
                     * 获取订单采购类型 1-免费试用 ；2-按年收费 ；3-按次收费
                     * @return OrderType 订单采购类型 1-免费试用 ；2-按年收费 ；3-按次收费
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置订单采购类型 1-免费试用 ；2-按年收费 ；3-按次收费
                     * @param _orderType 订单采购类型 1-免费试用 ；2-按年收费 ；3-按次收费
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
                     * 获取代表应用包名列表，值为单个包名（例如：“a.b.xxx”）或多个包名用逗号隔开(例如：“a.b.xxx,b.c.xxx”)。
当android按年收费加固或android免费试用加固时，该字段要求非空，即PlatformType=1 并且 OrderType=2时，AppPkgNameList必传值。

                     * @return AppPkgNameList 代表应用包名列表，值为单个包名（例如：“a.b.xxx”）或多个包名用逗号隔开(例如：“a.b.xxx,b.c.xxx”)。
当android按年收费加固或android免费试用加固时，该字段要求非空，即PlatformType=1 并且 OrderType=2时，AppPkgNameList必传值。

                     * 
                     */
                    std::string GetAppPkgNameList() const;

                    /**
                     * 设置代表应用包名列表，值为单个包名（例如：“a.b.xxx”）或多个包名用逗号隔开(例如：“a.b.xxx,b.c.xxx”)。
当android按年收费加固或android免费试用加固时，该字段要求非空，即PlatformType=1 并且 OrderType=2时，AppPkgNameList必传值。

                     * @param _appPkgNameList 代表应用包名列表，值为单个包名（例如：“a.b.xxx”）或多个包名用逗号隔开(例如：“a.b.xxx,b.c.xxx”)。
当android按年收费加固或android免费试用加固时，该字段要求非空，即PlatformType=1 并且 OrderType=2时，AppPkgNameList必传值。

                     * 
                     */
                    void SetAppPkgNameList(const std::string& _appPkgNameList);

                    /**
                     * 判断参数 AppPkgNameList 是否已赋值
                     * @return AppPkgNameList 是否已赋值
                     * 
                     */
                    bool AppPkgNameListHasBeenSet() const;

                private:

                    /**
                     * 平台类型枚举值：1-android加固  ；2-ios源码混淆 ； 3-sdk加固 ； 4-applet小程序加固
                     */
                    int64_t m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 订单采购类型 1-免费试用 ；2-按年收费 ；3-按次收费
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 代表应用包名列表，值为单个包名（例如：“a.b.xxx”）或多个包名用逗号隔开(例如：“a.b.xxx,b.c.xxx”)。
当android按年收费加固或android免费试用加固时，该字段要求非空，即PlatformType=1 并且 OrderType=2时，AppPkgNameList必传值。

                     */
                    std::string m_appPkgNameList;
                    bool m_appPkgNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATEORDERINSTANCEREQUEST_H_
