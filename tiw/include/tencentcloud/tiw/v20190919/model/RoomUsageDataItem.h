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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_ROOMUSAGEDATAITEM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_ROOMUSAGEDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 互动白板房间用量信息
                */
                class RoomUsageDataItem : public AbstractModel
                {
                public:
                    RoomUsageDataItem();
                    ~RoomUsageDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期，格式为YYYY-MM-DD
                     * @return Time 日期，格式为YYYY-MM-DD
                     */
                    std::string GetTime() const;

                    /**
                     * 设置日期，格式为YYYY-MM-DD
                     * @param Time 日期，格式为YYYY-MM-DD
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取白板应用SDKAppID
                     * @return SdkAppId 白板应用SDKAppID
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置白板应用SDKAppID
                     * @param SdkAppId 白板应用SDKAppID
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取互动白板子产品，请求参数传入的一致
- sp_tiw_board: 互动白板时长
- sp_tiw_ric: 实时录制时长
                     * @return SubProduct 互动白板子产品，请求参数传入的一致
- sp_tiw_board: 互动白板时长
- sp_tiw_ric: 实时录制时长
                     */
                    std::string GetSubProduct() const;

                    /**
                     * 设置互动白板子产品，请求参数传入的一致
- sp_tiw_board: 互动白板时长
- sp_tiw_ric: 实时录制时长
                     * @param SubProduct 互动白板子产品，请求参数传入的一致
- sp_tiw_board: 互动白板时长
- sp_tiw_ric: 实时录制时长
                     */
                    void SetSubProduct(const std::string& _subProduct);

                    /**
                     * 判断参数 SubProduct 是否已赋值
                     * @return SubProduct 是否已赋值
                     */
                    bool SubProductHasBeenSet() const;

                    /**
                     * 获取用量值
- 白板时长、实时录制时长单位为分钟
                     * @return Value 用量值
- 白板时长、实时录制时长单位为分钟
                     */
                    double GetValue() const;

                    /**
                     * 设置用量值
- 白板时长、实时录制时长单位为分钟
                     * @param Value 用量值
- 白板时长、实时录制时长单位为分钟
                     */
                    void SetValue(const double& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取互动白板房间号
                     * @return RoomID 互动白板房间号
                     */
                    uint64_t GetRoomID() const;

                    /**
                     * 设置互动白板房间号
                     * @param RoomID 互动白板房间号
                     */
                    void SetRoomID(const uint64_t& _roomID);

                    /**
                     * 判断参数 RoomID 是否已赋值
                     * @return RoomID 是否已赋值
                     */
                    bool RoomIDHasBeenSet() const;

                private:

                    /**
                     * 日期，格式为YYYY-MM-DD
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 白板应用SDKAppID
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 互动白板子产品，请求参数传入的一致
- sp_tiw_board: 互动白板时长
- sp_tiw_ric: 实时录制时长
                     */
                    std::string m_subProduct;
                    bool m_subProductHasBeenSet;

                    /**
                     * 用量值
- 白板时长、实时录制时长单位为分钟
                     */
                    double m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 互动白板房间号
                     */
                    uint64_t m_roomID;
                    bool m_roomIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_ROOMUSAGEDATAITEM_H_
