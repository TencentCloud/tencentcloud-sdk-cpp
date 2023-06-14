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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYENVREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYENVREQUEST_H_

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
                * DestroyEnv请求参数结构体
                */
                class DestroyEnvRequest : public AbstractModel
                {
                public:
                    DestroyEnvRequest();
                    ~DestroyEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境Id
                     * @return EnvId 环境Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境Id
                     * @param _envId 环境Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取针对预付费 删除隔离中的环境时要传true 正常环境直接跳过隔离期删除
                     * @return IsForce 针对预付费 删除隔离中的环境时要传true 正常环境直接跳过隔离期删除
                     * 
                     */
                    bool GetIsForce() const;

                    /**
                     * 设置针对预付费 删除隔离中的环境时要传true 正常环境直接跳过隔离期删除
                     * @param _isForce 针对预付费 删除隔离中的环境时要传true 正常环境直接跳过隔离期删除
                     * 
                     */
                    void SetIsForce(const bool& _isForce);

                    /**
                     * 判断参数 IsForce 是否已赋值
                     * @return IsForce 是否已赋值
                     * 
                     */
                    bool IsForceHasBeenSet() const;

                    /**
                     * 获取是否绕过资源检查，资源包等额外资源，默认为false，如果为true，则不检查资源是否有数据，直接删除。
                     * @return BypassCheck 是否绕过资源检查，资源包等额外资源，默认为false，如果为true，则不检查资源是否有数据，直接删除。
                     * 
                     */
                    bool GetBypassCheck() const;

                    /**
                     * 设置是否绕过资源检查，资源包等额外资源，默认为false，如果为true，则不检查资源是否有数据，直接删除。
                     * @param _bypassCheck 是否绕过资源检查，资源包等额外资源，默认为false，如果为true，则不检查资源是否有数据，直接删除。
                     * 
                     */
                    void SetBypassCheck(const bool& _bypassCheck);

                    /**
                     * 判断参数 BypassCheck 是否已赋值
                     * @return BypassCheck 是否已赋值
                     * 
                     */
                    bool BypassCheckHasBeenSet() const;

                private:

                    /**
                     * 环境Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 针对预付费 删除隔离中的环境时要传true 正常环境直接跳过隔离期删除
                     */
                    bool m_isForce;
                    bool m_isForceHasBeenSet;

                    /**
                     * 是否绕过资源检查，资源包等额外资源，默认为false，如果为true，则不检查资源是否有数据，直接删除。
                     */
                    bool m_bypassCheck;
                    bool m_bypassCheckHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESTROYENVREQUEST_H_
