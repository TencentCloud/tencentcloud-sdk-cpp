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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LOGSEARCHCONTEXT_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LOGSEARCHCONTEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 日志搜索上下文
                */
                class LogSearchContext : public AbstractModel
                {
                public:
                    LogSearchContext();
                    ~LogSearchContext() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取日志条数
                     * @return Limit 日志条数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置日志条数
                     * @param _limit 日志条数
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取日志关键词
                     * @return Keyword 日志关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置日志关键词
                     * @param _keyword 日志关键词
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取日志类型，支持Application和Platform，默认为Application
                     * @return Type 日志类型，支持Application和Platform，默认为Application
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置日志类型，支持Application和Platform，默认为Application
                     * @param _type 日志类型，支持Application和Platform，默认为Application
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 日志条数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 日志关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 日志类型，支持Application和Platform，默认为Application
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LOGSEARCHCONTEXT_H_
