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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDSLICETASKREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDSLICETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SliceParams.h>
#include <tencentcloud/trtc/v20190722/model/SliceStorageParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateCloudSliceTask请求参数结构体
                */
                class CreateCloudSliceTaskRequest : public AbstractModel
                {
                public:
                    CreateCloudSliceTaskRequest();
                    ~CreateCloudSliceTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
                     * @return SdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
                     * @param _sdkAppId TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
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
                     * 获取TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，为TRTC房间所对应的RoomId。
                     * @return RoomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，为TRTC房间所对应的RoomId。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，为TRTC房间所对应的RoomId。
                     * @param _roomId TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，为TRTC房间所对应的RoomId。
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取机器人的UserId，用于进房发起切片任务。【*注意】这个UserId不能与当前房间内的主播观众UserId重复。如果一个房间发起多个切片任务时，机器人的userid也不能相互重复，否则会中断前一个切片任务。建议可以把房间ID作为UserId的标识的一部分，即机器人UserId在房间内唯一。
                     * @return UserId 机器人的UserId，用于进房发起切片任务。【*注意】这个UserId不能与当前房间内的主播观众UserId重复。如果一个房间发起多个切片任务时，机器人的userid也不能相互重复，否则会中断前一个切片任务。建议可以把房间ID作为UserId的标识的一部分，即机器人UserId在房间内唯一。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置机器人的UserId，用于进房发起切片任务。【*注意】这个UserId不能与当前房间内的主播观众UserId重复。如果一个房间发起多个切片任务时，机器人的userid也不能相互重复，否则会中断前一个切片任务。建议可以把房间ID作为UserId的标识的一部分，即机器人UserId在房间内唯一。
                     * @param _userId 机器人的UserId，用于进房发起切片任务。【*注意】这个UserId不能与当前房间内的主播观众UserId重复。如果一个房间发起多个切片任务时，机器人的userid也不能相互重复，否则会中断前一个切片任务。建议可以把房间ID作为UserId的标识的一部分，即机器人UserId在房间内唯一。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算UserSig的方案。
                     * @return UserSig 机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算UserSig的方案。
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算UserSig的方案。
                     * @param _userSig 机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算UserSig的方案。
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取云端切片控制参数。
                     * @return SliceParams 云端切片控制参数。
                     * 
                     */
                    SliceParams GetSliceParams() const;

                    /**
                     * 设置云端切片控制参数。
                     * @param _sliceParams 云端切片控制参数。
                     * 
                     */
                    void SetSliceParams(const SliceParams& _sliceParams);

                    /**
                     * 判断参数 SliceParams 是否已赋值
                     * @return SliceParams 是否已赋值
                     * 
                     */
                    bool SliceParamsHasBeenSet() const;

                    /**
                     * 获取云端切片文件上传到云存储的参数
                     * @return SliceStorageParams 云端切片文件上传到云存储的参数
                     * 
                     */
                    SliceStorageParams GetSliceStorageParams() const;

                    /**
                     * 设置云端切片文件上传到云存储的参数
                     * @param _sliceStorageParams 云端切片文件上传到云存储的参数
                     * 
                     */
                    void SetSliceStorageParams(const SliceStorageParams& _sliceStorageParams);

                    /**
                     * 判断参数 SliceStorageParams 是否已赋值
                     * @return SliceStorageParams 是否已赋值
                     * 
                     */
                    bool SliceStorageParamsHasBeenSet() const;

                    /**
                     * 获取TRTC房间号的类型。 【*注意】必须和录制的房间所对应的RoomId类型相同: 0: 字符串类型的RoomId 1: 32位整型的RoomId（默认） 示例值：1
                     * @return RoomIdType TRTC房间号的类型。 【*注意】必须和录制的房间所对应的RoomId类型相同: 0: 字符串类型的RoomId 1: 32位整型的RoomId（默认） 示例值：1
                     * 
                     */
                    uint64_t GetRoomIdType() const;

                    /**
                     * 设置TRTC房间号的类型。 【*注意】必须和录制的房间所对应的RoomId类型相同: 0: 字符串类型的RoomId 1: 32位整型的RoomId（默认） 示例值：1
                     * @param _roomIdType TRTC房间号的类型。 【*注意】必须和录制的房间所对应的RoomId类型相同: 0: 字符串类型的RoomId 1: 32位整型的RoomId（默认） 示例值：1
                     * 
                     */
                    void SetRoomIdType(const uint64_t& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                    /**
                     * 获取接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。 示例值：24
                     * @return ResourceExpiredHour 接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。 示例值：24
                     * 
                     */
                    uint64_t GetResourceExpiredHour() const;

                    /**
                     * 设置接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。 示例值：24
                     * @param _resourceExpiredHour 接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。 示例值：24
                     * 
                     */
                    void SetResourceExpiredHour(const uint64_t& _resourceExpiredHour);

                    /**
                     * 判断参数 ResourceExpiredHour 是否已赋值
                     * @return ResourceExpiredHour 是否已赋值
                     * 
                     */
                    bool ResourceExpiredHourHasBeenSet() const;

                    /**
                     * 获取TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。 示例值：eJw1jcEKgkAURX9FZlvY****fL9rfNX4_
                     * @return PrivateMapKey TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。 示例值：eJw1jcEKgkAURX9FZlvY****fL9rfNX4_
                     * 
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。 示例值：eJw1jcEKgkAURX9FZlvY****fL9rfNX4_
                     * @param _privateMapKey TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。 示例值：eJw1jcEKgkAURX9FZlvY****fL9rfNX4_
                     * 
                     */
                    void SetPrivateMapKey(const std::string& _privateMapKey);

                    /**
                     * 判断参数 PrivateMapKey 是否已赋值
                     * @return PrivateMapKey 是否已赋值
                     * 
                     */
                    bool PrivateMapKeyHasBeenSet() const;

                private:

                    /**
                     * TRTC的[SdkAppId](https://cloud.tencent.com/document/product/647/46351#sdkappid)，和TRTC的房间所对应的SdkAppId相同。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC的[RoomId](https://cloud.tencent.com/document/product/647/46351#roomid)，为TRTC房间所对应的RoomId。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 机器人的UserId，用于进房发起切片任务。【*注意】这个UserId不能与当前房间内的主播观众UserId重复。如果一个房间发起多个切片任务时，机器人的userid也不能相互重复，否则会中断前一个切片任务。建议可以把房间ID作为UserId的标识的一部分，即机器人UserId在房间内唯一。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 机器人UserId对应的校验签名，即UserId和UserSig相当于机器人进房的登录密码，具体计算方法请参考TRTC计算UserSig的方案。
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * 云端切片控制参数。
                     */
                    SliceParams m_sliceParams;
                    bool m_sliceParamsHasBeenSet;

                    /**
                     * 云端切片文件上传到云存储的参数
                     */
                    SliceStorageParams m_sliceStorageParams;
                    bool m_sliceStorageParamsHasBeenSet;

                    /**
                     * TRTC房间号的类型。 【*注意】必须和录制的房间所对应的RoomId类型相同: 0: 字符串类型的RoomId 1: 32位整型的RoomId（默认） 示例值：1
                     */
                    uint64_t m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                    /**
                     * 接口可以调用的时效性，从成功开启录制并获得任务ID后开始计算，超时后无法调用查询、更新和停止等接口，但是录制任务不会停止。 参数的单位是小时，默认72小时（3天），最大可设置720小时（30天），最小设置6小时。举例说明：如果不设置该参数，那么开始录制成功后，查询、更新和停止录制的调用时效为72个小时。 示例值：24
                     */
                    uint64_t m_resourceExpiredHour;
                    bool m_resourceExpiredHourHasBeenSet;

                    /**
                     * TRTC房间权限加密串，只有在TRTC控制台启用了高级权限控制的时候需要携带，在TRTC控制台如果开启高级权限控制后，TRTC 的后台服务系统会校验一个叫做 [PrivateMapKey] 的“权限票据”，权限票据中包含了一个加密后的 RoomId 和一个加密后的“权限位列表”。由于 PrivateMapKey 中包含 RoomId，所以只提供了 UserSig 没有提供 PrivateMapKey 时，并不能进入指定的房间。 示例值：eJw1jcEKgkAURX9FZlvY****fL9rfNX4_
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATECLOUDSLICETASKREQUEST_H_
