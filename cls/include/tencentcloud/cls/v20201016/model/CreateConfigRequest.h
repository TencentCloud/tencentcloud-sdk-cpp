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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ExtractRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/ExcludePathInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateConfig请求参数结构体
                */
                class CreateConfigRequest : public AbstractModel
                {
                public:
                    CreateConfigRequest();
                    ~CreateConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>采集配置名称</p><ul><li>名称种不得包含特殊字符｜</li><li>名称最长255字符，超过截断</li></ul>
                     * @return Name <p>采集配置名称</p><ul><li>名称种不得包含特殊字符｜</li><li>名称最长255字符，超过截断</li></ul>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>采集配置名称</p><ul><li>名称种不得包含特殊字符｜</li><li>名称最长255字符，超过截断</li></ul>
                     * @param _name <p>采集配置名称</p><ul><li>名称种不得包含特殊字符｜</li><li>名称最长255字符，超过截断</li></ul>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>采集配置所属日志主题ID即TopicId</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @return Output <p>采集配置所属日志主题ID即TopicId</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置<p>采集配置所属日志主题ID即TopicId</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * @param _output <p>采集配置所属日志主题ID即TopicId</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>日志采集路径，包含文件名，支持多个路径，多个路径之间英文逗号分隔，文件采集情况下必填</p>
                     * @return Path <p>日志采集路径，包含文件名，支持多个路径，多个路径之间英文逗号分隔，文件采集情况下必填</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>日志采集路径，包含文件名，支持多个路径，多个路径之间英文逗号分隔，文件采集情况下必填</p>
                     * @param _path <p>日志采集路径，包含文件名，支持多个路径，多个路径之间英文逗号分隔，文件采集情况下必填</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>采集的日志类型，默认为minimalist_log。支持以下类型：</p><ul><li>json_log代表：JSON-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17419">使用 JSON 提取模式采集日志</a>）；</li><li>delimiter_log代表：分隔符-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17420">使用分隔符提取模式采集日志</a>）；</li><li>minimalist_log代表：单行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17421">使用单行全文提取模式采集日志</a>）；</li><li>fullregex_log代表：单行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52365">使用单行-完全正则提取模式采集日志</a>）；</li><li>multiline_log代表：多行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17422">使用多行全文提取模式采集日志</a>）；</li><li>multiline_fullregex_log代表：多行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52366">使用多行-完全正则提取模式采集日志</a>）；</li><li>user_define_log代表：组合解析（适用于多格式嵌套的日志，详见<a href="https://cloud.tencent.com/document/product/614/61310">使用组合解析提取模式采集日志</a>）；</li><li>service_syslog代表：syslog 采集（详见<a href="https://cloud.tencent.com/document/product/614/81454">采集 Syslog</a>）；</li><li>windows_event_log代表：Windows事件日志（详见<a href="https://cloud.tencent.com/document/product/614/96678">采集 Windows 事件日志</a>）。</li><li>journal_log代表：journal日志采集</li></ul>
                     * @return LogType <p>采集的日志类型，默认为minimalist_log。支持以下类型：</p><ul><li>json_log代表：JSON-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17419">使用 JSON 提取模式采集日志</a>）；</li><li>delimiter_log代表：分隔符-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17420">使用分隔符提取模式采集日志</a>）；</li><li>minimalist_log代表：单行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17421">使用单行全文提取模式采集日志</a>）；</li><li>fullregex_log代表：单行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52365">使用单行-完全正则提取模式采集日志</a>）；</li><li>multiline_log代表：多行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17422">使用多行全文提取模式采集日志</a>）；</li><li>multiline_fullregex_log代表：多行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52366">使用多行-完全正则提取模式采集日志</a>）；</li><li>user_define_log代表：组合解析（适用于多格式嵌套的日志，详见<a href="https://cloud.tencent.com/document/product/614/61310">使用组合解析提取模式采集日志</a>）；</li><li>service_syslog代表：syslog 采集（详见<a href="https://cloud.tencent.com/document/product/614/81454">采集 Syslog</a>）；</li><li>windows_event_log代表：Windows事件日志（详见<a href="https://cloud.tencent.com/document/product/614/96678">采集 Windows 事件日志</a>）。</li><li>journal_log代表：journal日志采集</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>采集的日志类型，默认为minimalist_log。支持以下类型：</p><ul><li>json_log代表：JSON-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17419">使用 JSON 提取模式采集日志</a>）；</li><li>delimiter_log代表：分隔符-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17420">使用分隔符提取模式采集日志</a>）；</li><li>minimalist_log代表：单行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17421">使用单行全文提取模式采集日志</a>）；</li><li>fullregex_log代表：单行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52365">使用单行-完全正则提取模式采集日志</a>）；</li><li>multiline_log代表：多行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17422">使用多行全文提取模式采集日志</a>）；</li><li>multiline_fullregex_log代表：多行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52366">使用多行-完全正则提取模式采集日志</a>）；</li><li>user_define_log代表：组合解析（适用于多格式嵌套的日志，详见<a href="https://cloud.tencent.com/document/product/614/61310">使用组合解析提取模式采集日志</a>）；</li><li>service_syslog代表：syslog 采集（详见<a href="https://cloud.tencent.com/document/product/614/81454">采集 Syslog</a>）；</li><li>windows_event_log代表：Windows事件日志（详见<a href="https://cloud.tencent.com/document/product/614/96678">采集 Windows 事件日志</a>）。</li><li>journal_log代表：journal日志采集</li></ul>
                     * @param _logType <p>采集的日志类型，默认为minimalist_log。支持以下类型：</p><ul><li>json_log代表：JSON-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17419">使用 JSON 提取模式采集日志</a>）；</li><li>delimiter_log代表：分隔符-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17420">使用分隔符提取模式采集日志</a>）；</li><li>minimalist_log代表：单行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17421">使用单行全文提取模式采集日志</a>）；</li><li>fullregex_log代表：单行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52365">使用单行-完全正则提取模式采集日志</a>）；</li><li>multiline_log代表：多行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17422">使用多行全文提取模式采集日志</a>）；</li><li>multiline_fullregex_log代表：多行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52366">使用多行-完全正则提取模式采集日志</a>）；</li><li>user_define_log代表：组合解析（适用于多格式嵌套的日志，详见<a href="https://cloud.tencent.com/document/product/614/61310">使用组合解析提取模式采集日志</a>）；</li><li>service_syslog代表：syslog 采集（详见<a href="https://cloud.tencent.com/document/product/614/81454">采集 Syslog</a>）；</li><li>windows_event_log代表：Windows事件日志（详见<a href="https://cloud.tencent.com/document/product/614/96678">采集 Windows 事件日志</a>）。</li><li>journal_log代表：journal日志采集</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * @return ExtractRule <p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * 
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置<p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * @param _extractRule <p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     * 
                     */
                    void SetExtractRule(const ExtractRuleInfo& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     * 
                     */
                    bool ExtractRuleHasBeenSet() const;

                    /**
                     * 获取<p>采集黑名单路径列表</p>
                     * @return ExcludePaths <p>采集黑名单路径列表</p>
                     * 
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置<p>采集黑名单路径列表</p>
                     * @param _excludePaths <p>采集黑名单路径列表</p>
                     * 
                     */
                    void SetExcludePaths(const std::vector<ExcludePathInfo>& _excludePaths);

                    /**
                     * 判断参数 ExcludePaths 是否已赋值
                     * @return ExcludePaths 是否已赋值
                     * 
                     */
                    bool ExcludePathsHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义采集规则，Json格式序列化的字符串。当LogType为user_define_log时，必填。</p>
                     * @return UserDefineRule <p>用户自定义采集规则，Json格式序列化的字符串。当LogType为user_define_log时，必填。</p>
                     * 
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置<p>用户自定义采集规则，Json格式序列化的字符串。当LogType为user_define_log时，必填。</p>
                     * @param _userDefineRule <p>用户自定义采集规则，Json格式序列化的字符串。当LogType为user_define_log时，必填。</p>
                     * 
                     */
                    void SetUserDefineRule(const std::string& _userDefineRule);

                    /**
                     * 判断参数 UserDefineRule 是否已赋值
                     * @return UserDefineRule 是否已赋值
                     * 
                     */
                    bool UserDefineRuleHasBeenSet() const;

                    /**
                     * 获取<p>高级采集配置。 Json字符串， Key/Value定义为如下：</p><ul><li>ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时</li><li>ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数</li><li>ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false<br>样例：<br><code>{\&quot;ClsAgentFileTimeout\&quot;:0,\&quot;ClsAgentMaxDepth\&quot;:10,\&quot;ClsAgentParseFailMerge\&quot;:true}</code></li></ul><p>控制台默认占位值：<code>{\&quot;ClsAgentDefault\&quot;:0}</code></p>
                     * @return AdvancedConfig <p>高级采集配置。 Json字符串， Key/Value定义为如下：</p><ul><li>ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时</li><li>ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数</li><li>ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false<br>样例：<br><code>{\&quot;ClsAgentFileTimeout\&quot;:0,\&quot;ClsAgentMaxDepth\&quot;:10,\&quot;ClsAgentParseFailMerge\&quot;:true}</code></li></ul><p>控制台默认占位值：<code>{\&quot;ClsAgentDefault\&quot;:0}</code></p>
                     * 
                     */
                    std::string GetAdvancedConfig() const;

                    /**
                     * 设置<p>高级采集配置。 Json字符串， Key/Value定义为如下：</p><ul><li>ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时</li><li>ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数</li><li>ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false<br>样例：<br><code>{\&quot;ClsAgentFileTimeout\&quot;:0,\&quot;ClsAgentMaxDepth\&quot;:10,\&quot;ClsAgentParseFailMerge\&quot;:true}</code></li></ul><p>控制台默认占位值：<code>{\&quot;ClsAgentDefault\&quot;:0}</code></p>
                     * @param _advancedConfig <p>高级采集配置。 Json字符串， Key/Value定义为如下：</p><ul><li>ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时</li><li>ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数</li><li>ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false<br>样例：<br><code>{\&quot;ClsAgentFileTimeout\&quot;:0,\&quot;ClsAgentMaxDepth\&quot;:10,\&quot;ClsAgentParseFailMerge\&quot;:true}</code></li></ul><p>控制台默认占位值：<code>{\&quot;ClsAgentDefault\&quot;:0}</code></p>
                     * 
                     */
                    void SetAdvancedConfig(const std::string& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

                    /**
                     * 获取<p>日志输入类型（<span style="color:red; font-weight:bold">注：windows场景必填且仅支持file和windows_event类型</span>）</p><ul><li>file: 文件类型采集</li><li>windows_event：windows事件采集</li><li>syslog：系统日志采集</li></ul>
                     * @return InputType <p>日志输入类型（<span style="color:red; font-weight:bold">注：windows场景必填且仅支持file和windows_event类型</span>）</p><ul><li>file: 文件类型采集</li><li>windows_event：windows事件采集</li><li>syslog：系统日志采集</li></ul>
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置<p>日志输入类型（<span style="color:red; font-weight:bold">注：windows场景必填且仅支持file和windows_event类型</span>）</p><ul><li>file: 文件类型采集</li><li>windows_event：windows事件采集</li><li>syslog：系统日志采集</li></ul>
                     * @param _inputType <p>日志输入类型（<span style="color:red; font-weight:bold">注：windows场景必填且仅支持file和windows_event类型</span>）</p><ul><li>file: 文件类型采集</li><li>windows_event：windows事件采集</li><li>syslog：系统日志采集</li></ul>
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                private:

                    /**
                     * <p>采集配置名称</p><ul><li>名称种不得包含特殊字符｜</li><li>名称最长255字符，超过截断</li></ul>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>采集配置所属日志主题ID即TopicId</p><ul><li>通过<a href="https://cloud.tencent.com/document/product/614/56454">获取日志主题列表</a>获取日志主题Id。</li></ul>
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>日志采集路径，包含文件名，支持多个路径，多个路径之间英文逗号分隔，文件采集情况下必填</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>采集的日志类型，默认为minimalist_log。支持以下类型：</p><ul><li>json_log代表：JSON-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17419">使用 JSON 提取模式采集日志</a>）；</li><li>delimiter_log代表：分隔符-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17420">使用分隔符提取模式采集日志</a>）；</li><li>minimalist_log代表：单行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17421">使用单行全文提取模式采集日志</a>）；</li><li>fullregex_log代表：单行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52365">使用单行-完全正则提取模式采集日志</a>）；</li><li>multiline_log代表：多行全文-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/17422">使用多行全文提取模式采集日志</a>）；</li><li>multiline_fullregex_log代表：多行完全正则-文件日志（详见<a href="https://cloud.tencent.com/document/product/614/52366">使用多行-完全正则提取模式采集日志</a>）；</li><li>user_define_log代表：组合解析（适用于多格式嵌套的日志，详见<a href="https://cloud.tencent.com/document/product/614/61310">使用组合解析提取模式采集日志</a>）；</li><li>service_syslog代表：syslog 采集（详见<a href="https://cloud.tencent.com/document/product/614/81454">采集 Syslog</a>）；</li><li>windows_event_log代表：Windows事件日志（详见<a href="https://cloud.tencent.com/document/product/614/96678">采集 Windows 事件日志</a>）。</li><li>journal_log代表：journal日志采集</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>提取规则，如果设置了ExtractRule，则必须设置LogType</p>
                     */
                    ExtractRuleInfo m_extractRule;
                    bool m_extractRuleHasBeenSet;

                    /**
                     * <p>采集黑名单路径列表</p>
                     */
                    std::vector<ExcludePathInfo> m_excludePaths;
                    bool m_excludePathsHasBeenSet;

                    /**
                     * <p>用户自定义采集规则，Json格式序列化的字符串。当LogType为user_define_log时，必填。</p>
                     */
                    std::string m_userDefineRule;
                    bool m_userDefineRuleHasBeenSet;

                    /**
                     * <p>高级采集配置。 Json字符串， Key/Value定义为如下：</p><ul><li>ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时</li><li>ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数</li><li>ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false<br>样例：<br><code>{\&quot;ClsAgentFileTimeout\&quot;:0,\&quot;ClsAgentMaxDepth\&quot;:10,\&quot;ClsAgentParseFailMerge\&quot;:true}</code></li></ul><p>控制台默认占位值：<code>{\&quot;ClsAgentDefault\&quot;:0}</code></p>
                     */
                    std::string m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                    /**
                     * <p>日志输入类型（<span style="color:red; font-weight:bold">注：windows场景必填且仅支持file和windows_event类型</span>）</p><ul><li>file: 文件类型采集</li><li>windows_event：windows事件采集</li><li>syslog：系统日志采集</li></ul>
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGREQUEST_H_
