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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_ERRORSPANCONF_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_ERRORSPANCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 具体单个配置
                */
                class ErrorSpanConf : public AbstractModel
                {
                public:
                    ErrorSpanConf();
                    ~ErrorSpanConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>错误类型匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorObjectPatterns <p>错误类型匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetErrorObjectPatterns() const;

                    /**
                     * 设置<p>错误类型匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorObjectPatterns <p>错误类型匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorObjectPatterns(const std::vector<std::string>& _errorObjectPatterns);

                    /**
                     * 判断参数 ErrorObjectPatterns 是否已赋值
                     * @return ErrorObjectPatterns 是否已赋值
                     * 
                     */
                    bool ErrorObjectPatternsHasBeenSet() const;

                    /**
                     * 获取<p>错误码匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCodes <p>错误码匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetErrorCodes() const;

                    /**
                     * 设置<p>错误码匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCodes <p>错误码匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCodes(const std::vector<std::string>& _errorCodes);

                    /**
                     * 判断参数 ErrorCodes 是否已赋值
                     * @return ErrorCodes 是否已赋值
                     * 
                     */
                    bool ErrorCodesHasBeenSet() const;

                private:

                    /**
                     * <p>错误类型匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_errorObjectPatterns;
                    bool m_errorObjectPatternsHasBeenSet;

                    /**
                     * <p>错误码匹配规则列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_errorCodes;
                    bool m_errorCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_ERRORSPANCONF_H_
