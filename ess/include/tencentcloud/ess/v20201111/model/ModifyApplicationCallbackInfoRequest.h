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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYAPPLICATIONCALLBACKINFOREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYAPPLICATIONCALLBACKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/CallbackInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * ModifyApplicationCallbackInfo请求参数结构体
                */
                class ModifyApplicationCallbackInfoRequest : public AbstractModel
                {
                public:
                    ModifyApplicationCallbackInfoRequest();
                    ~ModifyApplicationCallbackInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方用户信息，userId 必填
                     * @return Operator 调用方用户信息，userId 必填
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置调用方用户信息，userId 必填
                     * @param _operator 调用方用户信息，userId 必填
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取操作类型：1-新增，2-删除
                     * @return OperateType 操作类型：1-新增，2-删除
                     * 
                     */
                    int64_t GetOperateType() const;

                    /**
                     * 设置操作类型：1-新增，2-删除
                     * @param _operateType 操作类型：1-新增，2-删除
                     * 
                     */
                    void SetOperateType(const int64_t& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取回调信息
                     * @return CallbackInfo 回调信息
                     * 
                     */
                    CallbackInfo GetCallbackInfo() const;

                    /**
                     * 设置回调信息
                     * @param _callbackInfo 回调信息
                     * 
                     */
                    void SetCallbackInfo(const CallbackInfo& _callbackInfo);

                    /**
                     * 判断参数 CallbackInfo 是否已赋值
                     * @return CallbackInfo 是否已赋值
                     * 
                     */
                    bool CallbackInfoHasBeenSet() const;

                private:

                    /**
                     * 调用方用户信息，userId 必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作类型：1-新增，2-删除
                     */
                    int64_t m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * 回调信息
                     */
                    CallbackInfo m_callbackInfo;
                    bool m_callbackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MODIFYAPPLICATIONCALLBACKINFOREQUEST_H_
