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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYWECHATAUTHRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYWECHATAUTHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 查询用户微工卡核身结果
                */
                class QueryWechatAuthResult : public AbstractModel
                {
                public:
                    QueryWechatAuthResult();
                    ~QueryWechatAuthResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户核身单号
                     * @return AuthNo 商户核身单号
                     * 
                     */
                    std::string GetAuthNo() const;

                    /**
                     * 设置商户核身单号
                     * @param _authNo 商户核身单号
                     * 
                     */
                    void SetAuthNo(const std::string& _authNo);

                    /**
                     * 判断参数 AuthNo 是否已赋值
                     * @return AuthNo 是否已赋值
                     * 
                     */
                    bool AuthNoHasBeenSet() const;

                    /**
                     * 获取微信用户标识
                     * @return OpenId 微信用户标识
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置微信用户标识
                     * @param _openId 微信用户标识
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取商户号
                     * @return MchId 商户号
                     * 
                     */
                    std::string GetMchId() const;

                    /**
                     * 设置商户号
                     * @param _mchId 商户号
                     * 
                     */
                    void SetMchId(const std::string& _mchId);

                    /**
                     * 判断参数 MchId 是否已赋值
                     * @return MchId 是否已赋值
                     * 
                     */
                    bool MchIdHasBeenSet() const;

                    /**
                     * 获取子商户号
                     * @return SubMchId 子商户号
                     * 
                     */
                    std::string GetSubMchId() const;

                    /**
                     * 设置子商户号
                     * @param _subMchId 子商户号
                     * 
                     */
                    void SetSubMchId(const std::string& _subMchId);

                    /**
                     * 判断参数 SubMchId 是否已赋值
                     * @return SubMchId 是否已赋值
                     * 
                     */
                    bool SubMchIdHasBeenSet() const;

                    /**
                     * 获取核身渠道
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     * @return AuthScene 核身渠道
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     * 
                     */
                    std::string GetAuthScene() const;

                    /**
                     * 设置核身渠道
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     * @param _authScene 核身渠道
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     * 
                     */
                    void SetAuthScene(const std::string& _authScene);

                    /**
                     * 判断参数 AuthScene 是否已赋值
                     * @return AuthScene 是否已赋值
                     * 
                     */
                    bool AuthSceneHasBeenSet() const;

                    /**
                     * 获取核身渠道标识

用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     * @return AuthSource 核身渠道标识

用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     * 
                     */
                    std::string GetAuthSource() const;

                    /**
                     * 设置核身渠道标识

用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     * @param _authSource 核身渠道标识

用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     * 
                     */
                    void SetAuthSource(const std::string& _authSource);

                    /**
                     * 判断参数 AuthSource 是否已赋值
                     * @return AuthSource 是否已赋值
                     * 
                     */
                    bool AuthSourceHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取所属单位名称
                     * @return EmployerName 所属单位名称
                     * 
                     */
                    std::string GetEmployerName() const;

                    /**
                     * 设置所属单位名称
                     * @param _employerName 所属单位名称
                     * 
                     */
                    void SetEmployerName(const std::string& _employerName);

                    /**
                     * 判断参数 EmployerName 是否已赋值
                     * @return EmployerName 是否已赋值
                     * 
                     */
                    bool EmployerNameHasBeenSet() const;

                    /**
                     * 获取核身时间
yyyy-MM-DDTHH:mm:ss+TIMEZONE

示例值：2015-05-20T13:29:35+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthTime 核身时间
yyyy-MM-DDTHH:mm:ss+TIMEZONE

示例值：2015-05-20T13:29:35+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthTime() const;

                    /**
                     * 设置核身时间
yyyy-MM-DDTHH:mm:ss+TIMEZONE

示例值：2015-05-20T13:29:35+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authTime 核身时间
yyyy-MM-DDTHH:mm:ss+TIMEZONE

示例值：2015-05-20T13:29:35+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthTime(const std::string& _authTime);

                    /**
                     * 判断参数 AuthTime 是否已赋值
                     * @return AuthTime 是否已赋值
                     * 
                     */
                    bool AuthTimeHasBeenSet() const;

                    /**
                     * 获取核身类型

SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     * @return AuthType 核身类型

SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置核身类型

SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     * @param _authType 核身类型

SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     * @return AuthState 核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     * 
                     */
                    std::string GetAuthState() const;

                    /**
                     * 设置核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     * @param _authState 核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     * 
                     */
                    void SetAuthState(const std::string& _authState);

                    /**
                     * 判断参数 AuthState 是否已赋值
                     * @return AuthState 是否已赋值
                     * 
                     */
                    bool AuthStateHasBeenSet() const;

                    /**
                     * 获取核身失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthFailReason 核身失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthFailReason() const;

                    /**
                     * 设置核身失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authFailReason 核身失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthFailReason(const std::string& _authFailReason);

                    /**
                     * 判断参数 AuthFailReason 是否已赋值
                     * @return AuthFailReason 是否已赋值
                     * 
                     */
                    bool AuthFailReasonHasBeenSet() const;

                private:

                    /**
                     * 商户核身单号
                     */
                    std::string m_authNo;
                    bool m_authNoHasBeenSet;

                    /**
                     * 微信用户标识
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 商户号
                     */
                    std::string m_mchId;
                    bool m_mchIdHasBeenSet;

                    /**
                     * 子商户号
                     */
                    std::string m_subMchId;
                    bool m_subMchIdHasBeenSet;

                    /**
                     * 核身渠道
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     */
                    std::string m_authScene;
                    bool m_authSceneHasBeenSet;

                    /**
                     * 核身渠道标识

用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     */
                    std::string m_authSource;
                    bool m_authSourceHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 所属单位名称
                     */
                    std::string m_employerName;
                    bool m_employerNameHasBeenSet;

                    /**
                     * 核身时间
yyyy-MM-DDTHH:mm:ss+TIMEZONE

示例值：2015-05-20T13:29:35+08:00
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authTime;
                    bool m_authTimeHasBeenSet;

                    /**
                     * 核身类型

SIGN_IN：考勤、签到打卡类型
INSURANCE：投保类型
CONTRACT：签约类型
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     */
                    std::string m_authState;
                    bool m_authStateHasBeenSet;

                    /**
                     * 核身失败原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authFailReason;
                    bool m_authFailReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYWECHATAUTHRESULT_H_
