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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECALLBACKINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECALLBACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeCallbackCKafkaConfig.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 回调目标信息
                */
                class SeeCallbackInfo : public AbstractModel
                {
                public:
                    SeeCallbackInfo();
                    ~SeeCallbackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回调目标 ID</p>
                     * @return CallbackId <p>回调目标 ID</p>
                     * 
                     */
                    std::string GetCallbackId() const;

                    /**
                     * 设置<p>回调目标 ID</p>
                     * @param _callbackId <p>回调目标 ID</p>
                     * 
                     */
                    void SetCallbackId(const std::string& _callbackId);

                    /**
                     * 判断参数 CallbackId 是否已赋值
                     * @return CallbackId 是否已赋值
                     * 
                     */
                    bool CallbackIdHasBeenSet() const;

                    /**
                     * 获取<p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
                     * @return Type <p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
                     * @param _type <p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
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
                     * 获取<p>回调 URL</p>
                     * @return CallbackUrl <p>回调 URL</p>
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>回调 URL</p>
                     * @param _callbackUrl <p>回调 URL</p>
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>回调签名 token</p>
                     * @return CallbackToken <p>回调签名 token</p>
                     * 
                     */
                    std::string GetCallbackToken() const;

                    /**
                     * 设置<p>回调签名 token</p>
                     * @param _callbackToken <p>回调签名 token</p>
                     * 
                     */
                    void SetCallbackToken(const std::string& _callbackToken);

                    /**
                     * 判断参数 CallbackToken 是否已赋值
                     * @return CallbackToken 是否已赋值
                     * 
                     */
                    bool CallbackTokenHasBeenSet() const;

                    /**
                     * 获取<p>回调 CKafka 配置</p>
                     * @return CallbackCKafka <p>回调 CKafka 配置</p>
                     * 
                     */
                    SeeCallbackCKafkaConfig GetCallbackCKafka() const;

                    /**
                     * 设置<p>回调 CKafka 配置</p>
                     * @param _callbackCKafka <p>回调 CKafka 配置</p>
                     * 
                     */
                    void SetCallbackCKafka(const SeeCallbackCKafkaConfig& _callbackCKafka);

                    /**
                     * 判断参数 CallbackCKafka 是否已赋值
                     * @return CallbackCKafka 是否已赋值
                     * 
                     */
                    bool CallbackCKafkaHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（秒级时间戳）</p>
                     * @return CreateTime <p>创建时间（秒级时间戳）</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间（秒级时间戳）</p>
                     * @param _createTime <p>创建时间（秒级时间戳）</p>
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
                     * 获取<p>更新时间（秒级时间戳）</p>
                     * @return UpdateTime <p>更新时间（秒级时间戳）</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间（秒级时间戳）</p>
                     * @param _updateTime <p>更新时间（秒级时间戳）</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>回调目标 ID</p>
                     */
                    std::string m_callbackId;
                    bool m_callbackIdHasBeenSet;

                    /**
                     * <p>回调类型</p><p>枚举值：</p><ul><li>none： 不回调</li><li>http： HTTP 回调</li><li>ckafka： 投递 CKafka Topic</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>回调 URL</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>回调签名 token</p>
                     */
                    std::string m_callbackToken;
                    bool m_callbackTokenHasBeenSet;

                    /**
                     * <p>回调 CKafka 配置</p>
                     */
                    SeeCallbackCKafkaConfig m_callbackCKafka;
                    bool m_callbackCKafkaHasBeenSet;

                    /**
                     * <p>创建时间（秒级时间戳）</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间（秒级时间戳）</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECALLBACKINFO_H_
