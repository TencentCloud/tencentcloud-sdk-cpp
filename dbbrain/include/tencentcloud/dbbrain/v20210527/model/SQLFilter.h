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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLFILTER_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLFILTER_H_

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
                * 实例SQL限流任务。
                */
                class SQLFilter : public AbstractModel
                {
                public:
                    SQLFilter();
                    ~SQLFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID。
                     * @return Id 任务ID。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置任务ID。
                     * @param _id 任务ID。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务状态，取值包括RUNNING - 运行中, FINISHED - 已完成, TERMINATED - 已终止。
                     * @return Status 任务状态，取值包括RUNNING - 运行中, FINISHED - 已完成, TERMINATED - 已终止。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态，取值包括RUNNING - 运行中, FINISHED - 已完成, TERMINATED - 已终止。
                     * @param _status 任务状态，取值包括RUNNING - 运行中, FINISHED - 已完成, TERMINATED - 已终止。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     * @return SqlType SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     * 
                     */
                    std::string GetSqlType() const;

                    /**
                     * 设置SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     * @param _sqlType SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
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
                     * 获取筛选SQL的关键词，多个关键词用英文逗号拼接。
                     * @return OriginKeys 筛选SQL的关键词，多个关键词用英文逗号拼接。
                     * 
                     */
                    std::string GetOriginKeys() const;

                    /**
                     * 设置筛选SQL的关键词，多个关键词用英文逗号拼接。
                     * @param _originKeys 筛选SQL的关键词，多个关键词用英文逗号拼接。
                     * 
                     */
                    void SetOriginKeys(const std::string& _originKeys);

                    /**
                     * 判断参数 OriginKeys 是否已赋值
                     * @return OriginKeys 是否已赋值
                     * 
                     */
                    bool OriginKeysHasBeenSet() const;

                    /**
                     * 获取筛选SQL的规则。
                     * @return OriginRule 筛选SQL的规则。
                     * 
                     */
                    std::string GetOriginRule() const;

                    /**
                     * 设置筛选SQL的规则。
                     * @param _originRule 筛选SQL的规则。
                     * 
                     */
                    void SetOriginRule(const std::string& _originRule);

                    /**
                     * 判断参数 OriginRule 是否已赋值
                     * @return OriginRule 是否已赋值
                     * 
                     */
                    bool OriginRuleHasBeenSet() const;

                    /**
                     * 获取已拒绝SQL数目。
                     * @return RejectedSqlCount 已拒绝SQL数目。
                     * 
                     */
                    int64_t GetRejectedSqlCount() const;

                    /**
                     * 设置已拒绝SQL数目。
                     * @param _rejectedSqlCount 已拒绝SQL数目。
                     * 
                     */
                    void SetRejectedSqlCount(const int64_t& _rejectedSqlCount);

                    /**
                     * 判断参数 RejectedSqlCount 是否已赋值
                     * @return RejectedSqlCount 是否已赋值
                     * 
                     */
                    bool RejectedSqlCountHasBeenSet() const;

                    /**
                     * 获取当前并发数。
                     * @return CurrentConcurrency 当前并发数。
                     * 
                     */
                    int64_t GetCurrentConcurrency() const;

                    /**
                     * 设置当前并发数。
                     * @param _currentConcurrency 当前并发数。
                     * 
                     */
                    void SetCurrentConcurrency(const int64_t& _currentConcurrency);

                    /**
                     * 判断参数 CurrentConcurrency 是否已赋值
                     * @return CurrentConcurrency 是否已赋值
                     * 
                     */
                    bool CurrentConcurrencyHasBeenSet() const;

                    /**
                     * 获取最大并发数。
                     * @return MaxConcurrency 最大并发数。
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置最大并发数。
                     * @param _maxConcurrency 最大并发数。
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取任务创建时间。
                     * @return CreateTime 任务创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间。
                     * @param _createTime 任务创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取当前时间。
                     * @return CurrentTime 当前时间。
                     * 
                     */
                    std::string GetCurrentTime() const;

                    /**
                     * 设置当前时间。
                     * @param _currentTime 当前时间。
                     * 
                     */
                    void SetCurrentTime(const std::string& _currentTime);

                    /**
                     * 判断参数 CurrentTime 是否已赋值
                     * @return CurrentTime 是否已赋值
                     * 
                     */
                    bool CurrentTimeHasBeenSet() const;

                    /**
                     * 获取限流过期时间。
                     * @return ExpireTime 限流过期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置限流过期时间。
                     * @param _expireTime 限流过期时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务状态，取值包括RUNNING - 运行中, FINISHED - 已完成, TERMINATED - 已终止。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * SQL类型，取值包括SELECT, UPDATE, DELETE, INSERT, REPLACE。
                     */
                    std::string m_sqlType;
                    bool m_sqlTypeHasBeenSet;

                    /**
                     * 筛选SQL的关键词，多个关键词用英文逗号拼接。
                     */
                    std::string m_originKeys;
                    bool m_originKeysHasBeenSet;

                    /**
                     * 筛选SQL的规则。
                     */
                    std::string m_originRule;
                    bool m_originRuleHasBeenSet;

                    /**
                     * 已拒绝SQL数目。
                     */
                    int64_t m_rejectedSqlCount;
                    bool m_rejectedSqlCountHasBeenSet;

                    /**
                     * 当前并发数。
                     */
                    int64_t m_currentConcurrency;
                    bool m_currentConcurrencyHasBeenSet;

                    /**
                     * 最大并发数。
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * 任务创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 当前时间。
                     */
                    std::string m_currentTime;
                    bool m_currentTimeHasBeenSet;

                    /**
                     * 限流过期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SQLFILTER_H_
