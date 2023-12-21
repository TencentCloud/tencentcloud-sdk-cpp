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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGSREQUEST_H_

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
                * DescribeBinlogs请求参数结构体
                */
                class DescribeBinlogsRequest : public AbstractModel
                {
                public:
                    DescribeBinlogsRequest();
                    ~DescribeBinlogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取分页大小，默认值为20，最小值为1，最大值为100。
                     * @return Limit 分页大小，默认值为20，最小值为1，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小，默认值为20，最小值为1，最大值为100。
                     * @param _limit 分页大小，默认值为20，最小值为1，最大值为100。
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
                     * 获取binlog最早开始时间，时间格式：2016-03-17 02:10:37
                     * @return MinStartTime binlog最早开始时间，时间格式：2016-03-17 02:10:37
                     * 
                     */
                    std::string GetMinStartTime() const;

                    /**
                     * 设置binlog最早开始时间，时间格式：2016-03-17 02:10:37
                     * @param _minStartTime binlog最早开始时间，时间格式：2016-03-17 02:10:37
                     * 
                     */
                    void SetMinStartTime(const std::string& _minStartTime);

                    /**
                     * 判断参数 MinStartTime 是否已赋值
                     * @return MinStartTime 是否已赋值
                     * 
                     */
                    bool MinStartTimeHasBeenSet() const;

                    /**
                     * 获取binlog最晚开始时间，时间格式：2016-03-17 02:10:37
                     * @return MaxStartTime binlog最晚开始时间，时间格式：2016-03-17 02:10:37
                     * 
                     */
                    std::string GetMaxStartTime() const;

                    /**
                     * 设置binlog最晚开始时间，时间格式：2016-03-17 02:10:37
                     * @param _maxStartTime binlog最晚开始时间，时间格式：2016-03-17 02:10:37
                     * 
                     */
                    void SetMaxStartTime(const std::string& _maxStartTime);

                    /**
                     * 判断参数 MaxStartTime 是否已赋值
                     * @return MaxStartTime 是否已赋值
                     * 
                     */
                    bool MaxStartTimeHasBeenSet() const;

                    /**
                     * 获取返回binlog列表是否包含MinStartTime起始节点，默认为否
                     * @return ContainsMinStartTime 返回binlog列表是否包含MinStartTime起始节点，默认为否
                     * 
                     */
                    bool GetContainsMinStartTime() const;

                    /**
                     * 设置返回binlog列表是否包含MinStartTime起始节点，默认为否
                     * @param _containsMinStartTime 返回binlog列表是否包含MinStartTime起始节点，默认为否
                     * 
                     */
                    void SetContainsMinStartTime(const bool& _containsMinStartTime);

                    /**
                     * 判断参数 ContainsMinStartTime 是否已赋值
                     * @return ContainsMinStartTime 是否已赋值
                     * 
                     */
                    bool ContainsMinStartTimeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv。与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 偏移量，最小值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页大小，默认值为20，最小值为1，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * binlog最早开始时间，时间格式：2016-03-17 02:10:37
                     */
                    std::string m_minStartTime;
                    bool m_minStartTimeHasBeenSet;

                    /**
                     * binlog最晚开始时间，时间格式：2016-03-17 02:10:37
                     */
                    std::string m_maxStartTime;
                    bool m_maxStartTimeHasBeenSet;

                    /**
                     * 返回binlog列表是否包含MinStartTime起始节点，默认为否
                     */
                    bool m_containsMinStartTime;
                    bool m_containsMinStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGSREQUEST_H_
