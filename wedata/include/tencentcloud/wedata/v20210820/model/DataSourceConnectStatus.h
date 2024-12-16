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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCECONNECTSTATUS_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCECONNECTSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据源云梯连接状态
                */
                class DataSourceConnectStatus : public AbstractModel
                {
                public:
                    DataSourceConnectStatus();
                    ~DataSourceConnectStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param _datasourceId 数据源id
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取连接结果
                     * @return ConnectResult 连接结果
                     * 
                     */
                    int64_t GetConnectResult() const;

                    /**
                     * 设置连接结果
                     * @param _connectResult 连接结果
                     * 
                     */
                    void SetConnectResult(const int64_t& _connectResult);

                    /**
                     * 判断参数 ConnectResult 是否已赋值
                     * @return ConnectResult 是否已赋值
                     * 
                     */
                    bool ConnectResultHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ConnectError 错误信息
                     * 
                     */
                    std::string GetConnectError() const;

                    /**
                     * 设置错误信息
                     * @param _connectError 错误信息
                     * 
                     */
                    void SetConnectError(const std::string& _connectError);

                    /**
                     * 判断参数 ConnectError 是否已赋值
                     * @return ConnectError 是否已赋值
                     * 
                     */
                    bool ConnectErrorHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return Timestamp 时间戳
                     * 
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置时间戳
                     * @param _timestamp 时间戳
                     * 
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 连接结果
                     */
                    int64_t m_connectResult;
                    bool m_connectResultHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_connectError;
                    bool m_connectErrorHasBeenSet;

                    /**
                     * 时间戳
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASOURCECONNECTSTATUS_H_
