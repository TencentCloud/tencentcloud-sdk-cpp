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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEAIMODELREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEAIMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/AIModel.h>
#include <tencentcloud/tcb/v20180608/model/AIModelSecret.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * UpdateAIModel请求参数结构体
                */
                class UpdateAIModelRequest : public AbstractModel
                {
                public:
                    UpdateAIModelRequest();
                    ~UpdateAIModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境id</p>
                     * @return EnvId <p>环境id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境id</p>
                     * @param _envId <p>环境id</p>
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
                     * 获取<p>分组名</p>
                     * @return GroupName <p>分组名</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>分组名</p>
                     * @param _groupName <p>分组名</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>模型地址</p><p>枚举值：</p><ul><li>http://default.tcb： 默认模型地址，custom模型切换为builtin模型时使用</li></ul>
                     * @return BaseUrl <p>模型地址</p><p>枚举值：</p><ul><li>http://default.tcb： 默认模型地址，custom模型切换为builtin模型时使用</li></ul>
                     * 
                     */
                    std::string GetBaseUrl() const;

                    /**
                     * 设置<p>模型地址</p><p>枚举值：</p><ul><li>http://default.tcb： 默认模型地址，custom模型切换为builtin模型时使用</li></ul>
                     * @param _baseUrl <p>模型地址</p><p>枚举值：</p><ul><li>http://default.tcb： 默认模型地址，custom模型切换为builtin模型时使用</li></ul>
                     * 
                     */
                    void SetBaseUrl(const std::string& _baseUrl);

                    /**
                     * 判断参数 BaseUrl 是否已赋值
                     * @return BaseUrl 是否已赋值
                     * 
                     */
                    bool BaseUrlHasBeenSet() const;

                    /**
                     * 获取<p>模型名列表</p><p>Models 列表更新采用全量替换</p>
                     * @return Models <p>模型名列表</p><p>Models 列表更新采用全量替换</p>
                     * 
                     */
                    std::vector<AIModel> GetModels() const;

                    /**
                     * 设置<p>模型名列表</p><p>Models 列表更新采用全量替换</p>
                     * @param _models <p>模型名列表</p><p>Models 列表更新采用全量替换</p>
                     * 
                     */
                    void SetModels(const std::vector<AIModel>& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>模型状态, 1: 开启, 2: 关闭</p>
                     * @return Status <p>模型状态, 1: 开启, 2: 关闭</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>模型状态, 1: 开启, 2: 关闭</p>
                     * @param _status <p>模型状态, 1: 开启, 2: 关闭</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>模型密钥</p>
                     * @return Secret <p>模型密钥</p>
                     * 
                     */
                    AIModelSecret GetSecret() const;

                    /**
                     * 设置<p>模型密钥</p>
                     * @param _secret <p>模型密钥</p>
                     * 
                     */
                    void SetSecret(const AIModelSecret& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                private:

                    /**
                     * <p>环境id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>分组名</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>模型地址</p><p>枚举值：</p><ul><li>http://default.tcb： 默认模型地址，custom模型切换为builtin模型时使用</li></ul>
                     */
                    std::string m_baseUrl;
                    bool m_baseUrlHasBeenSet;

                    /**
                     * <p>模型名列表</p><p>Models 列表更新采用全量替换</p>
                     */
                    std::vector<AIModel> m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>模型状态, 1: 开启, 2: 关闭</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>模型密钥</p>
                     */
                    AIModelSecret m_secret;
                    bool m_secretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_UPDATEAIMODELREQUEST_H_
