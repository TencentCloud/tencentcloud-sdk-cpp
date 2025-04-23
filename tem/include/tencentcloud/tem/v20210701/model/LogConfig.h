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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIG_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/LogConfigExtractRule.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 日志收集配置
                */
                class LogConfig : public AbstractModel
                {
                public:
                    LogConfig();
                    ~LogConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取收集类型，container_stdout 为标准输出；container_file 为文件；
                     * @return InputType 收集类型，container_stdout 为标准输出；container_file 为文件；
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置收集类型，container_stdout 为标准输出；container_file 为文件；
                     * @param _inputType 收集类型，container_stdout 为标准输出；container_file 为文件；
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取日志集 ID
                     * @return LogsetId 日志集 ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集 ID
                     * @param _logsetId 日志集 ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志主题 ID
                     * @return TopicId 日志主题 ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题 ID
                     * @param _topicId 日志主题 ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志提取模式，minimalist_log 为单行全文；multiline_log 为多行全文；  fullregex_log 为单行正则； multiline_fullregex_log 为多行正则； json_log 为 json；
                     * @return LogType 日志提取模式，minimalist_log 为单行全文；multiline_log 为多行全文；  fullregex_log 为单行正则； multiline_fullregex_log 为多行正则； json_log 为 json；
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志提取模式，minimalist_log 为单行全文；multiline_log 为多行全文；  fullregex_log 为单行正则； multiline_fullregex_log 为多行正则； json_log 为 json；
                     * @param _logType 日志提取模式，minimalist_log 为单行全文；multiline_log 为多行全文；  fullregex_log 为单行正则； multiline_fullregex_log 为多行正则； json_log 为 json；
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
                     * 获取首行正则表达式，当 LogType 为多行全文、多行正则时生效
                     * @return BeginningRegex 首行正则表达式，当 LogType 为多行全文、多行正则时生效
                     * 
                     */
                    std::string GetBeginningRegex() const;

                    /**
                     * 设置首行正则表达式，当 LogType 为多行全文、多行正则时生效
                     * @param _beginningRegex 首行正则表达式，当 LogType 为多行全文、多行正则时生效
                     * 
                     */
                    void SetBeginningRegex(const std::string& _beginningRegex);

                    /**
                     * 判断参数 BeginningRegex 是否已赋值
                     * @return BeginningRegex 是否已赋值
                     * 
                     */
                    bool BeginningRegexHasBeenSet() const;

                    /**
                     * 获取收集文件目录，当 InputType=container_file 时生效
                     * @return LogPath 收集文件目录，当 InputType=container_file 时生效
                     * 
                     */
                    std::string GetLogPath() const;

                    /**
                     * 设置收集文件目录，当 InputType=container_file 时生效
                     * @param _logPath 收集文件目录，当 InputType=container_file 时生效
                     * 
                     */
                    void SetLogPath(const std::string& _logPath);

                    /**
                     * 判断参数 LogPath 是否已赋值
                     * @return LogPath 是否已赋值
                     * 
                     */
                    bool LogPathHasBeenSet() const;

                    /**
                     * 获取收集文件名模式，当 InputType=container_file 时生效
                     * @return FilePattern 收集文件名模式，当 InputType=container_file 时生效
                     * 
                     */
                    std::string GetFilePattern() const;

                    /**
                     * 设置收集文件名模式，当 InputType=container_file 时生效
                     * @param _filePattern 收集文件名模式，当 InputType=container_file 时生效
                     * 
                     */
                    void SetFilePattern(const std::string& _filePattern);

                    /**
                     * 判断参数 FilePattern 是否已赋值
                     * @return FilePattern 是否已赋值
                     * 
                     */
                    bool FilePatternHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateDate 创建时间
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间
                     * @param _createDate 创建时间
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return ModifyDate 更新时间
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置更新时间
                     * @param _modifyDate 更新时间
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取应用 ID
                     * @return ApplicationId 应用 ID
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用 ID
                     * @param _applicationId 应用 ID
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取应用名
                     * @return ApplicationName 应用名
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置应用名
                     * @param _applicationName 应用名
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取导出规则
                     * @return ExtractRule 导出规则
                     * 
                     */
                    LogConfigExtractRule GetExtractRule() const;

                    /**
                     * 设置导出规则
                     * @param _extractRule 导出规则
                     * 
                     */
                    void SetExtractRule(const LogConfigExtractRule& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     * 
                     */
                    bool ExtractRuleHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 收集类型，container_stdout 为标准输出；container_file 为文件；
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 日志集 ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志主题 ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志提取模式，minimalist_log 为单行全文；multiline_log 为多行全文；  fullregex_log 为单行正则； multiline_fullregex_log 为多行正则； json_log 为 json；
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 首行正则表达式，当 LogType 为多行全文、多行正则时生效
                     */
                    std::string m_beginningRegex;
                    bool m_beginningRegexHasBeenSet;

                    /**
                     * 收集文件目录，当 InputType=container_file 时生效
                     */
                    std::string m_logPath;
                    bool m_logPathHasBeenSet;

                    /**
                     * 收集文件名模式，当 InputType=container_file 时生效
                     */
                    std::string m_filePattern;
                    bool m_filePatternHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * 应用 ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 应用名
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * 导出规则
                     */
                    LogConfigExtractRule m_extractRule;
                    bool m_extractRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_LOGCONFIG_H_
