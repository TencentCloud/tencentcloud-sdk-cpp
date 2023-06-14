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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_OPERATIONLOG_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_OPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 操作日志
                */
                class OperationLog : public AbstractModel
                {
                public:
                    OperationLog();
                    ~OperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateTime 操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperateTime() const;

                    /**
                     * 设置操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateTime 操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperateTime(const std::string& _operateTime);

                    /**
                     * 判断参数 OperateTime 是否已赋值
                     * @return OperateTime 是否已赋值
                     * 
                     */
                    bool OperateTimeHasBeenSet() const;

                    /**
                     * 获取模块名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Module 模块名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _module 模块名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取操作信息
                     * @return Description 操作信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置操作信息
                     * @param _description 操作信息
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
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取状态: 1:成功 2:失败
                     * @return Status 状态: 1:成功 2:失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态: 1:成功 2:失败
                     * @param _status 状态: 1:成功 2:失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取操作用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorUserID 操作用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorUserID() const;

                    /**
                     * 设置操作用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorUserID 操作用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorUserID(const std::string& _operatorUserID);

                    /**
                     * 判断参数 OperatorUserID 是否已赋值
                     * @return OperatorUserID 是否已赋值
                     * 
                     */
                    bool OperatorUserIDHasBeenSet() const;

                    /**
                     * 获取操作动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Action 操作动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置操作动作
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _action 操作动作
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                private:

                    /**
                     * 操作时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operateTime;
                    bool m_operateTimeHasBeenSet;

                    /**
                     * 模块名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 状态: 1:成功 2:失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorUserID;
                    bool m_operatorUserIDHasBeenSet;

                    /**
                     * 操作动作
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_OPERATIONLOG_H_
