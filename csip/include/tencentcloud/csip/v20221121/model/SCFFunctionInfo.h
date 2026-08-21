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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * SCF 函数精简信息
                */
                class SCFFunctionInfo : public AbstractModel
                {
                public:
                    SCFFunctionInfo();
                    ~SCFFunctionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取函数 ID
参数格式：形如 lam-xxxxxxxx
                     * @return FunctionId 函数 ID
参数格式：形如 lam-xxxxxxxx
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID
参数格式：形如 lam-xxxxxxxx
                     * @param _functionId 函数 ID
参数格式：形如 lam-xxxxxxxx
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param _functionName 函数名称
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取函数状态
枚举值：
Active：可用
Creating：创建中
Updating：更新中
CreateFailed：创建失败
Deleting：删除中
                     * @return Status 函数状态
枚举值：
Active：可用
Creating：创建中
Updating：更新中
CreateFailed：创建失败
Deleting：删除中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置函数状态
枚举值：
Active：可用
Creating：创建中
Updating：更新中
CreateFailed：创建失败
Deleting：删除中
                     * @param _status 函数状态
枚举值：
Active：可用
Creating：创建中
Updating：更新中
CreateFailed：创建失败
Deleting：删除中
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
                     * 获取函数类型
枚举值：
Event：事件函数（当前接口仅返回该类型）
                     * @return Type 函数类型
枚举值：
Event：事件函数（当前接口仅返回该类型）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置函数类型
枚举值：
Event：事件函数（当前接口仅返回该类型）
                     * @param _type 函数类型
枚举值：
Event：事件函数（当前接口仅返回该类型）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 函数 ID
参数格式：形如 lam-xxxxxxxx
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数状态
枚举值：
Active：可用
Creating：创建中
Updating：更新中
CreateFailed：创建失败
Deleting：删除中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 函数类型
枚举值：
Event：事件函数（当前接口仅返回该类型）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCFFUNCTIONINFO_H_
