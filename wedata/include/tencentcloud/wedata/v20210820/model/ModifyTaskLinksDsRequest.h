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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSREQUEST_H_

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
                * ModifyTaskLinksDs请求参数结构体
                */
                class ModifyTaskLinksDsRequest : public AbstractModel
                {
                public:
                    ModifyTaskLinksDsRequest();
                    ~ModifyTaskLinksDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取父任务ID
                     * @return TaskFrom 父任务ID
                     * 
                     */
                    std::string GetTaskFrom() const;

                    /**
                     * 设置父任务ID
                     * @param _taskFrom 父任务ID
                     * 
                     */
                    void SetTaskFrom(const std::string& _taskFrom);

                    /**
                     * 判断参数 TaskFrom 是否已赋值
                     * @return TaskFrom 是否已赋值
                     * 
                     */
                    bool TaskFromHasBeenSet() const;

                    /**
                     * 获取子任务ID
                     * @return TaskTo 子任务ID
                     * 
                     */
                    std::string GetTaskTo() const;

                    /**
                     * 设置子任务ID
                     * @param _taskTo 子任务ID
                     * 
                     */
                    void SetTaskTo(const std::string& _taskTo);

                    /**
                     * 判断参数 TaskTo 是否已赋值
                     * @return TaskTo 是否已赋值
                     * 
                     */
                    bool TaskToHasBeenSet() const;

                    /**
                     * 获取子任务工作流
                     * @return WorkflowId 子任务工作流
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置子任务工作流
                     * @param _workflowId 子任务工作流
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取父任务工作流
                     * @return RealFromWorkflowId 父任务工作流
                     * 
                     */
                    std::string GetRealFromWorkflowId() const;

                    /**
                     * 设置父任务工作流
                     * @param _realFromWorkflowId 父任务工作流
                     * 
                     */
                    void SetRealFromWorkflowId(const std::string& _realFromWorkflowId);

                    /**
                     * 判断参数 RealFromWorkflowId 是否已赋值
                     * @return RealFromWorkflowId 是否已赋值
                     * 
                     */
                    bool RealFromWorkflowIdHasBeenSet() const;

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
                     * 获取父子任务之间的依赖关系
    正常的依赖父任务全部实例  启用
    normal_all(1),
    normal_first_one(2), 正常的依赖父任务 第一个
    normal_last_one(3), 正常的依赖父任务 最后一个
    normal_any_one(4), 正常的依赖父任务 任意一个
    normal_specific_one(5), 正常的依赖父任务 指定的一个
    self(6), 自身依赖，可能用不到

     非正常的依赖父任务全部实例  启用（向前依赖  明天)
    non_normal_all_forward(11),
    non_normal_first_one_forward(12), 非正常的依赖父任务 第一个
    non_normal_last_one_forward(13), 非正常的依赖父任务 最后一个
    non_normal_any_one_forward(14), 非正常的依赖父任务 任意一个
    non_normal_specific_one_forward(15),非正常的依赖父任务 指定一个

    非正常的依赖父任务全部实例  启用（向后依赖 昨天）
    non_normal_all_backward(21),
    non_normal_first_one_backward(22), 非正常的依赖父任务 第一个
    non_normal_last_one_backward(23), 非正常的依赖父任务 最后一个
    non_normal_any_one_backward(24), 非正常的依赖父任务 任意一个
    non_normal_specific_one_backward(25) 非正常的依赖父任务 指定一个
                     * @return LinkDependencyType 父子任务之间的依赖关系
    正常的依赖父任务全部实例  启用
    normal_all(1),
    normal_first_one(2), 正常的依赖父任务 第一个
    normal_last_one(3), 正常的依赖父任务 最后一个
    normal_any_one(4), 正常的依赖父任务 任意一个
    normal_specific_one(5), 正常的依赖父任务 指定的一个
    self(6), 自身依赖，可能用不到

     非正常的依赖父任务全部实例  启用（向前依赖  明天)
    non_normal_all_forward(11),
    non_normal_first_one_forward(12), 非正常的依赖父任务 第一个
    non_normal_last_one_forward(13), 非正常的依赖父任务 最后一个
    non_normal_any_one_forward(14), 非正常的依赖父任务 任意一个
    non_normal_specific_one_forward(15),非正常的依赖父任务 指定一个

    非正常的依赖父任务全部实例  启用（向后依赖 昨天）
    non_normal_all_backward(21),
    non_normal_first_one_backward(22), 非正常的依赖父任务 第一个
    non_normal_last_one_backward(23), 非正常的依赖父任务 最后一个
    non_normal_any_one_backward(24), 非正常的依赖父任务 任意一个
    non_normal_specific_one_backward(25) 非正常的依赖父任务 指定一个
                     * 
                     */
                    std::string GetLinkDependencyType() const;

                    /**
                     * 设置父子任务之间的依赖关系
    正常的依赖父任务全部实例  启用
    normal_all(1),
    normal_first_one(2), 正常的依赖父任务 第一个
    normal_last_one(3), 正常的依赖父任务 最后一个
    normal_any_one(4), 正常的依赖父任务 任意一个
    normal_specific_one(5), 正常的依赖父任务 指定的一个
    self(6), 自身依赖，可能用不到

     非正常的依赖父任务全部实例  启用（向前依赖  明天)
    non_normal_all_forward(11),
    non_normal_first_one_forward(12), 非正常的依赖父任务 第一个
    non_normal_last_one_forward(13), 非正常的依赖父任务 最后一个
    non_normal_any_one_forward(14), 非正常的依赖父任务 任意一个
    non_normal_specific_one_forward(15),非正常的依赖父任务 指定一个

    非正常的依赖父任务全部实例  启用（向后依赖 昨天）
    non_normal_all_backward(21),
    non_normal_first_one_backward(22), 非正常的依赖父任务 第一个
    non_normal_last_one_backward(23), 非正常的依赖父任务 最后一个
    non_normal_any_one_backward(24), 非正常的依赖父任务 任意一个
    non_normal_specific_one_backward(25) 非正常的依赖父任务 指定一个
                     * @param _linkDependencyType 父子任务之间的依赖关系
    正常的依赖父任务全部实例  启用
    normal_all(1),
    normal_first_one(2), 正常的依赖父任务 第一个
    normal_last_one(3), 正常的依赖父任务 最后一个
    normal_any_one(4), 正常的依赖父任务 任意一个
    normal_specific_one(5), 正常的依赖父任务 指定的一个
    self(6), 自身依赖，可能用不到

     非正常的依赖父任务全部实例  启用（向前依赖  明天)
    non_normal_all_forward(11),
    non_normal_first_one_forward(12), 非正常的依赖父任务 第一个
    non_normal_last_one_forward(13), 非正常的依赖父任务 最后一个
    non_normal_any_one_forward(14), 非正常的依赖父任务 任意一个
    non_normal_specific_one_forward(15),非正常的依赖父任务 指定一个

    非正常的依赖父任务全部实例  启用（向后依赖 昨天）
    non_normal_all_backward(21),
    non_normal_first_one_backward(22), 非正常的依赖父任务 第一个
    non_normal_last_one_backward(23), 非正常的依赖父任务 最后一个
    non_normal_any_one_backward(24), 非正常的依赖父任务 任意一个
    non_normal_specific_one_backward(25) 非正常的依赖父任务 指定一个
                     * 
                     */
                    void SetLinkDependencyType(const std::string& _linkDependencyType);

                    /**
                     * 判断参数 LinkDependencyType 是否已赋值
                     * @return LinkDependencyType 是否已赋值
                     * 
                     */
                    bool LinkDependencyTypeHasBeenSet() const;

                    /**
                     * 获取额外的属性信息 如分支节点、归并节点信息
                     * @return LinkExt 额外的属性信息 如分支节点、归并节点信息
                     * 
                     */
                    std::string GetLinkExt() const;

                    /**
                     * 设置额外的属性信息 如分支节点、归并节点信息
                     * @param _linkExt 额外的属性信息 如分支节点、归并节点信息
                     * 
                     */
                    void SetLinkExt(const std::string& _linkExt);

                    /**
                     * 判断参数 LinkExt 是否已赋值
                     * @return LinkExt 是否已赋值
                     * 
                     */
                    bool LinkExtHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 父任务ID
                     */
                    std::string m_taskFrom;
                    bool m_taskFromHasBeenSet;

                    /**
                     * 子任务ID
                     */
                    std::string m_taskTo;
                    bool m_taskToHasBeenSet;

                    /**
                     * 子任务工作流
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 父任务工作流
                     */
                    std::string m_realFromWorkflowId;
                    bool m_realFromWorkflowIdHasBeenSet;

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 父子任务之间的依赖关系
    正常的依赖父任务全部实例  启用
    normal_all(1),
    normal_first_one(2), 正常的依赖父任务 第一个
    normal_last_one(3), 正常的依赖父任务 最后一个
    normal_any_one(4), 正常的依赖父任务 任意一个
    normal_specific_one(5), 正常的依赖父任务 指定的一个
    self(6), 自身依赖，可能用不到

     非正常的依赖父任务全部实例  启用（向前依赖  明天)
    non_normal_all_forward(11),
    non_normal_first_one_forward(12), 非正常的依赖父任务 第一个
    non_normal_last_one_forward(13), 非正常的依赖父任务 最后一个
    non_normal_any_one_forward(14), 非正常的依赖父任务 任意一个
    non_normal_specific_one_forward(15),非正常的依赖父任务 指定一个

    非正常的依赖父任务全部实例  启用（向后依赖 昨天）
    non_normal_all_backward(21),
    non_normal_first_one_backward(22), 非正常的依赖父任务 第一个
    non_normal_last_one_backward(23), 非正常的依赖父任务 最后一个
    non_normal_any_one_backward(24), 非正常的依赖父任务 任意一个
    non_normal_specific_one_backward(25) 非正常的依赖父任务 指定一个
                     */
                    std::string m_linkDependencyType;
                    bool m_linkDependencyTypeHasBeenSet;

                    /**
                     * 额外的属性信息 如分支节点、归并节点信息
                     */
                    std::string m_linkExt;
                    bool m_linkExtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MODIFYTASKLINKSDSREQUEST_H_
