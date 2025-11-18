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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHADMINCHANGEINVITATIONSURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHADMINCHANGEINVITATIONSURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateBatchAdminChangeInvitationsUrl请求参数结构体
                */
                class CreateBatchAdminChangeInvitationsUrlRequest : public AbstractModel
                {
                public:
                    CreateBatchAdminChangeInvitationsUrlRequest();
                    ~CreateBatchAdminChangeInvitationsUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @return Operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * @param _operator 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。

                     * @return NewAdminName 组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。

                     * 
                     */
                    std::string GetNewAdminName() const;

                    /**
                     * 设置组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。

                     * @param _newAdminName 组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。

                     * 
                     */
                    void SetNewAdminName(const std::string& _newAdminName);

                    /**
                     * 判断参数 NewAdminName 是否已赋值
                     * @return NewAdminName 是否已赋值
                     * 
                     */
                    bool NewAdminNameHasBeenSet() const;

                    /**
                     * 获取组织机构要变更的超管手机号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。

超管手机号 和超管证件号 二选一 必填。

注意：
1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。
                     * @return NewAdminMobile 组织机构要变更的超管手机号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。

超管手机号 和超管证件号 二选一 必填。

注意：
1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。
                     * 
                     */
                    std::string GetNewAdminMobile() const;

                    /**
                     * 设置组织机构要变更的超管手机号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。

超管手机号 和超管证件号 二选一 必填。

注意：
1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。
                     * @param _newAdminMobile 组织机构要变更的超管手机号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。

超管手机号 和超管证件号 二选一 必填。

注意：
1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。
                     * 
                     */
                    void SetNewAdminMobile(const std::string& _newAdminMobile);

                    /**
                     * 判断参数 NewAdminMobile 是否已赋值
                     * @return NewAdminMobile 是否已赋值
                     * 
                     */
                    bool NewAdminMobileHasBeenSet() const;

                    /**
                     * 获取组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
-  HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)
需要更当前操作人的证件类型保持一致。

                     * @return NewAdminIdCardType 组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
-  HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)
需要更当前操作人的证件类型保持一致。

                     * 
                     */
                    std::string GetNewAdminIdCardType() const;

                    /**
                     * 设置组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
-  HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)
需要更当前操作人的证件类型保持一致。

                     * @param _newAdminIdCardType 组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
-  HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)
需要更当前操作人的证件类型保持一致。

                     * 
                     */
                    void SetNewAdminIdCardType(const std::string& _newAdminIdCardType);

                    /**
                     * 判断参数 NewAdminIdCardType 是否已赋值
                     * @return NewAdminIdCardType 是否已赋值
                     * 
                     */
                    bool NewAdminIdCardTypeHasBeenSet() const;

                    /**
                     * 获取组织机构要变更的超管证件号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。

超管手机号和超管证件号 二选一必填。
                     * @return NewAdminIdCardNumber 组织机构要变更的超管证件号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。

超管手机号和超管证件号 二选一必填。
                     * 
                     */
                    std::string GetNewAdminIdCardNumber() const;

                    /**
                     * 设置组织机构要变更的超管证件号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。

超管手机号和超管证件号 二选一必填。
                     * @param _newAdminIdCardNumber 组织机构要变更的超管证件号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。

超管手机号和超管证件号 二选一必填。
                     * 
                     */
                    void SetNewAdminIdCardNumber(const std::string& _newAdminIdCardNumber);

                    /**
                     * 判断参数 NewAdminIdCardNumber 是否已赋值
                     * @return NewAdminIdCardNumber 是否已赋值
                     * 
                     */
                    bool NewAdminIdCardNumberHasBeenSet() const;

                    /**
                     * 获取通知方式。
 NONE（默认）
 SMS  - 如果使用这个方式，则会给即将变更的超管发信息。
注意：
发送信息的手机号，是用户传递的手机号。
如果用户同时传递了证件号，手机号会用用户在电子签注册的手机号进行覆盖。
                     * @return NotifyType 通知方式。
 NONE（默认）
 SMS  - 如果使用这个方式，则会给即将变更的超管发信息。
注意：
发送信息的手机号，是用户传递的手机号。
如果用户同时传递了证件号，手机号会用用户在电子签注册的手机号进行覆盖。
                     * 
                     */
                    std::string GetNotifyType() const;

                    /**
                     * 设置通知方式。
 NONE（默认）
 SMS  - 如果使用这个方式，则会给即将变更的超管发信息。
注意：
发送信息的手机号，是用户传递的手机号。
如果用户同时传递了证件号，手机号会用用户在电子签注册的手机号进行覆盖。
                     * @param _notifyType 通知方式。
 NONE（默认）
 SMS  - 如果使用这个方式，则会给即将变更的超管发信息。
注意：
发送信息的手机号，是用户传递的手机号。
如果用户同时传递了证件号，手机号会用用户在电子签注册的手机号进行覆盖。
                     * 
                     */
                    void SetNotifyType(const std::string& _notifyType);

                    /**
                     * 判断参数 NotifyType 是否已赋值
                     * @return NotifyType 是否已赋值
                     * 
                     */
                    bool NotifyTypeHasBeenSet() const;

                    /**
                     * 获取要跳转的链接类型<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式,  可以在页面展示适合此类型</li></ul>
                     * @return Endpoint 要跳转的链接类型<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式,  可以在页面展示适合此类型</li></ul>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置要跳转的链接类型<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式,  可以在页面展示适合此类型</li></ul>
                     * @param _endpoint 要跳转的链接类型<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式,  可以在页面展示适合此类型</li></ul>
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                private:

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。

                     */
                    std::string m_newAdminName;
                    bool m_newAdminNameHasBeenSet;

                    /**
                     * 组织机构要变更的超管手机号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。

超管手机号 和超管证件号 二选一 必填。

注意：
1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。
                     */
                    std::string m_newAdminMobile;
                    bool m_newAdminMobileHasBeenSet;

                    /**
                     * 组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
-  HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)
需要更当前操作人的证件类型保持一致。

                     */
                    std::string m_newAdminIdCardType;
                    bool m_newAdminIdCardTypeHasBeenSet;

                    /**
                     * 组织机构要变更的超管证件号。 
在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。

超管手机号和超管证件号 二选一必填。
                     */
                    std::string m_newAdminIdCardNumber;
                    bool m_newAdminIdCardNumberHasBeenSet;

                    /**
                     * 通知方式。
 NONE（默认）
 SMS  - 如果使用这个方式，则会给即将变更的超管发信息。
注意：
发送信息的手机号，是用户传递的手机号。
如果用户同时传递了证件号，手机号会用用户在电子签注册的手机号进行覆盖。
                     */
                    std::string m_notifyType;
                    bool m_notifyTypeHasBeenSet;

                    /**
                     * 要跳转的链接类型<ul><li> **HTTP**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型  ，此时返回长链 (默认类型)</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url, 短信通知或者H5跳转适合此类型，此时返回短链</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path,  APP或者小程序跳转适合此类型</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式,  可以在页面展示适合此类型</li></ul>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHADMINCHANGEINVITATIONSURLREQUEST_H_
