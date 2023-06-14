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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_LIVEVIPTRADEINFO_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_LIVEVIPTRADEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 充值直播会员流水信息
                */
                class LiveVipTradeInfo : public AbstractModel
                {
                public:
                    LiveVipTradeInfo();
                    ~LiveVipTradeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取交易流水号。
                     * @return TradeSerialNo 交易流水号。
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置交易流水号。
                     * @param _tradeSerialNo 交易流水号。
                     * 
                     */
                    void SetTradeSerialNo(const std::string& _tradeSerialNo);

                    /**
                     * 判断参数 TradeSerialNo 是否已赋值
                     * @return TradeSerialNo 是否已赋值
                     * 
                     */
                    bool TradeSerialNoHasBeenSet() const;

                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param _userId 用户标识。
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
                     * 获取房间标识。
                     * @return RoomId 房间标识。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间标识。
                     * @param _roomId 房间标识。
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
                     * 获取充值会员天数。
取值有： 
<li>31</li> <li>93</li><li>186</li> <li>372</li>
                     * @return VipDays 充值会员天数。
取值有： 
<li>31</li> <li>93</li><li>186</li> <li>372</li>
                     * 
                     */
                    int64_t GetVipDays() const;

                    /**
                     * 设置充值会员天数。
取值有： 
<li>31</li> <li>93</li><li>186</li> <li>372</li>
                     * @param _vipDays 充值会员天数。
取值有： 
<li>31</li> <li>93</li><li>186</li> <li>372</li>
                     * 
                     */
                    void SetVipDays(const int64_t& _vipDays);

                    /**
                     * 判断参数 VipDays 是否已赋值
                     * @return VipDays 是否已赋值
                     * 
                     */
                    bool VipDaysHasBeenSet() const;

                    /**
                     * 获取订单状态。 
取值有： 
<li>Success：成功</li><li>Fail：失败</li><li>Processing：订单处理中</li>
                     * @return Status 订单状态。 
取值有： 
<li>Success：成功</li><li>Fail：失败</li><li>Processing：订单处理中</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置订单状态。 
取值有： 
<li>Success：成功</li><li>Fail：失败</li><li>Processing：订单处理中</li>
                     * @param _status 订单状态。 
取值有： 
<li>Success：成功</li><li>Fail：失败</li><li>Processing：订单处理中</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 交易流水号。
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 房间标识。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 充值会员天数。
取值有： 
<li>31</li> <li>93</li><li>186</li> <li>372</li>
                     */
                    int64_t m_vipDays;
                    bool m_vipDaysHasBeenSet;

                    /**
                     * 订单状态。 
取值有： 
<li>Success：成功</li><li>Fail：失败</li><li>Processing：订单处理中</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_LIVEVIPTRADEINFO_H_
