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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_NORMALQUERYITEM_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_NORMALQUERYITEM_H_

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
                * 单条SlowQuery信息
                */
                class NormalQueryItem : public AbstractModel
                {
                public:
                    NormalQueryItem();
                    ~NormalQueryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取调用次数
                     * @return Calls 调用次数
                     * 
                     */
                    int64_t GetCalls() const;

                    /**
                     * 设置调用次数
                     * @param _calls 调用次数
                     * 
                     */
                    void SetCalls(const int64_t& _calls);

                    /**
                     * 判断参数 Calls 是否已赋值
                     * @return Calls 是否已赋值
                     * 
                     */
                    bool CallsHasBeenSet() const;

                    /**
                     * 获取粒度点
                     * @return CallsGrids 粒度点
                     * 
                     */
                    std::vector<int64_t> GetCallsGrids() const;

                    /**
                     * 设置粒度点
                     * @param _callsGrids 粒度点
                     * 
                     */
                    void SetCallsGrids(const std::vector<int64_t>& _callsGrids);

                    /**
                     * 判断参数 CallsGrids 是否已赋值
                     * @return CallsGrids 是否已赋值
                     * 
                     */
                    bool CallsGridsHasBeenSet() const;

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
                     * 获取影响的行数
                     * @return Rows 影响的行数
                     * 
                     */
                    int64_t GetRows() const;

                    /**
                     * 设置影响的行数
                     * @param _rows 影响的行数
                     * 
                     */
                    void SetRows(const int64_t& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

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
                     * 获取最早一条慢SQL时间
                     * @return FirstTime 最早一条慢SQL时间
                     * 
                     */
                    std::string GetFirstTime() const;

                    /**
                     * 设置最早一条慢SQL时间
                     * @param _firstTime 最早一条慢SQL时间
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
                     * 获取最晚一条慢SQL时间
                     * @return LastTime 最晚一条慢SQL时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最晚一条慢SQL时间
                     * @param _lastTime 最晚一条慢SQL时间
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
                     * 获取读共享内存块数
                     * @return SharedReadBlks 读共享内存块数
                     * 
                     */
                    int64_t GetSharedReadBlks() const;

                    /**
                     * 设置读共享内存块数
                     * @param _sharedReadBlks 读共享内存块数
                     * 
                     */
                    void SetSharedReadBlks(const int64_t& _sharedReadBlks);

                    /**
                     * 判断参数 SharedReadBlks 是否已赋值
                     * @return SharedReadBlks 是否已赋值
                     * 
                     */
                    bool SharedReadBlksHasBeenSet() const;

                    /**
                     * 获取写共享内存块数
                     * @return SharedWriteBlks 写共享内存块数
                     * 
                     */
                    int64_t GetSharedWriteBlks() const;

                    /**
                     * 设置写共享内存块数
                     * @param _sharedWriteBlks 写共享内存块数
                     * 
                     */
                    void SetSharedWriteBlks(const int64_t& _sharedWriteBlks);

                    /**
                     * 判断参数 SharedWriteBlks 是否已赋值
                     * @return SharedWriteBlks 是否已赋值
                     * 
                     */
                    bool SharedWriteBlksHasBeenSet() const;

                    /**
                     * 获取读io总耗时
                     * @return ReadCostTime 读io总耗时
                     * 
                     */
                    int64_t GetReadCostTime() const;

                    /**
                     * 设置读io总耗时
                     * @param _readCostTime 读io总耗时
                     * 
                     */
                    void SetReadCostTime(const int64_t& _readCostTime);

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
                    int64_t GetWriteCostTime() const;

                    /**
                     * 设置写io总耗时
                     * @param _writeCostTime 写io总耗时
                     * 
                     */
                    void SetWriteCostTime(const int64_t& _writeCostTime);

                    /**
                     * 判断参数 WriteCostTime 是否已赋值
                     * @return WriteCostTime 是否已赋值
                     * 
                     */
                    bool WriteCostTimeHasBeenSet() const;

                    /**
                     * 获取数据库名字
                     * @return DatabaseName 数据库名字
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名字
                     * @param _databaseName 数据库名字
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
                     * 获取脱敏后的慢SQL
                     * @return NormalQuery 脱敏后的慢SQL
                     * 
                     */
                    std::string GetNormalQuery() const;

                    /**
                     * 设置脱敏后的慢SQL
                     * @param _normalQuery 脱敏后的慢SQL
                     * 
                     */
                    void SetNormalQuery(const std::string& _normalQuery);

                    /**
                     * 判断参数 NormalQuery 是否已赋值
                     * @return NormalQuery 是否已赋值
                     * 
                     */
                    bool NormalQueryHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 调用次数
                     */
                    int64_t m_calls;
                    bool m_callsHasBeenSet;

                    /**
                     * 粒度点
                     */
                    std::vector<int64_t> m_callsGrids;
                    bool m_callsGridsHasBeenSet;

                    /**
                     * 花费总时间
                     */
                    double m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 影响的行数
                     */
                    int64_t m_rows;
                    bool m_rowsHasBeenSet;

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
                     * 最早一条慢SQL时间
                     */
                    std::string m_firstTime;
                    bool m_firstTimeHasBeenSet;

                    /**
                     * 最晚一条慢SQL时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 读共享内存块数
                     */
                    int64_t m_sharedReadBlks;
                    bool m_sharedReadBlksHasBeenSet;

                    /**
                     * 写共享内存块数
                     */
                    int64_t m_sharedWriteBlks;
                    bool m_sharedWriteBlksHasBeenSet;

                    /**
                     * 读io总耗时
                     */
                    int64_t m_readCostTime;
                    bool m_readCostTimeHasBeenSet;

                    /**
                     * 写io总耗时
                     */
                    int64_t m_writeCostTime;
                    bool m_writeCostTimeHasBeenSet;

                    /**
                     * 数据库名字
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 脱敏后的慢SQL
                     */
                    std::string m_normalQuery;
                    bool m_normalQueryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_NORMALQUERYITEM_H_
