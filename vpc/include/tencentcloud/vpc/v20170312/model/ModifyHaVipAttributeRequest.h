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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHAVIPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHAVIPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyHaVipAttribute请求参数结构体
                */
                class ModifyHaVipAttributeRequest : public AbstractModel
                {
                public:
                    ModifyHaVipAttributeRequest();
                    ~ModifyHaVipAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     * @return HaVipId <p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     * 
                     */
                    std::string GetHaVipId() const;

                    /**
                     * 设置<p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     * @param _haVipId <p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     * 
                     */
                    void SetHaVipId(const std::string& _haVipId);

                    /**
                     * 判断参数 HaVipId 是否已赋值
                     * @return HaVipId 是否已赋值
                     * 
                     */
                    bool HaVipIdHasBeenSet() const;

                    /**
                     * 获取<p><code>HAVIP</code>名称，可任意命名，但不得超过60个字符。</p>
                     * @return HaVipName <p><code>HAVIP</code>名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    std::string GetHaVipName() const;

                    /**
                     * 设置<p><code>HAVIP</code>名称，可任意命名，但不得超过60个字符。</p>
                     * @param _haVipName <p><code>HAVIP</code>名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    void SetHaVipName(const std::string& _haVipName);

                    /**
                     * 判断参数 HaVipName 是否已赋值
                     * @return HaVipName 是否已赋值
                     * 
                     */
                    bool HaVipNameHasBeenSet() const;

                    /**
                     * 获取<p>删除保护。</p>
                     * @return TerminationProtection <p>删除保护。</p>
                     * 
                     */
                    bool GetTerminationProtection() const;

                    /**
                     * 设置<p>删除保护。</p>
                     * @param _terminationProtection <p>删除保护。</p>
                     * 
                     */
                    void SetTerminationProtection(const bool& _terminationProtection);

                    /**
                     * 判断参数 TerminationProtection 是否已赋值
                     * @return TerminationProtection 是否已赋值
                     * 
                     */
                    bool TerminationProtectionHasBeenSet() const;

                    /**
                     * 获取<p>流量保护。</p>
                     * @return TrafficProtection <p>流量保护。</p>
                     * 
                     */
                    bool GetTrafficProtection() const;

                    /**
                     * 设置<p>流量保护。</p>
                     * @param _trafficProtection <p>流量保护。</p>
                     * 
                     */
                    void SetTrafficProtection(const bool& _trafficProtection);

                    /**
                     * 判断参数 TrafficProtection 是否已赋值
                     * @return TrafficProtection 是否已赋值
                     * 
                     */
                    bool TrafficProtectionHasBeenSet() const;

                private:

                    /**
                     * <p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * <p><code>HAVIP</code>名称，可任意命名，但不得超过60个字符。</p>
                     */
                    std::string m_haVipName;
                    bool m_haVipNameHasBeenSet;

                    /**
                     * <p>删除保护。</p>
                     */
                    bool m_terminationProtection;
                    bool m_terminationProtectionHasBeenSet;

                    /**
                     * <p>流量保护。</p>
                     */
                    bool m_trafficProtection;
                    bool m_trafficProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYHAVIPATTRIBUTEREQUEST_H_
