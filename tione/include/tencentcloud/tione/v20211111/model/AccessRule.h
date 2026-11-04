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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_ACCESSRULE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_ACCESSRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 访问规则
                */
                class AccessRule : public AbstractModel
                {
                public:
                    AccessRule();
                    ~AccessRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模块</p>
                     * @return Module <p>模块</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块</p>
                     * @param _module <p>模块</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>功能权限点</p>
                     * @return ActionType <p>功能权限点</p>
                     * 
                     */
                    std::vector<std::string> GetActionType() const;

                    /**
                     * 设置<p>功能权限点</p>
                     * @param _actionType <p>功能权限点</p>
                     * 
                     */
                    void SetActionType(const std::vector<std::string>& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>数据权限点</p>
                     * @return DataActionType <p>数据权限点</p>
                     * 
                     */
                    std::vector<std::string> GetDataActionType() const;

                    /**
                     * 设置<p>数据权限点</p>
                     * @param _dataActionType <p>数据权限点</p>
                     * 
                     */
                    void SetDataActionType(const std::vector<std::string>& _dataActionType);

                    /**
                     * 判断参数 DataActionType 是否已赋值
                     * @return DataActionType 是否已赋值
                     * 
                     */
                    bool DataActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>功能权限点名称</p>
                     * @return ActionTypeName <p>功能权限点名称</p>
                     * 
                     */
                    std::vector<std::string> GetActionTypeName() const;

                    /**
                     * 设置<p>功能权限点名称</p>
                     * @param _actionTypeName <p>功能权限点名称</p>
                     * 
                     */
                    void SetActionTypeName(const std::vector<std::string>& _actionTypeName);

                    /**
                     * 判断参数 ActionTypeName 是否已赋值
                     * @return ActionTypeName 是否已赋值
                     * 
                     */
                    bool ActionTypeNameHasBeenSet() const;

                private:

                    /**
                     * <p>模块</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>功能权限点</p>
                     */
                    std::vector<std::string> m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>数据权限点</p>
                     */
                    std::vector<std::string> m_dataActionType;
                    bool m_dataActionTypeHasBeenSet;

                    /**
                     * <p>功能权限点名称</p>
                     */
                    std::vector<std::string> m_actionTypeName;
                    bool m_actionTypeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_ACCESSRULE_H_
