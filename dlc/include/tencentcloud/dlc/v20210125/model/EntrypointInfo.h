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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ENTRYPOINTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ENTRYPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 入站作业入口（Entrypoint）.
                */
                class EntrypointInfo : public AbstractModel
                {
                public:
                    EntrypointInfo();
                    ~EntrypointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>SQL 语句文本，须为 Base64 编码的 UTF-8 文本。仅 SPARK_SQL 模式可传且必填（解码后 ≤1MB）；SPARK_BATCH 模式禁止传。</p>
                     * @return Statement <p>SQL 语句文本，须为 Base64 编码的 UTF-8 文本。仅 SPARK_SQL 模式可传且必填（解码后 ≤1MB）；SPARK_BATCH 模式禁止传。</p>
                     * 
                     */
                    std::string GetStatement() const;

                    /**
                     * 设置<p>SQL 语句文本，须为 Base64 编码的 UTF-8 文本。仅 SPARK_SQL 模式可传且必填（解码后 ≤1MB）；SPARK_BATCH 模式禁止传。</p>
                     * @param _statement <p>SQL 语句文本，须为 Base64 编码的 UTF-8 文本。仅 SPARK_SQL 模式可传且必填（解码后 ≤1MB）；SPARK_BATCH 模式禁止传。</p>
                     * 
                     */
                    void SetStatement(const std::string& _statement);

                    /**
                     * 判断参数 Statement 是否已赋值
                     * @return Statement 是否已赋值
                     * 
                     */
                    bool StatementHasBeenSet() const;

                    /**
                     * 获取<p>作业文件路径（JAR/Python），须匹配配置的路径前缀白名单。以 .py 结尾判定为 Python 入口（EntryPoint 禁传），否则为 JAR 入口（EntryPoint 必填）。</p>
                     * @return EntryFile <p>作业文件路径（JAR/Python），须匹配配置的路径前缀白名单。以 .py 结尾判定为 Python 入口（EntryPoint 禁传），否则为 JAR 入口（EntryPoint 必填）。</p>
                     * 
                     */
                    std::string GetEntryFile() const;

                    /**
                     * 设置<p>作业文件路径（JAR/Python），须匹配配置的路径前缀白名单。以 .py 结尾判定为 Python 入口（EntryPoint 禁传），否则为 JAR 入口（EntryPoint 必填）。</p>
                     * @param _entryFile <p>作业文件路径（JAR/Python），须匹配配置的路径前缀白名单。以 .py 结尾判定为 Python 入口（EntryPoint 禁传），否则为 JAR 入口（EntryPoint 必填）。</p>
                     * 
                     */
                    void SetEntryFile(const std::string& _entryFile);

                    /**
                     * 判断参数 EntryFile 是否已赋值
                     * @return EntryFile 是否已赋值
                     * 
                     */
                    bool EntryFileHasBeenSet() const;

                    /**
                     * 获取<p>入口类名（main class 全限定名）。JAR 入口（EntryFile 非 .py 结尾）必填；Python 入口（.py 结尾）禁传；SPARK_SQL 模式禁止传。</p>
                     * @return EntryPoint <p>入口类名（main class 全限定名）。JAR 入口（EntryFile 非 .py 结尾）必填；Python 入口（.py 结尾）禁传；SPARK_SQL 模式禁止传。</p>
                     * 
                     */
                    std::string GetEntryPoint() const;

                    /**
                     * 设置<p>入口类名（main class 全限定名）。JAR 入口（EntryFile 非 .py 结尾）必填；Python 入口（.py 结尾）禁传；SPARK_SQL 模式禁止传。</p>
                     * @param _entryPoint <p>入口类名（main class 全限定名）。JAR 入口（EntryFile 非 .py 结尾）必填；Python 入口（.py 结尾）禁传；SPARK_SQL 模式禁止传。</p>
                     * 
                     */
                    void SetEntryPoint(const std::string& _entryPoint);

                    /**
                     * 判断参数 EntryPoint 是否已赋值
                     * @return EntryPoint 是否已赋值
                     * 
                     */
                    bool EntryPointHasBeenSet() const;

                    /**
                     * 获取<p>主方法参数列表（JSON 数组字符串），仅 SPARK_BATCH 模式可传；SPARK_SQL 模式禁止传。</p>
                     * @return MainArgs <p>主方法参数列表（JSON 数组字符串），仅 SPARK_BATCH 模式可传；SPARK_SQL 模式禁止传。</p>
                     * 
                     */
                    std::string GetMainArgs() const;

                    /**
                     * 设置<p>主方法参数列表（JSON 数组字符串），仅 SPARK_BATCH 模式可传；SPARK_SQL 模式禁止传。</p>
                     * @param _mainArgs <p>主方法参数列表（JSON 数组字符串），仅 SPARK_BATCH 模式可传；SPARK_SQL 模式禁止传。</p>
                     * 
                     */
                    void SetMainArgs(const std::string& _mainArgs);

                    /**
                     * 判断参数 MainArgs 是否已赋值
                     * @return MainArgs 是否已赋值
                     * 
                     */
                    bool MainArgsHasBeenSet() const;

                private:

                    /**
                     * <p>SQL 语句文本，须为 Base64 编码的 UTF-8 文本。仅 SPARK_SQL 模式可传且必填（解码后 ≤1MB）；SPARK_BATCH 模式禁止传。</p>
                     */
                    std::string m_statement;
                    bool m_statementHasBeenSet;

                    /**
                     * <p>作业文件路径（JAR/Python），须匹配配置的路径前缀白名单。以 .py 结尾判定为 Python 入口（EntryPoint 禁传），否则为 JAR 入口（EntryPoint 必填）。</p>
                     */
                    std::string m_entryFile;
                    bool m_entryFileHasBeenSet;

                    /**
                     * <p>入口类名（main class 全限定名）。JAR 入口（EntryFile 非 .py 结尾）必填；Python 入口（.py 结尾）禁传；SPARK_SQL 模式禁止传。</p>
                     */
                    std::string m_entryPoint;
                    bool m_entryPointHasBeenSet;

                    /**
                     * <p>主方法参数列表（JSON 数组字符串），仅 SPARK_BATCH 模式可传；SPARK_SQL 模式禁止传。</p>
                     */
                    std::string m_mainArgs;
                    bool m_mainArgsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ENTRYPOINTINFO_H_
