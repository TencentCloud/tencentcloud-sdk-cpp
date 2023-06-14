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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_ACTIONHISTORY_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_ACTIONHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * 查询设备历史
                */
                class ActionHistory : public AbstractModel
                {
                public:
                    ActionHistory();
                    ~ActionHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取动作Id
                     * @return ActionId 动作Id
                     * 
                     */
                    std::string GetActionId() const;

                    /**
                     * 设置动作Id
                     * @param _actionId 动作Id
                     * 
                     */
                    void SetActionId(const std::string& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取动作名称
                     * @return ActionName 动作名称
                     * 
                     */
                    std::string GetActionName() const;

                    /**
                     * 设置动作名称
                     * @param _actionName 动作名称
                     * 
                     */
                    void SetActionName(const std::string& _actionName);

                    /**
                     * 判断参数 ActionName 是否已赋值
                     * @return ActionName 是否已赋值
                     * 
                     */
                    bool ActionNameHasBeenSet() const;

                    /**
                     * 获取请求时间
                     * @return ReqTime 请求时间
                     * 
                     */
                    uint64_t GetReqTime() const;

                    /**
                     * 设置请求时间
                     * @param _reqTime 请求时间
                     * 
                     */
                    void SetReqTime(const uint64_t& _reqTime);

                    /**
                     * 判断参数 ReqTime 是否已赋值
                     * @return ReqTime 是否已赋值
                     * 
                     */
                    bool ReqTimeHasBeenSet() const;

                    /**
                     * 获取响应时间
                     * @return RspTime 响应时间
                     * 
                     */
                    uint64_t GetRspTime() const;

                    /**
                     * 设置响应时间
                     * @param _rspTime 响应时间
                     * 
                     */
                    void SetRspTime(const uint64_t& _rspTime);

                    /**
                     * 判断参数 RspTime 是否已赋值
                     * @return RspTime 是否已赋值
                     * 
                     */
                    bool RspTimeHasBeenSet() const;

                    /**
                     * 获取输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputParams 输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputParams() const;

                    /**
                     * 设置输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputParams 输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputParams(const std::string& _inputParams);

                    /**
                     * 判断参数 InputParams 是否已赋值
                     * @return InputParams 是否已赋值
                     * 
                     */
                    bool InputParamsHasBeenSet() const;

                    /**
                     * 获取输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputParams 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputParams() const;

                    /**
                     * 设置输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputParams 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputParams(const std::string& _outputParams);

                    /**
                     * 判断参数 OutputParams 是否已赋值
                     * @return OutputParams 是否已赋值
                     * 
                     */
                    bool OutputParamsHasBeenSet() const;

                    /**
                     * 获取调用方式
                     * @return Calling 调用方式
                     * 
                     */
                    std::string GetCalling() const;

                    /**
                     * 设置调用方式
                     * @param _calling 调用方式
                     * 
                     */
                    void SetCalling(const std::string& _calling);

                    /**
                     * 判断参数 Calling 是否已赋值
                     * @return Calling 是否已赋值
                     * 
                     */
                    bool CallingHasBeenSet() const;

                    /**
                     * 获取调用Id
                     * @return ClientToken 调用Id
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置调用Id
                     * @param _clientToken 调用Id
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取调用状态
                     * @return Status 调用状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置调用状态
                     * @param _status 调用状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 动作Id
                     */
                    std::string m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * 动作名称
                     */
                    std::string m_actionName;
                    bool m_actionNameHasBeenSet;

                    /**
                     * 请求时间
                     */
                    uint64_t m_reqTime;
                    bool m_reqTimeHasBeenSet;

                    /**
                     * 响应时间
                     */
                    uint64_t m_rspTime;
                    bool m_rspTimeHasBeenSet;

                    /**
                     * 输入参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputParams;
                    bool m_inputParamsHasBeenSet;

                    /**
                     * 输出参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputParams;
                    bool m_outputParamsHasBeenSet;

                    /**
                     * 调用方式
                     */
                    std::string m_calling;
                    bool m_callingHasBeenSet;

                    /**
                     * 调用Id
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 调用状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_ACTIONHISTORY_H_
