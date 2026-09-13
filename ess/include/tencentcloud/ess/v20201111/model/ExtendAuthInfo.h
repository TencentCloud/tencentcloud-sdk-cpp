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
                     * 获取<p>扩展服务的类型，可能是以下值：<ul><li>OPEN_SERVER_SIGN：企业“授权签”</li><li>BATCH_SIGN：批量签署</li><li>OVERSEA_SIGN：企业与港澳台居民签署合同</li><li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li><li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li><li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li><li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li><li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li><li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li><li>PAGING_SEAL：骑缝章</li><li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul></p>
                     * @return Type <p>扩展服务的类型，可能是以下值：<ul><li>OPEN_SERVER_SIGN：企业“授权签”</li><li>BATCH_SIGN：批量签署</li><li>OVERSEA_SIGN：企业与港澳台居民签署合同</li><li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li><li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li><li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li><li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li><li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li><li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li><li>PAGING_SEAL：骑缝章</li><li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul></p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>扩展服务的类型，可能是以下值：<ul><li>OPEN_SERVER_SIGN：企业“授权签”</li><li>BATCH_SIGN：批量签署</li><li>OVERSEA_SIGN：企业与港澳台居民签署合同</li><li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li><li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li><li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li><li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li><li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li><li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li><li>PAGING_SEAL：骑缝章</li><li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul></p>
                     * @param _type <p>扩展服务的类型，可能是以下值：<ul><li>OPEN_SERVER_SIGN：企业“授权签”</li><li>BATCH_SIGN：批量签署</li><li>OVERSEA_SIGN：企业与港澳台居民签署合同</li><li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li><li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li><li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li><li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li><li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li><li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li><li>PAGING_SEAL：骑缝章</li><li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul></p>
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
                     * 获取<p>扩展服务的名称</p>
                     * @return Name <p>扩展服务的名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>扩展服务的名称</p>
                     * @param _name <p>扩展服务的名称</p>
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
                     * 获取<p>扩展服务的开通状态：</p><ul><li>ENABLE : 已开通</li><li>DISABLE : 未开通</li></ul>
                     * @return Status <p>扩展服务的开通状态：</p><ul><li>ENABLE : 已开通</li><li>DISABLE : 未开通</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>扩展服务的开通状态：</p><ul><li>ENABLE : 已开通</li><li>DISABLE : 未开通</li></ul>
                     * @param _status <p>扩展服务的开通状态：</p><ul><li>ENABLE : 已开通</li><li>DISABLE : 未开通</li></ul>
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
                     * 获取<p>操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。</p>
                     * @return OperatorUserId <p>操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。</p>
                     * 
                     */
                    std::string GetOperatorUserId() const;

                    /**
                     * 设置<p>操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。</p>
                     * @param _operatorUserId <p>操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。</p>
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
                     * 获取<p>扩展服务的操作时间，格式为Unix标准时间戳（秒）。</p>
                     * @return OperateOn <p>扩展服务的操作时间，格式为Unix标准时间戳（秒）。</p>
                     * 
                     */
                    int64_t GetOperateOn() const;

                    /**
                     * 设置<p>扩展服务的操作时间，格式为Unix标准时间戳（秒）。</p>
                     * @param _operateOn <p>扩展服务的操作时间，格式为Unix标准时间戳（秒）。</p>
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
                     * 获取<p>该扩展服务若可以授权，此参数对应授权人员的列表</p>
                     * @return HasAuthUserList <p>该扩展服务若可以授权，此参数对应授权人员的列表</p>
                     * 
                     */
                    std::vector<HasAuthUser> GetHasAuthUserList() const;

                    /**
                     * 设置<p>该扩展服务若可以授权，此参数对应授权人员的列表</p>
                     * @param _hasAuthUserList <p>该扩展服务若可以授权，此参数对应授权人员的列表</p>
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
                     * <p>扩展服务的类型，可能是以下值：<ul><li>OPEN_SERVER_SIGN：企业“授权签”</li><li>BATCH_SIGN：批量签署</li><li>OVERSEA_SIGN：企业与港澳台居民签署合同</li><li>AGE_LIMIT_EXPANSION：拓宽签署方年龄限制</li><li>MOBILE_CHECK_APPROVER：个人签署方仅校验手机号</li><li>HIDE_OPERATOR_DISPLAY：隐藏合同经办人姓名</li><li>ORGANIZATION_OCR_FALLBACK：正楷临摹签名失败后更换其他签名类型</li><li>ORGANIZATION_FLOW_NOTIFY_TYPE：短信通知签署方</li><li>HIDE_ONE_KEY_SIGN：个人签署方手动签字</li><li>PAGING_SEAL：骑缝章</li><li>ORGANIZATION_FLOW_PASSWD_NOTIFY：签署密码开通引导</li></ul></p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>扩展服务的名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>扩展服务的开通状态：</p><ul><li>ENABLE : 已开通</li><li>DISABLE : 未开通</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>操作扩展服务的操作人UserId，员工在腾讯电子签平台的唯一身份标识，为32位字符串。</p>
                     */
                    std::string m_operatorUserId;
                    bool m_operatorUserIdHasBeenSet;

                    /**
                     * <p>扩展服务的操作时间，格式为Unix标准时间戳（秒）。</p>
                     */
                    int64_t m_operateOn;
                    bool m_operateOnHasBeenSet;

                    /**
                     * <p>该扩展服务若可以授权，此参数对应授权人员的列表</p>
                     */
                    std::vector<HasAuthUser> m_hasAuthUserList;
                    bool m_hasAuthUserListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXTENDAUTHINFO_H_
