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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTCOMPARISONTASKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTCOMPARISONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Tag.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateContractComparisonTask请求参数结构体
                */
                class CreateContractComparisonTaskRequest : public AbstractModel
                {
                public:
                    CreateContractComparisonTaskRequest();
                    ~CreateContractComparisonTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>原版文件ID，对比基准的旧版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     * @return OriginFileResourceId <p>原版文件ID，对比基准的旧版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     * 
                     */
                    std::string GetOriginFileResourceId() const;

                    /**
                     * 设置<p>原版文件ID，对比基准的旧版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     * @param _originFileResourceId <p>原版文件ID，对比基准的旧版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     * 
                     */
                    void SetOriginFileResourceId(const std::string& _originFileResourceId);

                    /**
                     * 判断参数 OriginFileResourceId 是否已赋值
                     * @return OriginFileResourceId 是否已赋值
                     * 
                     */
                    bool OriginFileResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>新版文件ID，与旧版进行对比的新版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     * @return DiffFileResourceId <p>新版文件ID，与旧版进行对比的新版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     * 
                     */
                    std::string GetDiffFileResourceId() const;

                    /**
                     * 设置<p>新版文件ID，与旧版进行对比的新版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     * @param _diffFileResourceId <p>新版文件ID，与旧版进行对比的新版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     * 
                     */
                    void SetDiffFileResourceId(const std::string& _diffFileResourceId);

                    /**
                     * 判断参数 DiffFileResourceId 是否已赋值
                     * @return DiffFileResourceId 是否已赋值
                     * 
                     */
                    bool DiffFileResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>对比任务备注，长度不能超过50个字符。</p>
                     * @return Comment <p>对比任务备注，长度不能超过50个字符。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>对比任务备注，长度不能超过50个字符。</p>
                     * @param _comment <p>对比任务备注，长度不能超过50个字符。</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1024长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2">回调通知</a>模块。</p>
                     * @return UserData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1024长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2">回调通知</a>模块。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1024长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2">回调通知</a>模块。</p>
                     * @param _userData <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1024长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2">回调通知</a>模块。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>标签列表，用户自定义的键值对（Key-Value），可绑定到资源上，用于资源的分类、管理和访问控制。</p>
                     * @return Tags <p>标签列表，用户自定义的键值对（Key-Value），可绑定到资源上，用于资源的分类、管理和访问控制。</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表，用户自定义的键值对（Key-Value），可绑定到资源上，用于资源的分类、管理和访问控制。</p>
                     * @param _tags <p>标签列表，用户自定义的键值对（Key-Value），可绑定到资源上，用于资源的分类、管理和访问控制。</p>
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
                     * 获取<p>文档修订操作类型，对比任务执行前处理修订内容，适用于doc、docx存在修订情况。<br> 类型如下： <ul> <li> <strong>0</strong>：不做任何操作</li> <li> <strong>1</strong>：接受所有修订</li> </ul></p>
                     * @return RevisionOperation <p>文档修订操作类型，对比任务执行前处理修订内容，适用于doc、docx存在修订情况。<br> 类型如下： <ul> <li> <strong>0</strong>：不做任何操作</li> <li> <strong>1</strong>：接受所有修订</li> </ul></p>
                     * 
                     */
                    int64_t GetRevisionOperation() const;

                    /**
                     * 设置<p>文档修订操作类型，对比任务执行前处理修订内容，适用于doc、docx存在修订情况。<br> 类型如下： <ul> <li> <strong>0</strong>：不做任何操作</li> <li> <strong>1</strong>：接受所有修订</li> </ul></p>
                     * @param _revisionOperation <p>文档修订操作类型，对比任务执行前处理修订内容，适用于doc、docx存在修订情况。<br> 类型如下： <ul> <li> <strong>0</strong>：不做任何操作</li> <li> <strong>1</strong>：接受所有修订</li> </ul></p>
                     * 
                     */
                    void SetRevisionOperation(const int64_t& _revisionOperation);

                    /**
                     * 判断参数 RevisionOperation 是否已赋值
                     * @return RevisionOperation 是否已赋值
                     * 
                     */
                    bool RevisionOperationHasBeenSet() const;

                private:

                    /**
                     * <p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>原版文件ID，对比基准的旧版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     */
                    std::string m_originFileResourceId;
                    bool m_originFileResourceIdHasBeenSet;

                    /**
                     * <p>新版文件ID，与旧版进行对比的新版本文件唯一标识，通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles" target="_blank">UploadFiles</a>接口获取文件资源ID。</p>
                     */
                    std::string m_diffFileResourceId;
                    bool m_diffFileResourceIdHasBeenSet;

                    /**
                     * <p>对比任务备注，长度不能超过50个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>调用方自定义的个性化字段(可自定义此名称)，并以base64方式编码，支持的最大数据大小为 1024长度。</p><p>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2">回调通知</a>模块。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>标签列表，用户自定义的键值对（Key-Value），可绑定到资源上，用于资源的分类、管理和访问控制。</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>文档修订操作类型，对比任务执行前处理修订内容，适用于doc、docx存在修订情况。<br> 类型如下： <ul> <li> <strong>0</strong>：不做任何操作</li> <li> <strong>1</strong>：接受所有修订</li> </ul></p>
                     */
                    int64_t m_revisionOperation;
                    bool m_revisionOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATECONTRACTCOMPARISONTASKREQUEST_H_
