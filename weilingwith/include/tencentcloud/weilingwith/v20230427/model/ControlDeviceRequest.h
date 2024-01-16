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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICEREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * ControlDevice请求参数结构体
                */
                class ControlDeviceRequest : public AbstractModel
                {
                public:
                    ControlDeviceRequest();
                    ~ControlDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取设备wid，最大100个
                     * @return WIDSet 设备wid，最大100个
                     * 
                     */
                    std::vector<std::string> GetWIDSet() const;

                    /**
                     * 设置设备wid，最大100个
                     * @param _wIDSet 设备wid，最大100个
                     * 
                     */
                    void SetWIDSet(const std::vector<std::string>& _wIDSet);

                    /**
                     * 判断参数 WIDSet 是否已赋值
                     * @return WIDSet 是否已赋值
                     * 
                     */
                    bool WIDSetHasBeenSet() const;

                    /**
                     * 获取控制内容
                     * @return ControlData 控制内容
                     * 
                     */
                    std::string GetControlData() const;

                    /**
                     * 设置控制内容
                     * @param _controlData 控制内容
                     * 
                     */
                    void SetControlData(const std::string& _controlData);

                    /**
                     * 判断参数 ControlData 是否已赋值
                     * @return ControlData 是否已赋值
                     * 
                     */
                    bool ControlDataHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取是否同步返回设备下控ack结果
                     * @return IsSynchronized 是否同步返回设备下控ack结果
                     * 
                     */
                    bool GetIsSynchronized() const;

                    /**
                     * 设置是否同步返回设备下控ack结果
                     * @param _isSynchronized 是否同步返回设备下控ack结果
                     * 
                     */
                    void SetIsSynchronized(const bool& _isSynchronized);

                    /**
                     * 判断参数 IsSynchronized 是否已赋值
                     * @return IsSynchronized 是否已赋值
                     * 
                     */
                    bool IsSynchronizedHasBeenSet() const;

                private:

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 设备wid，最大100个
                     */
                    std::vector<std::string> m_wIDSet;
                    bool m_wIDSetHasBeenSet;

                    /**
                     * 控制内容
                     */
                    std::string m_controlData;
                    bool m_controlDataHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 是否同步返回设备下控ack结果
                     */
                    bool m_isSynchronized;
                    bool m_isSynchronizedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLDEVICEREQUEST_H_
