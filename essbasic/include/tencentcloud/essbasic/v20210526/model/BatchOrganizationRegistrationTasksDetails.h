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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BATCHORGANIZATIONREGISTRATIONTASKSDETAILS_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BATCHORGANIZATIONREGISTRATIONTASKSDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 批量认证企业任务详情信息，其中包括 TaskId，状态信息等等
                */
                class BatchOrganizationRegistrationTasksDetails : public AbstractModel
                {
                public:
                    BatchOrganizationRegistrationTasksDetails();
                    ~BatchOrganizationRegistrationTasksDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生成注册链接的任务Id
                     * @return TaskId 生成注册链接的任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置生成注册链接的任务Id
                     * @param _taskId 生成注册链接的任务Id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取批量创建企业任务的状态
<ul>
<li>Processing</li>
<li>Create</li>
<li>Submit</li>
<li>Authorization</li>
<li>Failed</li>
</ul>

各个状态所代表的含义如下表格所示：
<table>
<thead align="center" valign="center">
<tr><th>任务状态名称</th><th>任务状态详情</th></tr>
</thead>
<tbody>
<tr><th align="center" valign="center">Processing</th><th>企业认证任务处理中，用户调用了<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateBatchOrganizationRegistrationTasks">CreateBatchOrganizationRegistrationTasks</a>接口，但是任务还在处理中的状态</th></tr>
<tr><th align="center" valign="center">Create</th><th>创建企业认证链接任务完成，可以调用生成任务链接接口</th></tr>
<tr><th align="center" valign="center">Submit</th><th>企业认证任务已提交,到如下界面之后，会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/acbcec8c7a71de14d9c041e3b8ca8b3f.png)</th></tr>
<tr><th align="center" valign="center">Authorization</th><th>企业认证任务认证成功,点击下图下一步，进入到授权书上传或者法人认证，则会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/c52448354871cffa729da8db4e3a6f18.png)</th></tr>
<tr><th align="center" valign="center">Failed</th><th>企业认证任务失败</th></tr>
</tbody>
</table>
                     * @return Status 批量创建企业任务的状态
<ul>
<li>Processing</li>
<li>Create</li>
<li>Submit</li>
<li>Authorization</li>
<li>Failed</li>
</ul>

各个状态所代表的含义如下表格所示：
<table>
<thead align="center" valign="center">
<tr><th>任务状态名称</th><th>任务状态详情</th></tr>
</thead>
<tbody>
<tr><th align="center" valign="center">Processing</th><th>企业认证任务处理中，用户调用了<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateBatchOrganizationRegistrationTasks">CreateBatchOrganizationRegistrationTasks</a>接口，但是任务还在处理中的状态</th></tr>
<tr><th align="center" valign="center">Create</th><th>创建企业认证链接任务完成，可以调用生成任务链接接口</th></tr>
<tr><th align="center" valign="center">Submit</th><th>企业认证任务已提交,到如下界面之后，会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/acbcec8c7a71de14d9c041e3b8ca8b3f.png)</th></tr>
<tr><th align="center" valign="center">Authorization</th><th>企业认证任务认证成功,点击下图下一步，进入到授权书上传或者法人认证，则会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/c52448354871cffa729da8db4e3a6f18.png)</th></tr>
<tr><th align="center" valign="center">Failed</th><th>企业认证任务失败</th></tr>
</tbody>
</table>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置批量创建企业任务的状态
<ul>
<li>Processing</li>
<li>Create</li>
<li>Submit</li>
<li>Authorization</li>
<li>Failed</li>
</ul>

各个状态所代表的含义如下表格所示：
<table>
<thead align="center" valign="center">
<tr><th>任务状态名称</th><th>任务状态详情</th></tr>
</thead>
<tbody>
<tr><th align="center" valign="center">Processing</th><th>企业认证任务处理中，用户调用了<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateBatchOrganizationRegistrationTasks">CreateBatchOrganizationRegistrationTasks</a>接口，但是任务还在处理中的状态</th></tr>
<tr><th align="center" valign="center">Create</th><th>创建企业认证链接任务完成，可以调用生成任务链接接口</th></tr>
<tr><th align="center" valign="center">Submit</th><th>企业认证任务已提交,到如下界面之后，会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/acbcec8c7a71de14d9c041e3b8ca8b3f.png)</th></tr>
<tr><th align="center" valign="center">Authorization</th><th>企业认证任务认证成功,点击下图下一步，进入到授权书上传或者法人认证，则会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/c52448354871cffa729da8db4e3a6f18.png)</th></tr>
<tr><th align="center" valign="center">Failed</th><th>企业认证任务失败</th></tr>
</tbody>
</table>
                     * @param _status 批量创建企业任务的状态
<ul>
<li>Processing</li>
<li>Create</li>
<li>Submit</li>
<li>Authorization</li>
<li>Failed</li>
</ul>

各个状态所代表的含义如下表格所示：
<table>
<thead align="center" valign="center">
<tr><th>任务状态名称</th><th>任务状态详情</th></tr>
</thead>
<tbody>
<tr><th align="center" valign="center">Processing</th><th>企业认证任务处理中，用户调用了<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateBatchOrganizationRegistrationTasks">CreateBatchOrganizationRegistrationTasks</a>接口，但是任务还在处理中的状态</th></tr>
<tr><th align="center" valign="center">Create</th><th>创建企业认证链接任务完成，可以调用生成任务链接接口</th></tr>
<tr><th align="center" valign="center">Submit</th><th>企业认证任务已提交,到如下界面之后，会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/acbcec8c7a71de14d9c041e3b8ca8b3f.png)</th></tr>
<tr><th align="center" valign="center">Authorization</th><th>企业认证任务认证成功,点击下图下一步，进入到授权书上传或者法人认证，则会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/c52448354871cffa729da8db4e3a6f18.png)</th></tr>
<tr><th align="center" valign="center">Failed</th><th>企业认证任务失败</th></tr>
</tbody>
</table>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取如果任务失败,会返回错误信息
                     * @return ErrorMessage 如果任务失败,会返回错误信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置如果任务失败,会返回错误信息
                     * @param _errorMessage 如果任务失败,会返回错误信息
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 生成注册链接的任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 批量创建企业任务的状态
<ul>
<li>Processing</li>
<li>Create</li>
<li>Submit</li>
<li>Authorization</li>
<li>Failed</li>
</ul>

各个状态所代表的含义如下表格所示：
<table>
<thead align="center" valign="center">
<tr><th>任务状态名称</th><th>任务状态详情</th></tr>
</thead>
<tbody>
<tr><th align="center" valign="center">Processing</th><th>企业认证任务处理中，用户调用了<a href="https://qian.tencent.com/developers/partnerApis/accounts/CreateBatchOrganizationRegistrationTasks">CreateBatchOrganizationRegistrationTasks</a>接口，但是任务还在处理中的状态</th></tr>
<tr><th align="center" valign="center">Create</th><th>创建企业认证链接任务完成，可以调用生成任务链接接口</th></tr>
<tr><th align="center" valign="center">Submit</th><th>企业认证任务已提交,到如下界面之后，会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/acbcec8c7a71de14d9c041e3b8ca8b3f.png)</th></tr>
<tr><th align="center" valign="center">Authorization</th><th>企业认证任务认证成功,点击下图下一步，进入到授权书上传或者法人认证，则会变为这个状态

![image](https://qcloudimg.tencent-cloud.cn/raw/c52448354871cffa729da8db4e3a6f18.png)</th></tr>
<tr><th align="center" valign="center">Failed</th><th>企业认证任务失败</th></tr>
</tbody>
</table>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 如果任务失败,会返回错误信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BATCHORGANIZATIONREGISTRATIONTASKSDETAILS_H_
