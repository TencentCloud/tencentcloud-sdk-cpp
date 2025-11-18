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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILTER_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 审计日志过滤条件
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
                     * 获取执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     * @return ExecTime 执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     * 
                     */
                    uint64_t GetExecTime() const;

                    /**
                     * 设置执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     * @param _execTime 执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     * 
                     */
                    void SetExecTime(const uint64_t& _execTime);

                    /**
                     * 判断参数 ExecTime 是否已赋值
                     * @return ExecTime 是否已赋值
                     * 
                     */
                    bool ExecTimeHasBeenSet() const;

                    /**
                     * 获取影响行数。表示筛选影响行数大于该值的审计日志。
                     * @return AffectRows 影响行数。表示筛选影响行数大于该值的审计日志。
                     * 
                     */
                    uint64_t GetAffectRows() const;

                    /**
                     * 设置影响行数。表示筛选影响行数大于该值的审计日志。
                     * @param _affectRows 影响行数。表示筛选影响行数大于该值的审计日志。
                     * 
                     */
                    void SetAffectRows(const uint64_t& _affectRows);

                    /**
                     * 判断参数 AffectRows 是否已赋值
                     * @return AffectRows 是否已赋值
                     * 
                     */
                    bool AffectRowsHasBeenSet() const;

                    /**
                     * 获取操作类型。
                     * @return Atype 操作类型。
                     * 
                     */
                    std::vector<std::string> GetAtype() const;

                    /**
                     * 设置操作类型。
                     * @param _atype 操作类型。
                     * 
                     */
                    void SetAtype(const std::vector<std::string>& _atype);

                    /**
                     * 判断参数 Atype 是否已赋值
                     * @return Atype 是否已赋值
                     * 
                     */
                    bool AtypeHasBeenSet() const;

                    /**
                     * 获取执行结果。
                     * @return Result 执行结果。
                     * 
                     */
                    std::vector<std::string> GetResult() const;

                    /**
                     * 设置执行结果。
                     * @param _result 执行结果。
                     * 
                     */
                    void SetResult(const std::vector<std::string>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取根据此关键字过滤日志
                     * @return Param 根据此关键字过滤日志
                     * 
                     */
                    std::vector<std::string> GetParam() const;

                    /**
                     * 设置根据此关键字过滤日志
                     * @param _param 根据此关键字过滤日志
                     * 
                     */
                    void SetParam(const std::vector<std::string>& _param);

                    /**
                     * 判断参数 Param 是否已赋值
                     * @return Param 是否已赋值
                     * 
                     */
                    bool ParamHasBeenSet() const;

                private:

                    /**
                     * 客户端地址。
                     */
                    std::vector<std::string> m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 用户名。
                     */
                    std::vector<std::string> m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 执行时间。单位为：ms。表示筛选执行时间大于该值的审计日志。
                     */
                    uint64_t m_execTime;
                    bool m_execTimeHasBeenSet;

                    /**
                     * 影响行数。表示筛选影响行数大于该值的审计日志。
                     */
                    uint64_t m_affectRows;
                    bool m_affectRowsHasBeenSet;

                    /**
                     * 操作类型。
                     */
                    std::vector<std::string> m_atype;
                    bool m_atypeHasBeenSet;

                    /**
                     * 执行结果。
                     */
                    std::vector<std::string> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 根据此关键字过滤日志
                     */
                    std::vector<std::string> m_param;
                    bool m_paramHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITLOGFILTER_H_
