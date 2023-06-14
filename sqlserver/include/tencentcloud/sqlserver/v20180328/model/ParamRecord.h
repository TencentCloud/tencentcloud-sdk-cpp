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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMRECORD_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 实例参数修改记录
                */
                class ParamRecord : public AbstractModel
                {
                public:
                    ParamRecord();
                    ~ParamRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取参数名称
                     * @return ParamName 参数名称
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称
                     * @param _paramName 参数名称
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取参数修改前的值
                     * @return OldValue 参数修改前的值
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置参数修改前的值
                     * @param _oldValue 参数修改前的值
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取参数修改后的值
                     * @return NewValue 参数修改后的值
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置参数修改后的值
                     * @param _newValue 参数修改后的值
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取参数修改状态，1-初始化等待被执行，2-执行成功，3-执行失败，4-参数修改中
                     * @return Status 参数修改状态，1-初始化等待被执行，2-执行成功，3-执行失败，4-参数修改中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置参数修改状态，1-初始化等待被执行，2-执行成功，3-执行失败，4-参数修改中
                     * @param _status 参数修改状态，1-初始化等待被执行，2-执行成功，3-执行失败，4-参数修改中
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数修改前的值
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * 参数修改后的值
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * 参数修改状态，1-初始化等待被执行，2-执行成功，3-执行失败，4-参数修改中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PARAMRECORD_H_
