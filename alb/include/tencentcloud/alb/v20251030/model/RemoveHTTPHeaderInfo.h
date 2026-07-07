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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_REMOVEHTTPHEADERINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_REMOVEHTTPHEADERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 删除HTTP Header信息
                */
                class RemoveHTTPHeaderInfo : public AbstractModel
                {
                public:
                    RemoveHTTPHeaderInfo();
                    ~RemoveHTTPHeaderInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取要删除的HTTP Header的键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port,server
                     * @return Key 要删除的HTTP Header的键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port,server
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置要删除的HTTP Header的键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port,server
                     * @param _key 要删除的HTTP Header的键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port,server
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 要删除的HTTP Header的键，长度1 ~ 40个字符，支持的字符集为：a-z A-Z 0-9 - _ 。
不支持Cookie,Host,Content-Length,Connection,Upgrade,transfer-encoding,keep-alive,te,authority,x-forwarded-for,x-forwarded-proto,x-forwarded-host,x-forwarded-port,server
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_REMOVEHTTPHEADERINFO_H_
