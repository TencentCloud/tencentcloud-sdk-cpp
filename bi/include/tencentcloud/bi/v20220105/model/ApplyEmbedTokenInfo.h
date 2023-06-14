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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDTOKENINFO_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDTOKENINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 申请Token延期
                */
                class ApplyEmbedTokenInfo : public AbstractModel
                {
                public:
                    ApplyEmbedTokenInfo();
                    ~ApplyEmbedTokenInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取申请结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 申请结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置申请结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 申请结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 申请结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_APPLYEMBEDTOKENINFO_H_
