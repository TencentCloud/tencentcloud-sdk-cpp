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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_STOPINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_STOPINSTANCESREQUEST_H_

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
                * StopInstances请求参数结构体
                */
                class StopInstancesRequest : public AbstractModel
                {
                public:
                    StopInstancesRequest();
                    ~StopInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要关机的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * @return InstanceIdSet 需要关机的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置需要关机的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * @param _instanceIdSet 需要关机的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
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
                     * 获取是否在正常关闭失败后选择强制关闭实例，默认为false，即否。
                     * @return ForceStop 是否在正常关闭失败后选择强制关闭实例，默认为false，即否。
                     * 
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置是否在正常关闭失败后选择强制关闭实例，默认为false，即否。
                     * @param _forceStop 是否在正常关闭失败后选择强制关闭实例，默认为false，即否。
                     * 
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * 
                     */
                    bool ForceStopHasBeenSet() const;

                    /**
                     * 获取实例的关闭模式。取值范围：
SOFT_FIRST：表示在正常关闭失败后进行强制关闭;
HARD：直接强制关闭;
SOFT：仅软关机；
默认为SOFT。
                     * @return StopType 实例的关闭模式。取值范围：
SOFT_FIRST：表示在正常关闭失败后进行强制关闭;
HARD：直接强制关闭;
SOFT：仅软关机；
默认为SOFT。
                     * 
                     */
                    std::string GetStopType() const;

                    /**
                     * 设置实例的关闭模式。取值范围：
SOFT_FIRST：表示在正常关闭失败后进行强制关闭;
HARD：直接强制关闭;
SOFT：仅软关机；
默认为SOFT。
                     * @param _stopType 实例的关闭模式。取值范围：
SOFT_FIRST：表示在正常关闭失败后进行强制关闭;
HARD：直接强制关闭;
SOFT：仅软关机；
默认为SOFT。
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
                     * 需要关机的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 是否在正常关闭失败后选择强制关闭实例，默认为false，即否。
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                    /**
                     * 实例的关闭模式。取值范围：
SOFT_FIRST：表示在正常关闭失败后进行强制关闭;
HARD：直接强制关闭;
SOFT：仅软关机；
默认为SOFT。
                     */
                    std::string m_stopType;
                    bool m_stopTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_STOPINSTANCESREQUEST_H_
