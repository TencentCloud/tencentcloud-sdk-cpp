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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEHAVIPREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEHAVIPREQUEST_H_

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
                * DeleteHaVip请求参数结构体
                */
                class DeleteHaVipRequest : public AbstractModel
                {
                public:
                    DeleteHaVipRequest();
                    ~DeleteHaVipRequest() = default;
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
                     * 获取<p>忽略删除保护。</p>
                     * @return SkipTerminationProtection <p>忽略删除保护。</p>
                     * 
                     */
                    bool GetSkipTerminationProtection() const;

                    /**
                     * 设置<p>忽略删除保护。</p>
                     * @param _skipTerminationProtection <p>忽略删除保护。</p>
                     * 
                     */
                    void SetSkipTerminationProtection(const bool& _skipTerminationProtection);

                    /**
                     * 判断参数 SkipTerminationProtection 是否已赋值
                     * @return SkipTerminationProtection 是否已赋值
                     * 
                     */
                    bool SkipTerminationProtectionHasBeenSet() const;

                private:

                    /**
                     * <p><code>HAVIP</code>唯一<code>ID</code>，形如：<code>havip-9o233uri</code>。</p>
                     */
                    std::string m_haVipId;
                    bool m_haVipIdHasBeenSet;

                    /**
                     * <p>忽略删除保护。</p>
                     */
                    bool m_skipTerminationProtection;
                    bool m_skipTerminationProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEHAVIPREQUEST_H_
