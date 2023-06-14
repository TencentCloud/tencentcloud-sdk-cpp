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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPATTRIBUTE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/AutoScalingGroupRange.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群伸缩组属性
                */
                class ClusterAsGroupAttribute : public AbstractModel
                {
                public:
                    ClusterAsGroupAttribute();
                    ~ClusterAsGroupAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取伸缩组ID
                     * @return AutoScalingGroupId 伸缩组ID
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID
                     * @param _autoScalingGroupId 伸缩组ID
                     * 
                     */
                    void SetAutoScalingGroupId(const std::string& _autoScalingGroupId);

                    /**
                     * 判断参数 AutoScalingGroupId 是否已赋值
                     * @return AutoScalingGroupId 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIdHasBeenSet() const;

                    /**
                     * 获取是否开启
                     * @return AutoScalingGroupEnabled 是否开启
                     * 
                     */
                    bool GetAutoScalingGroupEnabled() const;

                    /**
                     * 设置是否开启
                     * @param _autoScalingGroupEnabled 是否开启
                     * 
                     */
                    void SetAutoScalingGroupEnabled(const bool& _autoScalingGroupEnabled);

                    /**
                     * 判断参数 AutoScalingGroupEnabled 是否已赋值
                     * @return AutoScalingGroupEnabled 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupEnabledHasBeenSet() const;

                    /**
                     * 获取伸缩组最大最小实例数
                     * @return AutoScalingGroupRange 伸缩组最大最小实例数
                     * 
                     */
                    AutoScalingGroupRange GetAutoScalingGroupRange() const;

                    /**
                     * 设置伸缩组最大最小实例数
                     * @param _autoScalingGroupRange 伸缩组最大最小实例数
                     * 
                     */
                    void SetAutoScalingGroupRange(const AutoScalingGroupRange& _autoScalingGroupRange);

                    /**
                     * 判断参数 AutoScalingGroupRange 是否已赋值
                     * @return AutoScalingGroupRange 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupRangeHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 是否开启
                     */
                    bool m_autoScalingGroupEnabled;
                    bool m_autoScalingGroupEnabledHasBeenSet;

                    /**
                     * 伸缩组最大最小实例数
                     */
                    AutoScalingGroupRange m_autoScalingGroupRange;
                    bool m_autoScalingGroupRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CLUSTERASGROUPATTRIBUTE_H_
