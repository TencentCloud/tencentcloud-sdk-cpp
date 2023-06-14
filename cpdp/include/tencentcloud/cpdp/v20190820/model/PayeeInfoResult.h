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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEINFORESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEINFORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 收款用户信息结果
                */
                class PayeeInfoResult : public AbstractModel
                {
                public:
                    PayeeInfoResult();
                    ~PayeeInfoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取收款用户ID
                     * @return PayeeId 收款用户ID
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款用户ID
                     * @param _payeeId 收款用户ID
                     * 
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     * 
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取用户外部业务ID
                     * @return OutUserId 用户外部业务ID
                     * 
                     */
                    std::string GetOutUserId() const;

                    /**
                     * 设置用户外部业务ID
                     * @param _outUserId 用户外部业务ID
                     * 
                     */
                    void SetOutUserId(const std::string& _outUserId);

                    /**
                     * 判断参数 OutUserId 是否已赋值
                     * @return OutUserId 是否已赋值
                     * 
                     */
                    bool OutUserIdHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param _name 姓名
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
                     * 获取证件类型
0:身份证
1:社会信用代码
                     * @return IdType 证件类型
0:身份证
1:社会信用代码
                     * 
                     */
                    int64_t GetIdType() const;

                    /**
                     * 设置证件类型
0:身份证
1:社会信用代码
                     * @param _idType 证件类型
0:身份证
1:社会信用代码
                     * 
                     */
                    void SetIdType(const int64_t& _idType);

                    /**
                     * 判断参数 IdType 是否已赋值
                     * @return IdType 是否已赋值
                     * 
                     */
                    bool IdTypeHasBeenSet() const;

                    /**
                     * 获取证件号
                     * @return IdNo 证件号
                     * 
                     */
                    std::string GetIdNo() const;

                    /**
                     * 设置证件号
                     * @param _idNo 证件号
                     * 
                     */
                    void SetIdNo(const std::string& _idNo);

                    /**
                     * 判断参数 IdNo 是否已赋值
                     * @return IdNo 是否已赋值
                     * 
                     */
                    bool IdNoHasBeenSet() const;

                    /**
                     * 获取服务商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceProviderId 服务商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置服务商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceProviderId 服务商ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 收款用户ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 用户外部业务ID
                     */
                    std::string m_outUserId;
                    bool m_outUserIdHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 证件类型
0:身份证
1:社会信用代码
                     */
                    int64_t m_idType;
                    bool m_idTypeHasBeenSet;

                    /**
                     * 证件号
                     */
                    std::string m_idNo;
                    bool m_idNoHasBeenSet;

                    /**
                     * 服务商ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYEEINFORESULT_H_
