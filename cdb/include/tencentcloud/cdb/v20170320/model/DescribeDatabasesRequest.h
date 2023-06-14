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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABASESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDatabases请求参数结构体
                */
                class DescribeDatabasesRequest : public AbstractModel
                {
                public:
                    DescribeDatabasesRequest();
                    ~DescribeDatabasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取偏移量，最小值为0。
                     * @return Offset 偏移量，最小值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，最小值为0。
                     * @param _offset 偏移量，最小值为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单次请求数量，默认值为20，最小值为1，最大值为100。
                     * @return Limit 单次请求数量，默认值为20，最小值为1，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次请求数量，默认值为20，最小值为1，最大值为100。
                     * @param _limit 单次请求数量，默认值为20，最小值为1，最大值为100。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取匹配数据库库名的正则表达式。
                     * @return DatabaseRegexp 匹配数据库库名的正则表达式。
                     * 
                     */
                    std::string GetDatabaseRegexp() const;

                    /**
                     * 设置匹配数据库库名的正则表达式。
                     * @param _databaseRegexp 匹配数据库库名的正则表达式。
                     * 
                     */
                    void SetDatabaseRegexp(const std::string& _databaseRegexp);

                    /**
                     * 判断参数 DatabaseRegexp 是否已赋值
                     * @return DatabaseRegexp 是否已赋值
                     * 
                     */
                    bool DatabaseRegexpHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 偏移量，最小值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次请求数量，默认值为20，最小值为1，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 匹配数据库库名的正则表达式。
                     */
                    std::string m_databaseRegexp;
                    bool m_databaseRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABASESREQUEST_H_
