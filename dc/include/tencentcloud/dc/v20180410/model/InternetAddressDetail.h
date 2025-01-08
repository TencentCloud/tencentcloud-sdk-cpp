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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSDETAIL_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 互联网地址详细信息
                */
                class InternetAddressDetail : public AbstractModel
                {
                public:
                    InternetAddressDetail();
                    ~InternetAddressDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取互联网地址ID
                     * @return InstanceId 互联网地址ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置互联网地址ID
                     * @param _instanceId 互联网地址ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取互联网网络地址
                     * @return Subnet 互联网网络地址
                     * 
                     */
                    std::string GetSubnet() const;

                    /**
                     * 设置互联网网络地址
                     * @param _subnet 互联网网络地址
                     * 
                     */
                    void SetSubnet(const std::string& _subnet);

                    /**
                     * 判断参数 Subnet 是否已赋值
                     * @return Subnet 是否已赋值
                     * 
                     */
                    bool SubnetHasBeenSet() const;

                    /**
                     * 获取网络地址掩码长度
                     * @return MaskLen 网络地址掩码长度
                     * 
                     */
                    int64_t GetMaskLen() const;

                    /**
                     * 设置网络地址掩码长度
                     * @param _maskLen 网络地址掩码长度
                     * 
                     */
                    void SetMaskLen(const int64_t& _maskLen);

                    /**
                     * 判断参数 MaskLen 是否已赋值
                     * @return MaskLen 是否已赋值
                     * 
                     */
                    bool MaskLenHasBeenSet() const;

                    /**
                     * 获取0:BGP
1:电信
2:移动
3:联通
                     * @return AddrType 0:BGP
1:电信
2:移动
3:联通
                     * 
                     */
                    int64_t GetAddrType() const;

                    /**
                     * 设置0:BGP
1:电信
2:移动
3:联通
                     * @param _addrType 0:BGP
1:电信
2:移动
3:联通
                     * 
                     */
                    void SetAddrType(const int64_t& _addrType);

                    /**
                     * 判断参数 AddrType 是否已赋值
                     * @return AddrType 是否已赋值
                     * 
                     */
                    bool AddrTypeHasBeenSet() const;

                    /**
                     * 获取0:使用中
1:已停用
2:已退还
                     * @return Status 0:使用中
1:已停用
2:已退还
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置0:使用中
1:已停用
2:已退还
                     * @param _status 0:使用中
1:已停用
2:已退还
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
                     * 获取申请时间
                     * @return ApplyTime 申请时间
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置申请时间
                     * @param _applyTime 申请时间
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取停用时间
                     * @return StopTime 停用时间
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置停用时间
                     * @param _stopTime 停用时间
                     * 
                     */
                    void SetStopTime(const std::string& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取退还时间
                     * @return ReleaseTime 退还时间
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置退还时间
                     * @param _releaseTime 退还时间
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取地域信息
                     * @return Region 地域信息
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param _region 地域信息
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return AppId 用户ID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户ID
                     * @param _appId 用户ID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取0:IPv4 1:IPv6
                     * @return AddrProto 0:IPv4 1:IPv6
                     * 
                     */
                    int64_t GetAddrProto() const;

                    /**
                     * 设置0:IPv4 1:IPv6
                     * @param _addrProto 0:IPv4 1:IPv6
                     * 
                     */
                    void SetAddrProto(const int64_t& _addrProto);

                    /**
                     * 判断参数 AddrProto 是否已赋值
                     * @return AddrProto 是否已赋值
                     * 
                     */
                    bool AddrProtoHasBeenSet() const;

                    /**
                     * 获取释放状态的IP地址保留的天数
                     * @return ReserveTime 释放状态的IP地址保留的天数
                     * 
                     */
                    int64_t GetReserveTime() const;

                    /**
                     * 设置释放状态的IP地址保留的天数
                     * @param _reserveTime 释放状态的IP地址保留的天数
                     * 
                     */
                    void SetReserveTime(const int64_t& _reserveTime);

                    /**
                     * 判断参数 ReserveTime 是否已赋值
                     * @return ReserveTime 是否已赋值
                     * 
                     */
                    bool ReserveTimeHasBeenSet() const;

                private:

                    /**
                     * 互联网地址ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 互联网网络地址
                     */
                    std::string m_subnet;
                    bool m_subnetHasBeenSet;

                    /**
                     * 网络地址掩码长度
                     */
                    int64_t m_maskLen;
                    bool m_maskLenHasBeenSet;

                    /**
                     * 0:BGP
1:电信
2:移动
3:联通
                     */
                    int64_t m_addrType;
                    bool m_addrTypeHasBeenSet;

                    /**
                     * 0:使用中
1:已停用
2:已退还
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 申请时间
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 停用时间
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * 退还时间
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 用户ID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 0:IPv4 1:IPv6
                     */
                    int64_t m_addrProto;
                    bool m_addrProtoHasBeenSet;

                    /**
                     * 释放状态的IP地址保留的天数
                     */
                    int64_t m_reserveTime;
                    bool m_reserveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSDETAIL_H_
