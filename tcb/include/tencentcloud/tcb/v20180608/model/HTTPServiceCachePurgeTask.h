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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEPURGETASK_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEPURGETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 清除任务详情
                */
                class HTTPServiceCachePurgeTask : public AbstractModel
                {
                public:
                    HTTPServiceCachePurgeTask();
                    ~HTTPServiceCachePurgeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO</li><li>TCBCDN： 云开发cdn</li></ul><p>默认值：EO</p>
                     * @return CacheType <p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO</li><li>TCBCDN： 云开发cdn</li></ul><p>默认值：EO</p>
                     * 
                     */
                    std::string GetCacheType() const;

                    /**
                     * 设置<p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO</li><li>TCBCDN： 云开发cdn</li></ul><p>默认值：EO</p>
                     * @param _cacheType <p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO</li><li>TCBCDN： 云开发cdn</li></ul><p>默认值：EO</p>
                     * 
                     */
                    void SetCacheType(const std::string& _cacheType);

                    /**
                     * 判断参数 CacheType 是否已赋值
                     * @return CacheType 是否已赋值
                     * 
                     */
                    bool CacheTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务id</p>
                     * @return TaskId <p>任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _taskId <p>任务id</p>
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
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>TIMEOUT： 超时</li><li>CANCELED： 取消</li></ul>
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>TIMEOUT： 超时</li><li>CANCELED： 取消</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>TIMEOUT： 超时</li><li>CANCELED： 取消</li></ul>
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>TIMEOUT： 超时</li><li>CANCELED： 取消</li></ul>
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
                     * 获取<p>刷新类型</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     * @return PurgeType <p>刷新类型</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置<p>刷新类型</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     * @param _purgeType <p>刷新类型</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     * 
                     */
                    void SetPurgeType(const std::string& _purgeType);

                    /**
                     * 判断参数 PurgeType 是否已赋值
                     * @return PurgeType 是否已赋值
                     * 
                     */
                    bool PurgeTypeHasBeenSet() const;

                    /**
                     * 获取<p>清除缓存分为直接删除和标记过期两种方式。URL 类型默认为“直接删除”，其它清除类型默认为“标记过期”</p><p>枚举值：</p><ul><li>INVALIDATE： 标记过期：节点缓存标记为过期，用户请求时回源校验，源站 304 则复用，200 则更新</li><li>DELETE： 直接删除：从节点直接删除缓存，用户下次请求强制回源拉新</li></ul>
                     * @return Method <p>清除缓存分为直接删除和标记过期两种方式。URL 类型默认为“直接删除”，其它清除类型默认为“标记过期”</p><p>枚举值：</p><ul><li>INVALIDATE： 标记过期：节点缓存标记为过期，用户请求时回源校验，源站 304 则复用，200 则更新</li><li>DELETE： 直接删除：从节点直接删除缓存，用户下次请求强制回源拉新</li></ul>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>清除缓存分为直接删除和标记过期两种方式。URL 类型默认为“直接删除”，其它清除类型默认为“标记过期”</p><p>枚举值：</p><ul><li>INVALIDATE： 标记过期：节点缓存标记为过期，用户请求时回源校验，源站 304 则复用，200 则更新</li><li>DELETE： 直接删除：从节点直接删除缓存，用户下次请求强制回源拉新</li></ul>
                     * @param _method <p>清除缓存分为直接删除和标记过期两种方式。URL 类型默认为“直接删除”，其它清除类型默认为“标记过期”</p><p>枚举值：</p><ul><li>INVALIDATE： 标记过期：节点缓存标记为过期，用户请求时回源校验，源站 304 则复用，200 则更新</li><li>DELETE： 直接删除：从节点直接删除缓存，用户下次请求强制回源拉新</li></ul>
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
                     * 获取<p>刷新目标列表（URL / 前缀 / host）</p>
                     * @return Targets <p>刷新目标列表（URL / 前缀 / host）</p>
                     * 
                     */
                    std::vector<std::string> GetTargets() const;

                    /**
                     * 设置<p>刷新目标列表（URL / 前缀 / host）</p>
                     * @param _targets <p>刷新目标列表（URL / 前缀 / host）</p>
                     * 
                     */
                    void SetTargets(const std::vector<std::string>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
                     * @return FailReason <p>失败原因</p>
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置<p>失败原因</p>
                     * @param _failReason <p>失败原因</p>
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * @return CreateTime <p>任务创建时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * @param _createTime <p>任务创建时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
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
                     * 获取<p>任务更新时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * @return UpdateTime <p>任务更新时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>任务更新时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     * @param _updateTime <p>任务更新时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
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
                     * <p>缓存类型</p><p>枚举值：</p><ul><li>EO： EO</li><li>TCBCDN： 云开发cdn</li></ul><p>默认值：EO</p>
                     */
                    std::string m_cacheType;
                    bool m_cacheTypeHasBeenSet;

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>PROCESSING： 处理中</li><li>SUCCESS： 成功</li><li>FAILED： 失败</li><li>TIMEOUT： 超时</li><li>CANCELED： 取消</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>刷新类型</p><p>枚举值：</p><ul><li>PURGE_URL： URL 刷新</li><li>PURGE_PREFIX： 目录刷新</li><li>PURGE_HOST： Hostname 刷新</li></ul>
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * <p>清除缓存分为直接删除和标记过期两种方式。URL 类型默认为“直接删除”，其它清除类型默认为“标记过期”</p><p>枚举值：</p><ul><li>INVALIDATE： 标记过期：节点缓存标记为过期，用户请求时回源校验，源站 304 则复用，200 则更新</li><li>DELETE： 直接删除：从节点直接删除缓存，用户下次请求强制回源拉新</li></ul>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>刷新目标列表（URL / 前缀 / host）</p>
                     */
                    std::vector<std::string> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * <p>任务创建时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>任务更新时间</p><p>参数格式：格式 YYYY-MM-DDTHH:mm:ss±HH:mmZ，时区为 UTC+0</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_HTTPSERVICECACHEPURGETASK_H_
