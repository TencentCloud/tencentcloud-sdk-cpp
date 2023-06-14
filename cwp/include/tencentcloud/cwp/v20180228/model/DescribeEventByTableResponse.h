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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeEventByTable返回参数结构体
                */
                class DescribeEventByTableResponse : public AbstractModel
                {
                public:
                    DescribeEventByTableResponse();
                    ~DescribeEventByTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警类型，爆破bruteattack，高危命令bash，恶意文件malware，恶意请求risk_dns，本地提权privilege_escalation，反弹shell reverse_shell，内存马java_shell
                     * @return Type 告警类型，爆破bruteattack，高危命令bash，恶意文件malware，恶意请求risk_dns，本地提权privilege_escalation，反弹shell reverse_shell，内存马java_shell
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件内容的json编码字符串，字段结构对齐事件表
                     * @return Value 事件内容的json编码字符串，字段结构对齐事件表
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 告警类型，爆破bruteattack，高危命令bash，恶意文件malware，恶意请求risk_dns，本地提权privilege_escalation，反弹shell reverse_shell，内存马java_shell
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件内容的json编码字符串，字段结构对齐事件表
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEEVENTBYTABLERESPONSE_H_
