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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 接收机器人信息
                */
                class WebhookReceiver : public AbstractModel
                {
                public:
                    WebhookReceiver();
                    ~WebhookReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>机器人 ID</p>
                     * @return ID <p>机器人 ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>机器人 ID</p>
                     * @param _iD <p>机器人 ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>机器人名称<br>入参限制：长度 1-20 个字符</p>
                     * @return Name <p>机器人名称<br>入参限制：长度 1-20 个字符</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>机器人名称<br>入参限制：长度 1-20 个字符</p>
                     * @param _name <p>机器人名称<br>入参限制：长度 1-20 个字符</p>
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
                     * 获取<p>机器人类型<br>枚举值：<br>WEBHOOK：webhook 类型<br>SCF：云函数类型</p>
                     * @return Type <p>机器人类型<br>枚举值：<br>WEBHOOK：webhook 类型<br>SCF：云函数类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>机器人类型<br>枚举值：<br>WEBHOOK：webhook 类型<br>SCF：云函数类型</p>
                     * @param _type <p>机器人类型<br>枚举值：<br>WEBHOOK：webhook 类型<br>SCF：云函数类型</p>
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
                     * 获取<p>Webhook 地址，仅 Type=WEBHOOK 时返回，否则为空串</p>
                     * @return WebhookAddr <p>Webhook 地址，仅 Type=WEBHOOK 时返回，否则为空串</p>
                     * 
                     */
                    std::string GetWebhookAddr() const;

                    /**
                     * 设置<p>Webhook 地址，仅 Type=WEBHOOK 时返回，否则为空串</p>
                     * @param _webhookAddr <p>Webhook 地址，仅 Type=WEBHOOK 时返回，否则为空串</p>
                     * 
                     */
                    void SetWebhookAddr(const std::string& _webhookAddr);

                    /**
                     * 判断参数 WebhookAddr 是否已赋值
                     * @return WebhookAddr 是否已赋值
                     * 
                     */
                    bool WebhookAddrHasBeenSet() const;

                    /**
                     * 获取<p>云函数地域，仅 Type=SCF 时返回</p>
                     * @return SCFRegion <p>云函数地域，仅 Type=SCF 时返回</p>
                     * 
                     */
                    std::string GetSCFRegion() const;

                    /**
                     * 设置<p>云函数地域，仅 Type=SCF 时返回</p>
                     * @param _sCFRegion <p>云函数地域，仅 Type=SCF 时返回</p>
                     * 
                     */
                    void SetSCFRegion(const std::string& _sCFRegion);

                    /**
                     * 判断参数 SCFRegion 是否已赋值
                     * @return SCFRegion 是否已赋值
                     * 
                     */
                    bool SCFRegionHasBeenSet() const;

                    /**
                     * 获取<p>云函数命名空间，仅 Type=SCF 时返回</p>
                     * @return Namespace <p>云函数命名空间，仅 Type=SCF 时返回</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>云函数命名空间，仅 Type=SCF 时返回</p>
                     * @param _namespace <p>云函数命名空间，仅 Type=SCF 时返回</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>云函数函数名，仅 Type=SCF 时返回</p>
                     * @return FunctionName <p>云函数函数名，仅 Type=SCF 时返回</p>
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置<p>云函数函数名，仅 Type=SCF 时返回</p>
                     * @param _functionName <p>云函数函数名，仅 Type=SCF 时返回</p>
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取<p>云函数函数版本，仅 Type=SCF 时返回</p>
                     * @return FunctionVersion <p>云函数函数版本，仅 Type=SCF 时返回</p>
                     * 
                     */
                    std::string GetFunctionVersion() const;

                    /**
                     * 设置<p>云函数函数版本，仅 Type=SCF 时返回</p>
                     * @param _functionVersion <p>云函数函数版本，仅 Type=SCF 时返回</p>
                     * 
                     */
                    void SetFunctionVersion(const std::string& _functionVersion);

                    /**
                     * 判断参数 FunctionVersion 是否已赋值
                     * @return FunctionVersion 是否已赋值
                     * 
                     */
                    bool FunctionVersionHasBeenSet() const;

                    /**
                     * 获取<p>云函数函数别名，仅 Type=SCF 时返回</p>
                     * @return Alias <p>云函数函数别名，仅 Type=SCF 时返回</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>云函数函数别名，仅 Type=SCF 时返回</p>
                     * @param _alias <p>云函数函数别名，仅 Type=SCF 时返回</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                private:

                    /**
                     * <p>机器人 ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>机器人名称<br>入参限制：长度 1-20 个字符</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>机器人类型<br>枚举值：<br>WEBHOOK：webhook 类型<br>SCF：云函数类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Webhook 地址，仅 Type=WEBHOOK 时返回，否则为空串</p>
                     */
                    std::string m_webhookAddr;
                    bool m_webhookAddrHasBeenSet;

                    /**
                     * <p>云函数地域，仅 Type=SCF 时返回</p>
                     */
                    std::string m_sCFRegion;
                    bool m_sCFRegionHasBeenSet;

                    /**
                     * <p>云函数命名空间，仅 Type=SCF 时返回</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>云函数函数名，仅 Type=SCF 时返回</p>
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * <p>云函数函数版本，仅 Type=SCF 时返回</p>
                     */
                    std::string m_functionVersion;
                    bool m_functionVersionHasBeenSet;

                    /**
                     * <p>云函数函数别名，仅 Type=SCF 时返回</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_WEBHOOKRECEIVER_H_
