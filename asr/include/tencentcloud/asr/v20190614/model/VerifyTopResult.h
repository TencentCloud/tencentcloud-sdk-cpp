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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_VERIFYTOPRESULT_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_VERIFYTOPRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/VerifyTop.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 说话人验证1:N返回结果
                */
                class VerifyTopResult : public AbstractModel
                {
                public:
                    VerifyTopResult();
                    ~VerifyTopResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对比打分结果，按照打分降序排列返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyTops 对比打分结果，按照打分降序排列返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VerifyTop> GetVerifyTops() const;

                    /**
                     * 设置对比打分结果，按照打分降序排列返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _verifyTops 对比打分结果，按照打分降序排列返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVerifyTops(const std::vector<VerifyTop>& _verifyTops);

                    /**
                     * 判断参数 VerifyTops 是否已赋值
                     * @return VerifyTops 是否已赋值
                     * 
                     */
                    bool VerifyTopsHasBeenSet() const;

                private:

                    /**
                     * 对比打分结果，按照打分降序排列返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VerifyTop> m_verifyTops;
                    bool m_verifyTopsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_VERIFYTOPRESULT_H_
