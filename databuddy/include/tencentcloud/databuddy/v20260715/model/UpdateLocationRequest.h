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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATELOCATIONREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATELOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/LocationUpdate.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * UpdateLocation请求参数结构体
                */
                class UpdateLocationRequest : public AbstractModel
                {
                public:
                    UpdateLocationRequest();
                    ~UpdateLocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取存储位置名，必填
                     * @return LocationName 存储位置名，必填
                     * 
                     */
                    std::string GetLocationName() const;

                    /**
                     * 设置存储位置名，必填
                     * @param _locationName 存储位置名，必填
                     * 
                     */
                    void SetLocationName(const std::string& _locationName);

                    /**
                     * 判断参数 LocationName 是否已赋值
                     * @return LocationName 是否已赋值
                     * 
                     */
                    bool LocationNameHasBeenSet() const;

                    /**
                     * 获取更新location的操作列表，必填
                     * @return Updates 更新location的操作列表，必填
                     * 
                     */
                    std::vector<LocationUpdate> GetUpdates() const;

                    /**
                     * 设置更新location的操作列表，必填
                     * @param _updates 更新location的操作列表，必填
                     * 
                     */
                    void SetUpdates(const std::vector<LocationUpdate>& _updates);

                    /**
                     * 判断参数 Updates 是否已赋值
                     * @return Updates 是否已赋值
                     * 
                     */
                    bool UpdatesHasBeenSet() const;

                    /**
                     * 获取调用时所在workspace唯一id，必填
                     * @return WorkspaceId 调用时所在workspace唯一id，必填
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置调用时所在workspace唯一id，必填
                     * @param _workspaceId 调用时所在workspace唯一id，必填
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                private:

                    /**
                     * 存储位置名，必填
                     */
                    std::string m_locationName;
                    bool m_locationNameHasBeenSet;

                    /**
                     * 更新location的操作列表，必填
                     */
                    std::vector<LocationUpdate> m_updates;
                    bool m_updatesHasBeenSet;

                    /**
                     * 调用时所在workspace唯一id，必填
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATELOCATIONREQUEST_H_
