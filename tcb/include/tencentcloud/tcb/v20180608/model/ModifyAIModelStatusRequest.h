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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYAIMODELSTATUSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYAIMODELSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/AIModelStatus.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ModifyAIModelStatus请求参数结构体
                */
                class ModifyAIModelStatusRequest : public AbstractModel
                {
                public:
                    ModifyAIModelStatusRequest();
                    ~ModifyAIModelStatusRequest() = default;
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
                     * 获取<p>分组名</p><p>枚举值：</p><ul><li>cloudbase： 生文系列内置模型</li><li>hunyuan-image： 生图系列内置模型</li></ul><p>系统内置分组固定标识</p>
                     * @return GroupName <p>分组名</p><p>枚举值：</p><ul><li>cloudbase： 生文系列内置模型</li><li>hunyuan-image： 生图系列内置模型</li></ul><p>系统内置分组固定标识</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>分组名</p><p>枚举值：</p><ul><li>cloudbase： 生文系列内置模型</li><li>hunyuan-image： 生图系列内置模型</li></ul><p>系统内置分组固定标识</p>
                     * @param _groupName <p>分组名</p><p>枚举值：</p><ul><li>cloudbase： 生文系列内置模型</li><li>hunyuan-image： 生图系列内置模型</li></ul><p>系统内置分组固定标识</p>
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
                     * 获取<p>模型设置</p><p>空数组表示无操作</p>
                     * @return Models <p>模型设置</p><p>空数组表示无操作</p>
                     * 
                     */
                    std::vector<AIModelStatus> GetModels() const;

                    /**
                     * 设置<p>模型设置</p><p>空数组表示无操作</p>
                     * @param _models <p>模型设置</p><p>空数组表示无操作</p>
                     * 
                     */
                    void SetModels(const std::vector<AIModelStatus>& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>分组名</p><p>枚举值：</p><ul><li>cloudbase： 生文系列内置模型</li><li>hunyuan-image： 生图系列内置模型</li></ul><p>系统内置分组固定标识</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>模型设置</p><p>空数组表示无操作</p>
                     */
                    std::vector<AIModelStatus> m_models;
                    bool m_modelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MODIFYAIMODELSTATUSREQUEST_H_
