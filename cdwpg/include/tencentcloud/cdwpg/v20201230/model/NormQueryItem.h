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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_NORMQUERYITEM_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_NORMQUERYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 慢查询项目信息
                */
                class NormQueryItem : public AbstractModel
                {
                public:
                    NormQueryItem();
                    ~NormQueryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取调用次数
                     * @return CallTimes 调用次数
                     * 
                     */
                    int64_t GetCallTimes() const;

                    /**
                     * 设置调用次数
                     * @param _callTimes 调用次数
                     * 
                     */
                    void SetCallTimes(const int64_t& _callTimes);

                    /**
                     * 判断参数 CallTimes 是否已赋值
                     * @return CallTimes 是否已赋值
                     * 
                     */
                    bool CallTimesHasBeenSet() const;

                    /**
                     * 获取读共享内存块数
                     * @return SharedReadBlocks 读共享内存块数
                     * 
                     */
                    int64_t GetSharedReadBlocks() const;

                    /**
                     * 设置读共享内存块数
                     * @param _sharedReadBlocks 读共享内存块数
                     * 
                     */
                    void SetSharedReadBlocks(const int64_t& _sharedReadBlocks);

                    /**
                     * 判断参数 SharedReadBlocks 是否已赋值
                     * @return SharedReadBlocks 是否已赋值
                     * 
                     */
                    bool SharedReadBlocksHasBeenSet() const;

                    /**
                     * 获取写共享内存块数
                     * @return SharedWriteBlocks 写共享内存块数
                     * 
                     */
                    int64_t GetSharedWriteBlocks() const;

                    /**
                     * 设置写共享内存块数
                     * @param _sharedWriteBlocks 写共享内存块数
                     * 
                     */
                    void SetSharedWriteBlocks(const int64_t& _sharedWriteBlocks);

                    /**
                     * 判断参数 SharedWriteBlocks 是否已赋值
                     * @return SharedWriteBlocks 是否已赋值
                     * 
                     */
                    bool SharedWriteBlocksHasBeenSet() const;

                    /**
                     * 获取数据库
                     * @return DatabaseName 数据库
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库
                     * @param _databaseName 数据库
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
                     * 获取脱敏后语句
                     * @return NormalQuery 脱敏后语句
                     * 
                     */
                    std::string GetNormalQuery() const;

                    /**
                     * 设置脱敏后语句
                     * @param _normalQuery 脱敏后语句
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
                     * 获取执行时间最长的语句
                     * @return MaxElapsedQuery 执行时间最长的语句
                     * 
                     */
                    std::string GetMaxElapsedQuery() const;

                    /**
                     * 设置执行时间最长的语句
                     * @param _maxElapsedQuery 执行时间最长的语句
                     * 
                     */
                    void SetMaxElapsedQuery(const std::string& _maxElapsedQuery);

                    /**
                     * 判断参数 MaxElapsedQuery 是否已赋值
                     * @return MaxElapsedQuery 是否已赋值
                     * 
                     */
                    bool MaxElapsedQueryHasBeenSet() const;

                    /**
                     * 获取花费总时间
                     * @return CostTime 花费总时间
                     * 
                     */
                    double GetCostTime() const;

                    /**
                     * 设置花费总时间
                     * @param _costTime 花费总时间
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
                     * 获取客户端ip
                     * @return ClientIp 客户端ip
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置客户端ip
                     * @param _clientIp 客户端ip
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return UserName 用户名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名
                     * @param _userName 用户名
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
                     * 获取总次数占比
                     * @return TotalCallTimesPercent 总次数占比
                     * 
                     */
                    double GetTotalCallTimesPercent() const;

                    /**
                     * 设置总次数占比
                     * @param _totalCallTimesPercent 总次数占比
                     * 
                     */
                    void SetTotalCallTimesPercent(const double& _totalCallTimesPercent);

                    /**
                     * 判断参数 TotalCallTimesPercent 是否已赋值
                     * @return TotalCallTimesPercent 是否已赋值
                     * 
                     */
                    bool TotalCallTimesPercentHasBeenSet() const;

                    /**
                     * 获取总耗时占比
                     * @return TotalCostTimePercent 总耗时占比
                     * 
                     */
                    double GetTotalCostTimePercent() const;

                    /**
                     * 设置总耗时占比
                     * @param _totalCostTimePercent 总耗时占比
                     * 
                     */
                    void SetTotalCostTimePercent(const double& _totalCostTimePercent);

                    /**
                     * 判断参数 TotalCostTimePercent 是否已赋值
                     * @return TotalCostTimePercent 是否已赋值
                     * 
                     */
                    bool TotalCostTimePercentHasBeenSet() const;

                    /**
                     * 获取花费最小时间
                     * @return MinCostTime 花费最小时间
                     * 
                     */
                    double GetMinCostTime() const;

                    /**
                     * 设置花费最小时间
                     * @param _minCostTime 花费最小时间
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
                     * 获取花费最大时间
                     * @return MaxCostTime 花费最大时间
                     * 
                     */
                    double GetMaxCostTime() const;

                    /**
                     * 设置花费最大时间
                     * @param _maxCostTime 花费最大时间
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
                     * 获取最早一条时间
                     * @return FirstTime 最早一条时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置最早一条时间
                     * @param _firstTime 最早一条时间
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
                     * 获取最晚一条时间
                     * @return LastTime 最晚一条时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最晚一条时间
                     * @param _lastTime 最晚一条时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取读io总耗时
                     * @return ReadCostTime 读io总耗时
                     * 
                     */
                    double GetReadCostTime() const;

                    /**
                     * 设置读io总耗时
                     * @param _readCostTime 读io总耗时
                     * 
                     */
                    void SetReadCostTime(const double& _readCostTime);

                    /**
                     * 判断参数 ReadCostTime 是否已赋值
                     * @return ReadCostTime 是否已赋值
                     * 
                     */
                    bool ReadCostTimeHasBeenSet() const;

                    /**
                     * 获取写io总耗时
                     * @return WriteCostTime 写io总耗时
                     * 
                     */
                    double GetWriteCostTime() const;

                    /**
                     * 设置写io总耗时
                     * @param _writeCostTime 写io总耗时
                     * 
                     */
                    void SetWriteCostTime(const double& _writeCostTime);

                    /**
                     * 判断参数 WriteCostTime 是否已赋值
                     * @return WriteCostTime 是否已赋值
                     * 
                     */
                    bool WriteCostTimeHasBeenSet() const;

                private:

                    /**
                     * 调用次数
                     */
                    int64_t m_callTimes;
                    bool m_callTimesHasBeenSet;

                    /**
                     * 读共享内存块数
                     */
                    int64_t m_sharedReadBlocks;
                    bool m_sharedReadBlocksHasBeenSet;

                    /**
                     * 写共享内存块数
                     */
                    int64_t m_sharedWriteBlocks;
                    bool m_sharedWriteBlocksHasBeenSet;

                    /**
                     * 数据库
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 脱敏后语句
                     */
                    std::string m_normalQuery;
                    bool m_normalQueryHasBeenSet;

                    /**
                     * 执行时间最长的语句
                     */
                    std::string m_maxElapsedQuery;
                    bool m_maxElapsedQueryHasBeenSet;

                    /**
                     * 花费总时间
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 客户端ip
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 总次数占比
                     */
                    double m_totalCallTimesPercent;
                    bool m_totalCallTimesPercentHasBeenSet;

                    /**
                     * 总耗时占比
                     */
                    double m_totalCostTimePercent;
                    bool m_totalCostTimePercentHasBeenSet;

                    /**
                     * 花费最小时间
                     */
                    double m_minCostTime;
                    bool m_minCostTimeHasBeenSet;

                    /**
                     * 花费最大时间
                     */
                    double m_maxCostTime;
                    bool m_maxCostTimeHasBeenSet;

                    /**
                     * 最早一条时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最晚一条时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 读io总耗时
                     */
                    double m_readCostTime;
                    bool m_readCostTimeHasBeenSet;

                    /**
                     * 写io总耗时
                     */
                    double m_writeCostTime;
                    bool m_writeCostTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_NORMQUERYITEM_H_
