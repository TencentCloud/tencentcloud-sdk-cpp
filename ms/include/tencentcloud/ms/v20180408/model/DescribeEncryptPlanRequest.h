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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTPLANREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTPLANREQUEST_H_

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
                * DescribeEncryptPlan请求参数结构体
                */
                class DescribeEncryptPlanRequest : public AbstractModel
                {
                public:
                    DescribeEncryptPlanRequest();
                    ~DescribeEncryptPlanRequest() = default;
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
                     * 获取1-在线加固；2-输出工具
                     * @return EncryptOpType 1-在线加固；2-输出工具
                     * 
                     */
                    int64_t GetEncryptOpType() const;

                    /**
                     * 设置1-在线加固；2-输出工具
                     * @param _encryptOpType 1-在线加固；2-输出工具
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
                     * 获取（条件过滤字段）加固查询时，根据包名查询
                     * @return AppPkgName （条件过滤字段）加固查询时，根据包名查询
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置（条件过滤字段）加固查询时，根据包名查询
                     * @param _appPkgName （条件过滤字段）加固查询时，根据包名查询
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                    /**
                     * 获取（条件过滤字段）加固查询时，根据应用格式查询，枚举值：“apk”、“aab”
                     * @return AppType （条件过滤字段）加固查询时，根据应用格式查询，枚举值：“apk”、“aab”
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置（条件过滤字段）加固查询时，根据应用格式查询，枚举值：“apk”、“aab”
                     * @param _appType （条件过滤字段）加固查询时，根据应用格式查询，枚举值：“apk”、“aab”
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

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
                     * 1-在线加固；2-输出工具
                     */
                    int64_t m_encryptOpType;
                    bool m_encryptOpTypeHasBeenSet;

                    /**
                     * 本次加固使用的资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * （条件过滤字段）加固查询时，根据包名查询
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * （条件过滤字段）加固查询时，根据应用格式查询，枚举值：“apk”、“aab”
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEENCRYPTPLANREQUEST_H_
