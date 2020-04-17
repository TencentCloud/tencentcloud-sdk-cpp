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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTTAVALUE_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTTAVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 流量反欺诈-虚假TA识别
                */
                class OutputTaValue : public AbstractModel
                {
                public:
                    OutputTaValue();
                    ~OutputTaValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsCheck 是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsCheck() const;

                    /**
                     * 设置是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsCheck 是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsCheck(const int64_t& _isCheck);

                    /**
                     * 判断参数 IsCheck 是否已赋值
                     * @return IsCheck 是否已赋值
                     */
                    bool IsCheckHasBeenSet() const;

                    /**
                     * 获取是否符合[0：不符合；1：符合]
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsMatch 是否符合[0：不符合；1：符合]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsMatch() const;

                    /**
                     * 设置是否符合[0：不符合；1：符合]
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsMatch 是否符合[0：不符合；1：符合]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsMatch(const int64_t& _isMatch);

                    /**
                     * 判断参数 IsMatch 是否已赋值
                     * @return IsMatch 是否已赋值
                     */
                    bool IsMatchHasBeenSet() const;

                private:

                    /**
                     * 是否查得[0：未查得；1：查得]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isCheck;
                    bool m_isCheckHasBeenSet;

                    /**
                     * 是否符合[0：不符合；1：符合]
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isMatch;
                    bool m_isMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_OUTPUTTAVALUE_H_
