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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CALLRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CALLRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 调用记录详情
                */
                class CallRecord : public AbstractModel
                {
                public:
                    CallRecord();
                    ~CallRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调用记录ID
                     * @return CallID 调用记录ID
                     * 
                     */
                    std::string GetCallID() const;

                    /**
                     * 设置调用记录ID
                     * @param _callID 调用记录ID
                     * 
                     */
                    void SetCallID(const std::string& _callID);

                    /**
                     * 判断参数 CallID 是否已赋值
                     * @return CallID 是否已赋值
                     * 
                     */
                    bool CallIDHasBeenSet() const;

                    /**
                     * 获取访问密钥
                     * @return AccessKey 访问密钥
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置访问密钥
                     * @param _accessKey 访问密钥
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取访问密钥备注
                     * @return AccessKeyRemark 访问密钥备注
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置访问密钥备注
                     * @param _accessKeyRemark 访问密钥备注
                     * 
                     */
                    void SetAccessKeyRemark(const std::string& _accessKeyRemark);

                    /**
                     * 判断参数 AccessKeyRemark 是否已赋值
                     * @return AccessKeyRemark 是否已赋值
                     * 
                     */
                    bool AccessKeyRemarkHasBeenSet() const;

                    /**
                     * 获取访问密钥ID
                     * @return AccessKeyID 访问密钥ID
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置访问密钥ID
                     * @param _accessKeyID 访问密钥ID
                     * 
                     */
                    void SetAccessKeyID(const uint64_t& _accessKeyID);

                    /**
                     * 判断参数 AccessKeyID 是否已赋值
                     * @return AccessKeyID 是否已赋值
                     * 
                     */
                    bool AccessKeyIDHasBeenSet() const;

                    /**
                     * 获取调用源IP
                     * @return SourceIP 调用源IP
                     * 
                     */
                    std::string GetSourceIP() const;

                    /**
                     * 设置调用源IP
                     * @param _sourceIP 调用源IP
                     * 
                     */
                    void SetSourceIP(const std::string& _sourceIP);

                    /**
                     * 判断参数 SourceIP 是否已赋值
                     * @return SourceIP 是否已赋值
                     * 
                     */
                    bool SourceIPHasBeenSet() const;

                    /**
                     * 获取调用源IP备注
                     * @return SourceIPRemark 调用源IP备注
                     * 
                     */
                    std::string GetSourceIPRemark() const;

                    /**
                     * 设置调用源IP备注
                     * @param _sourceIPRemark 调用源IP备注
                     * 
                     */
                    void SetSourceIPRemark(const std::string& _sourceIPRemark);

                    /**
                     * 判断参数 SourceIPRemark 是否已赋值
                     * @return SourceIPRemark 是否已赋值
                     * 
                     */
                    bool SourceIPRemarkHasBeenSet() const;

                    /**
                     * 获取调用源IP地域
                     * @return Region 调用源IP地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置调用源IP地域
                     * @param _region 调用源IP地域
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
                     * 获取IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注)
                     * @return IPType IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注)
                     * 
                     */
                    int64_t GetIPType() const;

                    /**
                     * 设置IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注)
                     * @param _iPType IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注)
                     * 
                     */
                    void SetIPType(const int64_t& _iPType);

                    /**
                     * 判断参数 IPType 是否已赋值
                     * @return IPType 是否已赋值
                     * 
                     */
                    bool IPTypeHasBeenSet() const;

                    /**
                     * 获取调用接口名称
                     * @return EventName 调用接口名称
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置调用接口名称
                     * @param _eventName 调用接口名称
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取调用产品名称
                     * @return ProductName 调用产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置调用产品名称
                     * @param _productName 调用产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取调用类型
0:控制台调用
1:API
                     * @return EventType 调用类型
0:控制台调用
1:API
                     * 
                     */
                    int64_t GetEventType() const;

                    /**
                     * 设置调用类型
0:控制台调用
1:API
                     * @param _eventType 调用类型
0:控制台调用
1:API
                     * 
                     */
                    void SetEventType(const int64_t& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取用户类型
CAMUser/root/AssumedRole

                     * @return UserType 用户类型
CAMUser/root/AssumedRole

                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型
CAMUser/root/AssumedRole

                     * @param _userType 用户类型
CAMUser/root/AssumedRole

                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取用户/角色名称
                     * @return UserName 用户/角色名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户/角色名称
                     * @param _userName 用户/角色名称
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取策略列表
                     * @return PolicySet 策略列表
                     * 
                     */
                    std::vector<std::string> GetPolicySet() const;

                    /**
                     * 设置策略列表
                     * @param _policySet 策略列表
                     * 
                     */
                    void SetPolicySet(const std::vector<std::string>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                    /**
                     * 获取调用次数
                     * @return CallCount 调用次数
                     * 
                     */
                    int64_t GetCallCount() const;

                    /**
                     * 设置调用次数
                     * @param _callCount 调用次数
                     * 
                     */
                    void SetCallCount(const int64_t& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                    /**
                     * 获取调用错误码
0表示成功
                     * @return Code 调用错误码
0表示成功
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置调用错误码
0表示成功
                     * @param _code 调用错误码
0表示成功
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取首次调用时间
                     * @return FirstCallTime 首次调用时间
                     * 
                     */
                    std::string GetFirstCallTime() const;

                    /**
                     * 设置首次调用时间
                     * @param _firstCallTime 首次调用时间
                     * 
                     */
                    void SetFirstCallTime(const std::string& _firstCallTime);

                    /**
                     * 判断参数 FirstCallTime 是否已赋值
                     * @return FirstCallTime 是否已赋值
                     * 
                     */
                    bool FirstCallTimeHasBeenSet() const;

                    /**
                     * 获取最后调用时间
                     * @return LastCallTime 最后调用时间
                     * 
                     */
                    std::string GetLastCallTime() const;

                    /**
                     * 设置最后调用时间
                     * @param _lastCallTime 最后调用时间
                     * 
                     */
                    void SetLastCallTime(const std::string& _lastCallTime);

                    /**
                     * 判断参数 LastCallTime 是否已赋值
                     * @return LastCallTime 是否已赋值
                     * 
                     */
                    bool LastCallTimeHasBeenSet() const;

                    /**
                     * 获取IP关联资产ID，如果为空字符串，表示没有关联
                     * @return InstanceID IP关联资产ID，如果为空字符串，表示没有关联
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置IP关联资产ID，如果为空字符串，表示没有关联
                     * @param _instanceID IP关联资产ID，如果为空字符串，表示没有关联
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取IP关联资产名称
                     * @return InstanceName IP关联资产名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置IP关联资产名称
                     * @param _instanceName IP关联资产名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取聚合日期
                     * @return Date 聚合日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置聚合日期
                     * @param _date 聚合日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取appid
                     * @return AppID appid
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置appid
                     * @param _appID appid
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取展示状态
                     * @return ShowStatus 展示状态
                     * 
                     */
                    bool GetShowStatus() const;

                    /**
                     * 设置展示状态
                     * @param _showStatus 展示状态
                     * 
                     */
                    void SetShowStatus(const bool& _showStatus);

                    /**
                     * 判断参数 ShowStatus 是否已赋值
                     * @return ShowStatus 是否已赋值
                     * 
                     */
                    bool ShowStatusHasBeenSet() const;

                    /**
                     * 获取运营商
                     * @return ISP 运营商
                     * 
                     */
                    std::string GetISP() const;

                    /**
                     * 设置运营商
                     * @param _iSP 运营商
                     * 
                     */
                    void SetISP(const std::string& _iSP);

                    /**
                     * 判断参数 ISP 是否已赋值
                     * @return ISP 是否已赋值
                     * 
                     */
                    bool ISPHasBeenSet() const;

                private:

                    /**
                     * 调用记录ID
                     */
                    std::string m_callID;
                    bool m_callIDHasBeenSet;

                    /**
                     * 访问密钥
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 访问密钥备注
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * 访问密钥ID
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * 调用源IP
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * 调用源IP备注
                     */
                    std::string m_sourceIPRemark;
                    bool m_sourceIPRemarkHasBeenSet;

                    /**
                     * 调用源IP地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * IP类型 0:账号内（未备注） 1:账号外（未备注） 2:账号内 (已备注) 3:账号外 (已备注)
                     */
                    int64_t m_iPType;
                    bool m_iPTypeHasBeenSet;

                    /**
                     * 调用接口名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 调用产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 调用类型
0:控制台调用
1:API
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 用户类型
CAMUser/root/AssumedRole

                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 用户/角色名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 策略列表
                     */
                    std::vector<std::string> m_policySet;
                    bool m_policySetHasBeenSet;

                    /**
                     * 调用次数
                     */
                    int64_t m_callCount;
                    bool m_callCountHasBeenSet;

                    /**
                     * 调用错误码
0表示成功
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 首次调用时间
                     */
                    std::string m_firstCallTime;
                    bool m_firstCallTimeHasBeenSet;

                    /**
                     * 最后调用时间
                     */
                    std::string m_lastCallTime;
                    bool m_lastCallTimeHasBeenSet;

                    /**
                     * IP关联资产ID，如果为空字符串，表示没有关联
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * IP关联资产名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 聚合日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * appid
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 展示状态
                     */
                    bool m_showStatus;
                    bool m_showStatusHasBeenSet;

                    /**
                     * 运营商
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CALLRECORD_H_
