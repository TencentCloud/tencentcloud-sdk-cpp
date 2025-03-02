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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EXTENDAUTHINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EXTENDAUTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/HasAuthUser.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 扩展服务开通和授权的详细信息
                */
                class ExtendAuthInfo : public AbstractModel
                {
                public:
                    ExtendAuthInfo();
                    ~ExtendAuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩展服务的类型，可能是以下值：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li>
<li>PAGING_SEAL：骑缝章</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul>
                     * @return Type 扩展服务的类型，可能是以下值：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li>
<li>PAGING_SEAL：骑缝章</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置扩展服务的类型，可能是以下值：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li>
<li>PAGING_SEAL：骑缝章</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul>
                     * @param _type 扩展服务的类型，可能是以下值：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li>
<li>PAGING_SEAL：骑缝章</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取扩展服务的名称
                     * @return Name 扩展服务的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置扩展服务的名称
                     * @param _name 扩展服务的名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取扩展服务的开通状态：
<ul>
<li>ENABLE : 已开通</li>
<li>DISABLE : 未开通</li>
</ul>
                     * @return Status 扩展服务的开通状态：
<ul>
<li>ENABLE : 已开通</li>
<li>DISABLE : 未开通</li>
</ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置扩展服务的开通状态：
<ul>
<li>ENABLE : 已开通</li>
<li>DISABLE : 未开通</li>
</ul>
                     * @param _status 扩展服务的开通状态：
<ul>
<li>ENABLE : 已开通</li>
<li>DISABLE : 未开通</li>
</ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     * @return OperatorUserId 操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     * 
                     */
                    std::string GetOperatorUserId() const;

                    /**
                     * 设置操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     * @param _operatorUserId 操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     * 
                     */
                    void SetOperatorUserId(const std::string& _operatorUserId);

                    /**
                     * 判断参数 OperatorUserId 是否已赋值
                     * @return OperatorUserId 是否已赋值
                     * 
                     */
                    bool OperatorUserIdHasBeenSet() const;

                    /**
                     * 获取扩展服务的操作时间，格式为Unix标准时间戳（秒）。
                     * @return OperateOn 扩展服务的操作时间，格式为Unix标准时间戳（秒）。
                     * 
                     */
                    int64_t GetOperateOn() const;

                    /**
                     * 设置扩展服务的操作时间，格式为Unix标准时间戳（秒）。
                     * @param _operateOn 扩展服务的操作时间，格式为Unix标准时间戳（秒）。
                     * 
                     */
                    void SetOperateOn(const int64_t& _operateOn);

                    /**
                     * 判断参数 OperateOn 是否已赋值
                     * @return OperateOn 是否已赋值
                     * 
                     */
                    bool OperateOnHasBeenSet() const;

                    /**
                     * 获取该扩展服务若可以授权，此参数对应授权人员的列表
                     * @return HasAuthUserList 该扩展服务若可以授权，此参数对应授权人员的列表
                     * 
                     */
                    std::vector<HasAuthUser> GetHasAuthUserList() const;

                    /**
                     * 设置该扩展服务若可以授权，此参数对应授权人员的列表
                     * @param _hasAuthUserList 该扩展服务若可以授权，此参数对应授权人员的列表
                     * 
                     */
                    void SetHasAuthUserList(const std::vector<HasAuthUser>& _hasAuthUserList);

                    /**
                     * 判断参数 HasAuthUserList 是否已赋值
                     * @return HasAuthUserList 是否已赋值
                     * 
                     */
                    bool HasAuthUserListHasBeenSet() const;

                private:

                    /**
                     * 扩展服务的类型，可能是以下值：
<ul><li>OPEN_SERVER_SIGN：企业自动签署</li>
<li>BATCH_SIGN：批量签署</li>
<li>OVERSEA_SIGN：企业与港澳台居民签署合同</li>
<li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li>
<li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li>
<li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li>
<li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li>
<li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li>
<li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li>
<li>PAGING_SEAL：骑缝章</li>
<li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 扩展服务的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 扩展服务的开通状态：
<ul>
<li>ENABLE : 已开通</li>
<li>DISABLE : 未开通</li>
</ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。
                     */
                    std::string m_operatorUserId;
                    bool m_operatorUserIdHasBeenSet;

                    /**
                     * 扩展服务的操作时间，格式为Unix标准时间戳（秒）。
                     */
                    int64_t m_operateOn;
                    bool m_operateOnHasBeenSet;

                    /**
                     * 该扩展服务若可以授权，此参数对应授权人员的列表
                     */
                    std::vector<HasAuthUser> m_hasAuthUserList;
                    bool m_hasAuthUserListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXTENDAUTHINFO_H_
