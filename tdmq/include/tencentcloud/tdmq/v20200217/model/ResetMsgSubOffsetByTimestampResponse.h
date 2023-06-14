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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ResetMsgSubOffsetByTimestamp返回参数结构体
                */
                class ResetMsgSubOffsetByTimestampResponse : public AbstractModel
                {
                public:
                    ResetMsgSubOffsetByTimestampResponse();
                    ~ResetMsgSubOffsetByTimestampResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 结果。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 结果。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RESETMSGSUBOFFSETBYTIMESTAMPRESPONSE_H_
