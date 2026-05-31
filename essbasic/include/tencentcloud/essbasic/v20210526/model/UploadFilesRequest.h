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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UploadFile.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * UploadFiles请求参数结构体
                */
                class UploadFilesRequest : public AbstractModel
                {
                public:
                    UploadFilesRequest();
                    ~UploadFilesRequest() = default;
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
                     * 获取<p>文件对应业务类型,可以选择的类型如下<ul><li> <strong>TEMPLATE</strong> : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li><li> <strong>DOCUMENT</strong> : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html。如果上传的是非pdf文件，用来发起流程，还需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后得到的pdf文件才能用于发起合同接口。如果上传的文件不是用来发起合同，直接上传后使用返回的文件资源Id即可</li><li> <strong>SEAL</strong> : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li><li> <strong>ARCHIVE</strong> : 此文件用于归档文件夹，文件类型支持.pdf/.zip格式</li></ul></p><p>枚举值：</p><ul><li>TEMPLATE： 此上传的文件用户生成合同模板</li><li>DOCUMENT： 此文件用来发起合同流程</li><li>SEAL： 此文件用于印章的生成</li><li>ARCHIVE： 此文件用于归档文件夹</li></ul>
                     * @return BusinessType <p>文件对应业务类型,可以选择的类型如下<ul><li> <strong>TEMPLATE</strong> : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li><li> <strong>DOCUMENT</strong> : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html。如果上传的是非pdf文件，用来发起流程，还需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后得到的pdf文件才能用于发起合同接口。如果上传的文件不是用来发起合同，直接上传后使用返回的文件资源Id即可</li><li> <strong>SEAL</strong> : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li><li> <strong>ARCHIVE</strong> : 此文件用于归档文件夹，文件类型支持.pdf/.zip格式</li></ul></p><p>枚举值：</p><ul><li>TEMPLATE： 此上传的文件用户生成合同模板</li><li>DOCUMENT： 此文件用来发起合同流程</li><li>SEAL： 此文件用于印章的生成</li><li>ARCHIVE： 此文件用于归档文件夹</li></ul>
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置<p>文件对应业务类型,可以选择的类型如下<ul><li> <strong>TEMPLATE</strong> : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li><li> <strong>DOCUMENT</strong> : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html。如果上传的是非pdf文件，用来发起流程，还需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后得到的pdf文件才能用于发起合同接口。如果上传的文件不是用来发起合同，直接上传后使用返回的文件资源Id即可</li><li> <strong>SEAL</strong> : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li><li> <strong>ARCHIVE</strong> : 此文件用于归档文件夹，文件类型支持.pdf/.zip格式</li></ul></p><p>枚举值：</p><ul><li>TEMPLATE： 此上传的文件用户生成合同模板</li><li>DOCUMENT： 此文件用来发起合同流程</li><li>SEAL： 此文件用于印章的生成</li><li>ARCHIVE： 此文件用于归档文件夹</li></ul>
                     * @param _businessType <p>文件对应业务类型,可以选择的类型如下<ul><li> <strong>TEMPLATE</strong> : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li><li> <strong>DOCUMENT</strong> : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html。如果上传的是非pdf文件，用来发起流程，还需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后得到的pdf文件才能用于发起合同接口。如果上传的文件不是用来发起合同，直接上传后使用返回的文件资源Id即可</li><li> <strong>SEAL</strong> : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li><li> <strong>ARCHIVE</strong> : 此文件用于归档文件夹，文件类型支持.pdf/.zip格式</li></ul></p><p>枚举值：</p><ul><li>TEMPLATE： 此上传的文件用户生成合同模板</li><li>DOCUMENT： 此文件用来发起合同流程</li><li>SEAL： 此文件用于印章的生成</li><li>ARCHIVE： 此文件用于归档文件夹</li></ul>
                     * 
                     */
                    void SetBusinessType(const std::string& _businessType);

                    /**
                     * 判断参数 BusinessType 是否已赋值
                     * @return BusinessType 是否已赋值
                     * 
                     */
                    bool BusinessTypeHasBeenSet() const;

                    /**
                     * 获取<p>上传文件内容数组，一次最多可上传20个文件。</p><p><b>若上传多个文件，所有文件必须为相同类型</b>，例如全部为PDF或全部为Word文件。不支持混合文件类型的上传。</p>
                     * @return FileInfos <p>上传文件内容数组，一次最多可上传20个文件。</p><p><b>若上传多个文件，所有文件必须为相同类型</b>，例如全部为PDF或全部为Word文件。不支持混合文件类型的上传。</p>
                     * 
                     */
                    std::vector<UploadFile> GetFileInfos() const;

                    /**
                     * 设置<p>上传文件内容数组，一次最多可上传20个文件。</p><p><b>若上传多个文件，所有文件必须为相同类型</b>，例如全部为PDF或全部为Word文件。不支持混合文件类型的上传。</p>
                     * @param _fileInfos <p>上传文件内容数组，一次最多可上传20个文件。</p><p><b>若上传多个文件，所有文件必须为相同类型</b>，例如全部为PDF或全部为Word文件。不支持混合文件类型的上传。</p>
                     * 
                     */
                    void SetFileInfos(const std::vector<UploadFile>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取<p>操作者的信息</p>
                     * @return Operator <p>操作者的信息</p>
                     * @deprecated
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>操作者的信息</p>
                     * @param _operator <p>操作者的信息</p>
                     * @deprecated
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * @deprecated
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent. ProxyOperator.OpenId</li></ul>第三方平台子客企业和员工必须已经经过实名认证
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>文件对应业务类型,可以选择的类型如下<ul><li> <strong>TEMPLATE</strong> : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li><li> <strong>DOCUMENT</strong> : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html。如果上传的是非pdf文件，用来发起流程，还需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后得到的pdf文件才能用于发起合同接口。如果上传的文件不是用来发起合同，直接上传后使用返回的文件资源Id即可</li><li> <strong>SEAL</strong> : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li><li> <strong>ARCHIVE</strong> : 此文件用于归档文件夹，文件类型支持.pdf/.zip格式</li></ul></p><p>枚举值：</p><ul><li>TEMPLATE： 此上传的文件用户生成合同模板</li><li>DOCUMENT： 此文件用来发起合同流程</li><li>SEAL： 此文件用于印章的生成</li><li>ARCHIVE： 此文件用于归档文件夹</li></ul>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * <p>上传文件内容数组，一次最多可上传20个文件。</p><p><b>若上传多个文件，所有文件必须为相同类型</b>，例如全部为PDF或全部为Word文件。不支持混合文件类型的上传。</p>
                     */
                    std::vector<UploadFile> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>操作者的信息</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESREQUEST_H_
