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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginCredentialParam.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 插件凭据配置
                */
                class AgentPluginCredentialConfig : public AbstractModel
                {
                public:
                    AgentPluginCredentialConfig();
                    ~AgentPluginCredentialConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>插件鉴权值来源</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 使用插件默认鉴权值，仅 APIKey/AccessKey 支持</li><li>2： 引用凭证</li><li>3： 引用变量</li></ul>
                     * @return AuthValueSource <p>插件鉴权值来源</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 使用插件默认鉴权值，仅 APIKey/AccessKey 支持</li><li>2： 引用凭证</li><li>3： 引用变量</li></ul>
                     * 
                     */
                    int64_t GetAuthValueSource() const;

                    /**
                     * 设置<p>插件鉴权值来源</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 使用插件默认鉴权值，仅 APIKey/AccessKey 支持</li><li>2： 引用凭证</li><li>3： 引用变量</li></ul>
                     * @param _authValueSource <p>插件鉴权值来源</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 使用插件默认鉴权值，仅 APIKey/AccessKey 支持</li><li>2： 引用凭证</li><li>3： 引用变量</li></ul>
                     * 
                     */
                    void SetAuthValueSource(const int64_t& _authValueSource);

                    /**
                     * 判断参数 AuthValueSource 是否已赋值
                     * @return AuthValueSource 是否已赋值
                     * 
                     */
                    bool AuthValueSourceHasBeenSet() const;

                    /**
                     * 获取<p>凭证ID</p><p>入参限制：AuthValueSource=2时必填</p>
                     * @return CredentialId <p>凭证ID</p><p>入参限制：AuthValueSource=2时必填</p>
                     * 
                     */
                    std::string GetCredentialId() const;

                    /**
                     * 设置<p>凭证ID</p><p>入参限制：AuthValueSource=2时必填</p>
                     * @param _credentialId <p>凭证ID</p><p>入参限制：AuthValueSource=2时必填</p>
                     * 
                     */
                    void SetCredentialId(const std::string& _credentialId);

                    /**
                     * 判断参数 CredentialId 是否已赋值
                     * @return CredentialId 是否已赋值
                     * 
                     */
                    bool CredentialIdHasBeenSet() const;

                    /**
                     * 获取<p>参数配置</p>
                     * @return ParamList <p>参数配置</p>
                     * 
                     */
                    std::vector<AgentPluginCredentialParam> GetParamList() const;

                    /**
                     * 设置<p>参数配置</p>
                     * @param _paramList <p>参数配置</p>
                     * 
                     */
                    void SetParamList(const std::vector<AgentPluginCredentialParam>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * <p>插件鉴权值来源</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 使用插件默认鉴权值，仅 APIKey/AccessKey 支持</li><li>2： 引用凭证</li><li>3： 引用变量</li></ul>
                     */
                    int64_t m_authValueSource;
                    bool m_authValueSourceHasBeenSet;

                    /**
                     * <p>凭证ID</p><p>入参限制：AuthValueSource=2时必填</p>
                     */
                    std::string m_credentialId;
                    bool m_credentialIdHasBeenSet;

                    /**
                     * <p>参数配置</p>
                     */
                    std::vector<AgentPluginCredentialParam> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGINCREDENTIALCONFIG_H_
