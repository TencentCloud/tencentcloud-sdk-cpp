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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SUPPORTIPV6DETAIL_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SUPPORTIPV6DETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 实例支持IPv6详情描述。
                */
                class SupportIpv6Detail : public AbstractModel
                {
                public:
                    SupportIpv6Detail();
                    ~SupportIpv6Detail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否支持开启IPv6。
                     * @return IsSupport 是否支持开启IPv6。
                     * 
                     */
                    bool GetIsSupport() const;

                    /**
                     * 设置是否支持开启IPv6。
                     * @param _isSupport 是否支持开启IPv6。
                     * 
                     */
                    void SetIsSupport(const bool& _isSupport);

                    /**
                     * 判断参数 IsSupport 是否已赋值
                     * @return IsSupport 是否已赋值
                     * 
                     */
                    bool IsSupportHasBeenSet() const;

                    /**
                     * 获取详情。

当IsSupport为True，Detail枚举值为:

EFFECTIVE_IMMEDIATELY: 立即生效

EFFECTIVE_AFTER_REBOOT: 分配过程需要开关机，用户需备份数据

 

当IsSupport为False，Detail枚举值为:

HAD_BEEN_ASSIGNED: 已分配IPv6地址

REGION_NOT_SUPPORT: 地域不支持

BLUEPRINT_NOT_SUPPORT: 镜像不支持

BUNDLE_INSTANCE_NOT_SUPPORT: 套餐实例不支持

BUNDLE_BANDWIDTH_NOT_SUPPORT: 套餐带宽不支持
                     * @return Detail 详情。

当IsSupport为True，Detail枚举值为:

EFFECTIVE_IMMEDIATELY: 立即生效

EFFECTIVE_AFTER_REBOOT: 分配过程需要开关机，用户需备份数据

 

当IsSupport为False，Detail枚举值为:

HAD_BEEN_ASSIGNED: 已分配IPv6地址

REGION_NOT_SUPPORT: 地域不支持

BLUEPRINT_NOT_SUPPORT: 镜像不支持

BUNDLE_INSTANCE_NOT_SUPPORT: 套餐实例不支持

BUNDLE_BANDWIDTH_NOT_SUPPORT: 套餐带宽不支持
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置详情。

当IsSupport为True，Detail枚举值为:

EFFECTIVE_IMMEDIATELY: 立即生效

EFFECTIVE_AFTER_REBOOT: 分配过程需要开关机，用户需备份数据

 

当IsSupport为False，Detail枚举值为:

HAD_BEEN_ASSIGNED: 已分配IPv6地址

REGION_NOT_SUPPORT: 地域不支持

BLUEPRINT_NOT_SUPPORT: 镜像不支持

BUNDLE_INSTANCE_NOT_SUPPORT: 套餐实例不支持

BUNDLE_BANDWIDTH_NOT_SUPPORT: 套餐带宽不支持
                     * @param _detail 详情。

当IsSupport为True，Detail枚举值为:

EFFECTIVE_IMMEDIATELY: 立即生效

EFFECTIVE_AFTER_REBOOT: 分配过程需要开关机，用户需备份数据

 

当IsSupport为False，Detail枚举值为:

HAD_BEEN_ASSIGNED: 已分配IPv6地址

REGION_NOT_SUPPORT: 地域不支持

BLUEPRINT_NOT_SUPPORT: 镜像不支持

BUNDLE_INSTANCE_NOT_SUPPORT: 套餐实例不支持

BUNDLE_BANDWIDTH_NOT_SUPPORT: 套餐带宽不支持
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取提示信息。
                     * @return Message 提示信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置提示信息。
                     * @param _message 提示信息。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 是否支持开启IPv6。
                     */
                    bool m_isSupport;
                    bool m_isSupportHasBeenSet;

                    /**
                     * 详情。

当IsSupport为True，Detail枚举值为:

EFFECTIVE_IMMEDIATELY: 立即生效

EFFECTIVE_AFTER_REBOOT: 分配过程需要开关机，用户需备份数据

 

当IsSupport为False，Detail枚举值为:

HAD_BEEN_ASSIGNED: 已分配IPv6地址

REGION_NOT_SUPPORT: 地域不支持

BLUEPRINT_NOT_SUPPORT: 镜像不支持

BUNDLE_INSTANCE_NOT_SUPPORT: 套餐实例不支持

BUNDLE_BANDWIDTH_NOT_SUPPORT: 套餐带宽不支持
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 提示信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SUPPORTIPV6DETAIL_H_
