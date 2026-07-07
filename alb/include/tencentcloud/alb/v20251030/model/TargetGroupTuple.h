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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPTUPLE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPTUPLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 目标组基础配置
                */
                class TargetGroupTuple : public AbstractModel
                {
                public:
                    TargetGroupTuple();
                    ~TargetGroupTuple() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * @return TargetGroupId 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     * @param _targetGroupId 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
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
                     * 获取权重，取值范围：[0, 100]，默认为 10。
                     * @return Weight 权重，取值范围：[0, 100]，默认为 10。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置权重，取值范围：[0, 100]，默认为 10。
                     * @param _weight 权重，取值范围：[0, 100]，默认为 10。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 目标组 ID，格式为 lbtg- 后接 8 位字母数字。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 权重，取值范围：[0, 100]，默认为 10。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_TARGETGROUPTUPLE_H_
