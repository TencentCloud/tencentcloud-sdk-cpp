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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHCREATEDEVICEREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHCREATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/AddDeviceInfo.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * BatchCreateDevice请求参数结构体
                */
                class BatchCreateDeviceRequest : public AbstractModel
                {
                public:
                    BatchCreateDeviceRequest();
                    ~BatchCreateDeviceRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取设备信息项

                     * @return AddDeviceSet 设备信息项

                     * 
                     */
                    std::vector<AddDeviceInfo> GetAddDeviceSet() const;

                    /**
                     * 设置设备信息项

                     * @param _addDeviceSet 设备信息项

                     * 
                     */
                    void SetAddDeviceSet(const std::vector<AddDeviceInfo>& _addDeviceSet);

                    /**
                     * 判断参数 AddDeviceSet 是否已赋值
                     * @return AddDeviceSet 是否已赋值
                     * 
                     */
                    bool AddDeviceSetHasBeenSet() const;

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
                     * 工作空间Id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 设备信息项

                     */
                    std::vector<AddDeviceInfo> m_addDeviceSet;
                    bool m_addDeviceSetHasBeenSet;

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

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_BATCHCREATEDEVICEREQUEST_H_
