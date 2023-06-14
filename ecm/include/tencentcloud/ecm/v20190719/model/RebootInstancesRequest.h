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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_REBOOTINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_REBOOTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * RebootInstances请求参数结构体
                */
                class RebootInstancesRequest : public AbstractModel
                {
                public:
                    RebootInstancesRequest();
                    ~RebootInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待重启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * @return InstanceIdSet 待重启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置待重启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * @param _instanceIdSet 待重启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启；
FALSE：表示在正常重启失败后不进行强制重启；
默认取值：FALSE。
                     * @return ForceReboot 是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启；
FALSE：表示在正常重启失败后不进行强制重启；
默认取值：FALSE。
                     * 
                     */
                    bool GetForceReboot() const;

                    /**
                     * 设置是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启；
FALSE：表示在正常重启失败后不进行强制重启；
默认取值：FALSE。
                     * @param _forceReboot 是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启；
FALSE：表示在正常重启失败后不进行强制重启；
默认取值：FALSE。
                     * 
                     */
                    void SetForceReboot(const bool& _forceReboot);

                    /**
                     * 判断参数 ForceReboot 是否已赋值
                     * @return ForceReboot 是否已赋值
                     * 
                     */
                    bool ForceRebootHasBeenSet() const;

                    /**
                     * 获取关机类型。取值范围：
SOFT：表示软关机
HARD：表示硬关机
SOFT_FIRST：表示优先软关机，失败再执行硬关机

默认取值：SOFT。
                     * @return StopType 关机类型。取值范围：
SOFT：表示软关机
HARD：表示硬关机
SOFT_FIRST：表示优先软关机，失败再执行硬关机

默认取值：SOFT。
                     * 
                     */
                    std::string GetStopType() const;

                    /**
                     * 设置关机类型。取值范围：
SOFT：表示软关机
HARD：表示硬关机
SOFT_FIRST：表示优先软关机，失败再执行硬关机

默认取值：SOFT。
                     * @param _stopType 关机类型。取值范围：
SOFT：表示软关机
HARD：表示硬关机
SOFT_FIRST：表示优先软关机，失败再执行硬关机

默认取值：SOFT。
                     * 
                     */
                    void SetStopType(const std::string& _stopType);

                    /**
                     * 判断参数 StopType 是否已赋值
                     * @return StopType 是否已赋值
                     * 
                     */
                    bool StopTypeHasBeenSet() const;

                private:

                    /**
                     * 待重启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启；
FALSE：表示在正常重启失败后不进行强制重启；
默认取值：FALSE。
                     */
                    bool m_forceReboot;
                    bool m_forceRebootHasBeenSet;

                    /**
                     * 关机类型。取值范围：
SOFT：表示软关机
HARD：表示硬关机
SOFT_FIRST：表示优先软关机，失败再执行硬关机

默认取值：SOFT。
                     */
                    std::string m_stopType;
                    bool m_stopTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_REBOOTINSTANCESREQUEST_H_
