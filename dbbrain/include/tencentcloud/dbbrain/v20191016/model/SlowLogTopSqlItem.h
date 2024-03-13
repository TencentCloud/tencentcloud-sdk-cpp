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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGTOPSQLITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGTOPSQLITEM_H_

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
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 慢日志TopSql
                */
                class SlowLogTopSqlItem : public AbstractModel
                {
                public:
                    SlowLogTopSqlItem();
                    ~SlowLogTopSqlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sql总锁等待时间
                     * @return LockTime sql总锁等待时间
                     * 
                     */
                    double GetLockTime() const;

                    /**
                     * 设置sql总锁等待时间
                     * @param _lockTime sql总锁等待时间
                     * 
                     */
                    void SetLockTime(const double& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取最大锁等待时间
                     * @return LockTimeMax 最大锁等待时间
                     * 
                     */
                    double GetLockTimeMax() const;

                    /**
                     * 设置最大锁等待时间
                     * @param _lockTimeMax 最大锁等待时间
                     * 
                     */
                    void SetLockTimeMax(const double& _lockTimeMax);

                    /**
                     * 判断参数 LockTimeMax 是否已赋值
                     * @return LockTimeMax 是否已赋值
                     * 
                     */
                    bool LockTimeMaxHasBeenSet() const;

                    /**
                     * 获取最小锁等待时间
                     * @return LockTimeMin 最小锁等待时间
                     * 
                     */
                    double GetLockTimeMin() const;

                    /**
                     * 设置最小锁等待时间
                     * @param _lockTimeMin 最小锁等待时间
                     * 
                     */
                    void SetLockTimeMin(const double& _lockTimeMin);

                    /**
                     * 判断参数 LockTimeMin 是否已赋值
                     * @return LockTimeMin 是否已赋值
                     * 
                     */
                    bool LockTimeMinHasBeenSet() const;

                    /**
                     * 获取总扫描行数
                     * @return RowsExamined 总扫描行数
                     * 
                     */
                    int64_t GetRowsExamined() const;

                    /**
                     * 设置总扫描行数
                     * @param _rowsExamined 总扫描行数
                     * 
                     */
                    void SetRowsExamined(const int64_t& _rowsExamined);

                    /**
                     * 判断参数 RowsExamined 是否已赋值
                     * @return RowsExamined 是否已赋值
                     * 
                     */
                    bool RowsExaminedHasBeenSet() const;

                    /**
                     * 获取最大扫描行数
                     * @return RowsExaminedMax 最大扫描行数
                     * 
                     */
                    int64_t GetRowsExaminedMax() const;

                    /**
                     * 设置最大扫描行数
                     * @param _rowsExaminedMax 最大扫描行数
                     * 
                     */
                    void SetRowsExaminedMax(const int64_t& _rowsExaminedMax);

                    /**
                     * 判断参数 RowsExaminedMax 是否已赋值
                     * @return RowsExaminedMax 是否已赋值
                     * 
                     */
                    bool RowsExaminedMaxHasBeenSet() const;

                    /**
                     * 获取最小扫描行数
                     * @return RowsExaminedMin 最小扫描行数
                     * 
                     */
                    int64_t GetRowsExaminedMin() const;

                    /**
                     * 设置最小扫描行数
                     * @param _rowsExaminedMin 最小扫描行数
                     * 
                     */
                    void SetRowsExaminedMin(const int64_t& _rowsExaminedMin);

                    /**
                     * 判断参数 RowsExaminedMin 是否已赋值
                     * @return RowsExaminedMin 是否已赋值
                     * 
                     */
                    bool RowsExaminedMinHasBeenSet() const;

                    /**
                     * 获取总耗时
                     * @return QueryTime 总耗时
                     * 
                     */
                    double GetQueryTime() const;

                    /**
                     * 设置总耗时
                     * @param _queryTime 总耗时
                     * 
                     */
                    void SetQueryTime(const double& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                    /**
                     * 获取最大执行时间
                     * @return QueryTimeMax 最大执行时间
                     * 
                     */
                    double GetQueryTimeMax() const;

                    /**
                     * 设置最大执行时间
                     * @param _queryTimeMax 最大执行时间
                     * 
                     */
                    void SetQueryTimeMax(const double& _queryTimeMax);

                    /**
                     * 判断参数 QueryTimeMax 是否已赋值
                     * @return QueryTimeMax 是否已赋值
                     * 
                     */
                    bool QueryTimeMaxHasBeenSet() const;

                    /**
                     * 获取最小执行时间
                     * @return QueryTimeMin 最小执行时间
                     * 
                     */
                    double GetQueryTimeMin() const;

                    /**
                     * 设置最小执行时间
                     * @param _queryTimeMin 最小执行时间
                     * 
                     */
                    void SetQueryTimeMin(const double& _queryTimeMin);

                    /**
                     * 判断参数 QueryTimeMin 是否已赋值
                     * @return QueryTimeMin 是否已赋值
                     * 
                     */
                    bool QueryTimeMinHasBeenSet() const;

                    /**
                     * 获取总返回行数
                     * @return RowsSent 总返回行数
                     * 
                     */
                    int64_t GetRowsSent() const;

                    /**
                     * 设置总返回行数
                     * @param _rowsSent 总返回行数
                     * 
                     */
                    void SetRowsSent(const int64_t& _rowsSent);

                    /**
                     * 判断参数 RowsSent 是否已赋值
                     * @return RowsSent 是否已赋值
                     * 
                     */
                    bool RowsSentHasBeenSet() const;

                    /**
                     * 获取最大返回行数
                     * @return RowsSentMax 最大返回行数
                     * 
                     */
                    int64_t GetRowsSentMax() const;

                    /**
                     * 设置最大返回行数
                     * @param _rowsSentMax 最大返回行数
                     * 
                     */
                    void SetRowsSentMax(const int64_t& _rowsSentMax);

                    /**
                     * 判断参数 RowsSentMax 是否已赋值
                     * @return RowsSentMax 是否已赋值
                     * 
                     */
                    bool RowsSentMaxHasBeenSet() const;

                    /**
                     * 获取最小返回行数
                     * @return RowsSentMin 最小返回行数
                     * 
                     */
                    int64_t GetRowsSentMin() const;

                    /**
                     * 设置最小返回行数
                     * @param _rowsSentMin 最小返回行数
                     * 
                     */
                    void SetRowsSentMin(const int64_t& _rowsSentMin);

                    /**
                     * 判断参数 RowsSentMin 是否已赋值
                     * @return RowsSentMin 是否已赋值
                     * 
                     */
                    bool RowsSentMinHasBeenSet() const;

                    /**
                     * 获取执行次数
                     * @return ExecTimes 执行次数
                     * 
                     */
                    int64_t GetExecTimes() const;

                    /**
                     * 设置执行次数
                     * @param _execTimes 执行次数
                     * 
                     */
                    void SetExecTimes(const int64_t& _execTimes);

                    /**
                     * 判断参数 ExecTimes 是否已赋值
                     * @return ExecTimes 是否已赋值
                     * 
                     */
                    bool ExecTimesHasBeenSet() const;

                    /**
                     * 获取sql模板
                     * @return SqlTemplate sql模板
                     * 
                     */
                    std::string GetSqlTemplate() const;

                    /**
                     * 设置sql模板
                     * @param _sqlTemplate sql模板
                     * 
                     */
                    void SetSqlTemplate(const std::string& _sqlTemplate);

                    /**
                     * 判断参数 SqlTemplate 是否已赋值
                     * @return SqlTemplate 是否已赋值
                     * 
                     */
                    bool SqlTemplateHasBeenSet() const;

                    /**
                     * 获取带参数SQL（随机）
                     * @return SqlText 带参数SQL（随机）
                     * 
                     */
                    std::string GetSqlText() const;

                    /**
                     * 设置带参数SQL（随机）
                     * @param _sqlText 带参数SQL（随机）
                     * 
                     */
                    void SetSqlText(const std::string& _sqlText);

                    /**
                     * 判断参数 SqlText 是否已赋值
                     * @return SqlText 是否已赋值
                     * 
                     */
                    bool SqlTextHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return Schema 数据库名
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置数据库名
                     * @param _schema 数据库名
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取总耗时占比
                     * @return QueryTimeRatio 总耗时占比
                     * 
                     */
                    double GetQueryTimeRatio() const;

                    /**
                     * 设置总耗时占比
                     * @param _queryTimeRatio 总耗时占比
                     * 
                     */
                    void SetQueryTimeRatio(const double& _queryTimeRatio);

                    /**
                     * 判断参数 QueryTimeRatio 是否已赋值
                     * @return QueryTimeRatio 是否已赋值
                     * 
                     */
                    bool QueryTimeRatioHasBeenSet() const;

                    /**
                     * 获取sql总锁等待时间占比
                     * @return LockTimeRatio sql总锁等待时间占比
                     * 
                     */
                    double GetLockTimeRatio() const;

                    /**
                     * 设置sql总锁等待时间占比
                     * @param _lockTimeRatio sql总锁等待时间占比
                     * 
                     */
                    void SetLockTimeRatio(const double& _lockTimeRatio);

                    /**
                     * 判断参数 LockTimeRatio 是否已赋值
                     * @return LockTimeRatio 是否已赋值
                     * 
                     */
                    bool LockTimeRatioHasBeenSet() const;

                    /**
                     * 获取总扫描行数占比
                     * @return RowsExaminedRatio 总扫描行数占比
                     * 
                     */
                    double GetRowsExaminedRatio() const;

                    /**
                     * 设置总扫描行数占比
                     * @param _rowsExaminedRatio 总扫描行数占比
                     * 
                     */
                    void SetRowsExaminedRatio(const double& _rowsExaminedRatio);

                    /**
                     * 判断参数 RowsExaminedRatio 是否已赋值
                     * @return RowsExaminedRatio 是否已赋值
                     * 
                     */
                    bool RowsExaminedRatioHasBeenSet() const;

                    /**
                     * 获取总返回行数占比
                     * @return RowsSentRatio 总返回行数占比
                     * 
                     */
                    double GetRowsSentRatio() const;

                    /**
                     * 设置总返回行数占比
                     * @param _rowsSentRatio 总返回行数占比
                     * 
                     */
                    void SetRowsSentRatio(const double& _rowsSentRatio);

                    /**
                     * 判断参数 RowsSentRatio 是否已赋值
                     * @return RowsSentRatio 是否已赋值
                     * 
                     */
                    bool RowsSentRatioHasBeenSet() const;

                    /**
                     * 获取平均执行时间
                     * @return QueryTimeAvg 平均执行时间
                     * 
                     */
                    double GetQueryTimeAvg() const;

                    /**
                     * 设置平均执行时间
                     * @param _queryTimeAvg 平均执行时间
                     * 
                     */
                    void SetQueryTimeAvg(const double& _queryTimeAvg);

                    /**
                     * 判断参数 QueryTimeAvg 是否已赋值
                     * @return QueryTimeAvg 是否已赋值
                     * 
                     */
                    bool QueryTimeAvgHasBeenSet() const;

                    /**
                     * 获取平均返回行数
                     * @return RowsSentAvg 平均返回行数
                     * 
                     */
                    double GetRowsSentAvg() const;

                    /**
                     * 设置平均返回行数
                     * @param _rowsSentAvg 平均返回行数
                     * 
                     */
                    void SetRowsSentAvg(const double& _rowsSentAvg);

                    /**
                     * 判断参数 RowsSentAvg 是否已赋值
                     * @return RowsSentAvg 是否已赋值
                     * 
                     */
                    bool RowsSentAvgHasBeenSet() const;

                    /**
                     * 获取平均锁等待时间
                     * @return LockTimeAvg 平均锁等待时间
                     * 
                     */
                    double GetLockTimeAvg() const;

                    /**
                     * 设置平均锁等待时间
                     * @param _lockTimeAvg 平均锁等待时间
                     * 
                     */
                    void SetLockTimeAvg(const double& _lockTimeAvg);

                    /**
                     * 判断参数 LockTimeAvg 是否已赋值
                     * @return LockTimeAvg 是否已赋值
                     * 
                     */
                    bool LockTimeAvgHasBeenSet() const;

                    /**
                     * 获取平均扫描行数
                     * @return RowsExaminedAvg 平均扫描行数
                     * 
                     */
                    double GetRowsExaminedAvg() const;

                    /**
                     * 设置平均扫描行数
                     * @param _rowsExaminedAvg 平均扫描行数
                     * 
                     */
                    void SetRowsExaminedAvg(const double& _rowsExaminedAvg);

                    /**
                     * 判断参数 RowsExaminedAvg 是否已赋值
                     * @return RowsExaminedAvg 是否已赋值
                     * 
                     */
                    bool RowsExaminedAvgHasBeenSet() const;

                    /**
                     * 获取SQL模板的MD5值
                     * @return Md5 SQL模板的MD5值
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置SQL模板的MD5值
                     * @param _md5 SQL模板的MD5值
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                private:

                    /**
                     * sql总锁等待时间
                     */
                    double m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * 最大锁等待时间
                     */
                    double m_lockTimeMax;
                    bool m_lockTimeMaxHasBeenSet;

                    /**
                     * 最小锁等待时间
                     */
                    double m_lockTimeMin;
                    bool m_lockTimeMinHasBeenSet;

                    /**
                     * 总扫描行数
                     */
                    int64_t m_rowsExamined;
                    bool m_rowsExaminedHasBeenSet;

                    /**
                     * 最大扫描行数
                     */
                    int64_t m_rowsExaminedMax;
                    bool m_rowsExaminedMaxHasBeenSet;

                    /**
                     * 最小扫描行数
                     */
                    int64_t m_rowsExaminedMin;
                    bool m_rowsExaminedMinHasBeenSet;

                    /**
                     * 总耗时
                     */
                    double m_queryTime;
                    bool m_queryTimeHasBeenSet;

                    /**
                     * 最大执行时间
                     */
                    double m_queryTimeMax;
                    bool m_queryTimeMaxHasBeenSet;

                    /**
                     * 最小执行时间
                     */
                    double m_queryTimeMin;
                    bool m_queryTimeMinHasBeenSet;

                    /**
                     * 总返回行数
                     */
                    int64_t m_rowsSent;
                    bool m_rowsSentHasBeenSet;

                    /**
                     * 最大返回行数
                     */
                    int64_t m_rowsSentMax;
                    bool m_rowsSentMaxHasBeenSet;

                    /**
                     * 最小返回行数
                     */
                    int64_t m_rowsSentMin;
                    bool m_rowsSentMinHasBeenSet;

                    /**
                     * 执行次数
                     */
                    int64_t m_execTimes;
                    bool m_execTimesHasBeenSet;

                    /**
                     * sql模板
                     */
                    std::string m_sqlTemplate;
                    bool m_sqlTemplateHasBeenSet;

                    /**
                     * 带参数SQL（随机）
                     */
                    std::string m_sqlText;
                    bool m_sqlTextHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * 总耗时占比
                     */
                    double m_queryTimeRatio;
                    bool m_queryTimeRatioHasBeenSet;

                    /**
                     * sql总锁等待时间占比
                     */
                    double m_lockTimeRatio;
                    bool m_lockTimeRatioHasBeenSet;

                    /**
                     * 总扫描行数占比
                     */
                    double m_rowsExaminedRatio;
                    bool m_rowsExaminedRatioHasBeenSet;

                    /**
                     * 总返回行数占比
                     */
                    double m_rowsSentRatio;
                    bool m_rowsSentRatioHasBeenSet;

                    /**
                     * 平均执行时间
                     */
                    double m_queryTimeAvg;
                    bool m_queryTimeAvgHasBeenSet;

                    /**
                     * 平均返回行数
                     */
                    double m_rowsSentAvg;
                    bool m_rowsSentAvgHasBeenSet;

                    /**
                     * 平均锁等待时间
                     */
                    double m_lockTimeAvg;
                    bool m_lockTimeAvgHasBeenSet;

                    /**
                     * 平均扫描行数
                     */
                    double m_rowsExaminedAvg;
                    bool m_rowsExaminedAvgHasBeenSet;

                    /**
                     * SQL模板的MD5值
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SLOWLOGTOPSQLITEM_H_
