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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_ALLOCATEENVREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_ALLOCATEENVREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AllocateEnv请求参数结构体
                */
                class AllocateEnvRequest : public AbstractModel
                {
                public:
                    AllocateEnvRequest();
                    ~AllocateEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分配请求ID，会按这个值做幂等</p><p>入参限制：长度不超过64</p>
                     * @return AllocateId <p>分配请求ID，会按这个值做幂等</p><p>入参限制：长度不超过64</p>
                     * 
                     */
                    std::string GetAllocateId() const;

                    /**
                     * 设置<p>分配请求ID，会按这个值做幂等</p><p>入参限制：长度不超过64</p>
                     * @param _allocateId <p>分配请求ID，会按这个值做幂等</p><p>入参限制：长度不超过64</p>
                     * 
                     */
                    void SetAllocateId(const std::string& _allocateId);

                    /**
                     * 判断参数 AllocateId 是否已赋值
                     * @return AllocateId 是否已赋值
                     * 
                     */
                    bool AllocateIdHasBeenSet() const;

                    /**
                     * 获取<p>客户平台的应用标识，如果没有则不传</p>
                     * @return ExternalAppId <p>客户平台的应用标识，如果没有则不传</p>
                     * 
                     */
                    std::string GetExternalAppId() const;

                    /**
                     * 设置<p>客户平台的应用标识，如果没有则不传</p>
                     * @param _externalAppId <p>客户平台的应用标识，如果没有则不传</p>
                     * 
                     */
                    void SetExternalAppId(const std::string& _externalAppId);

                    /**
                     * 判断参数 ExternalAppId 是否已赋值
                     * @return ExternalAppId 是否已赋值
                     * 
                     */
                    bool ExternalAppIdHasBeenSet() const;

                    /**
                     * 获取<p>自定义标签</p><p>参数格式：逗号分隔的 key=value 对，key/value 仅允许字母、数字、下划线。k1=v1,k2=v2</p>
                     * @return ExternalTag <p>自定义标签</p><p>参数格式：逗号分隔的 key=value 对，key/value 仅允许字母、数字、下划线。k1=v1,k2=v2</p>
                     * 
                     */
                    std::string GetExternalTag() const;

                    /**
                     * 设置<p>自定义标签</p><p>参数格式：逗号分隔的 key=value 对，key/value 仅允许字母、数字、下划线。k1=v1,k2=v2</p>
                     * @param _externalTag <p>自定义标签</p><p>参数格式：逗号分隔的 key=value 对，key/value 仅允许字母、数字、下划线。k1=v1,k2=v2</p>
                     * 
                     */
                    void SetExternalTag(const std::string& _externalTag);

                    /**
                     * 判断参数 ExternalTag 是否已赋值
                     * @return ExternalTag 是否已赋值
                     * 
                     */
                    bool ExternalTagHasBeenSet() const;

                    /**
                     * 获取<p>是否需要云函数</p><p>默认值：false</p>
                     * @return RequireFunction <p>是否需要云函数</p><p>默认值：false</p>
                     * 
                     */
                    bool GetRequireFunction() const;

                    /**
                     * 设置<p>是否需要云函数</p><p>默认值：false</p>
                     * @param _requireFunction <p>是否需要云函数</p><p>默认值：false</p>
                     * 
                     */
                    void SetRequireFunction(const bool& _requireFunction);

                    /**
                     * 判断参数 RequireFunction 是否已赋值
                     * @return RequireFunction 是否已赋值
                     * 
                     */
                    bool RequireFunctionHasBeenSet() const;

                private:

                    /**
                     * <p>分配请求ID，会按这个值做幂等</p><p>入参限制：长度不超过64</p>
                     */
                    std::string m_allocateId;
                    bool m_allocateIdHasBeenSet;

                    /**
                     * <p>客户平台的应用标识，如果没有则不传</p>
                     */
                    std::string m_externalAppId;
                    bool m_externalAppIdHasBeenSet;

                    /**
                     * <p>自定义标签</p><p>参数格式：逗号分隔的 key=value 对，key/value 仅允许字母、数字、下划线。k1=v1,k2=v2</p>
                     */
                    std::string m_externalTag;
                    bool m_externalTagHasBeenSet;

                    /**
                     * <p>是否需要云函数</p><p>默认值：false</p>
                     */
                    bool m_requireFunction;
                    bool m_requireFunctionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_ALLOCATEENVREQUEST_H_
