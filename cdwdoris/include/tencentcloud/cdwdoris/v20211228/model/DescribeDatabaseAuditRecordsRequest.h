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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeDatabaseAuditRecords请求参数结构体
                */
                class DescribeDatabaseAuditRecordsRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseAuditRecordsRequest();
                    ~DescribeDatabaseAuditRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页
                     * @return PageSize 分页
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页
                     * @param _pageSize 分页
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页
                     * @return PageNum 分页
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置分页
                     * @param _pageNum 分页
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取排序参数
                     * @return OrderType 排序参数
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序参数
                     * @param _orderType 排序参数
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取用户
                     * @return User 用户
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户
                     * @param _user 用户
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取数据库
                     * @return DbName 数据库
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库
                     * @param _dbName 数据库
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取sql类型
                     * @return SqlType sql类型
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置sql类型
                     * @param _sqlType sql类型
                     * 
                     */
                    void SetSqlType(const std::string& _sqlType);

                    /**
                     * 判断参数 SqlType 是否已赋值
                     * @return SqlType 是否已赋值
                     * 
                     */
                    bool SqlTypeHasBeenSet() const;

                    /**
                     * 获取sql语句
                     * @return Sql sql语句
                     * 
                     */
                    std::string GetSql() const;

                    /**
                     * 设置sql语句
                     * @param _sql sql语句
                     * 
                     */
                    void SetSql(const std::string& _sql);

                    /**
                     * 判断参数 Sql 是否已赋值
                     * @return Sql 是否已赋值
                     * 
                     */
                    bool SqlHasBeenSet() const;

                    /**
                     * 获取用户 （多选）
                     * @return Users 用户 （多选）
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置用户 （多选）
                     * @param _users 用户 （多选）
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                    /**
                     * 获取数据库 （多选）
                     * @return DbNames 数据库 （多选）
                     * 
                     */
                    std::vector<std::string> GetDbNames() const;

                    /**
                     * 设置数据库 （多选）
                     * @param _dbNames 数据库 （多选）
                     * 
                     */
                    void SetDbNames(const std::vector<std::string>& _dbNames);

                    /**
                     * 判断参数 DbNames 是否已赋值
                     * @return DbNames 是否已赋值
                     * 
                     */
                    bool DbNamesHasBeenSet() const;

                    /**
                     * 获取sql类型 （多选）
                     * @return SqlTypes sql类型 （多选）
                     * 
                     */
                    std::vector<std::string> GetSqlTypes() const;

                    /**
                     * 设置sql类型 （多选）
                     * @param _sqlTypes sql类型 （多选）
                     * 
                     */
                    void SetSqlTypes(const std::vector<std::string>& _sqlTypes);

                    /**
                     * 判断参数 SqlTypes 是否已赋值
                     * @return SqlTypes 是否已赋值
                     * 
                     */
                    bool SqlTypesHasBeenSet() const;

                    /**
                     * 获取catalog名称（多选）
                     * @return Catalogs catalog名称（多选）
                     * 
                     */
                    std::vector<std::string> GetCatalogs() const;

                    /**
                     * 设置catalog名称（多选）
                     * @param _catalogs catalog名称（多选）
                     * 
                     */
                    void SetCatalogs(const std::vector<std::string>& _catalogs);

                    /**
                     * 判断参数 Catalogs 是否已赋值
                     * @return Catalogs 是否已赋值
                     * 
                     */
                    bool CatalogsHasBeenSet() const;

                    /**
                     * 获取是否是查询 
                     * @return IsQuery 是否是查询 
                     * 
                     */
                    std::vector<bool> GetIsQuery() const;

                    /**
                     * 设置是否是查询 
                     * @param _isQuery 是否是查询 
                     * 
                     */
                    void SetIsQuery(const std::vector<bool>& _isQuery);

                    /**
                     * 判断参数 IsQuery 是否已赋值
                     * @return IsQuery 是否已赋值
                     * 
                     */
                    bool IsQueryHasBeenSet() const;

                    /**
                     * 获取计算组列表
                     * @return ComputeGroups 计算组列表
                     * 
                     */
                    std::vector<std::string> GetComputeGroups() const;

                    /**
                     * 设置计算组列表
                     * @param _computeGroups 计算组列表
                     * 
                     */
                    void SetComputeGroups(const std::vector<std::string>& _computeGroups);

                    /**
                     * 判断参数 ComputeGroups 是否已赋值
                     * @return ComputeGroups 是否已赋值
                     * 
                     */
                    bool ComputeGroupsHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 排序参数
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 用户
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 数据库
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * sql类型
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * sql语句
                     */
                    std::string m_sql;
                    bool m_sqlHasBeenSet;

                    /**
                     * 用户 （多选）
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                    /**
                     * 数据库 （多选）
                     */
                    std::vector<std::string> m_dbNames;
                    bool m_dbNamesHasBeenSet;

                    /**
                     * sql类型 （多选）
                     */
                    std::vector<std::string> m_sqlTypes;
                    bool m_sqlTypesHasBeenSet;

                    /**
                     * catalog名称（多选）
                     */
                    std::vector<std::string> m_catalogs;
                    bool m_catalogsHasBeenSet;

                    /**
                     * 是否是查询 
                     */
                    std::vector<bool> m_isQuery;
                    bool m_isQueryHasBeenSet;

                    /**
                     * 计算组列表
                     */
                    std::vector<std::string> m_computeGroups;
                    bool m_computeGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDATABASEAUDITRECORDSREQUEST_H_
