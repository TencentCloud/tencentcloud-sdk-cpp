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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITPRIVILEGERULEREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITPRIVILEGERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * EditPrivilegeRule请求参数结构体
                */
                class EditPrivilegeRuleRequest : public AbstractModel
                {
                public:
                    EditPrivilegeRuleRequest();
                    ~EditPrivilegeRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID(新增时请留空)
                     * @return Id 规则ID(新增时请留空)
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID(新增时请留空)
                     * @param _id 规则ID(新增时请留空)
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     * @return Uuid 客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     * @param _uuid 客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     * @return Hostip 主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     * 
                     */
                    std::string GetHostip() const;

                    /**
                     * 设置主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     * @param _hostip 主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     * 
                     */
                    void SetHostip(const std::string& _hostip);

                    /**
                     * 判断参数 Hostip 是否已赋值
                     * @return Hostip 是否已赋值
                     * 
                     */
                    bool HostipHasBeenSet() const;

                    /**
                     * 获取进程名
                     * @return ProcessName 进程名
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名
                     * @param _processName 进程名
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取是否S权限进程
                     * @return SMode 是否S权限进程
                     * 
                     */
                    uint64_t GetSMode() const;

                    /**
                     * 设置是否S权限进程
                     * @param _sMode 是否S权限进程
                     * 
                     */
                    void SetSMode(const uint64_t& _sMode);

                    /**
                     * 判断参数 SMode 是否已赋值
                     * @return SMode 是否已赋值
                     * 
                     */
                    bool SModeHasBeenSet() const;

                    /**
                     * 获取是否全局规则(默认否)
                     * @return IsGlobal 是否全局规则(默认否)
                     * 
                     */
                    uint64_t GetIsGlobal() const;

                    /**
                     * 设置是否全局规则(默认否)
                     * @param _isGlobal 是否全局规则(默认否)
                     * 
                     */
                    void SetIsGlobal(const uint64_t& _isGlobal);

                    /**
                     * 判断参数 IsGlobal 是否已赋值
                     * @return IsGlobal 是否已赋值
                     * 
                     */
                    bool IsGlobalHasBeenSet() const;

                private:

                    /**
                     * 规则ID(新增时请留空)
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 客户端ID(IsGlobal为1时，Uuid或Hostip必填一个)
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机IP(IsGlobal为1时，Uuid或Hostip必填一个)
                     */
                    std::string m_hostip;
                    bool m_hostipHasBeenSet;

                    /**
                     * 进程名
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 是否S权限进程
                     */
                    uint64_t m_sMode;
                    bool m_sModeHasBeenSet;

                    /**
                     * 是否全局规则(默认否)
                     */
                    uint64_t m_isGlobal;
                    bool m_isGlobalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_EDITPRIVILEGERULEREQUEST_H_
