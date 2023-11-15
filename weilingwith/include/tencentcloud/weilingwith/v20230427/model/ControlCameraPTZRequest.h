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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLCAMERAPTZREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLCAMERAPTZREQUEST_H_

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
                * ControlCameraPTZ请求参数结构体
                */
                class ControlCameraPTZRequest : public AbstractModel
                {
                public:
                    ControlCameraPTZRequest();
                    ~ControlCameraPTZRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备的唯一标识
                     * @return WID 设备的唯一标识
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备的唯一标识
                     * @param _wID 设备的唯一标识
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

                    /**
                     * 获取ptz指令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远

                     * @return CMD ptz指令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远

                     * 
                     */
                    std::string GetCMD() const;

                    /**
                     * 设置ptz指令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远

                     * @param _cMD ptz指令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远

                     * 
                     */
                    void SetCMD(const std::string& _cMD);

                    /**
                     * 判断参数 CMD 是否已赋值
                     * @return CMD 是否已赋值
                     * 
                     */
                    bool CMDHasBeenSet() const;

                    /**
                     * 获取工作空间Id
                     * @return WorkspaceId 工作空间Id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间Id
                     * @param _workspaceId 工作空间Id
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

                private:

                    /**
                     * 设备的唯一标识
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * ptz指令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远

                     */
                    std::string m_cMD;
                    bool m_cMDHasBeenSet;

                    /**
                     * 工作空间Id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CONTROLCAMERAPTZREQUEST_H_
