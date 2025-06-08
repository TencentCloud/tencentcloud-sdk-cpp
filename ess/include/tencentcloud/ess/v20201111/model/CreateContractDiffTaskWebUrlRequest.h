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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTDIFFTASKWEBURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTDIFFTASKWEBURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateContractDiffTaskWebUrl请求参数结构体
                */
                class CreateContractDiffTaskWebUrlRequest : public AbstractModel
                {
                public:
                    CreateContractDiffTaskWebUrlRequest();
                    ~CreateContractDiffTaskWebUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取是否跳过文件上传确认页。
当该参数值为`false`时，`OriginalFileResourceId`和`DiffFileResourceId`参数不需要传值，需要在生成的web页面中上传对比文件；
当该参数值为`true`时，`OriginalFileResourceId`和`DiffFileResourceId`参数必填，生成的web页面将跳过上传页面显示对比结果。
                     * @return SkipFileUpload 是否跳过文件上传确认页。
当该参数值为`false`时，`OriginalFileResourceId`和`DiffFileResourceId`参数不需要传值，需要在生成的web页面中上传对比文件；
当该参数值为`true`时，`OriginalFileResourceId`和`DiffFileResourceId`参数必填，生成的web页面将跳过上传页面显示对比结果。
                     * 
                     */
                    bool GetSkipFileUpload() const;

                    /**
                     * 设置是否跳过文件上传确认页。
当该参数值为`false`时，`OriginalFileResourceId`和`DiffFileResourceId`参数不需要传值，需要在生成的web页面中上传对比文件；
当该参数值为`true`时，`OriginalFileResourceId`和`DiffFileResourceId`参数必填，生成的web页面将跳过上传页面显示对比结果。
                     * @param _skipFileUpload 是否跳过文件上传确认页。
当该参数值为`false`时，`OriginalFileResourceId`和`DiffFileResourceId`参数不需要传值，需要在生成的web页面中上传对比文件；
当该参数值为`true`时，`OriginalFileResourceId`和`DiffFileResourceId`参数必填，生成的web页面将跳过上传页面显示对比结果。
                     * 
                     */
                    void SetSkipFileUpload(const bool& _skipFileUpload);

                    /**
                     * 判断参数 SkipFileUpload 是否已赋值
                     * @return SkipFileUpload 是否已赋值
                     * 
                     */
                    bool SkipFileUploadHasBeenSet() const;

                    /**
                     * 获取需要对比的原合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     * @return OriginalFileResourceId 需要对比的原合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     * 
                     */
                    std::string GetOriginalFileResourceId() const;

                    /**
                     * 设置需要对比的原合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     * @param _originalFileResourceId 需要对比的原合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     * 
                     */
                    void SetOriginalFileResourceId(const std::string& _originalFileResourceId);

                    /**
                     * 判断参数 OriginalFileResourceId 是否已赋值
                     * @return OriginalFileResourceId 是否已赋值
                     * 
                     */
                    bool OriginalFileResourceIdHasBeenSet() const;

                    /**
                     * 获取需要对比的新合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     * @return DiffFileResourceId 需要对比的新合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     * 
                     */
                    std::string GetDiffFileResourceId() const;

                    /**
                     * 设置需要对比的新合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     * @param _diffFileResourceId 需要对比的新合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     * 
                     */
                    void SetDiffFileResourceId(const std::string& _diffFileResourceId);

                    /**
                     * 判断参数 DiffFileResourceId 是否已赋值
                     * @return DiffFileResourceId 是否已赋值
                     * 
                     */
                    bool DiffFileResourceIdHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。使用此接口时，必须填写userId。

注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 是否跳过文件上传确认页。
当该参数值为`false`时，`OriginalFileResourceId`和`DiffFileResourceId`参数不需要传值，需要在生成的web页面中上传对比文件；
当该参数值为`true`时，`OriginalFileResourceId`和`DiffFileResourceId`参数必填，生成的web页面将跳过上传页面显示对比结果。
                     */
                    bool m_skipFileUpload;
                    bool m_skipFileUploadHasBeenSet;

                    /**
                     * 需要对比的原合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     */
                    std::string m_originalFileResourceId;
                    bool m_originalFileResourceIdHasBeenSet;

                    /**
                     * 需要对比的新合同文件资源ID，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。
                     */
                    std::string m_diffFileResourceId;
                    bool m_diffFileResourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTDIFFTASKWEBURLREQUEST_H_
