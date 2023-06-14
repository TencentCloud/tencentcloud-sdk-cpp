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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENRESPONSE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * ModifyToken返回参数结构体
                */
                class ModifyTokenResponse : public AbstractModel
                {
                public:
                    ModifyTokenResponse();
                    ~ModifyTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功设置的Token。
                     * @return MatchToken 成功设置的Token。
                     * 
                     */
                    std::string GetMatchToken() const;

                    /**
                     * 判断参数 MatchToken 是否已赋值
                     * @return MatchToken 是否已赋值
                     * 
                     */
                    bool MatchTokenHasBeenSet() const;

                    /**
                     * 获取当前Token被替换后，GPM将持续推送原Token的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompatibleSpan 当前Token被替换后，GPM将持续推送原Token的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCompatibleSpan() const;

                    /**
                     * 判断参数 CompatibleSpan 是否已赋值
                     * @return CompatibleSpan 是否已赋值
                     * 
                     */
                    bool CompatibleSpanHasBeenSet() const;

                private:

                    /**
                     * 成功设置的Token。
                     */
                    std::string m_matchToken;
                    bool m_matchTokenHasBeenSet;

                    /**
                     * 当前Token被替换后，GPM将持续推送原Token的时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_compatibleSpan;
                    bool m_compatibleSpanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MODIFYTOKENRESPONSE_H_
