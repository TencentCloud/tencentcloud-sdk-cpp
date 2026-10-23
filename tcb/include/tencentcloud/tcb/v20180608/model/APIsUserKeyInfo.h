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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_APISUSERKEYINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_APISUSERKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/BindServiceList.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 用户密钥对管理
                */
                class APIsUserKeyInfo : public AbstractModel
                {
                public:
                    APIsUserKeyInfo();
                    ~APIsUserKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户创建的集成的名称</p>
                     * @return Name <p>用户创建的集成的名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>用户创建的集成的名称</p>
                     * @param _name <p>用户创建的集成的名称</p>
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
                     * 获取<p>用户对创建的集成的描述</p>
                     * @return Description <p>用户对创建的集成的描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>用户对创建的集成的描述</p>
                     * @param _description <p>用户对创建的集成的描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>集成ID，用户创建的集成的标识id，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * @return KeyID <p>集成ID，用户创建的集成的标识id，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * 
                     */
                    std::string GetKeyID() const;

                    /**
                     * 设置<p>集成ID，用户创建的集成的标识id，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * @param _keyID <p>集成ID，用户创建的集成的标识id，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * 
                     */
                    void SetKeyID(const std::string& _keyID);

                    /**
                     * 判断参数 KeyID 是否已赋值
                     * @return KeyID 是否已赋值
                     * 
                     */
                    bool KeyIDHasBeenSet() const;

                    /**
                     * 获取<p>额外信息,根据集成类型不同，ext会有不同的子结构</p>
                     * @return Ext <p>额外信息,根据集成类型不同，ext会有不同的子结构</p>
                     * 
                     */
                    std::string GetExt() const;

                    /**
                     * 设置<p>额外信息,根据集成类型不同，ext会有不同的子结构</p>
                     * @param _ext <p>额外信息,根据集成类型不同，ext会有不同的子结构</p>
                     * 
                     */
                    void SetExt(const std::string& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取<p>集成类型Code</p>
                     * @return AuthTypeCode <p>集成类型Code</p>
                     * 
                     */
                    std::string GetAuthTypeCode() const;

                    /**
                     * 设置<p>集成类型Code</p>
                     * @param _authTypeCode <p>集成类型Code</p>
                     * 
                     */
                    void SetAuthTypeCode(const std::string& _authTypeCode);

                    /**
                     * 判断参数 AuthTypeCode 是否已赋值
                     * @return AuthTypeCode 是否已赋值
                     * 
                     */
                    bool AuthTypeCodeHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>引用该集成的服务列表</p>
                     * @return BindServiceList <p>引用该集成的服务列表</p>
                     * 
                     */
                    BindServiceList GetBindServiceList() const;

                    /**
                     * 设置<p>引用该集成的服务列表</p>
                     * @param _bindServiceList <p>引用该集成的服务列表</p>
                     * 
                     */
                    void SetBindServiceList(const BindServiceList& _bindServiceList);

                    /**
                     * 判断参数 BindServiceList 是否已赋值
                     * @return BindServiceList 是否已赋值
                     * 
                     */
                    bool BindServiceListHasBeenSet() const;

                    /**
                     * 获取<p>AuthTypeName 和AuthType 分别1-1对应</p>
                     * @return AuthTypeName <p>AuthTypeName 和AuthType 分别1-1对应</p>
                     * 
                     */
                    std::string GetAuthTypeName() const;

                    /**
                     * 设置<p>AuthTypeName 和AuthType 分别1-1对应</p>
                     * @param _authTypeName <p>AuthTypeName 和AuthType 分别1-1对应</p>
                     * 
                     */
                    void SetAuthTypeName(const std::string& _authTypeName);

                    /**
                     * 判断参数 AuthTypeName 是否已赋值
                     * @return AuthTypeName 是否已赋值
                     * 
                     */
                    bool AuthTypeNameHasBeenSet() const;

                    /**
                     * 获取<p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     * @return TicketID <p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     * 
                     */
                    std::string GetTicketID() const;

                    /**
                     * 设置<p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     * @param _ticketID <p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     * 
                     */
                    void SetTicketID(const std::string& _ticketID);

                    /**
                     * 判断参数 TicketID 是否已赋值
                     * @return TicketID 是否已赋值
                     * 
                     */
                    bool TicketIDHasBeenSet() const;

                    /**
                     * 获取<p>用户在创建(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)这五种之一时创建的关联的示例代码云函数的函数名</p>
                     * @return DemoCodeFunctionName <p>用户在创建(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)这五种之一时创建的关联的示例代码云函数的函数名</p>
                     * 
                     */
                    std::string GetDemoCodeFunctionName() const;

                    /**
                     * 设置<p>用户在创建(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)这五种之一时创建的关联的示例代码云函数的函数名</p>
                     * @param _demoCodeFunctionName <p>用户在创建(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)这五种之一时创建的关联的示例代码云函数的函数名</p>
                     * 
                     */
                    void SetDemoCodeFunctionName(const std::string& _demoCodeFunctionName);

                    /**
                     * 判断参数 DemoCodeFunctionName 是否已赋值
                     * @return DemoCodeFunctionName 是否已赋值
                     * 
                     */
                    bool DemoCodeFunctionNameHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     * @return CreateAt <p>创建时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>创建时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     * @param _createAt <p>创建时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     * @return UpdateAt <p>更新时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     * 
                     */
                    std::string GetUpdateAt() const;

                    /**
                     * 设置<p>更新时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     * @param _updateAt <p>更新时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     * 
                     */
                    void SetUpdateAt(const std::string& _updateAt);

                    /**
                     * 判断参数 UpdateAt 是否已赋值
                     * @return UpdateAt 是否已赋值
                     * 
                     */
                    bool UpdateAtHasBeenSet() const;

                private:

                    /**
                     * <p>用户创建的集成的名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户对创建的集成的描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>集成ID，用户创建的集成的标识id，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     */
                    std::string m_keyID;
                    bool m_keyIDHasBeenSet;

                    /**
                     * <p>额外信息,根据集成类型不同，ext会有不同的子结构</p>
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * <p>集成类型Code</p>
                     */
                    std::string m_authTypeCode;
                    bool m_authTypeCodeHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>引用该集成的服务列表</p>
                     */
                    BindServiceList m_bindServiceList;
                    bool m_bindServiceListHasBeenSet;

                    /**
                     * <p>AuthTypeName 和AuthType 分别1-1对应</p>
                     */
                    std::string m_authTypeName;
                    bool m_authTypeNameHasBeenSet;

                    /**
                     * <p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     */
                    std::string m_ticketID;
                    bool m_ticketIDHasBeenSet;

                    /**
                     * <p>用户在创建(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)这五种之一时创建的关联的示例代码云函数的函数名</p>
                     */
                    std::string m_demoCodeFunctionName;
                    bool m_demoCodeFunctionNameHasBeenSet;

                    /**
                     * <p>创建时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>更新时间</p><p>参数格式：2026-05-25T11:18:28+08:00</p>
                     */
                    std::string m_updateAt;
                    bool m_updateAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_APISUSERKEYINFO_H_
