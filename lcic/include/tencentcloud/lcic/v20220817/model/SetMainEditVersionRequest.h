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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SETMAINEDITVERSIONREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SETMAINEDITVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * SetMainEditVersion请求参数结构体
                */
                class SetMainEditVersionRequest : public AbstractModel
                {
                public:
                    SetMainEditVersionRequest();
                    ~SetMainEditVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID</p>
                     * @return SdkAppId <p>应用ID</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _sdkAppId <p>应用ID</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>课堂ID</p>
                     * @return RoomId <p>课堂ID</p>
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置<p>课堂ID</p>
                     * @param _roomId <p>课堂ID</p>
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取<p>版本号，可通过DescribeEditVersion接口获取当前课堂全部版本，来查看到版本号。</p>
                     * @return VersionNo <p>版本号，可通过DescribeEditVersion接口获取当前课堂全部版本，来查看到版本号。</p>
                     * 
                     */
                    uint64_t GetVersionNo() const;

                    /**
                     * 设置<p>版本号，可通过DescribeEditVersion接口获取当前课堂全部版本，来查看到版本号。</p>
                     * @param _versionNo <p>版本号，可通过DescribeEditVersion接口获取当前课堂全部版本，来查看到版本号。</p>
                     * 
                     */
                    void SetVersionNo(const uint64_t& _versionNo);

                    /**
                     * 判断参数 VersionNo 是否已赋值
                     * @return VersionNo 是否已赋值
                     * 
                     */
                    bool VersionNoHasBeenSet() const;

                    /**
                     * 获取<p>操作者ID</p>
                     * @return Operator <p>操作者ID</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者ID</p>
                     * @param _operator <p>操作者ID</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>课堂ID</p>
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>版本号，可通过DescribeEditVersion接口获取当前课堂全部版本，来查看到版本号。</p>
                     */
                    uint64_t m_versionNo;
                    bool m_versionNoHasBeenSet;

                    /**
                     * <p>操作者ID</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SETMAINEDITVERSIONREQUEST_H_
