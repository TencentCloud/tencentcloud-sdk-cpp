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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ADMINCHANGEINVITATIONINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ADMINCHANGEINVITATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 企业变更超管信息。
                */
                class AdminChangeInvitationInfo : public AbstractModel
                {
                public:
                    AdminChangeInvitationInfo();
                    ~AdminChangeInvitationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。</p><p>注意：<br>此参数和 ChangeAdminOrganizationOpenId二选一，如果都传递了，但是不一致会进行报错拦截。</p>
                     * @return ChangeAdminOrganizationId <p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。</p><p>注意：<br>此参数和 ChangeAdminOrganizationOpenId二选一，如果都传递了，但是不一致会进行报错拦截。</p>
                     * 
                     */
                    std::string GetChangeAdminOrganizationId() const;

                    /**
                     * 设置<p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。</p><p>注意：<br>此参数和 ChangeAdminOrganizationOpenId二选一，如果都传递了，但是不一致会进行报错拦截。</p>
                     * @param _changeAdminOrganizationId <p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。</p><p>注意：<br>此参数和 ChangeAdminOrganizationOpenId二选一，如果都传递了，但是不一致会进行报错拦截。</p>
                     * 
                     */
                    void SetChangeAdminOrganizationId(const std::string& _changeAdminOrganizationId);

                    /**
                     * 判断参数 ChangeAdminOrganizationId 是否已赋值
                     * @return ChangeAdminOrganizationId 是否已赋值
                     * 
                     */
                    bool ChangeAdminOrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。<br>注意： 此参数和 ChangeAdminOrganizationId二选一，如果都传递了，不一致会进行报错拦截。</p>
                     * @return ChangeAdminOrganizationOpenId <p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。<br>注意： 此参数和 ChangeAdminOrganizationId二选一，如果都传递了，不一致会进行报错拦截。</p>
                     * 
                     */
                    std::string GetChangeAdminOrganizationOpenId() const;

                    /**
                     * 设置<p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。<br>注意： 此参数和 ChangeAdminOrganizationId二选一，如果都传递了，不一致会进行报错拦截。</p>
                     * @param _changeAdminOrganizationOpenId <p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。<br>注意： 此参数和 ChangeAdminOrganizationId二选一，如果都传递了，不一致会进行报错拦截。</p>
                     * 
                     */
                    void SetChangeAdminOrganizationOpenId(const std::string& _changeAdminOrganizationOpenId);

                    /**
                     * 判断参数 ChangeAdminOrganizationOpenId 是否已赋值
                     * @return ChangeAdminOrganizationOpenId 是否已赋值
                     * 
                     */
                    bool ChangeAdminOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取<p>组织机构要变更的超管OpenId。</p>
                     * @return NewAdminOpenId <p>组织机构要变更的超管OpenId。</p>
                     * 
                     */
                    std::string GetNewAdminOpenId() const;

                    /**
                     * 设置<p>组织机构要变更的超管OpenId。</p>
                     * @param _newAdminOpenId <p>组织机构要变更的超管OpenId。</p>
                     * 
                     */
                    void SetNewAdminOpenId(const std::string& _newAdminOpenId);

                    /**
                     * 判断参数 NewAdminOpenId 是否已赋值
                     * @return NewAdminOpenId 是否已赋值
                     * 
                     */
                    bool NewAdminOpenIdHasBeenSet() const;

                    /**
                     * 获取<p>组织机构要变更的超管姓名。</p>
                     * @return NewAdminName <p>组织机构要变更的超管姓名。</p>
                     * 
                     */
                    std::string GetNewAdminName() const;

                    /**
                     * 设置<p>组织机构要变更的超管姓名。</p>
                     * @param _newAdminName <p>组织机构要变更的超管姓名。</p>
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
                     * 获取<p>组织机构要变更的超管手机号。 跟超管变更的操作人保持一致。</p>
                     * @return NewAdminMobile <p>组织机构要变更的超管手机号。 跟超管变更的操作人保持一致。</p>
                     * 
                     */
                    std::string GetNewAdminMobile() const;

                    /**
                     * 设置<p>组织机构要变更的超管手机号。 跟超管变更的操作人保持一致。</p>
                     * @param _newAdminMobile <p>组织机构要变更的超管手机号。 跟超管变更的操作人保持一致。</p>
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
                     * 获取<p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>跟超管变更的操作人保持一致。</p><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @return NewAdminIdCardType <p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>跟超管变更的操作人保持一致。</p><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * 
                     */
                    std::string GetNewAdminIdCardType() const;

                    /**
                     * 设置<p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>跟超管变更的操作人保持一致。</p><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     * @param _newAdminIdCardType <p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>跟超管变更的操作人保持一致。</p><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
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
                     * 获取<p>组织机构新超管证件号。 跟超管变更的操作人保持一致。</p>
                     * @return NewAdminIdCardNumber <p>组织机构新超管证件号。 跟超管变更的操作人保持一致。</p>
                     * 
                     */
                    std::string GetNewAdminIdCardNumber() const;

                    /**
                     * 设置<p>组织机构新超管证件号。 跟超管变更的操作人保持一致。</p>
                     * @param _newAdminIdCardNumber <p>组织机构新超管证件号。 跟超管变更的操作人保持一致。</p>
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
                     * 获取<p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。</p><p> p.s. 如果上传授权书 ，需遵循以下条件 1. 超管的信息（超管姓名，超管手机号）必须为必填参数。</p>
                     * @return AuthFiles <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。</p><p> p.s. 如果上传授权书 ，需遵循以下条件 1. 超管的信息（超管姓名，超管手机号）必须为必填参数。</p>
                     * 
                     */
                    std::vector<std::string> GetAuthFiles() const;

                    /**
                     * 设置<p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。</p><p> p.s. 如果上传授权书 ，需遵循以下条件 1. 超管的信息（超管姓名，超管手机号）必须为必填参数。</p>
                     * @param _authFiles <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。</p><p> p.s. 如果上传授权书 ，需遵循以下条件 1. 超管的信息（超管姓名，超管手机号）必须为必填参数。</p>
                     * 
                     */
                    void SetAuthFiles(const std::vector<std::string>& _authFiles);

                    /**
                     * 判断参数 AuthFiles 是否已赋值
                     * @return AuthFiles 是否已赋值
                     * 
                     */
                    bool AuthFilesHasBeenSet() const;

                private:

                    /**
                     * <p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。</p><p>注意：<br>此参数和 ChangeAdminOrganizationOpenId二选一，如果都传递了，但是不一致会进行报错拦截。</p>
                     */
                    std::string m_changeAdminOrganizationId;
                    bool m_changeAdminOrganizationIdHasBeenSet;

                    /**
                     * <p>要变更的企业Id。 使用接口进行变更，所支持的企业有两种。<br>注意： 此参数和 ChangeAdminOrganizationId二选一，如果都传递了，不一致会进行报错拦截。</p>
                     */
                    std::string m_changeAdminOrganizationOpenId;
                    bool m_changeAdminOrganizationOpenIdHasBeenSet;

                    /**
                     * <p>组织机构要变更的超管OpenId。</p>
                     */
                    std::string m_newAdminOpenId;
                    bool m_newAdminOpenIdHasBeenSet;

                    /**
                     * <p>组织机构要变更的超管姓名。</p>
                     */
                    std::string m_newAdminName;
                    bool m_newAdminNameHasBeenSet;

                    /**
                     * <p>组织机构要变更的超管手机号。 跟超管变更的操作人保持一致。</p>
                     */
                    std::string m_newAdminMobile;
                    bool m_newAdminMobileHasBeenSet;

                    /**
                     * <p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>跟超管变更的操作人保持一致。</p><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul>
                     */
                    std::string m_newAdminIdCardType;
                    bool m_newAdminIdCardTypeHasBeenSet;

                    /**
                     * <p>组织机构新超管证件号。 跟超管变更的操作人保持一致。</p>
                     */
                    std::string m_newAdminIdCardNumber;
                    bool m_newAdminIdCardNumberHasBeenSet;

                    /**
                     * <p>授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。</p><p> p.s. 如果上传授权书 ，需遵循以下条件 1. 超管的信息（超管姓名，超管手机号）必须为必填参数。</p>
                     */
                    std::vector<std::string> m_authFiles;
                    bool m_authFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_ADMINCHANGEINVITATIONINFO_H_
