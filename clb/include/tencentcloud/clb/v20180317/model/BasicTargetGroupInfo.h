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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_BASICTARGETGROUPINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_BASICTARGETGROUPINFO_H_

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
                * 监听器或者转发规则绑定的目标组基本信息
                */
                class BasicTargetGroupInfo : public AbstractModel
                {
                public:
                    BasicTargetGroupInfo();
                    ~BasicTargetGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标组ID
                     * @return TargetGroupId 目标组ID
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组ID
                     * @param _targetGroupId 目标组ID
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取目标组名称
                     * @return TargetGroupName 目标组名称
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组名称
                     * @param _targetGroupName 目标组名称
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取目标组权重
                     * @return Weight 目标组权重
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置目标组权重
                     * @param _weight 目标组权重
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 目标组ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 目标组名称
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * 目标组权重
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_BASICTARGETGROUPINFO_H_
