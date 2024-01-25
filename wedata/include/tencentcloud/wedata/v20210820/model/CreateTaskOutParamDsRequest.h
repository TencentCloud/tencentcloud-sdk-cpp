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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKOUTPARAMDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKOUTPARAMDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskOutParamDs请求参数结构体
                */
                class CreateTaskOutParamDsRequest : public AbstractModel
                {
                public:
                    CreateTaskOutParamDsRequest();
                    ~CreateTaskOutParamDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取请求来源，WEB 前端；CLIENT 客户端
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置请求来源，WEB 前端；CLIENT 客户端
                     * @param _requestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取参数key
                     * @return ParamKey 参数key
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置参数key
                     * @param _paramKey 参数key
                     * 
                     */
                    void SetParamKey(const std::string& _paramKey);

                    /**
                     * 判断参数 ParamKey 是否已赋值
                     * @return ParamKey 是否已赋值
                     * 
                     */
                    bool ParamKeyHasBeenSet() const;

                    /**
                     * 获取参数描述
                     * @return ParamDesc 参数描述
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置参数描述
                     * @param _paramDesc 参数描述
                     * 
                     */
                    void SetParamDesc(const std::string& _paramDesc);

                    /**
                     * 判断参数 ParamDesc 是否已赋值
                     * @return ParamDesc 是否已赋值
                     * 
                     */
                    bool ParamDescHasBeenSet() const;

                    /**
                     * 获取参数定义
                     * @return ParamDefine 参数定义
                     * 
                     */
                    std::string GetParamDefine() const;

                    /**
                     * 设置参数定义
                     * @param _paramDefine 参数定义
                     * 
                     */
                    void SetParamDefine(const std::string& _paramDefine);

                    /**
                     * 判断参数 ParamDefine 是否已赋值
                     * @return ParamDefine 是否已赋值
                     * 
                     */
                    bool ParamDefineHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 参数key
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * 参数定义
                     */
                    std::string m_paramDefine;
                    bool m_paramDefineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKOUTPARAMDSREQUEST_H_
