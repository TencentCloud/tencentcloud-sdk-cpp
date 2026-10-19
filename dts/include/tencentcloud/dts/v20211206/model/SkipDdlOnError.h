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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SKIPDDLONERROR_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SKIPDDLONERROR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 跳过报错DDL的策略
                */
                class SkipDdlOnError : public AbstractModel
                {
                public:
                    SkipDdlOnError();
                    ~SkipDdlOnError() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>按表名跳过，支持精确 &quot;db.tbl&quot;、库通配 &quot;db.*&quot;、表通配 &quot;<em>.tbl&quot;、全通配 &quot;</em>&quot;</p>
                     * @return Tables <p>按表名跳过，支持精确 &quot;db.tbl&quot;、库通配 &quot;db.*&quot;、表通配 &quot;<em>.tbl&quot;、全通配 &quot;</em>&quot;</p>
                     * 
                     */
                    std::vector<std::string> GetTables() const;

                    /**
                     * 设置<p>按表名跳过，支持精确 &quot;db.tbl&quot;、库通配 &quot;db.*&quot;、表通配 &quot;<em>.tbl&quot;、全通配 &quot;</em>&quot;</p>
                     * @param _tables <p>按表名跳过，支持精确 &quot;db.tbl&quot;、库通配 &quot;db.*&quot;、表通配 &quot;<em>.tbl&quot;、全通配 &quot;</em>&quot;</p>
                     * 
                     */
                    void SetTables(const std::vector<std::string>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取<p>按 MySQL 错误码（1~65535）跳过</p><p>取值范围：[1, 65535]</p>
                     * @return ErrorCodes <p>按 MySQL 错误码（1~65535）跳过</p><p>取值范围：[1, 65535]</p>
                     * 
                     */
                    std::vector<int64_t> GetErrorCodes() const;

                    /**
                     * 设置<p>按 MySQL 错误码（1~65535）跳过</p><p>取值范围：[1, 65535]</p>
                     * @param _errorCodes <p>按 MySQL 错误码（1~65535）跳过</p><p>取值范围：[1, 65535]</p>
                     * 
                     */
                    void SetErrorCodes(const std::vector<int64_t>& _errorCodes);

                    /**
                     * 判断参数 ErrorCodes 是否已赋值
                     * @return ErrorCodes 是否已赋值
                     * 
                     */
                    bool ErrorCodesHasBeenSet() const;

                private:

                    /**
                     * <p>按表名跳过，支持精确 &quot;db.tbl&quot;、库通配 &quot;db.*&quot;、表通配 &quot;<em>.tbl&quot;、全通配 &quot;</em>&quot;</p>
                     */
                    std::vector<std::string> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * <p>按 MySQL 错误码（1~65535）跳过</p><p>取值范围：[1, 65535]</p>
                     */
                    std::vector<int64_t> m_errorCodes;
                    bool m_errorCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SKIPDDLONERROR_H_
