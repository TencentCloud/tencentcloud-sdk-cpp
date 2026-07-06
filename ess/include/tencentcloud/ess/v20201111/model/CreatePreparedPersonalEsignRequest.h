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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreatePreparedPersonalEsign请求参数结构体
                */
                class CreatePreparedPersonalEsignRequest : public AbstractModel
                {
                public:
                    CreatePreparedPersonalEsignRequest();
                    ~CreatePreparedPersonalEsignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>个人用户姓名</p>
                     * @return UserName <p>个人用户姓名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>个人用户姓名</p>
                     * @param _userName <p>个人用户姓名</p>
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
                     * 获取<p>证件号码，应符合以下规则</p><ul><li> 中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @return IdCardNumber <p>证件号码，应符合以下规则</p><ul><li> 中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置<p>证件号码，应符合以下规则</p><ul><li> 中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @param _idCardNumber <p>证件号码，应符合以下规则</p><ul><li> 中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
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
                     * 获取<p>印章名称，长度1-50个字。</p>
                     * @return SealName <p>印章名称，长度1-50个字。</p>
                     * 
                     */
                    std::string GetSealName() const;

                    /**
                     * 设置<p>印章名称，长度1-50个字。</p>
                     * @param _sealName <p>印章名称，长度1-50个字。</p>
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
                     * 获取<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
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
                     * 获取<p>证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同 中国大陆居民身份证)</li></ul>
                     * @return IdCardType <p>证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同 中国大陆居民身份证)</li></ul>
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置<p>证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同 中国大陆居民身份证)</li></ul>
                     * @param _idCardType <p>证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同 中国大陆居民身份证)</li></ul>
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
                     * 获取<p>该字段已不再使用</p>
                     * @return SealImage <p>该字段已不再使用</p>
                     * @deprecated
                     */
                    std::string GetSealImage() const;

                    /**
                     * 设置<p>该字段已不再使用</p>
                     * @param _sealImage <p>该字段已不再使用</p>
                     * @deprecated
                     */
                    void SetSealImage(const std::string& _sealImage);

                    /**
                     * 判断参数 SealImage 是否已赋值
                     * @return SealImage 是否已赋值
                     * @deprecated
                     */
                    bool SealImageHasBeenSet() const;

                    /**
                     * 获取<p>是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。</p>
                     * @return SealImageCompress <p>是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。</p>
                     * 
                     */
                    bool GetSealImageCompress() const;

                    /**
                     * 设置<p>是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。</p>
                     * @param _sealImageCompress <p>是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。</p>
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
                     * 获取<p>手机号码；当需要开通自动签时，该参数必传</p>
                     * @return Mobile <p>手机号码；当需要开通自动签时，该参数必传</p>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置<p>手机号码；当需要开通自动签时，该参数必传</p>
                     * @param _mobile <p>手机号码；当需要开通自动签时，该参数必传</p>
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
                     * 获取<p>该字段已不再使用</p>
                     * @return EnableAutoSign <p>该字段已不再使用</p>
                     * @deprecated
                     */
                    bool GetEnableAutoSign() const;

                    /**
                     * 设置<p>该字段已不再使用</p>
                     * @param _enableAutoSign <p>该字段已不再使用</p>
                     * @deprecated
                     */
                    void SetEnableAutoSign(const bool& _enableAutoSign);

                    /**
                     * 判断参数 EnableAutoSign 是否已赋值
                     * @return EnableAutoSign 是否已赋值
                     * @deprecated
                     */
                    bool EnableAutoSignHasBeenSet() const;

                    /**
                     * 获取<p>印章颜色（参数ProcessSeal=true时生效）<br>默认值：BLACK黑色<br>取值:<br>BLACK 黑色,<br>RED 红色,<br>BLUE 蓝色。</p>
                     * @return SealColor <p>印章颜色（参数ProcessSeal=true时生效）<br>默认值：BLACK黑色<br>取值:<br>BLACK 黑色,<br>RED 红色,<br>BLUE 蓝色。</p>
                     * 
                     */
                    std::string GetSealColor() const;

                    /**
                     * 设置<p>印章颜色（参数ProcessSeal=true时生效）<br>默认值：BLACK黑色<br>取值:<br>BLACK 黑色,<br>RED 红色,<br>BLUE 蓝色。</p>
                     * @param _sealColor <p>印章颜色（参数ProcessSeal=true时生效）<br>默认值：BLACK黑色<br>取值:<br>BLACK 黑色,<br>RED 红色,<br>BLUE 蓝色。</p>
                     * 
                     */
                    void SetSealColor(const std::string& _sealColor);

                    /**
                     * 判断参数 SealColor 是否已赋值
                     * @return SealColor 是否已赋值
                     * 
                     */
                    bool SealColorHasBeenSet() const;

                    /**
                     * 获取<p>是否处理印章，默认不做印章处理。<br>取值如下：</p><ul><li>false：不做任何处理；</li><li>true：做透明化处理和颜色增强。</li></ul>
                     * @return ProcessSeal <p>是否处理印章，默认不做印章处理。<br>取值如下：</p><ul><li>false：不做任何处理；</li><li>true：做透明化处理和颜色增强。</li></ul>
                     * 
                     */
                    bool GetProcessSeal() const;

                    /**
                     * 设置<p>是否处理印章，默认不做印章处理。<br>取值如下：</p><ul><li>false：不做任何处理；</li><li>true：做透明化处理和颜色增强。</li></ul>
                     * @param _processSeal <p>是否处理印章，默认不做印章处理。<br>取值如下：</p><ul><li>false：不做任何处理；</li><li>true：做透明化处理和颜色增强。</li></ul>
                     * 
                     */
                    void SetProcessSeal(const bool& _processSeal);

                    /**
                     * 判断参数 ProcessSeal 是否已赋值
                     * @return ProcessSeal 是否已赋值
                     * 
                     */
                    bool ProcessSealHasBeenSet() const;

                    /**
                     * 获取<p>印章图片文件 id<br>取值：<br>填写的FileId通过UploadFiles接口上传文件获取。</p>
                     * @return FileId <p>印章图片文件 id<br>取值：<br>填写的FileId通过UploadFiles接口上传文件获取。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>印章图片文件 id<br>取值：<br>填写的FileId通过UploadFiles接口上传文件获取。</p>
                     * @param _fileId <p>印章图片文件 id<br>取值：<br>填写的FileId通过UploadFiles接口上传文件获取。</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
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
                     * 获取<p>设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减</p>
                     * @return LicenseType <p>设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减</p>
                     * 
                     */
                    int64_t GetLicenseType() const;

                    /**
                     * 设置<p>设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减</p>
                     * @param _licenseType <p>设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减</p>
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
                     * 获取<p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul><p>注: <code>不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN</code></p>
                     * @return SceneKey <p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul><p>注: <code>不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN</code></p>
                     * 
                     */
                    std::string GetSceneKey() const;

                    /**
                     * 设置<p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul><p>注: <code>不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN</code></p>
                     * @param _sceneKey <p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul><p>注: <code>不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN</code></p>
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
                     * <p>个人用户姓名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>证件号码，应符合以下规则</p><ul><li> 中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * <p>印章名称，长度1-50个字。</p>
                     */
                    std::string m_sealName;
                    bool m_sealNameHasBeenSet;

                    /**
                     * <p>执行本接口操作的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>证件类型，支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同 中国大陆居民身份证)</li></ul>
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * <p>该字段已不再使用</p>
                     */
                    std::string m_sealImage;
                    bool m_sealImageHasBeenSet;

                    /**
                     * <p>是否开启印章图片压缩处理，默认不开启，如需开启请设置为 true。当印章超过 2M 时建议开启，开启后图片的 hash 将发生变化。</p>
                     */
                    bool m_sealImageCompress;
                    bool m_sealImageCompressHasBeenSet;

                    /**
                     * <p>手机号码；当需要开通自动签时，该参数必传</p>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * <p>该字段已不再使用</p>
                     */
                    bool m_enableAutoSign;
                    bool m_enableAutoSignHasBeenSet;

                    /**
                     * <p>印章颜色（参数ProcessSeal=true时生效）<br>默认值：BLACK黑色<br>取值:<br>BLACK 黑色,<br>RED 红色,<br>BLUE 蓝色。</p>
                     */
                    std::string m_sealColor;
                    bool m_sealColorHasBeenSet;

                    /**
                     * <p>是否处理印章，默认不做印章处理。<br>取值如下：</p><ul><li>false：不做任何处理；</li><li>true：做透明化处理和颜色增强。</li></ul>
                     */
                    bool m_processSeal;
                    bool m_processSealHasBeenSet;

                    /**
                     * <p>印章图片文件 id<br>取值：<br>填写的FileId通过UploadFiles接口上传文件获取。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次 1-不绑定，发起合同时将按标准合同套餐进行扣减</p>
                     */
                    int64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>自动签使用的场景值, 可以选择的场景值如下:</p><ul><li> **E_PRESCRIPTION_AUTO_SIGN** :  电子处方场景</li><li> **OTHER** :  通用场景</li></ul><p>注: <code>不传默认为处方单场景，即E_PRESCRIPTION_AUTO_SIGN</code></p>
                     */
                    std::string m_sceneKey;
                    bool m_sceneKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEPREPAREDPERSONALESIGNREQUEST_H_
