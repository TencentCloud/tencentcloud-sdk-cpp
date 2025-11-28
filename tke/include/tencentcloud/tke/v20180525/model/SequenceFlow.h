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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SEQUENCEFLOW_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SEQUENCEFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SequenceTag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 发布序列步骤
                */
                class SequenceFlow : public AbstractModel
                {
                public:
                    SequenceFlow();
                    ~SequenceFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布序列步骤标签
                     * @return Tags 发布序列步骤标签
                     * 
                     */
                    std::vector<SequenceTag> GetTags() const;

                    /**
                     * 设置发布序列步骤标签
                     * @param _tags 发布序列步骤标签
                     * 
                     */
                    void SetTags(const std::vector<SequenceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取等待时间（秒）
                     * @return SoakTime 等待时间（秒）
                     * 
                     */
                    int64_t GetSoakTime() const;

                    /**
                     * 设置等待时间（秒）
                     * @param _soakTime 等待时间（秒）
                     * 
                     */
                    void SetSoakTime(const int64_t& _soakTime);

                    /**
                     * 判断参数 SoakTime 是否已赋值
                     * @return SoakTime 是否已赋值
                     * 
                     */
                    bool SoakTimeHasBeenSet() const;

                private:

                    /**
                     * 发布序列步骤标签
                     */
                    std::vector<SequenceTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 等待时间（秒）
                     */
                    int64_t m_soakTime;
                    bool m_soakTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SEQUENCEFLOW_H_
