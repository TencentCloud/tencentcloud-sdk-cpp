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

#ifndef TENCENTCLOUD_EIS_V20200715_MODEL_EISCONNECTIONOPERATION_H_
#define TENCENTCLOUD_EIS_V20200715_MODEL_EISCONNECTIONOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20200715
        {
            namespace Model
            {
                /**
                * 连接器操作
                */
                class EisConnectionOperation : public AbstractModel
                {
                public:
                    EisConnectionOperation();
                    ~EisConnectionOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接器操作名称
                     * @return OperationName 连接器操作名称
                     * 
                     */
                    std::string GetOperationName() const;

                    /**
                     * 设置连接器操作名称
                     * @param _operationName 连接器操作名称
                     * 
                     */
                    void SetOperationName(const std::string& _operationName);

                    /**
                     * 判断参数 OperationName 是否已赋值
                     * @return OperationName 是否已赋值
                     * 
                     */
                    bool OperationNameHasBeenSet() const;

                    /**
                     * 获取连接器展示名称
                     * @return DisplayName 连接器展示名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置连接器展示名称
                     * @param _displayName 连接器展示名称
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取操作是否为触发器
                     * @return IsTrigger 操作是否为触发器
                     * 
                     */
                    bool GetIsTrigger() const;

                    /**
                     * 设置操作是否为触发器
                     * @param _isTrigger 操作是否为触发器
                     * 
                     */
                    void SetIsTrigger(const bool& _isTrigger);

                    /**
                     * 判断参数 IsTrigger 是否已赋值
                     * @return IsTrigger 是否已赋值
                     * 
                     */
                    bool IsTriggerHasBeenSet() const;

                private:

                    /**
                     * 连接器操作名称
                     */
                    std::string m_operationName;
                    bool m_operationNameHasBeenSet;

                    /**
                     * 连接器展示名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 操作是否为触发器
                     */
                    bool m_isTrigger;
                    bool m_isTriggerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20200715_MODEL_EISCONNECTIONOPERATION_H_
