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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_EXTENTSERVICEAUTHINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_EXTENTSERVICEAUTHINFO_H_

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
                * 企业扩展服务授权信息
                */
                class ExtentServiceAuthInfo : public AbstractModel
                {
                public:
                    ExtentServiceAuthInfo();
                    ~ExtentServiceAuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权平台企业下载合同 
                     * @return Type 扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权平台企业下载合同 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权平台企业下载合同 
                     * @param _type 扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权平台企业下载合同 
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
                     * 获取扩展服务名称 
                     * @return Name 扩展服务名称 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置扩展服务名称 
                     * @param _name 扩展服务名称 
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
                     * 获取服务状态 
ENABLE 开启 
DISABLE 关闭
                     * @return Status 服务状态 
ENABLE 开启 
DISABLE 关闭
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置服务状态 
ENABLE 开启 
DISABLE 关闭
                     * @param _status 服务状态 
ENABLE 开启 
DISABLE 关闭
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
                     * 获取最近操作人第三方应用平台的用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorOpenId 最近操作人第三方应用平台的用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorOpenId() const;

                    /**
                     * 设置最近操作人第三方应用平台的用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorOpenId 最近操作人第三方应用平台的用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperatorOpenId(const std::string& _operatorOpenId);

                    /**
                     * 判断参数 OperatorOpenId 是否已赋值
                     * @return OperatorOpenId 是否已赋值
                     * 
                     */
                    bool OperatorOpenIdHasBeenSet() const;

                    /**
                     * 获取最近操作时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateOn 最近操作时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOperateOn() const;

                    /**
                     * 设置最近操作时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateOn 最近操作时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperateOn(const int64_t& _operateOn);

                    /**
                     * 判断参数 OperateOn 是否已赋值
                     * @return OperateOn 是否已赋值
                     * 
                     */
                    bool OperateOnHasBeenSet() const;

                private:

                    /**
                     * 扩展服务类型
  AUTO_SIGN             企业静默签（自动签署）
  OVERSEA_SIGN          企业与港澳台居民*签署合同
  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份
  PAGING_SEAL           骑缝章
  DOWNLOAD_FLOW         授权平台企业下载合同 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 扩展服务名称 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 服务状态 
ENABLE 开启 
DISABLE 关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最近操作人第三方应用平台的用户openid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorOpenId;
                    bool m_operatorOpenIdHasBeenSet;

                    /**
                     * 最近操作时间戳，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_operateOn;
                    bool m_operateOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_EXTENTSERVICEAUTHINFO_H_
