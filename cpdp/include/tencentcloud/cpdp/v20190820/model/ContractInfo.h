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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ExternalContractUserInfo.h>
#include <tencentcloud/cpdp/v20190820/model/ContractUserInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 合约信息
                */
                class ContractInfo : public AbstractModel
                {
                public:
                    ContractInfo();
                    ~ContractInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取米大师内部签约商户号
                     * @return ChannelContractMerchantId 米大师内部签约商户号
                     * 
                     */
                    std::string GetChannelContractMerchantId() const;

                    /**
                     * 设置米大师内部签约商户号
                     * @param _channelContractMerchantId 米大师内部签约商户号
                     * 
                     */
                    void SetChannelContractMerchantId(const std::string& _channelContractMerchantId);

                    /**
                     * 判断参数 ChannelContractMerchantId 是否已赋值
                     * @return ChannelContractMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelContractMerchantIdHasBeenSet() const;

                    /**
                     * 获取米大师内部签约子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelContractSubMerchantId 米大师内部签约子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelContractSubMerchantId() const;

                    /**
                     * 设置米大师内部签约子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelContractSubMerchantId 米大师内部签约子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelContractSubMerchantId(const std::string& _channelContractSubMerchantId);

                    /**
                     * 判断参数 ChannelContractSubMerchantId 是否已赋值
                     * @return ChannelContractSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelContractSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取米大师内部签约应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelContractAppId 米大师内部签约应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelContractAppId() const;

                    /**
                     * 设置米大师内部签约应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelContractAppId 米大师内部签约应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelContractAppId(const std::string& _channelContractAppId);

                    /**
                     * 判断参数 ChannelContractAppId 是否已赋值
                     * @return ChannelContractAppId 是否已赋值
                     * 
                     */
                    bool ChannelContractAppIdHasBeenSet() const;

                    /**
                     * 获取米大师内部签约子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelContractSubAppId 米大师内部签约子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelContractSubAppId() const;

                    /**
                     * 设置米大师内部签约子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelContractSubAppId 米大师内部签约子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelContractSubAppId(const std::string& _channelContractSubAppId);

                    /**
                     * 判断参数 ChannelContractSubAppId 是否已赋值
                     * @return ChannelContractSubAppId 是否已赋值
                     * 
                     */
                    bool ChannelContractSubAppIdHasBeenSet() const;

                    /**
                     * 获取业务合约协议号
                     * @return OutContractCode 业务合约协议号
                     * 
                     */
                    std::string GetOutContractCode() const;

                    /**
                     * 设置业务合约协议号
                     * @param _outContractCode 业务合约协议号
                     * 
                     */
                    void SetOutContractCode(const std::string& _outContractCode);

                    /**
                     * 判断参数 OutContractCode 是否已赋值
                     * @return OutContractCode 是否已赋值
                     * 
                     */
                    bool OutContractCodeHasBeenSet() const;

                    /**
                     * 获取第三方渠道用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalContractUserInfoList 第三方渠道用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExternalContractUserInfo> GetExternalContractUserInfoList() const;

                    /**
                     * 设置第三方渠道用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalContractUserInfoList 第三方渠道用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalContractUserInfoList(const std::vector<ExternalContractUserInfo>& _externalContractUserInfoList);

                    /**
                     * 判断参数 ExternalContractUserInfoList 是否已赋值
                     * @return ExternalContractUserInfoList 是否已赋值
                     * 
                     */
                    bool ExternalContractUserInfoListHasBeenSet() const;

                    /**
                     * 获取签约方式，如 wechat_app ，使用app方式下的微信签
                     * @return ContractMethod 签约方式，如 wechat_app ，使用app方式下的微信签
                     * 
                     */
                    std::string GetContractMethod() const;

                    /**
                     * 设置签约方式，如 wechat_app ，使用app方式下的微信签
                     * @param _contractMethod 签约方式，如 wechat_app ，使用app方式下的微信签
                     * 
                     */
                    void SetContractMethod(const std::string& _contractMethod);

                    /**
                     * 判断参数 ContractMethod 是否已赋值
                     * @return ContractMethod 是否已赋值
                     * 
                     */
                    bool ContractMethodHasBeenSet() const;

                    /**
                     * 获取合约场景id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContractSceneId 合约场景id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContractSceneId() const;

                    /**
                     * 设置合约场景id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contractSceneId 合约场景id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContractSceneId(const std::string& _contractSceneId);

                    /**
                     * 判断参数 ContractSceneId 是否已赋值
                     * @return ContractSceneId 是否已赋值
                     * 
                     */
                    bool ContractSceneIdHasBeenSet() const;

                    /**
                     * 获取用户信息
                     * @return UserInfo 用户信息
                     * 
                     */
                    ContractUserInfo GetUserInfo() const;

                    /**
                     * 设置用户信息
                     * @param _userInfo 用户信息
                     * 
                     */
                    void SetUserInfo(const ContractUserInfo& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取第三方渠道签约数据
                     * @return ExternalContractData 第三方渠道签约数据
                     * 
                     */
                    std::string GetExternalContractData() const;

                    /**
                     * 设置第三方渠道签约数据
                     * @param _externalContractData 第三方渠道签约数据
                     * 
                     */
                    void SetExternalContractData(const std::string& _externalContractData);

                    /**
                     * 判断参数 ExternalContractData 是否已赋值
                     * @return ExternalContractData 是否已赋值
                     * 
                     */
                    bool ExternalContractDataHasBeenSet() const;

                private:

                    /**
                     * 米大师内部签约商户号
                     */
                    std::string m_channelContractMerchantId;
                    bool m_channelContractMerchantIdHasBeenSet;

                    /**
                     * 米大师内部签约子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelContractSubMerchantId;
                    bool m_channelContractSubMerchantIdHasBeenSet;

                    /**
                     * 米大师内部签约应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelContractAppId;
                    bool m_channelContractAppIdHasBeenSet;

                    /**
                     * 米大师内部签约子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelContractSubAppId;
                    bool m_channelContractSubAppIdHasBeenSet;

                    /**
                     * 业务合约协议号
                     */
                    std::string m_outContractCode;
                    bool m_outContractCodeHasBeenSet;

                    /**
                     * 第三方渠道用户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExternalContractUserInfo> m_externalContractUserInfoList;
                    bool m_externalContractUserInfoListHasBeenSet;

                    /**
                     * 签约方式，如 wechat_app ，使用app方式下的微信签
                     */
                    std::string m_contractMethod;
                    bool m_contractMethodHasBeenSet;

                    /**
                     * 合约场景id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contractSceneId;
                    bool m_contractSceneIdHasBeenSet;

                    /**
                     * 用户信息
                     */
                    ContractUserInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 第三方渠道签约数据
                     */
                    std::string m_externalContractData;
                    bool m_externalContractDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CONTRACTINFO_H_
