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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 性能保障变配参数
                */
                class SlaUpdateParam : public AbstractModel
                {
                public:
                    SlaUpdateParam();
                    ~SlaUpdateParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取lb的字符串ID
                     * @return LoadBalancerId lb的字符串ID
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置lb的字符串ID
                     * @param LoadBalancerId lb的字符串ID
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取需要变更的性能保障级别
                     * @return SlaType 需要变更的性能保障级别
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置需要变更的性能保障级别
                     * @param SlaType 需要变更的性能保障级别
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     */
                    bool SlaTypeHasBeenSet() const;

                private:

                    /**
                     * lb的字符串ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 需要变更的性能保障级别
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SLAUPDATEPARAM_H_
