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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESTROYRESOURCEINSTANCESRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESTROYRESOURCEINSTANCESRESPONSE_H_

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
                * DestroyResourceInstances返回参数结构体
                */
                class DestroyResourceInstancesResponse : public AbstractModel
                {
                public:
                    DestroyResourceInstancesResponse();
                    ~DestroyResourceInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


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
                     * 获取返回状态
                     * @return Result 返回状态
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取平台类型  1.android安卓加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     * @return PlatformType 平台类型  1.android安卓加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
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
                     * 获取订单采购类型 1-免费试用 2-按年收费 3-按次收费  
                     * @return OrderType 订单采购类型 1-免费试用 2-按年收费 3-按次收费  
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 返回状态
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 平台类型  1.android安卓加固   2.ios源码混淆  3.sdk加固  4.applet小程序加固
                     */
                    int64_t m_platformType;
                    bool m_platformTypeHasBeenSet;

                    /**
                     * 订单采购类型 1-免费试用 2-按年收费 3-按次收费  
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESTROYRESOURCEINSTANCESRESPONSE_H_
