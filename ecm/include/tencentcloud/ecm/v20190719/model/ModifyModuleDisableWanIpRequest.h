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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEDISABLEWANIPREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEDISABLEWANIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifyModuleDisableWanIp请求参数结构体
                */
                class ModifyModuleDisableWanIpRequest : public AbstractModel
                {
                public:
                    ModifyModuleDisableWanIpRequest();
                    ~ModifyModuleDisableWanIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块ID
                     * @return ModuleId 模块ID
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置模块ID
                     * @param _moduleId 模块ID
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取是否禁止分配外网ip,true：统一分配外网ip，false：禁止分配外网ip.
                     * @return DisableWanIp 是否禁止分配外网ip,true：统一分配外网ip，false：禁止分配外网ip.
                     * 
                     */
                    bool GetDisableWanIp() const;

                    /**
                     * 设置是否禁止分配外网ip,true：统一分配外网ip，false：禁止分配外网ip.
                     * @param _disableWanIp 是否禁止分配外网ip,true：统一分配外网ip，false：禁止分配外网ip.
                     * 
                     */
                    void SetDisableWanIp(const bool& _disableWanIp);

                    /**
                     * 判断参数 DisableWanIp 是否已赋值
                     * @return DisableWanIp 是否已赋值
                     * 
                     */
                    bool DisableWanIpHasBeenSet() const;

                private:

                    /**
                     * 模块ID
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 是否禁止分配外网ip,true：统一分配外网ip，false：禁止分配外网ip.
                     */
                    bool m_disableWanIp;
                    bool m_disableWanIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYMODULEDISABLEWANIPREQUEST_H_
