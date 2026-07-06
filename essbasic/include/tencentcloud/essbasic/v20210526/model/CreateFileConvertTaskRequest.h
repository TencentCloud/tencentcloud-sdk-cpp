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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFILECONVERTTASKREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFILECONVERTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateFileConvertTask请求参数结构体
                */
                class CreateFileConvertTaskRequest : public AbstractModel
                {
                public:
                    CreateFileConvertTaskRequest();
                    ~CreateFileConvertTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取<p>需要进行转换的资源文件类型<br>支持的文件类型如下：</p><p>枚举值：</p><ul><li>doc： doc</li><li>docx： docx</li><li>xls： xls</li><li>xlsx： xlsx</li><li>jpg： jpg</li><li>jpeg： jpeg</li><li>png： png</li><li>bmp： bmp</li><li>html： html</li><li>txt： txt</li></ul>
                     * @return ResourceType <p>需要进行转换的资源文件类型<br>支持的文件类型如下：</p><p>枚举值：</p><ul><li>doc： doc</li><li>docx： docx</li><li>xls： xls</li><li>xlsx： xlsx</li><li>jpg： jpg</li><li>jpeg： jpeg</li><li>png： png</li><li>bmp： bmp</li><li>html： html</li><li>txt： txt</li></ul>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>需要进行转换的资源文件类型<br>支持的文件类型如下：</p><p>枚举值：</p><ul><li>doc： doc</li><li>docx： docx</li><li>xls： xls</li><li>xlsx： xlsx</li><li>jpg： jpg</li><li>jpeg： jpeg</li><li>png： png</li><li>bmp： bmp</li><li>html： html</li><li>txt： txt</li></ul>
                     * @param _resourceType <p>需要进行转换的资源文件类型<br>支持的文件类型如下：</p><p>枚举值：</p><ul><li>doc： doc</li><li>docx： docx</li><li>xls： xls</li><li>xlsx： xlsx</li><li>jpg： jpg</li><li>jpeg： jpeg</li><li>png： png</li><li>bmp： bmp</li><li>html： html</li><li>txt： txt</li></ul>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>需要进行转换操作的文件资源名称，带资源后缀名。</p><p>注:  <code>资源名称长度限制为256个字符</code></p>
                     * @return ResourceName <p>需要进行转换操作的文件资源名称，带资源后缀名。</p><p>注:  <code>资源名称长度限制为256个字符</code></p>
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置<p>需要进行转换操作的文件资源名称，带资源后缀名。</p><p>注:  <code>资源名称长度限制为256个字符</code></p>
                     * @param _resourceName <p>需要进行转换操作的文件资源名称，带资源后缀名。</p><p>注:  <code>资源名称长度限制为256个字符</code></p>
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取<p>需要进行转换操作的文件资源Id，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源Id。</p><p>注:  <code>目前，此接口仅支持单个文件进行转换。</code></p>
                     * @return ResourceId <p>需要进行转换操作的文件资源Id，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源Id。</p><p>注:  <code>目前，此接口仅支持单个文件进行转换。</code></p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>需要进行转换操作的文件资源Id，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源Id。</p><p>注:  <code>目前，此接口仅支持单个文件进行转换。</code></p>
                     * @param _resourceId <p>需要进行转换操作的文件资源Id，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源Id。</p><p>注:  <code>目前，此接口仅支持单个文件进行转换。</code></p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>需要进行转换的资源文件类型<br>支持的文件类型如下：</p><p>枚举值：</p><ul><li>doc： doc</li><li>docx： docx</li><li>xls： xls</li><li>xlsx： xlsx</li><li>jpg： jpg</li><li>jpeg： jpeg</li><li>png： png</li><li>bmp： bmp</li><li>html： html</li><li>txt： txt</li></ul>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>需要进行转换操作的文件资源名称，带资源后缀名。</p><p>注:  <code>资源名称长度限制为256个字符</code></p>
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * <p>需要进行转换操作的文件资源Id，通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源Id。</p><p>注:  <code>目前，此接口仅支持单个文件进行转换。</code></p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFILECONVERTTASKREQUEST_H_
