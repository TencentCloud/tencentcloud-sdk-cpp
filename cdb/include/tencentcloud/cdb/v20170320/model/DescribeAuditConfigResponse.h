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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAuditConfig返回参数结构体
                */
                class DescribeAuditConfigResponse : public AbstractModel
                {
                public:
                    DescribeAuditConfigResponse();
                    ~DescribeAuditConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取审计日志保存时长。目前支持的值包括：[0，7，30，180，365，1095，1825]。
                     * @return LogExpireDay 审计日志保存时长。目前支持的值包括：[0，7，30，180，365，1095，1825]。
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取审计日志存储类型。目前支持的值包括："storage" - 存储型。
                     * @return LogType 审计日志存储类型。目前支持的值包括："storage" - 存储型。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取是否正在关闭审计。目前支持的值包括："false"-否，"true"-是
                     * @return IsClosing 是否正在关闭审计。目前支持的值包括："false"-否，"true"-是
                     * 
                     */
                    std::string GetIsClosing() const;

                    /**
                     * 判断参数 IsClosing 是否已赋值
                     * @return IsClosing 是否已赋值
                     * 
                     */
                    bool IsClosingHasBeenSet() const;

                    /**
                     * 获取审计服务开通时间。
                     * @return CreateTime 审计服务开通时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 审计日志保存时长。目前支持的值包括：[0，7，30，180，365，1095，1825]。
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 审计日志存储类型。目前支持的值包括："storage" - 存储型。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 是否正在关闭审计。目前支持的值包括："false"-否，"true"-是
                     */
                    std::string m_isClosing;
                    bool m_isClosingHasBeenSet;

                    /**
                     * 审计服务开通时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITCONFIGRESPONSE_H_
