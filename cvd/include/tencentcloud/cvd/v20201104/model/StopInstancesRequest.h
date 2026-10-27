/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_STOPINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_STOPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
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
                     * 获取需要重启的实例id列表
                     * @return InstanceIds 需要重启的实例id列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置需要重启的实例id列表
                     * @param _instanceIds 需要重启的实例id列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例所在区域，保证传入的列表在统一区域，否则报错
                     * @return InstanceRegion 实例所在区域，保证传入的列表在统一区域，否则报错
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置实例所在区域，保证传入的列表在统一区域，否则报错
                     * @param _instanceRegion 实例所在区域，保证传入的列表在统一区域，否则报错
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启
FALSE：表示在正常重启失败后不进行强制重启

默认取值：FALSE。
                     * @return Force 是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启
FALSE：表示在正常重启失败后不进行强制重启

默认取值：FALSE。
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启
FALSE：表示在正常重启失败后不进行强制重启

默认取值：FALSE。
                     * @param _force 是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启
FALSE：表示在正常重启失败后不进行强制重启

默认取值：FALSE。
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 需要重启的实例id列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例所在区域，保证传入的列表在统一区域，否则报错
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 是否在正常重启失败后选择强制重启实例。取值范围：
TRUE：表示在正常重启失败后进行强制重启
FALSE：表示在正常重启失败后不进行强制重启

默认取值：FALSE。
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_STOPINSTANCESREQUEST_H_
