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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_ADMINCHANGEINVITATIONINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_ADMINCHANGEINVITATIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
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
                     * 获取要变更的企业Id。
使用接口进行变更，所支持的企业有两种。
1. 集团主企业替子企业进行超管变更。
    子企业的企业 Id 可在更多-组织管理-集团组织管理处获取。如图位置![image](https://qcloudimg.tencent-cloud.cn/raw/3d4469c13ca9e66a847560fc4309c58b.png)
2. 使用接口[创建企业认证链接](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthUrl) 创建的企业，企业 Id 可以从回调[企业引导企业实名认证后回调](https://qian.tencent.com/developers/company/callback_types_staffs#%E5%8D%81%E4%B8%80-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%BC%81%E4%B8%9A%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83)得到。
                     * @return ChangeAdminOrganizationId 要变更的企业Id。
使用接口进行变更，所支持的企业有两种。
1. 集团主企业替子企业进行超管变更。
    子企业的企业 Id 可在更多-组织管理-集团组织管理处获取。如图位置![image](https://qcloudimg.tencent-cloud.cn/raw/3d4469c13ca9e66a847560fc4309c58b.png)
2. 使用接口[创建企业认证链接](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthUrl) 创建的企业，企业 Id 可以从回调[企业引导企业实名认证后回调](https://qian.tencent.com/developers/company/callback_types_staffs#%E5%8D%81%E4%B8%80-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%BC%81%E4%B8%9A%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83)得到。
                     * 
                     */
                    std::string GetChangeAdminOrganizationId() const;

                    /**
                     * 设置要变更的企业Id。
使用接口进行变更，所支持的企业有两种。
1. 集团主企业替子企业进行超管变更。
    子企业的企业 Id 可在更多-组织管理-集团组织管理处获取。如图位置![image](https://qcloudimg.tencent-cloud.cn/raw/3d4469c13ca9e66a847560fc4309c58b.png)
2. 使用接口[创建企业认证链接](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthUrl) 创建的企业，企业 Id 可以从回调[企业引导企业实名认证后回调](https://qian.tencent.com/developers/company/callback_types_staffs#%E5%8D%81%E4%B8%80-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%BC%81%E4%B8%9A%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83)得到。
                     * @param _changeAdminOrganizationId 要变更的企业Id。
使用接口进行变更，所支持的企业有两种。
1. 集团主企业替子企业进行超管变更。
    子企业的企业 Id 可在更多-组织管理-集团组织管理处获取。如图位置![image](https://qcloudimg.tencent-cloud.cn/raw/3d4469c13ca9e66a847560fc4309c58b.png)
2. 使用接口[创建企业认证链接](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthUrl) 创建的企业，企业 Id 可以从回调[企业引导企业实名认证后回调](https://qian.tencent.com/developers/company/callback_types_staffs#%E5%8D%81%E4%B8%80-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%BC%81%E4%B8%9A%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83)得到。
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
                     * 获取组织机构要变更的超管姓名。 
跟超管变更的操作人保持一致。

                     * @return NewAdminName 组织机构要变更的超管姓名。 
跟超管变更的操作人保持一致。

                     * 
                     */
                    std::string GetNewAdminName() const;

                    /**
                     * 设置组织机构要变更的超管姓名。 
跟超管变更的操作人保持一致。

                     * @param _newAdminName 组织机构要变更的超管姓名。 
跟超管变更的操作人保持一致。

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
                     * 获取授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
                     * @return AuthFiles 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
                     * 
                     */
                    std::vector<std::string> GetAuthFiles() const;

                    /**
                     * 设置授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
                     * @param _authFiles 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
                     * 
                     */
                    void SetAuthFiles(const std::vector<std::string>& _authFiles);

                    /**
                     * 判断参数 AuthFiles 是否已赋值
                     * @return AuthFiles 是否已赋值
                     * 
                     */
                    bool AuthFilesHasBeenSet() const;

                    /**
                     * 获取组织机构要变更的超管手机号。
跟超管变更的操作人保持一致。
超管变更的手机号和超管变更的证件号，必须要传递一个。
                     * @return NewAdminMobile 组织机构要变更的超管手机号。
跟超管变更的操作人保持一致。
超管变更的手机号和超管变更的证件号，必须要传递一个。
                     * 
                     */
                    std::string GetNewAdminMobile() const;

                    /**
                     * 设置组织机构要变更的超管手机号。
跟超管变更的操作人保持一致。
超管变更的手机号和超管变更的证件号，必须要传递一个。
                     * @param _newAdminMobile 组织机构要变更的超管手机号。
跟超管变更的操作人保持一致。
超管变更的手机号和超管变更的证件号，必须要传递一个。
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
- HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)

跟超管变更的操作人保持一致。

                     * @return NewAdminIdCardType 组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
- HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)

跟超管变更的操作人保持一致。

                     * 
                     */
                    std::string GetNewAdminIdCardType() const;

                    /**
                     * 设置组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
- HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)

跟超管变更的操作人保持一致。

                     * @param _newAdminIdCardType 组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
- HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)

跟超管变更的操作人保持一致。

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
                     * 获取组织机构新超管证件号。

跟超管变更的操作人保持一致。

超管变更的手机号和超管变更的证件号，必须要传递一个。
                     * @return NewAdminIdCardNumber 组织机构新超管证件号。

跟超管变更的操作人保持一致。

超管变更的手机号和超管变更的证件号，必须要传递一个。
                     * 
                     */
                    std::string GetNewAdminIdCardNumber() const;

                    /**
                     * 设置组织机构新超管证件号。

跟超管变更的操作人保持一致。

超管变更的手机号和超管变更的证件号，必须要传递一个。
                     * @param _newAdminIdCardNumber 组织机构新超管证件号。

跟超管变更的操作人保持一致。

超管变更的手机号和超管变更的证件号，必须要传递一个。
                     * 
                     */
                    void SetNewAdminIdCardNumber(const std::string& _newAdminIdCardNumber);

                    /**
                     * 判断参数 NewAdminIdCardNumber 是否已赋值
                     * @return NewAdminIdCardNumber 是否已赋值
                     * 
                     */
                    bool NewAdminIdCardNumberHasBeenSet() const;

                private:

                    /**
                     * 要变更的企业Id。
使用接口进行变更，所支持的企业有两种。
1. 集团主企业替子企业进行超管变更。
    子企业的企业 Id 可在更多-组织管理-集团组织管理处获取。如图位置![image](https://qcloudimg.tencent-cloud.cn/raw/3d4469c13ca9e66a847560fc4309c58b.png)
2. 使用接口[创建企业认证链接](https://qian.tencent.com/developers/companyApis/organizations/CreateOrganizationAuthUrl) 创建的企业，企业 Id 可以从回调[企业引导企业实名认证后回调](https://qian.tencent.com/developers/company/callback_types_staffs#%E5%8D%81%E4%B8%80-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%BC%81%E4%B8%9A%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83)得到。
                     */
                    std::string m_changeAdminOrganizationId;
                    bool m_changeAdminOrganizationIdHasBeenSet;

                    /**
                     * 组织机构要变更的超管姓名。 
跟超管变更的操作人保持一致。

                     */
                    std::string m_newAdminName;
                    bool m_newAdminNameHasBeenSet;

                    /**
                     * 授权书(PNG或JPG或PDF) base64格式, 大小不超过8M 。
p.s. 如果上传授权书 ，需遵循以下条件
1. 超管的信息（超管姓名，超管手机号）必须为必填参数。
                     */
                    std::vector<std::string> m_authFiles;
                    bool m_authFilesHasBeenSet;

                    /**
                     * 组织机构要变更的超管手机号。
跟超管变更的操作人保持一致。
超管变更的手机号和超管变更的证件号，必须要传递一个。
                     */
                    std::string m_newAdminMobile;
                    bool m_newAdminMobileHasBeenSet;

                    /**
                     * 组织机构要变更的超管证件类型支持以下类型
- ID_CARD : 中国大陆居民身份证 (默认值)
- HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证
- HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)

跟超管变更的操作人保持一致。

                     */
                    std::string m_newAdminIdCardType;
                    bool m_newAdminIdCardTypeHasBeenSet;

                    /**
                     * 组织机构新超管证件号。

跟超管变更的操作人保持一致。

超管变更的手机号和超管变更的证件号，必须要传递一个。
                     */
                    std::string m_newAdminIdCardNumber;
                    bool m_newAdminIdCardNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_ADMINCHANGEINVITATIONINFO_H_
