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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOSTDENIEDACTIONS_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOSTDENIEDACTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CHC物理服务器实例禁止操作的返回结构体
                */
                class ChcHostDeniedActions : public AbstractModel
                {
                public:
                    ChcHostDeniedActions();
                    ~ChcHostDeniedActions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CHC物理服务器的实例id
                     * @return ChcId CHC物理服务器的实例id
                     * 
                     */
                    std::string GetChcId() const;

                    /**
                     * 设置CHC物理服务器的实例id
                     * @param _chcId CHC物理服务器的实例id
                     * 
                     */
                    void SetChcId(const std::string& _chcId);

                    /**
                     * 判断参数 ChcId 是否已赋值
                     * @return ChcId 是否已赋值
                     * 
                     */
                    bool ChcIdHasBeenSet() const;

                    /**
                     * 获取CHC物理服务器的状态
                     * @return State CHC物理服务器的状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置CHC物理服务器的状态
                     * @param _state CHC物理服务器的状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取当前CHC物理服务器禁止做的操作
                     * @return DenyActions 当前CHC物理服务器禁止做的操作
                     * 
                     */
                    std::vector<std::string> GetDenyActions() const;

                    /**
                     * 设置当前CHC物理服务器禁止做的操作
                     * @param _denyActions 当前CHC物理服务器禁止做的操作
                     * 
                     */
                    void SetDenyActions(const std::vector<std::string>& _denyActions);

                    /**
                     * 判断参数 DenyActions 是否已赋值
                     * @return DenyActions 是否已赋值
                     * 
                     */
                    bool DenyActionsHasBeenSet() const;

                private:

                    /**
                     * CHC物理服务器的实例id
                     */
                    std::string m_chcId;
                    bool m_chcIdHasBeenSet;

                    /**
                     * CHC物理服务器的状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 当前CHC物理服务器禁止做的操作
                     */
                    std::vector<std::string> m_denyActions;
                    bool m_denyActionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CHCHOSTDENIEDACTIONS_H_
