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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/ForwardListener.h>
#include <tencentcloud/antiddos/v20200309/model/WaterPrintKey.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 水印防护配置
                */
                class WaterPrintConfig : public AbstractModel
                {
                public:
                    WaterPrintConfig();
                    ~WaterPrintConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印偏移量，取值范围[0, 100)
                     * @return Offset 水印偏移量，取值范围[0, 100)
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置水印偏移量，取值范围[0, 100)
                     * @param _offset 水印偏移量，取值范围[0, 100)
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取是否开启，取值[
0（手动开启）
1（立即运行）
]
                     * @return OpenStatus 是否开启，取值[
0（手动开启）
1（立即运行）
]
                     * 
                     */
                    int64_t GetOpenStatus() const;

                    /**
                     * 设置是否开启，取值[
0（手动开启）
1（立即运行）
]
                     * @param _openStatus 是否开启，取值[
0（手动开启）
1（立即运行）
]
                     * 
                     */
                    void SetOpenStatus(const int64_t& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     * 
                     */
                    bool OpenStatusHasBeenSet() const;

                    /**
                     * 获取水印所属的转发监听器列表
                     * @return Listeners 水印所属的转发监听器列表
                     * 
                     */
                    std::vector<ForwardListener> GetListeners() const;

                    /**
                     * 设置水印所属的转发监听器列表
                     * @param _listeners 水印所属的转发监听器列表
                     * 
                     */
                    void SetListeners(const std::vector<ForwardListener>& _listeners);

                    /**
                     * 判断参数 Listeners 是否已赋值
                     * @return Listeners 是否已赋值
                     * 
                     */
                    bool ListenersHasBeenSet() const;

                    /**
                     * 获取水印添加成功后生成的水印密钥列表，一条水印最少1个密钥，最多2个密钥
                     * @return Keys 水印添加成功后生成的水印密钥列表，一条水印最少1个密钥，最多2个密钥
                     * 
                     */
                    std::vector<WaterPrintKey> GetKeys() const;

                    /**
                     * 设置水印添加成功后生成的水印密钥列表，一条水印最少1个密钥，最多2个密钥
                     * @param _keys 水印添加成功后生成的水印密钥列表，一条水印最少1个密钥，最多2个密钥
                     * 
                     */
                    void SetKeys(const std::vector<WaterPrintKey>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取水印检查模式, 取值[
checkall（普通模式）
shortfpcheckall（精简模式）
]
                     * @return Verify 水印检查模式, 取值[
checkall（普通模式）
shortfpcheckall（精简模式）
]
                     * 
                     */
                    std::string GetVerify() const;

                    /**
                     * 设置水印检查模式, 取值[
checkall（普通模式）
shortfpcheckall（精简模式）
]
                     * @param _verify 水印检查模式, 取值[
checkall（普通模式）
shortfpcheckall（精简模式）
]
                     * 
                     */
                    void SetVerify(const std::string& _verify);

                    /**
                     * 判断参数 Verify 是否已赋值
                     * @return Verify 是否已赋值
                     * 
                     */
                    bool VerifyHasBeenSet() const;

                    /**
                     * 获取是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     * @return CloudSdkProxy 是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     * 
                     */
                    int64_t GetCloudSdkProxy() const;

                    /**
                     * 设置是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     * @param _cloudSdkProxy 是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     * 
                     */
                    void SetCloudSdkProxy(const int64_t& _cloudSdkProxy);

                    /**
                     * 判断参数 CloudSdkProxy 是否已赋值
                     * @return CloudSdkProxy 是否已赋值
                     * 
                     */
                    bool CloudSdkProxyHasBeenSet() const;

                private:

                    /**
                     * 水印偏移量，取值范围[0, 100)
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 是否开启，取值[
0（手动开启）
1（立即运行）
]
                     */
                    int64_t m_openStatus;
                    bool m_openStatusHasBeenSet;

                    /**
                     * 水印所属的转发监听器列表
                     */
                    std::vector<ForwardListener> m_listeners;
                    bool m_listenersHasBeenSet;

                    /**
                     * 水印添加成功后生成的水印密钥列表，一条水印最少1个密钥，最多2个密钥
                     */
                    std::vector<WaterPrintKey> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 水印检查模式, 取值[
checkall（普通模式）
shortfpcheckall（精简模式）
]
                     */
                    std::string m_verify;
                    bool m_verifyHasBeenSet;

                    /**
                     * 是否开启代理，1开启则忽略IP+端口校验；0关闭则需要IP+端口校验
                     */
                    int64_t m_cloudSdkProxy;
                    bool m_cloudSdkProxyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_WATERPRINTCONFIG_H_
