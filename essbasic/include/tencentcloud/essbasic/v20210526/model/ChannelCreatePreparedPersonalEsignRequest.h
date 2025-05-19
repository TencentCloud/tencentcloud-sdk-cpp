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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREDPERSONALESIGNREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREDPERSONALESIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>
#include <tencentcloud/essbasic/v20210526/model/UserInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreatePreparedPersonalEsign请求参数结构体
                */
                class ChannelCreatePreparedPersonalEsignRequest : public AbstractModel
                {
                public:
                    ChannelCreatePreparedPersonalEsignRequest();
                    ~ChannelCreatePreparedPersonalEsignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * @return Agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * @param _agent 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取个人用户姓名
                     * @return UserName 个人用户姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置个人用户姓名
                     * @param _userName 个人用户姓名
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
                     * 获取证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @return IdCardNumber 证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @param _idCardNumber 证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取电子印章名字，1-50个中文字符
注:`同一企业下电子印章名字不能相同`
                     * @return SealName 电子印章名字，1-50个中文字符
注:`同一企业下电子印章名字不能相同`
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置电子印章名字，1-50个中文字符
注:`同一企业下电子印章名字不能相同`
                     * @param _sealName 电子印章名字，1-50个中文字符
注:`同一企业下电子印章名字不能相同`
                     * 
                     */
                    void SetSealName(const std::string& _sealName);

                    /**
                     * 判断参数 SealName 是否已赋值
                     * @return SealName 是否已赋值
                     * 
                     */
                    bool SealNameHasBeenSet() const;

                    /**
                     * 获取电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式。


                     * @return SealImage 电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式。


                     * 
                     */
                    std::string GetSealImage() const;

                    /**
                     * 设置电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式。


                     * @param _sealImage 电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式。


                     * 
                     */
                    void SetSealImage(const std::string& _sealImage);

                    /**
                     * 判断参数 SealImage 是否已赋值
                     * @return SealImage 是否已赋值
                     * 
                     */
                    bool SealImageHasBeenSet() const;

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
                     * 获取证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li>
<li>OTHER_CARD_TYPE : 其他</li></ul>

注: `其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。`
                     * @return IdCardType 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li>
<li>OTHER_CARD_TYPE : 其他</li></ul>

注: `其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。`
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li>
<li>OTHER_CARD_TYPE : 其他</li></ul>

注: `其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。`
                     * @param _idCardType 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li>
<li>OTHER_CARD_TYPE : 其他</li></ul>

注: `其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。`
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。
                     * @return SealImageCompress 是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。
                     * 
                     */
                    bool GetSealImageCompress() const;

                    /**
                     * 设置是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。
                     * @param _sealImageCompress 是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。
                     * 
                     */
                    void SetSealImageCompress(const bool& _sealImageCompress);

                    /**
                     * 判断参数 SealImageCompress 是否已赋值
                     * @return SealImageCompress 是否已赋值
                     * 
                     */
                    bool SealImageCompressHasBeenSet() const;

                    /**
                     * 获取手机号码；当需要开通自动签时，该参数必传
                     * @return Mobile 手机号码；当需要开通自动签时，该参数必传
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置手机号码；当需要开通自动签时，该参数必传
                     * @param _mobile 手机号码；当需要开通自动签时，该参数必传
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取该字段已不再使用
                     * @return EnableAutoSign 该字段已不再使用
                     * 
                     */
                    bool GetEnableAutoSign() const;

                    /**
                     * 设置该字段已不再使用
                     * @param _enableAutoSign 该字段已不再使用
                     * 
                     */
                    void SetEnableAutoSign(const bool& _enableAutoSign);

                    /**
                     * 判断参数 EnableAutoSign 是否已赋值
                     * @return EnableAutoSign 是否已赋值
                     * 
                     */
                    bool EnableAutoSignHasBeenSet() const;

                    /**
                     * 获取设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减	
                     * @return LicenseType 设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减	
                     * 
                     */
                    int64_t GetLicenseType() const;

                    /**
                     * 设置设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减	
                     * @param _licenseType 设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减	
                     * 
                     */
                    void SetLicenseType(const int64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * @return SceneKey <ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * 
                     */
                    std::string GetSceneKey() const;

                    /**
                     * 设置<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * @param _sceneKey <ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     * 
                     */
                    void SetSceneKey(const std::string& _sceneKey);

                    /**
                     * 判断参数 SceneKey 是否已赋值
                     * @return SceneKey 是否已赋值
                     * 
                     */
                    bool SceneKeyHasBeenSet() const;

                private:

                    /**
                     * 关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * 个人用户姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 证件号码, 应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li>
<li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li>
<li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 电子印章名字，1-50个中文字符
注:`同一企业下电子印章名字不能相同`
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * 电子印章图片base64编码，大小不超过10M（原始图片不超过5M），只支持PNG或JPG图片格式。


                     */
                    std::string m_sealImage;
                    bool m_sealImageHasBeenSet;

                    /**
                     * 执行本接口操作的员工信息。
注: `在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。`
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 证件类型，支持以下类型
<ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li>
<li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li>
<li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li>
<li>OTHER_CARD_TYPE : 其他</li></ul>

注: `其他证件类型为白名单功能，使用前请联系对接的客户经理沟通。`
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。
                     */
                    bool m_sealImageCompress;
                    bool m_sealImageCompressHasBeenSet;

                    /**
                     * 手机号码；当需要开通自动签时，该参数必传
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 该字段已不再使用
                     */
                    bool m_enableAutoSign;
                    bool m_enableAutoSignHasBeenSet;

                    /**
                     * 设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减	
                     */
                    int64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>
                     */
                    std::string m_sceneKey;
                    bool m_sceneKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREDPERSONALESIGNREQUEST_H_
