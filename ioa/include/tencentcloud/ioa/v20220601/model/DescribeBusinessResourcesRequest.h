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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEBUSINESSRESOURCESREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEBUSINESSRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Condition.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * DescribeBusinessResources请求参数结构体
                */
                class DescribeBusinessResourcesRequest : public AbstractModel
                {
                public:
                    DescribeBusinessResourcesRequest();
                    ~DescribeBusinessResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源模块Id
                     * @return AreaId 资源模块Id
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置资源模块Id
                     * @param _areaId 资源模块Id
                     * 
                     */
                    void SetAreaId(const int64_t& _areaId);

                    /**
                     * 判断参数 AreaId 是否已赋值
                     * @return AreaId 是否已赋值
                     * 
                     */
                    bool AreaIdHasBeenSet() const;

                    /**
                     * 获取搜索的业务资源名称
                     * @return ServiceName 搜索的业务资源名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置搜索的业务资源名称
                     * @param _serviceName 搜索的业务资源名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取获取业务资源列表的开始时间，时间格式：2006-01-02
                     * @return StartTime 获取业务资源列表的开始时间，时间格式：2006-01-02
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置获取业务资源列表的开始时间，时间格式：2006-01-02
                     * @param _startTime 获取业务资源列表的开始时间，时间格式：2006-01-02
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
                     * 获取搜索关键字
                     * @return Keywords 搜索关键字
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置搜索关键字
                     * @param _keywords 搜索关键字
                     * 
                     */
                    void SetKeywords(const std::string& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取获取业务资源列表的结束时间，时间格式：2006-01-02
                     * @return EndTime 获取业务资源列表的结束时间，时间格式：2006-01-02
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置获取业务资源列表的结束时间，时间格式：2006-01-02
                     * @param _endTime 获取业务资源列表的结束时间，时间格式：2006-01-02
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
                     * 获取滤条件、分页参数。分页内容不传，默认获取第1页，10条数据
排序条件
<li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li>
<li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li>
<li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     * @return Condition 滤条件、分页参数。分页内容不传，默认获取第1页，10条数据
排序条件
<li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li>
<li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li>
<li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置滤条件、分页参数。分页内容不传，默认获取第1页，10条数据
排序条件
<li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li>
<li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li>
<li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     * @param _condition 滤条件、分页参数。分页内容不传，默认获取第1页，10条数据
排序条件
<li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li>
<li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li>
<li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     * 
                     */
                    void SetCondition(const Condition& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return AccessType 资源类型
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置资源类型
                     * @param _accessType 资源类型
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取web资源前端地址
                     * @return FrontAddr web资源前端地址
                     * 
                     */
                    std::string GetFrontAddr() const;

                    /**
                     * 设置web资源前端地址
                     * @param _frontAddr web资源前端地址
                     * 
                     */
                    void SetFrontAddr(const std::string& _frontAddr);

                    /**
                     * 判断参数 FrontAddr 是否已赋值
                     * @return FrontAddr 是否已赋值
                     * 
                     */
                    bool FrontAddrHasBeenSet() const;

                private:

                    /**
                     * 资源模块Id
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * 搜索的业务资源名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 获取业务资源列表的开始时间，时间格式：2006-01-02
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 获取业务资源列表的结束时间，时间格式：2006-01-02
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 滤条件、分页参数。分页内容不传，默认获取第1页，10条数据
排序条件
<li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li>
<li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li>
<li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * web资源前端地址
                     */
                    std::string m_frontAddr;
                    bool m_frontAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEBUSINESSRESOURCESREQUEST_H_
