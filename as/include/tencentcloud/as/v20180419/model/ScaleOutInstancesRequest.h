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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_SCALEOUTINSTANCESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_SCALEOUTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ScaleOutInstances请求参数结构体
                */
                class ScaleOutInstancesRequest : public AbstractModel
                {
                public:
                    ScaleOutInstancesRequest();
                    ~ScaleOutInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组ID。
                     * @return AutoScalingGroupId 伸缩组ID。
                     * 
                     */
                    std::string GetAutoScalingGroupId() const;

                    /**
                     * 设置伸缩组ID。
                     * @param _autoScalingGroupId 伸缩组ID。
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
                     * 获取希望扩容的实例数量。
                     * @return ScaleOutNumber 希望扩容的实例数量。
                     * 
                     */
                    uint64_t GetScaleOutNumber() const;

                    /**
                     * 设置希望扩容的实例数量。
                     * @param _scaleOutNumber 希望扩容的实例数量。
                     * 
                     */
                    void SetScaleOutNumber(const uint64_t& _scaleOutNumber);

                    /**
                     * 判断参数 ScaleOutNumber 是否已赋值
                     * @return ScaleOutNumber 是否已赋值
                     * 
                     */
                    bool ScaleOutNumberHasBeenSet() const;

                private:

                    /**
                     * 伸缩组ID。
                     */
                    std::string m_autoScalingGroupId;
                    bool m_autoScalingGroupIdHasBeenSet;

                    /**
                     * 希望扩容的实例数量。
                     */
                    uint64_t m_scaleOutNumber;
                    bool m_scaleOutNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_SCALEOUTINSTANCESREQUEST_H_
