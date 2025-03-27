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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTAUTHENTICATORITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTAUTHENTICATORITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT认证器信息
                */
                class MQTTAuthenticatorItem : public AbstractModel
                {
                public:
                    MQTTAuthenticatorItem();
                    ~MQTTAuthenticatorItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取认证器类型
JWT：JWT认证器
JWKS：JWKS认证器
HTTP：HTTP认证器
                     * @return Type 认证器类型
JWT：JWT认证器
JWKS：JWKS认证器
HTTP：HTTP认证器
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置认证器类型
JWT：JWT认证器
JWKS：JWKS认证器
HTTP：HTTP认证器
                     * @param _type 认证器类型
JWT：JWT认证器
JWKS：JWKS认证器
HTTP：HTTP认证器
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
                     * 获取JWT认证器字段说明
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
secret（签名方式）
    hmac-based：hmac-based签名方式
    public-key：public-key签名方式
secret（密钥），hmac-based需要配置密钥
public-key（公钥），public-key签名方式需要配置
样例：{"from":"password","secret":"secret282698","algorithm":"hmac-based"}

JWKS认证器字段说明
endpoint（接入点）：公钥获取服务器接入地址
refreshInterval（认证内容）：公钥集合刷新周期
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
text：公钥集合
样例：{"endpoint":"127.0.0.1","refreshInterval":60,"from":"password"}

HTTP认证器
headers（请求头）：标准请求头和自定义请求头
endpoint（接入点）：认证服务器接入点
method（http请求方法）：POST/GET
readTimeout（读超时时间）：读取认证服务器数据超时时间，单位秒
connectTimeout（连接超时时间）：连接认证服务器超时时间，单位秒
body（请求体）：http请求体
concurrency（并发数）：最大并发请求数量
样例：{"headers":[{"key":"Content-type","value":"application/json"},{"key":"username","value":"${Username}"}],"endpoint":"https://127.0.0.1:443","method":"POST","readTimeout":10,"connectTimeout":10,"body":[{"key":"client-id","value":"${ClientId}"}],"concurrency":8}
参考 [认证管理概述](https://cloud.tencent.com/document/product/1778/114813)
                     * @return Config JWT认证器字段说明
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
secret（签名方式）
    hmac-based：hmac-based签名方式
    public-key：public-key签名方式
secret（密钥），hmac-based需要配置密钥
public-key（公钥），public-key签名方式需要配置
样例：{"from":"password","secret":"secret282698","algorithm":"hmac-based"}

JWKS认证器字段说明
endpoint（接入点）：公钥获取服务器接入地址
refreshInterval（认证内容）：公钥集合刷新周期
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
text：公钥集合
样例：{"endpoint":"127.0.0.1","refreshInterval":60,"from":"password"}

HTTP认证器
headers（请求头）：标准请求头和自定义请求头
endpoint（接入点）：认证服务器接入点
method（http请求方法）：POST/GET
readTimeout（读超时时间）：读取认证服务器数据超时时间，单位秒
connectTimeout（连接超时时间）：连接认证服务器超时时间，单位秒
body（请求体）：http请求体
concurrency（并发数）：最大并发请求数量
样例：{"headers":[{"key":"Content-type","value":"application/json"},{"key":"username","value":"${Username}"}],"endpoint":"https://127.0.0.1:443","method":"POST","readTimeout":10,"connectTimeout":10,"body":[{"key":"client-id","value":"${ClientId}"}],"concurrency":8}
参考 [认证管理概述](https://cloud.tencent.com/document/product/1778/114813)
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置JWT认证器字段说明
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
secret（签名方式）
    hmac-based：hmac-based签名方式
    public-key：public-key签名方式
secret（密钥），hmac-based需要配置密钥
public-key（公钥），public-key签名方式需要配置
样例：{"from":"password","secret":"secret282698","algorithm":"hmac-based"}

JWKS认证器字段说明
endpoint（接入点）：公钥获取服务器接入地址
refreshInterval（认证内容）：公钥集合刷新周期
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
text：公钥集合
样例：{"endpoint":"127.0.0.1","refreshInterval":60,"from":"password"}

HTTP认证器
headers（请求头）：标准请求头和自定义请求头
endpoint（接入点）：认证服务器接入点
method（http请求方法）：POST/GET
readTimeout（读超时时间）：读取认证服务器数据超时时间，单位秒
connectTimeout（连接超时时间）：连接认证服务器超时时间，单位秒
body（请求体）：http请求体
concurrency（并发数）：最大并发请求数量
样例：{"headers":[{"key":"Content-type","value":"application/json"},{"key":"username","value":"${Username}"}],"endpoint":"https://127.0.0.1:443","method":"POST","readTimeout":10,"connectTimeout":10,"body":[{"key":"client-id","value":"${ClientId}"}],"concurrency":8}
参考 [认证管理概述](https://cloud.tencent.com/document/product/1778/114813)
                     * @param _config JWT认证器字段说明
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
secret（签名方式）
    hmac-based：hmac-based签名方式
    public-key：public-key签名方式
secret（密钥），hmac-based需要配置密钥
public-key（公钥），public-key签名方式需要配置
样例：{"from":"password","secret":"secret282698","algorithm":"hmac-based"}

JWKS认证器字段说明
endpoint（接入点）：公钥获取服务器接入地址
refreshInterval（认证内容）：公钥集合刷新周期
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
text：公钥集合
样例：{"endpoint":"127.0.0.1","refreshInterval":60,"from":"password"}

HTTP认证器
headers（请求头）：标准请求头和自定义请求头
endpoint（接入点）：认证服务器接入点
method（http请求方法）：POST/GET
readTimeout（读超时时间）：读取认证服务器数据超时时间，单位秒
connectTimeout（连接超时时间）：连接认证服务器超时时间，单位秒
body（请求体）：http请求体
concurrency（并发数）：最大并发请求数量
样例：{"headers":[{"key":"Content-type","value":"application/json"},{"key":"username","value":"${Username}"}],"endpoint":"https://127.0.0.1:443","method":"POST","readTimeout":10,"connectTimeout":10,"body":[{"key":"client-id","value":"${ClientId}"}],"concurrency":8}
参考 [认证管理概述](https://cloud.tencent.com/document/product/1778/114813)
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取认证器状态
open：认证器打开
close：认证器关闭
                     * @return Status 认证器状态
open：认证器打开
close：认证器关闭
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置认证器状态
open：认证器打开
close：认证器关闭
                     * @param _status 认证器状态
open：认证器打开
close：认证器关闭
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
                     * 获取创建时间，毫秒级时间戳 。
                     * @return CreateTime 创建时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，毫秒级时间戳 。
                     * @param _createTime 创建时间，毫秒级时间戳 。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取说明，最长 128 字符。
                     * @return Remark 说明，最长 128 字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明，最长 128 字符。
                     * @param _remark 说明，最长 128 字符。
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
                     * 认证器类型
JWT：JWT认证器
JWKS：JWKS认证器
HTTP：HTTP认证器
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * JWT认证器字段说明
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
secret（签名方式）
    hmac-based：hmac-based签名方式
    public-key：public-key签名方式
secret（密钥），hmac-based需要配置密钥
public-key（公钥），public-key签名方式需要配置
样例：{"from":"password","secret":"secret282698","algorithm":"hmac-based"}

JWKS认证器字段说明
endpoint（接入点）：公钥获取服务器接入地址
refreshInterval（认证内容）：公钥集合刷新周期
from（认证字段）
    password：从password字段获取认证字段
    username：从username字段获取认证字段
text：公钥集合
样例：{"endpoint":"127.0.0.1","refreshInterval":60,"from":"password"}

HTTP认证器
headers（请求头）：标准请求头和自定义请求头
endpoint（接入点）：认证服务器接入点
method（http请求方法）：POST/GET
readTimeout（读超时时间）：读取认证服务器数据超时时间，单位秒
connectTimeout（连接超时时间）：连接认证服务器超时时间，单位秒
body（请求体）：http请求体
concurrency（并发数）：最大并发请求数量
样例：{"headers":[{"key":"Content-type","value":"application/json"},{"key":"username","value":"${Username}"}],"endpoint":"https://127.0.0.1:443","method":"POST","readTimeout":10,"connectTimeout":10,"body":[{"key":"client-id","value":"${ClientId}"}],"concurrency":8}
参考 [认证管理概述](https://cloud.tencent.com/document/product/1778/114813)
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 认证器状态
open：认证器打开
close：认证器关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间，毫秒级时间戳 。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 说明，最长 128 字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MQTTAUTHENTICATORITEM_H_
