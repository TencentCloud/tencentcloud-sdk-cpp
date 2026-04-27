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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/DefaultParameterConf.h>
#include <tencentcloud/tat/v20201028/model/Tag.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreateCommand请求参数结构体
                */
                class CreateCommandRequest : public AbstractModel
                {
                public:
                    CreateCommandRequest();
                    ~CreateCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>命令名称。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超60个字节。</p>
                     * @return CommandName <p>命令名称。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超60个字节。</p>
                     * 
                     */
                    std::string GetCommandName() const;

                    /**
                     * 设置<p>命令名称。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超60个字节。</p>
                     * @param _commandName <p>命令名称。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超60个字节。</p>
                     * 
                     */
                    void SetCommandName(const std::string& _commandName);

                    /**
                     * 判断参数 CommandName 是否已赋值
                     * @return CommandName 是否已赋值
                     * 
                     */
                    bool CommandNameHasBeenSet() const;

                    /**
                     * 获取<p>命令脚本内容。 需 Base64 编码后传入。</p><p>当 EnableParameter = true 时，支持两种动态参数占位符：</p><ul><li>普通参数 {{key}}：例如脚本 <code>echo {{word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>，实际执行 <code>echo hello</code>，执行记录显示 <code>{&quot;word&quot;: &quot;hello&quot;}</code>。</li><li>隐藏参数 {{tat-hidden:key}}：用于敏感信息脱敏。例如脚本 <code>echo {{tat-hidden:word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>（传参 Key 不带前缀），实际执行 <code>echo hello</code>，记录显示 <code>{&quot;word&quot;: &quot;******&quot;}</code>。</li></ul><p>参数格式：Base64 编码字符串</p><p>入参限制：Base64 编码后的字符串长度不能超过 64KB</p>
                     * @return Content <p>命令脚本内容。 需 Base64 编码后传入。</p><p>当 EnableParameter = true 时，支持两种动态参数占位符：</p><ul><li>普通参数 {{key}}：例如脚本 <code>echo {{word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>，实际执行 <code>echo hello</code>，执行记录显示 <code>{&quot;word&quot;: &quot;hello&quot;}</code>。</li><li>隐藏参数 {{tat-hidden:key}}：用于敏感信息脱敏。例如脚本 <code>echo {{tat-hidden:word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>（传参 Key 不带前缀），实际执行 <code>echo hello</code>，记录显示 <code>{&quot;word&quot;: &quot;******&quot;}</code>。</li></ul><p>参数格式：Base64 编码字符串</p><p>入参限制：Base64 编码后的字符串长度不能超过 64KB</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>命令脚本内容。 需 Base64 编码后传入。</p><p>当 EnableParameter = true 时，支持两种动态参数占位符：</p><ul><li>普通参数 {{key}}：例如脚本 <code>echo {{word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>，实际执行 <code>echo hello</code>，执行记录显示 <code>{&quot;word&quot;: &quot;hello&quot;}</code>。</li><li>隐藏参数 {{tat-hidden:key}}：用于敏感信息脱敏。例如脚本 <code>echo {{tat-hidden:word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>（传参 Key 不带前缀），实际执行 <code>echo hello</code>，记录显示 <code>{&quot;word&quot;: &quot;******&quot;}</code>。</li></ul><p>参数格式：Base64 编码字符串</p><p>入参限制：Base64 编码后的字符串长度不能超过 64KB</p>
                     * @param _content <p>命令脚本内容。 需 Base64 编码后传入。</p><p>当 EnableParameter = true 时，支持两种动态参数占位符：</p><ul><li>普通参数 {{key}}：例如脚本 <code>echo {{word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>，实际执行 <code>echo hello</code>，执行记录显示 <code>{&quot;word&quot;: &quot;hello&quot;}</code>。</li><li>隐藏参数 {{tat-hidden:key}}：用于敏感信息脱敏。例如脚本 <code>echo {{tat-hidden:word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>（传参 Key 不带前缀），实际执行 <code>echo hello</code>，记录显示 <code>{&quot;word&quot;: &quot;******&quot;}</code>。</li></ul><p>参数格式：Base64 编码字符串</p><p>入参限制：Base64 编码后的字符串长度不能超过 64KB</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>命令描述。不超过120字符。</p>
                     * @return Description <p>命令描述。不超过120字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>命令描述。不超过120字符。</p>
                     * @param _description <p>命令描述。不超过120字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。</p>
                     * @return CommandType <p>命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。</p>
                     * 
                     */
                    std::string GetCommandType() const;

                    /**
                     * 设置<p>命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。</p>
                     * @param _commandType <p>命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。</p>
                     * 
                     */
                    void SetCommandType(const std::string& _commandType);

                    /**
                     * 判断参数 CommandType 是否已赋值
                     * @return CommandType 是否已赋值
                     * 
                     */
                    bool CommandTypeHasBeenSet() const;

                    /**
                     * 获取<p>命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。</p>
                     * @return WorkingDirectory <p>命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。</p>
                     * 
                     */
                    std::string GetWorkingDirectory() const;

                    /**
                     * 设置<p>命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。</p>
                     * @param _workingDirectory <p>命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。</p>
                     * 
                     */
                    void SetWorkingDirectory(const std::string& _workingDirectory);

                    /**
                     * 判断参数 WorkingDirectory 是否已赋值
                     * @return WorkingDirectory 是否已赋值
                     * 
                     */
                    bool WorkingDirectoryHasBeenSet() const;

                    /**
                     * 获取<p>命令超时时间，默认60秒。取值范围[1, 86400]。</p>
                     * @return Timeout <p>命令超时时间，默认60秒。取值范围[1, 86400]。</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>命令超时时间，默认60秒。取值范围[1, 86400]。</p>
                     * @param _timeout <p>命令超时时间，默认60秒。取值范围[1, 86400]。</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>是否启用自定义参数功能。<br>一旦创建，此值不提供修改。<br>默认值：false。</p>
                     * @return EnableParameter <p>是否启用自定义参数功能。<br>一旦创建，此值不提供修改。<br>默认值：false。</p>
                     * 
                     */
                    bool GetEnableParameter() const;

                    /**
                     * 设置<p>是否启用自定义参数功能。<br>一旦创建，此值不提供修改。<br>默认值：false。</p>
                     * @param _enableParameter <p>是否启用自定义参数功能。<br>一旦创建，此值不提供修改。<br>默认值：false。</p>
                     * 
                     */
                    void SetEnableParameter(const bool& _enableParameter);

                    /**
                     * 判断参数 EnableParameter 是否已赋值
                     * @return EnableParameter 是否已赋值
                     * 
                     */
                    bool EnableParameterHasBeenSet() const;

                    /**
                     * 获取<p>启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{&quot;varA&quot;: &quot;222&quot;}。<br>key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。<br>自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。</p>
                     * @return DefaultParameters <p>启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{&quot;varA&quot;: &quot;222&quot;}。<br>key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。<br>自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。</p>
                     * 
                     */
                    std::string GetDefaultParameters() const;

                    /**
                     * 设置<p>启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{&quot;varA&quot;: &quot;222&quot;}。<br>key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。<br>自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。</p>
                     * @param _defaultParameters <p>启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{&quot;varA&quot;: &quot;222&quot;}。<br>key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。<br>自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。</p>
                     * 
                     */
                    void SetDefaultParameters(const std::string& _defaultParameters);

                    /**
                     * 判断参数 DefaultParameters 是否已赋值
                     * @return DefaultParameters 是否已赋值
                     * 
                     */
                    bool DefaultParametersHasBeenSet() const;

                    /**
                     * 获取<p>自定义参数数组。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。</p>
                     * @return DefaultParameterConfs <p>自定义参数数组。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。</p>
                     * 
                     */
                    std::vector<DefaultParameterConf> GetDefaultParameterConfs() const;

                    /**
                     * 设置<p>自定义参数数组。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。</p>
                     * @param _defaultParameterConfs <p>自定义参数数组。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。</p>
                     * 
                     */
                    void SetDefaultParameterConfs(const std::vector<DefaultParameterConf>& _defaultParameterConfs);

                    /**
                     * 判断参数 DefaultParameterConfs 是否已赋值
                     * @return DefaultParameterConfs 是否已赋值
                     * 
                     */
                    bool DefaultParameterConfsHasBeenSet() const;

                    /**
                     * 获取<p>为命令关联的标签，列表长度不超过10。</p>
                     * @return Tags <p>为命令关联的标签，列表长度不超过10。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>为命令关联的标签，列表长度不超过10。</p>
                     * @param _tags <p>为命令关联的标签，列表长度不超过10。</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>在 CVM 或 Lighthouse 实例中执行命令的用户名称。<br>使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。</p>
                     * @return Username <p>在 CVM 或 Lighthouse 实例中执行命令的用户名称。<br>使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>在 CVM 或 Lighthouse 实例中执行命令的用户名称。<br>使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。</p>
                     * @param _username <p>在 CVM 或 Lighthouse 实例中执行命令的用户名称。<br>使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。</p>
                     * @return OutputCOSBucketUrl <p>指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。</p>
                     * 
                     */
                    std::string GetOutputCOSBucketUrl() const;

                    /**
                     * 设置<p>指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。</p>
                     * @param _outputCOSBucketUrl <p>指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。</p>
                     * 
                     */
                    void SetOutputCOSBucketUrl(const std::string& _outputCOSBucketUrl);

                    /**
                     * 判断参数 OutputCOSBucketUrl 是否已赋值
                     * @return OutputCOSBucketUrl 是否已赋值
                     * 
                     */
                    bool OutputCOSBucketUrlHasBeenSet() const;

                    /**
                     * 获取<p>指定日志在cos bucket中的目录，目录命名有如下规则：</p><ol><li>可用数字、中英文和可见字符的组合，长度最多为60。</li><li>用 / 分割路径，可快速创建子目录。</li><li>不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称</li></ol>
                     * @return OutputCOSKeyPrefix <p>指定日志在cos bucket中的目录，目录命名有如下规则：</p><ol><li>可用数字、中英文和可见字符的组合，长度最多为60。</li><li>用 / 分割路径，可快速创建子目录。</li><li>不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称</li></ol>
                     * 
                     */
                    std::string GetOutputCOSKeyPrefix() const;

                    /**
                     * 设置<p>指定日志在cos bucket中的目录，目录命名有如下规则：</p><ol><li>可用数字、中英文和可见字符的组合，长度最多为60。</li><li>用 / 分割路径，可快速创建子目录。</li><li>不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称</li></ol>
                     * @param _outputCOSKeyPrefix <p>指定日志在cos bucket中的目录，目录命名有如下规则：</p><ol><li>可用数字、中英文和可见字符的组合，长度最多为60。</li><li>用 / 分割路径，可快速创建子目录。</li><li>不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称</li></ol>
                     * 
                     */
                    void SetOutputCOSKeyPrefix(const std::string& _outputCOSKeyPrefix);

                    /**
                     * 判断参数 OutputCOSKeyPrefix 是否已赋值
                     * @return OutputCOSKeyPrefix 是否已赋值
                     * 
                     */
                    bool OutputCOSKeyPrefixHasBeenSet() const;

                private:

                    /**
                     * <p>命令名称。名称仅支持中文、英文、数字、下划线、分隔符&quot;-&quot;、小数点，最大长度不能超60个字节。</p>
                     */
                    std::string m_commandName;
                    bool m_commandNameHasBeenSet;

                    /**
                     * <p>命令脚本内容。 需 Base64 编码后传入。</p><p>当 EnableParameter = true 时，支持两种动态参数占位符：</p><ul><li>普通参数 {{key}}：例如脚本 <code>echo {{word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>，实际执行 <code>echo hello</code>，执行记录显示 <code>{&quot;word&quot;: &quot;hello&quot;}</code>。</li><li>隐藏参数 {{tat-hidden:key}}：用于敏感信息脱敏。例如脚本 <code>echo {{tat-hidden:word}}</code> 配合参数 <code>{&quot;word&quot;: &quot;hello&quot;}</code>（传参 Key 不带前缀），实际执行 <code>echo hello</code>，记录显示 <code>{&quot;word&quot;: &quot;******&quot;}</code>。</li></ul><p>参数格式：Base64 编码字符串</p><p>入参限制：Base64 编码后的字符串长度不能超过 64KB</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>命令描述。不超过120字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>命令类型，目前支持取值：SHELL、POWERSHELL、BAT。默认：SHELL。</p>
                     */
                    std::string m_commandType;
                    bool m_commandTypeHasBeenSet;

                    /**
                     * <p>命令执行路径，对于 SHELL 命令默认为 /root，对于 POWERSHELL 命令默认为 C:\Program Files\qcloud\tat_agent\workdir。</p>
                     */
                    std::string m_workingDirectory;
                    bool m_workingDirectoryHasBeenSet;

                    /**
                     * <p>命令超时时间，默认60秒。取值范围[1, 86400]。</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>是否启用自定义参数功能。<br>一旦创建，此值不提供修改。<br>默认值：false。</p>
                     */
                    bool m_enableParameter;
                    bool m_enableParameterHasBeenSet;

                    /**
                     * <p>启用自定义参数功能时，自定义参数的默认取值。字段类型为json encoded string。如：{&quot;varA&quot;: &quot;222&quot;}。<br>key为自定义参数名称，value为该参数的默认取值。kv均为字符串型。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。<br>自定义参数名称需符合以下规范：字符数目上限64，可选范围【a-zA-Z0-9-_】。</p>
                     */
                    std::string m_defaultParameters;
                    bool m_defaultParametersHasBeenSet;

                    /**
                     * <p>自定义参数数组。<br>如果InvokeCommand时未提供参数取值，将使用这里的默认值进行替换。<br>参数不支持同时指定 <code>DefaultParameters</code> 和 <code>DefaultParameterConfs</code> 。<br>仅在 EnableParameter 参数为 true 时，才允许设置此参数。<br>自定义参数最多20个。</p>
                     */
                    std::vector<DefaultParameterConf> m_defaultParameterConfs;
                    bool m_defaultParameterConfsHasBeenSet;

                    /**
                     * <p>为命令关联的标签，列表长度不超过10。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>在 CVM 或 Lighthouse 实例中执行命令的用户名称。<br>使用最小权限执行命令是权限管理的最佳实践，建议您以普通用户身份执行云助手命令。默认情况下，在 Linux 实例中以 root 用户执行命令；在Windows 实例中以 System 用户执行命令。</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>指定日志上传的cos bucket 地址，必须以https开头，如 https://BucketName-123454321.cos.ap-beijing.myqcloud.com。</p>
                     */
                    std::string m_outputCOSBucketUrl;
                    bool m_outputCOSBucketUrlHasBeenSet;

                    /**
                     * <p>指定日志在cos bucket中的目录，目录命名有如下规则：</p><ol><li>可用数字、中英文和可见字符的组合，长度最多为60。</li><li>用 / 分割路径，可快速创建子目录。</li><li>不允许连续 / ；不允许以 / 开头；不允许以..作为文件夹名称</li></ol>
                     */
                    std::string m_outputCOSKeyPrefix;
                    bool m_outputCOSKeyPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CREATECOMMANDREQUEST_H_
