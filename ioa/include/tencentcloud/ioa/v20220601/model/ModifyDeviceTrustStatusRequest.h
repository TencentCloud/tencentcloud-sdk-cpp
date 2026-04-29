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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDEVICETRUSTSTATUSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDEVICETRUSTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * ModifyDeviceTrustStatus请求参数结构体
                */
                class ModifyDeviceTrustStatusRequest : public AbstractModel
                {
                public:
                    ModifyDeviceTrustStatusRequest();
                    ~ModifyDeviceTrustStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>设备状态，1表示拉黑，0表示加白</p>
                     * @return Status <p>设备状态，1表示拉黑，0表示加白</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>设备状态，1表示拉黑，0表示加白</p>
                     * @param _status <p>设备状态，1表示拉黑，0表示加白</p>
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
                     * 获取<p>设备MID列表</p>
                     * @return DeviceIDList <p>设备MID列表</p>
                     * 
                     */
                    std::vector<std::string> GetDeviceIDList() const;

                    /**
                     * 设置<p>设备MID列表</p>
                     * @param _deviceIDList <p>设备MID列表</p>
                     * 
                     */
                    void SetDeviceIDList(const std::vector<std::string>& _deviceIDList);

                    /**
                     * 判断参数 DeviceIDList 是否已赋值
                     * @return DeviceIDList 是否已赋值
                     * 
                     */
                    bool DeviceIDListHasBeenSet() const;

                    /**
                     * 获取<p>设备拉黑有效期，UnixTime, 单位是 ms,0表示永久有效，默认值是0</p>
                     * @return BlackStatusDeadline <p>设备拉黑有效期，UnixTime, 单位是 ms,0表示永久有效，默认值是0</p>
                     * 
                     */
                    int64_t GetBlackStatusDeadline() const;

                    /**
                     * 设置<p>设备拉黑有效期，UnixTime, 单位是 ms,0表示永久有效，默认值是0</p>
                     * @param _blackStatusDeadline <p>设备拉黑有效期，UnixTime, 单位是 ms,0表示永久有效，默认值是0</p>
                     * 
                     */
                    void SetBlackStatusDeadline(const int64_t& _blackStatusDeadline);

                    /**
                     * 判断参数 BlackStatusDeadline 是否已赋值
                     * @return BlackStatusDeadline 是否已赋值
                     * 
                     */
                    bool BlackStatusDeadlineHasBeenSet() const;

                    /**
                     * 获取<p>DescribeAccuserList返回的Id 列表</p>
                     * @return IdList <p>DescribeAccuserList返回的Id 列表</p>
                     * 
                     */
                    std::vector<int64_t> GetIdList() const;

                    /**
                     * 设置<p>DescribeAccuserList返回的Id 列表</p>
                     * @param _idList <p>DescribeAccuserList返回的Id 列表</p>
                     * 
                     */
                    void SetIdList(const std::vector<int64_t>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                    /**
                     * 获取<p>默认值：0，根据id更新，1根据DeviceIDList</p>
                     * @return UpdateFlags <p>默认值：0，根据id更新，1根据DeviceIDList</p>
                     * 
                     */
                    int64_t GetUpdateFlags() const;

                    /**
                     * 设置<p>默认值：0，根据id更新，1根据DeviceIDList</p>
                     * @param _updateFlags <p>默认值：0，根据id更新，1根据DeviceIDList</p>
                     * 
                     */
                    void SetUpdateFlags(const int64_t& _updateFlags);

                    /**
                     * 判断参数 UpdateFlags 是否已赋值
                     * @return UpdateFlags 是否已赋值
                     * 
                     */
                    bool UpdateFlagsHasBeenSet() const;

                private:

                    /**
                     * <p>设备状态，1表示拉黑，0表示加白</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>设备MID列表</p>
                     */
                    std::vector<std::string> m_deviceIDList;
                    bool m_deviceIDListHasBeenSet;

                    /**
                     * <p>设备拉黑有效期，UnixTime, 单位是 ms,0表示永久有效，默认值是0</p>
                     */
                    int64_t m_blackStatusDeadline;
                    bool m_blackStatusDeadlineHasBeenSet;

                    /**
                     * <p>DescribeAccuserList返回的Id 列表</p>
                     */
                    std::vector<int64_t> m_idList;
                    bool m_idListHasBeenSet;

                    /**
                     * <p>默认值：0，根据id更新，1根据DeviceIDList</p>
                     */
                    int64_t m_updateFlags;
                    bool m_updateFlagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_MODIFYDEVICETRUSTSTATUSREQUEST_H_
