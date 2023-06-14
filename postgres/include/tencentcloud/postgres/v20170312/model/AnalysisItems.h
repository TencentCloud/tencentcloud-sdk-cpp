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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_ANALYSISITEMS_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_ANALYSISITEMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 慢查询分析接口返回的分析详情，按照参数抽象之后进行分类
                */
                class AnalysisItems : public AbstractModel
                {
                public:
                    AnalysisItems();
                    ~AnalysisItems() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取慢SQL查询的数据库名
                     * @return DatabaseName 慢SQL查询的数据库名
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置慢SQL查询的数据库名
                     * @param _databaseName 慢SQL查询的数据库名
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取慢SQL执行的用户名
                     * @return UserName 慢SQL执行的用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置慢SQL执行的用户名
                     * @param _userName 慢SQL执行的用户名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取抽象参数之后的慢SQL
                     * @return NormalQuery 抽象参数之后的慢SQL
                     * 
                     */
                    std::string GetNormalQuery() const;

                    /**
                     * 设置抽象参数之后的慢SQL
                     * @param _normalQuery 抽象参数之后的慢SQL
                     * 
                     */
                    void SetNormalQuery(const std::string& _normalQuery);

                    /**
                     * 判断参数 NormalQuery 是否已赋值
                     * @return NormalQuery 是否已赋值
                     * 
                     */
                    bool NormalQueryHasBeenSet() const;

                    /**
                     * 获取慢SQL执行的客户端地址
                     * @return ClientAddr 慢SQL执行的客户端地址
                     * 
                     */
                    std::string GetClientAddr() const;

                    /**
                     * 设置慢SQL执行的客户端地址
                     * @param _clientAddr 慢SQL执行的客户端地址
                     * 
                     */
                    void SetClientAddr(const std::string& _clientAddr);

                    /**
                     * 判断参数 ClientAddr 是否已赋值
                     * @return ClientAddr 是否已赋值
                     * 
                     */
                    bool ClientAddrHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内慢SQL语句执行的次数
                     * @return CallNum 在选定时间范围内慢SQL语句执行的次数
                     * 
                     */
                    uint64_t GetCallNum() const;

                    /**
                     * 设置在选定时间范围内慢SQL语句执行的次数
                     * @param _callNum 在选定时间范围内慢SQL语句执行的次数
                     * 
                     */
                    void SetCallNum(const uint64_t& _callNum);

                    /**
                     * 判断参数 CallNum 是否已赋值
                     * @return CallNum 是否已赋值
                     * 
                     */
                    bool CallNumHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内，慢SQL语句执行的次数占所有慢SQL的比例（小数返回）
                     * @return CallPercent 在选定时间范围内，慢SQL语句执行的次数占所有慢SQL的比例（小数返回）
                     * 
                     */
                    double GetCallPercent() const;

                    /**
                     * 设置在选定时间范围内，慢SQL语句执行的次数占所有慢SQL的比例（小数返回）
                     * @param _callPercent 在选定时间范围内，慢SQL语句执行的次数占所有慢SQL的比例（小数返回）
                     * 
                     */
                    void SetCallPercent(const double& _callPercent);

                    /**
                     * 判断参数 CallPercent 是否已赋值
                     * @return CallPercent 是否已赋值
                     * 
                     */
                    bool CallPercentHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内，慢SQL执行的总时间
                     * @return CostTime 在选定时间范围内，慢SQL执行的总时间
                     * 
                     */
                    double GetCostTime() const;

                    /**
                     * 设置在选定时间范围内，慢SQL执行的总时间
                     * @param _costTime 在选定时间范围内，慢SQL执行的总时间
                     * 
                     */
                    void SetCostTime(const double& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内，慢SQL语句执行的总时间占所有慢SQL的比例（小数返回）
                     * @return CostPercent 在选定时间范围内，慢SQL语句执行的总时间占所有慢SQL的比例（小数返回）
                     * 
                     */
                    double GetCostPercent() const;

                    /**
                     * 设置在选定时间范围内，慢SQL语句执行的总时间占所有慢SQL的比例（小数返回）
                     * @param _costPercent 在选定时间范围内，慢SQL语句执行的总时间占所有慢SQL的比例（小数返回）
                     * 
                     */
                    void SetCostPercent(const double& _costPercent);

                    /**
                     * 判断参数 CostPercent 是否已赋值
                     * @return CostPercent 是否已赋值
                     * 
                     */
                    bool CostPercentHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内，慢SQL语句执行的耗时最短的时间（单位：ms）
                     * @return MinCostTime 在选定时间范围内，慢SQL语句执行的耗时最短的时间（单位：ms）
                     * 
                     */
                    double GetMinCostTime() const;

                    /**
                     * 设置在选定时间范围内，慢SQL语句执行的耗时最短的时间（单位：ms）
                     * @param _minCostTime 在选定时间范围内，慢SQL语句执行的耗时最短的时间（单位：ms）
                     * 
                     */
                    void SetMinCostTime(const double& _minCostTime);

                    /**
                     * 判断参数 MinCostTime 是否已赋值
                     * @return MinCostTime 是否已赋值
                     * 
                     */
                    bool MinCostTimeHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内，慢SQL语句执行的耗时最长的时间（单位：ms）
                     * @return MaxCostTime 在选定时间范围内，慢SQL语句执行的耗时最长的时间（单位：ms）
                     * 
                     */
                    double GetMaxCostTime() const;

                    /**
                     * 设置在选定时间范围内，慢SQL语句执行的耗时最长的时间（单位：ms）
                     * @param _maxCostTime 在选定时间范围内，慢SQL语句执行的耗时最长的时间（单位：ms）
                     * 
                     */
                    void SetMaxCostTime(const double& _maxCostTime);

                    /**
                     * 判断参数 MaxCostTime 是否已赋值
                     * @return MaxCostTime 是否已赋值
                     * 
                     */
                    bool MaxCostTimeHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内，慢SQL语句执行的耗时平均时间（单位：ms）
                     * @return AvgCostTime 在选定时间范围内，慢SQL语句执行的耗时平均时间（单位：ms）
                     * 
                     */
                    double GetAvgCostTime() const;

                    /**
                     * 设置在选定时间范围内，慢SQL语句执行的耗时平均时间（单位：ms）
                     * @param _avgCostTime 在选定时间范围内，慢SQL语句执行的耗时平均时间（单位：ms）
                     * 
                     */
                    void SetAvgCostTime(const double& _avgCostTime);

                    /**
                     * 判断参数 AvgCostTime 是否已赋值
                     * @return AvgCostTime 是否已赋值
                     * 
                     */
                    bool AvgCostTimeHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内，慢SQL第一条开始执行的时间戳
                     * @return FirstTime 在选定时间范围内，慢SQL第一条开始执行的时间戳
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置在选定时间范围内，慢SQL第一条开始执行的时间戳
                     * @param _firstTime 在选定时间范围内，慢SQL第一条开始执行的时间戳
                     * 
                     */
                    void SetFirstTime(const std::string& _firstTime);

                    /**
                     * 判断参数 FirstTime 是否已赋值
                     * @return FirstTime 是否已赋值
                     * 
                     */
                    bool FirstTimeHasBeenSet() const;

                    /**
                     * 获取在选定时间范围内，慢SQL最后一条开始执行的时间戳
                     * @return LastTime 在选定时间范围内，慢SQL最后一条开始执行的时间戳
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置在选定时间范围内，慢SQL最后一条开始执行的时间戳
                     * @param _lastTime 在选定时间范围内，慢SQL最后一条开始执行的时间戳
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                private:

                    /**
                     * 慢SQL查询的数据库名
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 慢SQL执行的用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 抽象参数之后的慢SQL
                     */
                    std::string m_normalQuery;
                    bool m_normalQueryHasBeenSet;

                    /**
                     * 慢SQL执行的客户端地址
                     */
                    std::string m_clientAddr;
                    bool m_clientAddrHasBeenSet;

                    /**
                     * 在选定时间范围内慢SQL语句执行的次数
                     */
                    uint64_t m_callNum;
                    bool m_callNumHasBeenSet;

                    /**
                     * 在选定时间范围内，慢SQL语句执行的次数占所有慢SQL的比例（小数返回）
                     */
                    double m_callPercent;
                    bool m_callPercentHasBeenSet;

                    /**
                     * 在选定时间范围内，慢SQL执行的总时间
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 在选定时间范围内，慢SQL语句执行的总时间占所有慢SQL的比例（小数返回）
                     */
                    double m_costPercent;
                    bool m_costPercentHasBeenSet;

                    /**
                     * 在选定时间范围内，慢SQL语句执行的耗时最短的时间（单位：ms）
                     */
                    double m_minCostTime;
                    bool m_minCostTimeHasBeenSet;

                    /**
                     * 在选定时间范围内，慢SQL语句执行的耗时最长的时间（单位：ms）
                     */
                    double m_maxCostTime;
                    bool m_maxCostTimeHasBeenSet;

                    /**
                     * 在选定时间范围内，慢SQL语句执行的耗时平均时间（单位：ms）
                     */
                    double m_avgCostTime;
                    bool m_avgCostTimeHasBeenSet;

                    /**
                     * 在选定时间范围内，慢SQL第一条开始执行的时间戳
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 在选定时间范围内，慢SQL最后一条开始执行的时间戳
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_ANALYSISITEMS_H_
