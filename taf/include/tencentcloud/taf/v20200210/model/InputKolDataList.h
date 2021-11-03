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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_INPUTKOLDATALIST_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_INPUTKOLDATALIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CheckKOL
                */
                class InputKolDataList : public AbstractModel
                {
                public:
                    InputKolDataList();
                    ~InputKolDataList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号类型[1：微信；2：qq；3：微博]
                     * @return Type 账号类型[1：微信；2：qq；3：微博]
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置账号类型[1：微信；2：qq；3：微博]
                     * @param Type 账号类型[1：微信；2：qq；3：微博]
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取KOL账号ID[比如微信公众号ID]
                     * @return Id KOL账号ID[比如微信公众号ID]
                     */
                    std::string GetId() const;

                    /**
                     * 设置KOL账号ID[比如微信公众号ID]
                     * @param Id KOL账号ID[比如微信公众号ID]
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取KOL名称
                     * @return Name KOL名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置KOL名称
                     * @param Name KOL名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return Phone 手机号
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置手机号
                     * @param Phone 手机号
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取代理商名称
                     * @return AgentInfo 代理商名称
                     */
                    std::string GetAgentInfo() const;

                    /**
                     * 设置代理商名称
                     * @param AgentInfo 代理商名称
                     */
                    void SetAgentInfo(const std::string& _agentInfo);

                    /**
                     * 判断参数 AgentInfo 是否已赋值
                     * @return AgentInfo 是否已赋值
                     */
                    bool AgentInfoHasBeenSet() const;

                    /**
                     * 获取是否授权
                     * @return IsAuthorized 是否授权
                     */
                    uint64_t GetIsAuthorized() const;

                    /**
                     * 设置是否授权
                     * @param IsAuthorized 是否授权
                     */
                    void SetIsAuthorized(const uint64_t& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     */
                    bool IsAuthorizedHasBeenSet() const;

                private:

                    /**
                     * 账号类型[1：微信；2：qq；3：微博]
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * KOL账号ID[比如微信公众号ID]
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * KOL名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 代理商名称
                     */
                    std::string m_agentInfo;
                    bool m_agentInfoHasBeenSet;

                    /**
                     * 是否授权
                     */
                    uint64_t m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_INPUTKOLDATALIST_H_
