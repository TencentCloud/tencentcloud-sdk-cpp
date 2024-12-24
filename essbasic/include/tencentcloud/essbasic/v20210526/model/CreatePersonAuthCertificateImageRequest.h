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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGEREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreatePersonAuthCertificateImage请求参数结构体
                */
                class CreatePersonAuthCertificateImageRequest : public AbstractModel
                {
                public:
                    CreatePersonAuthCertificateImageRequest();
                    ~CreatePersonAuthCertificateImageRequest() = default;
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
                     * 获取个人用户名称
                     * @return UserName 个人用户名称
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置个人用户名称
                     * @param _userName 个人用户名称
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
                     * 获取证件类型，支持以下类型<ul><li> ID_CARD  : 中国大陆居民身份证 (默认值)</li><li> HONGKONG_AND_MACAO  : 中国港澳居民来往内地通行证</li><li> HONGKONG_MACAO_AND_TAIWAN  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @return IdCardType 证件类型，支持以下类型<ul><li> ID_CARD  : 中国大陆居民身份证 (默认值)</li><li> HONGKONG_AND_MACAO  : 中国港澳居民来往内地通行证</li><li> HONGKONG_MACAO_AND_TAIWAN  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置证件类型，支持以下类型<ul><li> ID_CARD  : 中国大陆居民身份证 (默认值)</li><li> HONGKONG_AND_MACAO  : 中国港澳居民来往内地通行证</li><li> HONGKONG_MACAO_AND_TAIWAN  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @param _idCardType 证件类型，支持以下类型<ul><li> ID_CARD  : 中国大陆居民身份证 (默认值)</li><li> HONGKONG_AND_MACAO  : 中国港澳居民来往内地通行证</li><li> HONGKONG_MACAO_AND_TAIWAN  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
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
                     * 获取证件号码，应符合以下规则<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @return IdCardNumber 证件号码，应符合以下规则<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置证件号码，应符合以下规则<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @param _idCardNumber 证件号码，应符合以下规则<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
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
                     * 获取自动签使用的场景值, 可以选择的场景值如下:<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>注: `不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN`
                     * @return SceneKey 自动签使用的场景值, 可以选择的场景值如下:<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>注: `不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN`
                     * 
                     */
                    std::string GetSceneKey() const;

                    /**
                     * 设置自动签使用的场景值, 可以选择的场景值如下:<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>注: `不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN`
                     * @param _sceneKey 自动签使用的场景值, 可以选择的场景值如下:<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>注: `不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN`
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
                     * 个人用户名称
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 证件类型，支持以下类型<ul><li> ID_CARD  : 中国大陆居民身份证 (默认值)</li><li> HONGKONG_AND_MACAO  : 中国港澳居民来往内地通行证</li><li> HONGKONG_MACAO_AND_TAIWAN  : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 证件号码，应符合以下规则<ul><li>居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 自动签使用的场景值, 可以选择的场景值如下:<ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul>注: `不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN`
                     */
                    std::string m_sceneKey;
                    bool m_sceneKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEPERSONAUTHCERTIFICATEIMAGEREQUEST_H_
