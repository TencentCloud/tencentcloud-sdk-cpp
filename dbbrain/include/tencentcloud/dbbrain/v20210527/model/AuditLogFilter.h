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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGFILTER_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 过滤条件。可按设置的过滤条件过滤日志。
                */
                class AuditLogFilter : public AbstractModel
                {
                public:
                    AuditLogFilter();
                    ~AuditLogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端地址。
                     * @return Host 客户端地址。
                     * 
                     */
                    std::vector<std::string> GetHost() const;

                    /**
                     * 设置客户端地址。
                     * @param _host 客户端地址。
                     * 
                     */
                    void SetHost(const std::vector<std::string>& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取数据库名称。
                     * @return DBName 数据库名称。
                     * 
                     */
                    std::vector<std::string> GetDBName() const;

                    /**
                     * 设置数据库名称。
                     * @param _dBName 数据库名称。
                     * 
                     */
                    void SetDBName(const std::vector<std::string>& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取用户名。
                     * @return User 用户名。
                     * 
                     */
                    std::vector<std::string> GetUser() const;

                    /**
                     * 设置用户名。
                     * @param _user 用户名。
                     * 
                     */
                    void SetUser(const std::vector<std::string>& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取返回行数。表示筛选返回行数大于该值的审计日志。
                     * @return SentRows 返回行数。表示筛选返回行数大于该值的审计日志。
                     * 
                     */
                    int64_t GetSentRows() const;

                    /**
                     * 设置返回行数。表示筛选返回行数大于该值的审计日志。
                     * @param _sentRows 返回行数。表示筛选返回行数大于该值的审计日志。
                     * 
                     */
                    void SetSentRows(const int64_t& _sentRows);

                    /**
                     * 判断参数 SentRows 是否已赋值
                     * @return SentRows 是否已赋值
                     * 
                     */
                    bool SentRowsHasBeenSet() const;

                    /**
                     * 获取影响行数。表示筛选影响行数大于该值的审计日志。
                     * @return AffectRows 影响行数。表示筛选影响行数大于该值的审计日志。
                     * 
                     */
                    int64_t GetAffectRows() const;

                    /**
                     * 设置影响行数。表示筛选影响行数大于该值的审计日志。
                     * @param _affectRows 影响行数。表示筛选影响行数大于该值的审计日志。
                     * 
                     */
                    void SetAffectRows(const int64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取执行时间。单位为：µs。表示筛选执行时间大于该值的审计日志。
                     * @return ExecTime 执行时间。单位为：µs。表示筛选执行时间大于该值的审计日志。
                     * 
                     */
                    int64_t GetExecTime() const;

                    /**
                     * 设置执行时间。单位为：µs。表示筛选执行时间大于该值的审计日志。
                     * @param _execTime 执行时间。单位为：µs。表示筛选执行时间大于该值的审计日志。
                     * 
                     */
                    void SetExecTime(const int64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                private:

                    /**
                     * 客户端地址。
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 数据库名称。
                     */
                    std::vector<std::string> m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 返回行数。表示筛选返回行数大于该值的审计日志。
                     */
                    int64_t m_sentRows;
                    bool m_sentRowsHasBeenSet;

                    /**
                     * 影响行数。表示筛选影响行数大于该值的审计日志。
                     */
                    int64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * 执行时间。单位为：µs。表示筛选执行时间大于该值的审计日志。
                     */
                    int64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_AUDITLOGFILTER_H_
