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
                     * 获取<p>滤条件、分页参数。分页内容不传，默认获取第1页，10条数据<br>排序条件</p><li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li><li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li><li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     * @return Condition <p>滤条件、分页参数。分页内容不传，默认获取第1页，10条数据<br>排序条件</p><li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li><li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li><li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     * 
                     */
                    Condition GetCondition() const;

                    /**
                     * 设置<p>滤条件、分页参数。分页内容不传，默认获取第1页，10条数据<br>排序条件</p><li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li><li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li><li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     * @param _condition <p>滤条件、分页参数。分页内容不传，默认获取第1页，10条数据<br>排序条件</p><li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li><li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li><li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
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
                     * 获取<p>资源模块Id</p>
                     * @return AreaId <p>资源模块Id</p>
                     * 
                     */
                    int64_t GetAreaId() const;

                    /**
                     * 设置<p>资源模块Id</p>
                     * @param _areaId <p>资源模块Id</p>
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
                     * 获取<p>服务名称</p>
                     * @return ServiceName <p>服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _serviceName <p>服务名称</p>
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
                     * 获取<p>搜索关键字</p>
                     * @return Keywords <p>搜索关键字</p>
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置<p>搜索关键字</p>
                     * @param _keywords <p>搜索关键字</p>
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
                     * 获取<p>获取业务资源列表的开始时间，时间格式：2006-01-02</p>
                     * @return StartTime <p>获取业务资源列表的开始时间，时间格式：2006-01-02</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>获取业务资源列表的开始时间，时间格式：2006-01-02</p>
                     * @param _startTime <p>获取业务资源列表的开始时间，时间格式：2006-01-02</p>
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
                     * 获取<p>获取业务资源列表的结束时间，时间格式：2006-01-02</p>
                     * @return EndTime <p>获取业务资源列表的结束时间，时间格式：2006-01-02</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>获取业务资源列表的结束时间，时间格式：2006-01-02</p>
                     * @param _endTime <p>获取业务资源列表的结束时间，时间格式：2006-01-02</p>
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
                     * 获取<p>资源类型</p>
                     * @return AccessType <p>资源类型</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _accessType <p>资源类型</p>
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
                     * 获取<p>web资源前端地址</p>
                     * @return FrontAddr <p>web资源前端地址</p>
                     * 
                     */
                    std::string GetFrontAddr() const;

                    /**
                     * 设置<p>web资源前端地址</p>
                     * @param _frontAddr <p>web资源前端地址</p>
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
                     * <p>滤条件、分页参数。分页内容不传，默认获取第1页，10条数据<br>排序条件</p><li>CreateTime - string - 是否必填：否 - 排序支持：是 - 按业务资源创建时间排序。</li><li>Levels - int - 是否必填：否 - 排序支持：是 - 按业务资源优先级排序。</li><li>ReachableState - int - 是否必填：否 - 排序支持：是 - 按业务资源连通性排序(私有化版本不支持)。</li>
                     */
                    Condition m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>资源模块Id</p>
                     */
                    int64_t m_areaId;
                    bool m_areaIdHasBeenSet;

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>搜索关键字</p>
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>获取业务资源列表的开始时间，时间格式：2006-01-02</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>获取业务资源列表的结束时间，时间格式：2006-01-02</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>资源类型</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>web资源前端地址</p>
                     */
                    std::string m_frontAddr;
                    bool m_frontAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEBUSINESSRESOURCESREQUEST_H_
