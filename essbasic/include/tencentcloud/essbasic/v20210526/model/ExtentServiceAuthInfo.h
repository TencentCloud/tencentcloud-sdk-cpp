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
                * 扩展服务开通和授权的详细信息
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
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
<li>HIDE_OPERATOR_DISPLAY 隐藏合同经办人姓名</li>
</ul>
                     * @return Type 扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
<li>HIDE_OPERATOR_DISPLAY 隐藏合同经办人姓名</li>
</ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
<li>HIDE_OPERATOR_DISPLAY 隐藏合同经办人姓名</li>
</ul>
                     * @param _type 扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
<li>HIDE_OPERATOR_DISPLAY 隐藏合同经办人姓名</li>
</ul>
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
                     * 获取扩展服务的开通状态
**ENABLE**：开通 
**DISABLE**：未开通	
                     * @return Status 扩展服务的开通状态
**ENABLE**：开通 
**DISABLE**：未开通	
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置扩展服务的开通状态
**ENABLE**：开通 
**DISABLE**：未开通	
                     * @param _status 扩展服务的开通状态
**ENABLE**：开通 
**DISABLE**：未开通	
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
                     * 获取操作扩展服务的操作人第三方应用平台的用户openid
                     * @return OperatorOpenId 操作扩展服务的操作人第三方应用平台的用户openid
                     * 
                     */
                    std::string GetOperatorOpenId() const;

                    /**
                     * 设置操作扩展服务的操作人第三方应用平台的用户openid
                     * @param _operatorOpenId 操作扩展服务的操作人第三方应用平台的用户openid
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

                private:

                    /**
                     * 扩展服务类型
<ul>
<li>AUTO_SIGN             企业自动签（自动签署）</li>
<li>  OVERSEA_SIGN          企业与港澳台居民签署合同</li>
<li>  MOBILE_CHECK_APPROVER 使用手机号验证签署方身份</li>
<li> DOWNLOAD_FLOW         授权渠道下载合同 </li>
<li>AGE_LIMIT_EXPANSION 拓宽签署方年龄限制</li>
<li>HIDE_OPERATOR_DISPLAY 隐藏合同经办人姓名</li>
</ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 扩展服务名称 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 扩展服务的开通状态
**ENABLE**：开通 
**DISABLE**：未开通	
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作扩展服务的操作人第三方应用平台的用户openid
                     */
                    std::string m_operatorOpenId;
                    bool m_operatorOpenIdHasBeenSet;

                    /**
                     * 扩展服务的操作时间，格式为Unix标准时间戳（秒）。	
                     */
                    int64_t m_operateOn;
                    bool m_operateOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_EXTENTSERVICEAUTHINFO_H_
