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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSTRATEGYREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * ModifyDeliveryStrategy请求参数结构体
                */
                class ModifyDeliveryStrategyRequest : public AbstractModel
                {
                public:
                    ModifyDeliveryStrategyRequest();
                    ~ModifyDeliveryStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略名称</p>
                     * @return Name <p>策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _name <p>策略名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
                     * @return LogTypes <p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
                     * 
                     */
                    std::vector<std::string> GetLogTypes() const;

                    /**
                     * 设置<p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
                     * @param _logTypes <p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
                     * 
                     */
                    void SetLogTypes(const std::vector<std::string>& _logTypes);

                    /**
                     * 判断参数 LogTypes 是否已赋值
                     * @return LogTypes 是否已赋值
                     * 
                     */
                    bool LogTypesHasBeenSet() const;

                    /**
                     * 获取<p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
                     * @return Type <p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
                     * @param _type <p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>转发服务器id(只支持32位)</p>
                     * @return ConfigId <p>转发服务器id(只支持32位)</p>
                     * 
                     */
                    int64_t GetConfigId() const;

                    /**
                     * 设置<p>转发服务器id(只支持32位)</p>
                     * @param _configId <p>转发服务器id(只支持32位)</p>
                     * 
                     */
                    void SetConfigId(const int64_t& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>转发策略描述</p>
                     * @return Description <p>转发策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>转发策略描述</p>
                     * @param _description <p>转发策略描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启</p>
                     * @return Enabled <p>是否开启</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否开启</p>
                     * @param _enabled <p>是否开启</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>转发策略id 创建时传递 编辑时候无需传递(只支持32位)</p>
                     * @return ID <p>转发策略id 创建时传递 编辑时候无需传递(只支持32位)</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>转发策略id 创建时传递 编辑时候无需传递(只支持32位)</p>
                     * @param _iD <p>转发策略id 创建时传递 编辑时候无需传递(只支持32位)</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>转发日志类型列表 身份安全:&quot;040201000000&quot;,资源访问日志:&quot;040203000000&quot;,客户端操作日志:&quot;040202000000&quot;,终端安全日志:&quot;040205000000&quot;,终端管控日志:&quot;040206000000&quot;,终端合规日志:&quot;040207000000&quot;,license授权日志:&quot;040212000000&quot;</p>
                     */
                    std::vector<std::string> m_logTypes;
                    bool m_logTypesHasBeenSet;

                    /**
                     * <p>转发方式 0:syslog, 2:kafka, 3:http(只支持32位)</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>转发服务器id(只支持32位)</p>
                     */
                    int64_t m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * <p>转发策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>是否开启</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>转发策略id 创建时传递 编辑时候无需传递(只支持32位)</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDELIVERYSTRATEGYREQUEST_H_
