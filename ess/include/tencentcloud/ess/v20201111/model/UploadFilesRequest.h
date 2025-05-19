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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Caller.h>
#include <tencentcloud/ess/v20201111/model/UploadFile.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
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
                     * 获取文件对应业务类型,可以选择的类型如下
<ul><li> **TEMPLATE** : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **DOCUMENT** : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **SEAL** : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li></ul>
                     * @return BusinessType 文件对应业务类型,可以选择的类型如下
<ul><li> **TEMPLATE** : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **DOCUMENT** : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **SEAL** : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li></ul>
                     * 
                     */
                    std::string GetBusinessType() const;

                    /**
                     * 设置文件对应业务类型,可以选择的类型如下
<ul><li> **TEMPLATE** : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **DOCUMENT** : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **SEAL** : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li></ul>
                     * @param _businessType 文件对应业务类型,可以选择的类型如下
<ul><li> **TEMPLATE** : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **DOCUMENT** : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **SEAL** : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li></ul>
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
                     * 获取执行本接口操作的员工信息。其中OperatorId为必填字段，即用户的UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Caller 执行本接口操作的员工信息。其中OperatorId为必填字段，即用户的UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置执行本接口操作的员工信息。其中OperatorId为必填字段，即用户的UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _caller 执行本接口操作的员工信息。其中OperatorId为必填字段，即用户的UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取请上传文件内容数组，最多可上传20个文件。

<b>所有文件必须符合<font color="red">FileType</font>指定的文件类型。</b>
                     * @return FileInfos 请上传文件内容数组，最多可上传20个文件。

<b>所有文件必须符合<font color="red">FileType</font>指定的文件类型。</b>
                     * 
                     */
                    std::vector<UploadFile> GetFileInfos() const;

                    /**
                     * 设置请上传文件内容数组，最多可上传20个文件。

<b>所有文件必须符合<font color="red">FileType</font>指定的文件类型。</b>
                     * @param _fileInfos 请上传文件内容数组，最多可上传20个文件。

<b>所有文件必须符合<font color="red">FileType</font>指定的文件类型。</b>
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
                     * 获取文件类型， 默认通过文件内容和文件后缀一起解析得到文件类型，调用接口时可以显示的指定上传文件的类型。
可支持的指定类型如下:
<ul><li>pdf</li>
<li>doc</li>
<li>docx</li>
<li>xls</li>
<li>xlsx</li>
<li>html</li>
<li>jpg</li>
<li>jpeg</li>
<li>png</li></ul>
如：pdf 表示上传的文件 张三入职合同.pdf的文件类型是 pdf
                     * @return FileType 文件类型， 默认通过文件内容和文件后缀一起解析得到文件类型，调用接口时可以显示的指定上传文件的类型。
可支持的指定类型如下:
<ul><li>pdf</li>
<li>doc</li>
<li>docx</li>
<li>xls</li>
<li>xlsx</li>
<li>html</li>
<li>jpg</li>
<li>jpeg</li>
<li>png</li></ul>
如：pdf 表示上传的文件 张三入职合同.pdf的文件类型是 pdf
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型， 默认通过文件内容和文件后缀一起解析得到文件类型，调用接口时可以显示的指定上传文件的类型。
可支持的指定类型如下:
<ul><li>pdf</li>
<li>doc</li>
<li>docx</li>
<li>xls</li>
<li>xlsx</li>
<li>html</li>
<li>jpg</li>
<li>jpeg</li>
<li>png</li></ul>
如：pdf 表示上传的文件 张三入职合同.pdf的文件类型是 pdf
                     * @param _fileType 文件类型， 默认通过文件内容和文件后缀一起解析得到文件类型，调用接口时可以显示的指定上传文件的类型。
可支持的指定类型如下:
<ul><li>pdf</li>
<li>doc</li>
<li>docx</li>
<li>xls</li>
<li>xlsx</li>
<li>html</li>
<li>jpg</li>
<li>jpeg</li>
<li>png</li></ul>
如：pdf 表示上传的文件 张三入职合同.pdf的文件类型是 pdf
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取此参数仅对上传的PDF文件有效。其主要作用是确定是否将PDF中的灰色矩阵置为白色。
<ul><li>**true**：将灰色矩阵置为白色。</li>
<li>**false**：无需处理，不会将灰色矩阵置为白色（默认）。</li></ul>

注: `该参数仅在关键字定位时，需要去除关键字所在的灰框场景下使用。`
                     * @return CoverRect 此参数仅对上传的PDF文件有效。其主要作用是确定是否将PDF中的灰色矩阵置为白色。
<ul><li>**true**：将灰色矩阵置为白色。</li>
<li>**false**：无需处理，不会将灰色矩阵置为白色（默认）。</li></ul>

注: `该参数仅在关键字定位时，需要去除关键字所在的灰框场景下使用。`
                     * 
                     */
                    bool GetCoverRect() const;

                    /**
                     * 设置此参数仅对上传的PDF文件有效。其主要作用是确定是否将PDF中的灰色矩阵置为白色。
<ul><li>**true**：将灰色矩阵置为白色。</li>
<li>**false**：无需处理，不会将灰色矩阵置为白色（默认）。</li></ul>

注: `该参数仅在关键字定位时，需要去除关键字所在的灰框场景下使用。`
                     * @param _coverRect 此参数仅对上传的PDF文件有效。其主要作用是确定是否将PDF中的灰色矩阵置为白色。
<ul><li>**true**：将灰色矩阵置为白色。</li>
<li>**false**：无需处理，不会将灰色矩阵置为白色（默认）。</li></ul>

注: `该参数仅在关键字定位时，需要去除关键字所在的灰框场景下使用。`
                     * 
                     */
                    void SetCoverRect(const bool& _coverRect);

                    /**
                     * 判断参数 CoverRect 是否已赋值
                     * @return CoverRect 是否已赋值
                     * 
                     */
                    bool CoverRectHasBeenSet() const;

                    /**
                     * 获取该字段已不再使用
                     * @return CustomIds 该字段已不再使用
                     * 
                     */
                    std::vector<std::string> GetCustomIds() const;

                    /**
                     * 设置该字段已不再使用
                     * @param _customIds 该字段已不再使用
                     * 
                     */
                    void SetCustomIds(const std::vector<std::string>& _customIds);

                    /**
                     * 判断参数 CustomIds 是否已赋值
                     * @return CustomIds 是否已赋值
                     * 
                     */
                    bool CustomIdsHasBeenSet() const;

                    /**
                     * 获取不再使用，上传文件链接数组，最多支持20个URL
                     * @return FileUrls 不再使用，上传文件链接数组，最多支持20个URL
                     * @deprecated
                     */
                    std::string GetFileUrls() const;

                    /**
                     * 设置不再使用，上传文件链接数组，最多支持20个URL
                     * @param _fileUrls 不再使用，上传文件链接数组，最多支持20个URL
                     * @deprecated
                     */
                    void SetFileUrls(const std::string& _fileUrls);

                    /**
                     * 判断参数 FileUrls 是否已赋值
                     * @return FileUrls 是否已赋值
                     * @deprecated
                     */
                    bool FileUrlsHasBeenSet() const;

                    /**
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 文件对应业务类型,可以选择的类型如下
<ul><li> **TEMPLATE** : 此上传的文件用户生成合同模板，文件类型支持.pdf/.doc/.docx/.html格式，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **DOCUMENT** : 此文件用来发起合同流程，文件类型支持.pdf/.doc/.docx/.jpg/.png/.xls.xlsx/.html，如果非pdf文件需要通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/CreateConvertTaskApi" target="_blank">创建文件转换任务</a>转换后才能使用</li>
<li> **SEAL** : 此文件用于印章的生成，文件类型支持.jpg/.jpeg/.png</li></ul>
                     */
                    std::string m_businessType;
                    bool m_businessTypeHasBeenSet;

                    /**
                     * 执行本接口操作的员工信息。其中OperatorId为必填字段，即用户的UserId。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * 请上传文件内容数组，最多可上传20个文件。

<b>所有文件必须符合<font color="red">FileType</font>指定的文件类型。</b>
                     */
                    std::vector<UploadFile> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 文件类型， 默认通过文件内容和文件后缀一起解析得到文件类型，调用接口时可以显示的指定上传文件的类型。
可支持的指定类型如下:
<ul><li>pdf</li>
<li>doc</li>
<li>docx</li>
<li>xls</li>
<li>xlsx</li>
<li>html</li>
<li>jpg</li>
<li>jpeg</li>
<li>png</li></ul>
如：pdf 表示上传的文件 张三入职合同.pdf的文件类型是 pdf
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 此参数仅对上传的PDF文件有效。其主要作用是确定是否将PDF中的灰色矩阵置为白色。
<ul><li>**true**：将灰色矩阵置为白色。</li>
<li>**false**：无需处理，不会将灰色矩阵置为白色（默认）。</li></ul>

注: `该参数仅在关键字定位时，需要去除关键字所在的灰框场景下使用。`
                     */
                    bool m_coverRect;
                    bool m_coverRectHasBeenSet;

                    /**
                     * 该字段已不再使用
                     */
                    std::vector<std::string> m_customIds;
                    bool m_customIdsHasBeenSet;

                    /**
                     * 不再使用，上传文件链接数组，最多支持20个URL
                     */
                    std::string m_fileUrls;
                    bool m_fileUrlsHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESREQUEST_H_
