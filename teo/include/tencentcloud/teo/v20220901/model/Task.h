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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TASK_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 内容管理任务结果
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务 ID。
                     * @return JobId 任务 ID。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务 ID。
                     * @param _jobId 任务 ID。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取资源。
                     * @return Target 资源。
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置资源。
                     * @param _target 资源。
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取任务类型。
                     * @return Type 任务类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务类型。
                     * @param _type 任务类型。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取节点缓存清除方法，取值有：
<li>invalidate：标记过期，用户请求时触发回源校验，即发送带有 If-None-Match 和 If-Modified-Since 头部的 HTTP 条件请求。若源站响应 200，则节点会回源拉取新的资源并更新缓存；若源站响应 304，则节点不会更新缓存；</li>
<li>delete：直接删除节点缓存，用户请求时触发回源拉取资源。</li>
                     * @return Method 节点缓存清除方法，取值有：
<li>invalidate：标记过期，用户请求时触发回源校验，即发送带有 If-None-Match 和 If-Modified-Since 头部的 HTTP 条件请求。若源站响应 200，则节点会回源拉取新的资源并更新缓存；若源站响应 304，则节点不会更新缓存；</li>
<li>delete：直接删除节点缓存，用户请求时触发回源拉取资源。</li>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置节点缓存清除方法，取值有：
<li>invalidate：标记过期，用户请求时触发回源校验，即发送带有 If-None-Match 和 If-Modified-Since 头部的 HTTP 条件请求。若源站响应 200，则节点会回源拉取新的资源并更新缓存；若源站响应 304，则节点不会更新缓存；</li>
<li>delete：直接删除节点缓存，用户请求时触发回源拉取资源。</li>
                     * @param _method 节点缓存清除方法，取值有：
<li>invalidate：标记过期，用户请求时触发回源校验，即发送带有 If-None-Match 和 If-Modified-Since 头部的 HTTP 条件请求。若源站响应 200，则节点会回源拉取新的资源并更新缓存；若源站响应 304，则节点不会更新缓存；</li>
<li>delete：直接删除节点缓存，用户请求时触发回源拉取资源。</li>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取状态。取值有：
<li>processing：处理中；</li>
<li>success：成功；</li>
<li> failed：失败；</li>
<li>timeout：超时；</li>
<li>canceled：已取消。</li>
                     * @return Status 状态。取值有：
<li>processing：处理中；</li>
<li>success：成功；</li>
<li> failed：失败；</li>
<li>timeout：超时；</li>
<li>canceled：已取消。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。取值有：
<li>processing：处理中；</li>
<li>success：成功；</li>
<li> failed：失败；</li>
<li>timeout：超时；</li>
<li>canceled：已取消。</li>
                     * @param _status 状态。取值有：
<li>processing：处理中；</li>
<li>success：成功；</li>
<li> failed：失败；</li>
<li>timeout：超时；</li>
<li>canceled：已取消。</li>
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
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param _createTime 任务创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务完成时间。
                     * @return UpdateTime 任务完成时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置任务完成时间。
                     * @param _updateTime 任务完成时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务 ID。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 资源。
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 任务类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 节点缓存清除方法，取值有：
<li>invalidate：标记过期，用户请求时触发回源校验，即发送带有 If-None-Match 和 If-Modified-Since 头部的 HTTP 条件请求。若源站响应 200，则节点会回源拉取新的资源并更新缓存；若源站响应 304，则节点不会更新缓存；</li>
<li>delete：直接删除节点缓存，用户请求时触发回源拉取资源。</li>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 状态。取值有：
<li>processing：处理中；</li>
<li>success：成功；</li>
<li> failed：失败；</li>
<li>timeout：超时；</li>
<li>canceled：已取消。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务完成时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TASK_H_
