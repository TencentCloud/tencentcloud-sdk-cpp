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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVEXTRAREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVEXTRAREQUEST_H_

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
                * ModifyEnvExtra请求参数结构体
                */
                class ModifyEnvExtraRequest : public AbstractModel
                {
                public:
                    ModifyEnvExtraRequest();
                    ~ModifyEnvExtraRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
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
                     * 获取<p>开启或关闭 <code>超限转按量</code>。<br>可取值： TRUE/FALSE （字符串类型）<br>非法制、不传、为空 则不变更该字段。</p>
                     * @return EnableOverrun <p>开启或关闭 <code>超限转按量</code>。<br>可取值： TRUE/FALSE （字符串类型）<br>非法制、不传、为空 则不变更该字段。</p>
                     * 
                     */
                    std::string GetEnableOverrun() const;

                    /**
                     * 设置<p>开启或关闭 <code>超限转按量</code>。<br>可取值： TRUE/FALSE （字符串类型）<br>非法制、不传、为空 则不变更该字段。</p>
                     * @param _enableOverrun <p>开启或关闭 <code>超限转按量</code>。<br>可取值： TRUE/FALSE （字符串类型）<br>非法制、不传、为空 则不变更该字段。</p>
                     * 
                     */
                    void SetEnableOverrun(const std::string& _enableOverrun);

                    /**
                     * 判断参数 EnableOverrun 是否已赋值
                     * @return EnableOverrun 是否已赋值
                     * 
                     */
                    bool EnableOverrunHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>开启或关闭 <code>超限转按量</code>。<br>可取值： TRUE/FALSE （字符串类型）<br>非法制、不传、为空 则不变更该字段。</p>
                     */
                    std::string m_enableOverrun;
                    bool m_enableOverrunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYENVEXTRAREQUEST_H_
