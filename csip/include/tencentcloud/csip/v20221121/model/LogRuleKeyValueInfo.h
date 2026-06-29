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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGRULEKEYVALUEINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGRULEKEYVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LogKeyValueInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 日志键值索引规则信息
                */
                class LogRuleKeyValueInfo : public AbstractModel
                {
                public:
                    LogRuleKeyValueInfo();
                    ~LogRuleKeyValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>大小写敏感</p>
                     * @return CaseSensitive <p>大小写敏感</p>
                     * 
                     */
                    bool GetCaseSensitive() const;

                    /**
                     * 设置<p>大小写敏感</p>
                     * @param _caseSensitive <p>大小写敏感</p>
                     * 
                     */
                    void SetCaseSensitive(const bool& _caseSensitive);

                    /**
                     * 判断参数 CaseSensitive 是否已赋值
                     * @return CaseSensitive 是否已赋值
                     * 
                     */
                    bool CaseSensitiveHasBeenSet() const;

                    /**
                     * 获取<p>键值索引信息</p>
                     * @return KeyValues <p>键值索引信息</p>
                     * 
                     */
                    std::vector<LogKeyValueInfo> GetKeyValues() const;

                    /**
                     * 设置<p>键值索引信息</p>
                     * @param _keyValues <p>键值索引信息</p>
                     * 
                     */
                    void SetKeyValues(const std::vector<LogKeyValueInfo>& _keyValues);

                    /**
                     * 判断参数 KeyValues 是否已赋值
                     * @return KeyValues 是否已赋值
                     * 
                     */
                    bool KeyValuesHasBeenSet() const;

                private:

                    /**
                     * <p>大小写敏感</p>
                     */
                    bool m_caseSensitive;
                    bool m_caseSensitiveHasBeenSet;

                    /**
                     * <p>键值索引信息</p>
                     */
                    std::vector<LogKeyValueInfo> m_keyValues;
                    bool m_keyValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGRULEKEYVALUEINFO_H_
