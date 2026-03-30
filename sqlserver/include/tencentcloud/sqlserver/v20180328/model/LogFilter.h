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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 日志过滤条件
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤条件名称。

如：sql - SQL命令详情

host – 客户端 IP；
user – 数据库账户；
dbName – 数据库名称；
sqlType - SQL类型；
errCode - 错误码

execTime - 执行时间
lockWaitTime - 锁等待时间
ioWaitTime - IO等待时间
trxLivingTime - 事务执行时间
cpuTime- Cpu时间

threadId - 线程ID
trxId - 事务ID
checkRows - 扫描行数
affectRows - 影响行数
sentRows - 返回行数
                     * @return Type 过滤条件名称。

如：sql - SQL命令详情

host – 客户端 IP；
user – 数据库账户；
dbName – 数据库名称；
sqlType - SQL类型；
errCode - 错误码

execTime - 执行时间
lockWaitTime - 锁等待时间
ioWaitTime - IO等待时间
trxLivingTime - 事务执行时间
cpuTime- Cpu时间

threadId - 线程ID
trxId - 事务ID
checkRows - 扫描行数
affectRows - 影响行数
sentRows - 返回行数
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置过滤条件名称。

如：sql - SQL命令详情

host – 客户端 IP；
user – 数据库账户；
dbName – 数据库名称；
sqlType - SQL类型；
errCode - 错误码

execTime - 执行时间
lockWaitTime - 锁等待时间
ioWaitTime - IO等待时间
trxLivingTime - 事务执行时间
cpuTime- Cpu时间

threadId - 线程ID
trxId - 事务ID
checkRows - 扫描行数
affectRows - 影响行数
sentRows - 返回行数
                     * @param _type 过滤条件名称。

如：sql - SQL命令详情

host – 客户端 IP；
user – 数据库账户；
dbName – 数据库名称；
sqlType - SQL类型；
errCode - 错误码

execTime - 执行时间
lockWaitTime - 锁等待时间
ioWaitTime - IO等待时间
trxLivingTime - 事务执行时间
cpuTime- Cpu时间

threadId - 线程ID
trxId - 事务ID
checkRows - 扫描行数
affectRows - 影响行数
sentRows - 返回行数
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
                     * 获取过滤条件匹配类型。支持：
INC – 包含；     （多个值之前是||的关系）
EXC – 不包含； （多个值之前是&&的关系）
EQS – 等于；     （多个值之前是||的关系）
NEQ – 不等于；（多个值之前是&&的关系）

RA – 范围；
                     * @return Compare 过滤条件匹配类型。支持：
INC – 包含；     （多个值之前是||的关系）
EXC – 不包含； （多个值之前是&&的关系）
EQS – 等于；     （多个值之前是||的关系）
NEQ – 不等于；（多个值之前是&&的关系）

RA – 范围；
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置过滤条件匹配类型。支持：
INC – 包含；     （多个值之前是||的关系）
EXC – 不包含； （多个值之前是&&的关系）
EQS – 等于；     （多个值之前是||的关系）
NEQ – 不等于；（多个值之前是&&的关系）

RA – 范围；
                     * @param _compare 过滤条件匹配类型。支持：
INC – 包含；     （多个值之前是||的关系）
EXC – 不包含； （多个值之前是&&的关系）
EQS – 等于；     （多个值之前是||的关系）
NEQ – 不等于；（多个值之前是&&的关系）

RA – 范围；
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
                     * 获取过滤条件匹配值。当Compare=RG时，例：["1-100","200-300"]
                     * @return Value 过滤条件匹配值。当Compare=RG时，例：["1-100","200-300"]
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置过滤条件匹配值。当Compare=RG时，例：["1-100","200-300"]
                     * @param _value 过滤条件匹配值。当Compare=RG时，例：["1-100","200-300"]
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
                     * 过滤条件名称。

如：sql - SQL命令详情

host – 客户端 IP；
user – 数据库账户；
dbName – 数据库名称；
sqlType - SQL类型；
errCode - 错误码

execTime - 执行时间
lockWaitTime - 锁等待时间
ioWaitTime - IO等待时间
trxLivingTime - 事务执行时间
cpuTime- Cpu时间

threadId - 线程ID
trxId - 事务ID
checkRows - 扫描行数
affectRows - 影响行数
sentRows - 返回行数
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 过滤条件匹配类型。支持：
INC – 包含；     （多个值之前是||的关系）
EXC – 不包含； （多个值之前是&&的关系）
EQS – 等于；     （多个值之前是||的关系）
NEQ – 不等于；（多个值之前是&&的关系）

RA – 范围；
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * 过滤条件匹配值。当Compare=RG时，例：["1-100","200-300"]
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_LOGFILTER_H_
