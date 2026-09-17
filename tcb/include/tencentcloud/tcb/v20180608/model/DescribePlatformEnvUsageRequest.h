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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMENVUSAGEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMENVUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribePlatformEnvUsage请求参数结构体
                */
                class DescribePlatformEnvUsageRequest : public AbstractModel
                {
                public:
                    DescribePlatformEnvUsageRequest();
                    ~DescribePlatformEnvUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境Id</p>
                     * @return EnvId <p>环境Id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境Id</p>
                     * @param _envId <p>环境Id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>查询用量起始时间</p><p>参数格式：YYYY-MM-DD</p>
                     * @return StartDate <p>查询用量起始时间</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>查询用量起始时间</p><p>参数格式：YYYY-MM-DD</p>
                     * @param _startDate <p>查询用量起始时间</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取<p>查询用量结束时间</p><p>参数格式：YYYY-MM-DD</p>
                     * @return EndDate <p>查询用量结束时间</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>查询用量结束时间</p><p>参数格式：YYYY-MM-DD</p>
                     * @param _endDate <p>查询用量结束时间</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li><li>Database： 数据库</li></ul>
                     * @return ResourceTypes <p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li><li>Database： 数据库</li></ul>
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置<p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li><li>Database： 数据库</li></ul>
                     * @param _resourceTypes <p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li><li>Database： 数据库</li></ul>
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取<p>是否展示用量明细</p>
                     * @return NeedUsageDetails <p>是否展示用量明细</p>
                     * 
                     */
                    bool GetNeedUsageDetails() const;

                    /**
                     * 设置<p>是否展示用量明细</p>
                     * @param _needUsageDetails <p>是否展示用量明细</p>
                     * 
                     */
                    void SetNeedUsageDetails(const bool& _needUsageDetails);

                    /**
                     * 判断参数 NeedUsageDetails 是否已赋值
                     * @return NeedUsageDetails 是否已赋值
                     * 
                     */
                    bool NeedUsageDetailsHasBeenSet() const;

                private:

                    /**
                     * <p>环境Id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>查询用量起始时间</p><p>参数格式：YYYY-MM-DD</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>查询用量结束时间</p><p>参数格式：YYYY-MM-DD</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>资源类型</p><p>枚举值：</p><ul><li>Storage： 云存储</li><li>Function： 云函数</li><li>Database： 数据库</li></ul>
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * <p>是否展示用量明细</p>
                     */
                    bool m_needUsageDetails;
                    bool m_needUsageDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPLATFORMENVUSAGEREQUEST_H_
