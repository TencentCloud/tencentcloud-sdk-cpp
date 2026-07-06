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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYNATACLRULESEQUENCEREQUEST_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYNATACLRULESEQUENCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fwm/v20250611/model/SequenceIndex.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * ModifyNatAclRuleSequence请求参数结构体
                */
                class ModifyNatAclRuleSequenceRequest : public AbstractModel
                {
                public:
                    ModifyNatAclRuleSequenceRequest();
                    ~ModifyNatAclRuleSequenceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则组ID
                     * @return GroupId 规则组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置规则组ID
                     * @param _groupId 规则组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取序号调整列表
                     * @return Sequences 序号调整列表
                     * 
                     */
                    std::vector<SequenceIndex> GetSequences() const;

                    /**
                     * 设置序号调整列表
                     * @param _sequences 序号调整列表
                     * 
                     */
                    void SetSequences(const std::vector<SequenceIndex>& _sequences);

                    /**
                     * 判断参数 Sequences 是否已赋值
                     * @return Sequences 是否已赋值
                     * 
                     */
                    bool SequencesHasBeenSet() const;

                    /**
                     * 获取规则方向：1-入站规则，0-出站规则
                     * @return Direction 规则方向：1-入站规则，0-出站规则
                     * 
                     */
                    int64_t GetDirection() const;

                    /**
                     * 设置规则方向：1-入站规则，0-出站规则
                     * @param _direction 规则方向：1-入站规则，0-出站规则
                     * 
                     */
                    void SetDirection(const int64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * 规则组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 序号调整列表
                     */
                    std::vector<SequenceIndex> m_sequences;
                    bool m_sequencesHasBeenSet;

                    /**
                     * 规则方向：1-入站规则，0-出站规则
                     */
                    int64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_MODIFYNATACLRULESEQUENCEREQUEST_H_
