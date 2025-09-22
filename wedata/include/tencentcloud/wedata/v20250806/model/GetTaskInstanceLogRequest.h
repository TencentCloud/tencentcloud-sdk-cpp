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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCELOGREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCELOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetTaskInstanceLog请求参数结构体
                */
                class GetTaskInstanceLogRequest : public AbstractModel
                {
                public:
                    GetTaskInstanceLogRequest();
                    ~GetTaskInstanceLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取**项目ID**
                     * @return ProjectId **项目ID**
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置**项目ID**
                     * @param _projectId **项目ID**
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取**实例唯一标识**
                     * @return InstanceKey **实例唯一标识**
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置**实例唯一标识**
                     * @param _instanceKey **实例唯一标识**
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取**实例生命周期编号，标识实例的某一次执行**例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1; 默认最新一次
                     * @return LifeRoundNum **实例生命周期编号，标识实例的某一次执行**例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1; 默认最新一次
                     * 
                     */
                    uint64_t GetLifeRoundNum() const;

                    /**
                     * 设置**实例生命周期编号，标识实例的某一次执行**例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1; 默认最新一次
                     * @param _lifeRoundNum **实例生命周期编号，标识实例的某一次执行**例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1; 默认最新一次
                     * 
                     */
                    void SetLifeRoundNum(const uint64_t& _lifeRoundNum);

                    /**
                     * 判断参数 LifeRoundNum 是否已赋值
                     * @return LifeRoundNum 是否已赋值
                     * 
                     */
                    bool LifeRoundNumHasBeenSet() const;

                    /**
                     * 获取**日志级别** 默认All - Info - Debug - Warn - Error - All
                     * @return LogLevel **日志级别** 默认All - Info - Debug - Warn - Error - All
                     * 
                     */
                    std::string GetLogLevel() const;

                    /**
                     * 设置**日志级别** 默认All - Info - Debug - Warn - Error - All
                     * @param _logLevel **日志级别** 默认All - Info - Debug - Warn - Error - All
                     * 
                     */
                    void SetLogLevel(const std::string& _logLevel);

                    /**
                     * 判断参数 LogLevel 是否已赋值
                     * @return LogLevel 是否已赋值
                     * 
                     */
                    bool LogLevelHasBeenSet() const;

                    /**
                     * 获取**分页查询日志时使用，无具体业务含义** 第一次查询时值为null 第二次及以后查询时使用上一次查询返回信息中的NextCursor字段值即可
                     * @return NextCursor **分页查询日志时使用，无具体业务含义** 第一次查询时值为null 第二次及以后查询时使用上一次查询返回信息中的NextCursor字段值即可
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 设置**分页查询日志时使用，无具体业务含义** 第一次查询时值为null 第二次及以后查询时使用上一次查询返回信息中的NextCursor字段值即可
                     * @param _nextCursor **分页查询日志时使用，无具体业务含义** 第一次查询时值为null 第二次及以后查询时使用上一次查询返回信息中的NextCursor字段值即可
                     * 
                     */
                    void SetNextCursor(const std::string& _nextCursor);

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                private:

                    /**
                     * **项目ID**
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **实例唯一标识**
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **实例生命周期编号，标识实例的某一次执行**例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1; 默认最新一次
                     */
                    uint64_t m_lifeRoundNum;
                    bool m_lifeRoundNumHasBeenSet;

                    /**
                     * **日志级别** 默认All - Info - Debug - Warn - Error - All
                     */
                    std::string m_logLevel;
                    bool m_logLevelHasBeenSet;

                    /**
                     * **分页查询日志时使用，无具体业务含义** 第一次查询时值为null 第二次及以后查询时使用上一次查询返回信息中的NextCursor字段值即可
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETTASKINSTANCELOGREQUEST_H_
