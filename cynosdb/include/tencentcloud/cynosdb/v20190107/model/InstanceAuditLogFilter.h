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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITLOGFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITLOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 审计日志搜索条件
                */
                class InstanceAuditLogFilter : public AbstractModel
                {
                public:
                    InstanceAuditLogFilter();
                    ~InstanceAuditLogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤项。目前支持以下搜索条件：

包含、不包含、包含（分词维度）、不包含（分词维度）: sql - SQL详情；alarmLevel - 告警等级；ruleTemplateId - 规则模板Id

等于、不等于、包含、不包含： host - 客户端地址； user - 用户名； dbName - 数据库名称；

等于、不等于： sqlType - SQL类型； errCode - 错误码； threadId - 线程ID；

范围搜索（时间类型统一为微秒）： execTime - 执行时间； lockWaitTime - 执行时间； ioWaitTime - IO等待时间； trxLivingTime - 事务持续时间； cpuTime - cpu时间； checkRows - 扫描行数； affectRows - 影响行数； sentRows - 返回行数。
                     * @return Type 过滤项。目前支持以下搜索条件：

包含、不包含、包含（分词维度）、不包含（分词维度）: sql - SQL详情；alarmLevel - 告警等级；ruleTemplateId - 规则模板Id

等于、不等于、包含、不包含： host - 客户端地址； user - 用户名； dbName - 数据库名称；

等于、不等于： sqlType - SQL类型； errCode - 错误码； threadId - 线程ID；

范围搜索（时间类型统一为微秒）： execTime - 执行时间； lockWaitTime - 执行时间； ioWaitTime - IO等待时间； trxLivingTime - 事务持续时间； cpuTime - cpu时间； checkRows - 扫描行数； affectRows - 影响行数； sentRows - 返回行数。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置过滤项。目前支持以下搜索条件：

包含、不包含、包含（分词维度）、不包含（分词维度）: sql - SQL详情；alarmLevel - 告警等级；ruleTemplateId - 规则模板Id

等于、不等于、包含、不包含： host - 客户端地址； user - 用户名； dbName - 数据库名称；

等于、不等于： sqlType - SQL类型； errCode - 错误码； threadId - 线程ID；

范围搜索（时间类型统一为微秒）： execTime - 执行时间； lockWaitTime - 执行时间； ioWaitTime - IO等待时间； trxLivingTime - 事务持续时间； cpuTime - cpu时间； checkRows - 扫描行数； affectRows - 影响行数； sentRows - 返回行数。
                     * @param _type 过滤项。目前支持以下搜索条件：

包含、不包含、包含（分词维度）、不包含（分词维度）: sql - SQL详情；alarmLevel - 告警等级；ruleTemplateId - 规则模板Id

等于、不等于、包含、不包含： host - 客户端地址； user - 用户名； dbName - 数据库名称；

等于、不等于： sqlType - SQL类型； errCode - 错误码； threadId - 线程ID；

范围搜索（时间类型统一为微秒）： execTime - 执行时间； lockWaitTime - 执行时间； ioWaitTime - IO等待时间； trxLivingTime - 事务持续时间； cpuTime - cpu时间； checkRows - 扫描行数； affectRows - 影响行数； sentRows - 返回行数。
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
                     * 获取过滤条件。支持以下条件：
WINC-包含（分词维度），
WEXC-不包含（分词维度）,
INC - 包含,
EXC - 不包含,
EQS - 等于,
NEQ - 不等于,
RA - 范围。
                     * @return Compare 过滤条件。支持以下条件：
WINC-包含（分词维度），
WEXC-不包含（分词维度）,
INC - 包含,
EXC - 不包含,
EQS - 等于,
NEQ - 不等于,
RA - 范围。
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置过滤条件。支持以下条件：
WINC-包含（分词维度），
WEXC-不包含（分词维度）,
INC - 包含,
EXC - 不包含,
EQS - 等于,
NEQ - 不等于,
RA - 范围。
                     * @param _compare 过滤条件。支持以下条件：
WINC-包含（分词维度），
WEXC-不包含（分词维度）,
INC - 包含,
EXC - 不包含,
EQS - 等于,
NEQ - 不等于,
RA - 范围。
                     * 
                     */
                    void SetCompare(const std::string& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                    /**
                     * 获取过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系。
                     * @return Value 过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系。
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系。
                     * @param _value 过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系。
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 过滤项。目前支持以下搜索条件：

包含、不包含、包含（分词维度）、不包含（分词维度）: sql - SQL详情；alarmLevel - 告警等级；ruleTemplateId - 规则模板Id

等于、不等于、包含、不包含： host - 客户端地址； user - 用户名； dbName - 数据库名称；

等于、不等于： sqlType - SQL类型； errCode - 错误码； threadId - 线程ID；

范围搜索（时间类型统一为微秒）： execTime - 执行时间； lockWaitTime - 执行时间； ioWaitTime - IO等待时间； trxLivingTime - 事务持续时间； cpuTime - cpu时间； checkRows - 扫描行数； affectRows - 影响行数； sentRows - 返回行数。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 过滤条件。支持以下条件：
WINC-包含（分词维度），
WEXC-不包含（分词维度）,
INC - 包含,
EXC - 不包含,
EQS - 等于,
NEQ - 不等于,
RA - 范围。
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * 过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系。
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_INSTANCEAUDITLOGFILTER_H_
