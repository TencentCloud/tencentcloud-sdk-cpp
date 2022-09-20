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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCKRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCKRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS黑白名单规则详情
                */
                class DDoSAllowBlockRule : public AbstractModel
                {
                public:
                    DDoSAllowBlockRule();
                    ~DDoSAllowBlockRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端IP，支持格式有：单IP、IP范围、网段、网段范围。例如"1.1.1.1","1.1.1.2-1.1.1.3","1.2.1.0/24-1.2.2.0/24"。
                     * @return Ip 客户端IP，支持格式有：单IP、IP范围、网段、网段范围。例如"1.1.1.1","1.1.1.2-1.1.1.3","1.2.1.0/24-1.2.2.0/24"。
                     */
                    std::string GetIp() const;

                    /**
                     * 设置客户端IP，支持格式有：单IP、IP范围、网段、网段范围。例如"1.1.1.1","1.1.1.2-1.1.1.3","1.2.1.0/24-1.2.2.0/24"。
                     * @param Ip 客户端IP，支持格式有：单IP、IP范围、网段、网段范围。例如"1.1.1.1","1.1.1.2-1.1.1.3","1.2.1.0/24-1.2.2.0/24"。
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取类型，取值有：
<li> block ：丢弃 ；</li><li> allow ：允许。</li>
                     * @return Type 类型，取值有：
<li> block ：丢弃 ；</li><li> allow ：允许。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，取值有：
<li> block ：丢弃 ；</li><li> allow ：允许。</li>
                     * @param Type 类型，取值有：
<li> block ：丢弃 ；</li><li> allow ：允许。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取10位时间戳，例如1199116800。不填写系统取当前时间。
                     * @return UpdateTime 10位时间戳，例如1199116800。不填写系统取当前时间。
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置10位时间戳，例如1199116800。不填写系统取当前时间。
                     * @param UpdateTime 10位时间戳，例如1199116800。不填写系统取当前时间。
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 客户端IP，支持格式有：单IP、IP范围、网段、网段范围。例如"1.1.1.1","1.1.1.2-1.1.1.3","1.2.1.0/24-1.2.2.0/24"。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 类型，取值有：
<li> block ：丢弃 ；</li><li> allow ：允许。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 10位时间戳，例如1199116800。不填写系统取当前时间。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSALLOWBLOCKRULE_H_
