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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_USERCALLRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_USERCALLRECORD_H_

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
                class UserCallRecord : public AbstractModel
                {
                public:
                    UserCallRecord();
                    ~UserCallRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 调用源IP
                     */
                    std::string m_sourceIP;
                    bool m_sourceIPHasBeenSet;

                    /**
                     * 调用类型
0:控制台调用
1:API
                     */
                    int64_t m_eventType;
                    bool m_eventTypeHasBeenSet;

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
                     * 用户/角色名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

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
                     * 运营商
                     */
                    std::string m_iSP;
                    bool m_iSPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_USERCALLRECORD_H_
