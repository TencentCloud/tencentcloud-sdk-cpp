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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICESTATUSSTATREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICESTATUSSTATREQUEST_H_

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
                * DescribeDeviceStatusStat请求参数结构体
                */
                class DescribeDeviceStatusStatRequest : public AbstractModel
                {
                public:
                    DescribeDeviceStatusStatRequest();
                    ~DescribeDeviceStatusStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属空间地理层级，必填。0表示查询所有层级（1、2）的设备状态，1表示楼栋，2表示楼层
                     * @return Level 所属空间地理层级，必填。0表示查询所有层级（1、2）的设备状态，1表示楼栋，2表示楼层
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置所属空间地理层级，必填。0表示查询所有层级（1、2）的设备状态，1表示楼栋，2表示楼层
                     * @param _level 所属空间地理层级，必填。0表示查询所有层级（1、2）的设备状态，1表示楼栋，2表示楼层
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

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
                     * 获取空间位置，非必填。为空表示查询所有（1，2）层级
                     * @return SpaceCodeSet 空间位置，非必填。为空表示查询所有（1，2）层级
                     * 
                     */
                    std::vector<std::string> GetSpaceCodeSet() const;

                    /**
                     * 设置空间位置，非必填。为空表示查询所有（1，2）层级
                     * @param _spaceCodeSet 空间位置，非必填。为空表示查询所有（1，2）层级
                     * 
                     */
                    void SetSpaceCodeSet(const std::vector<std::string>& _spaceCodeSet);

                    /**
                     * 判断参数 SpaceCodeSet 是否已赋值
                     * @return SpaceCodeSet 是否已赋值
                     * 
                     */
                    bool SpaceCodeSetHasBeenSet() const;

                    /**
                     * 获取设备类型，非必填。为空表示查询所有设备类型
                     * @return DeviceTypeSet 设备类型，非必填。为空表示查询所有设备类型
                     * 
                     */
                    std::vector<std::string> GetDeviceTypeSet() const;

                    /**
                     * 设置设备类型，非必填。为空表示查询所有设备类型
                     * @param _deviceTypeSet 设备类型，非必填。为空表示查询所有设备类型
                     * 
                     */
                    void SetDeviceTypeSet(const std::vector<std::string>& _deviceTypeSet);

                    /**
                     * 判断参数 DeviceTypeSet 是否已赋值
                     * @return DeviceTypeSet 是否已赋值
                     * 
                     */
                    bool DeviceTypeSetHasBeenSet() const;

                private:

                    /**
                     * 所属空间地理层级，必填。0表示查询所有层级（1、2）的设备状态，1表示楼栋，2表示楼层
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 空间位置，非必填。为空表示查询所有（1，2）层级
                     */
                    std::vector<std::string> m_spaceCodeSet;
                    bool m_spaceCodeSetHasBeenSet;

                    /**
                     * 设备类型，非必填。为空表示查询所有设备类型
                     */
                    std::vector<std::string> m_deviceTypeSet;
                    bool m_deviceTypeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEDEVICESTATUSSTATREQUEST_H_
