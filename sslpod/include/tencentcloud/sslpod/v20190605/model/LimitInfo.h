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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_LIMITINFO_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_LIMITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * 通知额度限制信息
                */
                class LimitInfo : public AbstractModel
                {
                public:
                    LimitInfo();
                    ~LimitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通知类型：
limit_emai：邮件
limit_wechat：微信
limit_phone：手机
                     * @return Type 通知类型：
limit_emai：邮件
limit_wechat：微信
limit_phone：手机
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置通知类型：
limit_emai：邮件
limit_wechat：微信
limit_phone：手机
                     * @param _type 通知类型：
limit_emai：邮件
limit_wechat：微信
limit_phone：手机
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
                     * 获取总量
                     * @return Total 总量
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总量
                     * @param _total 总量
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取已发送
                     * @return Sent 已发送
                     * 
                     */
                    int64_t GetSent() const;

                    /**
                     * 设置已发送
                     * @param _sent 已发送
                     * 
                     */
                    void SetSent(const int64_t& _sent);

                    /**
                     * 判断参数 Sent 是否已赋值
                     * @return Sent 是否已赋值
                     * 
                     */
                    bool SentHasBeenSet() const;

                private:

                    /**
                     * 通知类型：
limit_emai：邮件
limit_wechat：微信
limit_phone：手机
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 总量
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 已发送
                     */
                    int64_t m_sent;
                    bool m_sentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_LIMITINFO_H_
