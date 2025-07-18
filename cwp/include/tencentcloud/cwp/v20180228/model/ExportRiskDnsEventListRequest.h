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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSEVENTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportRiskDnsEventList请求参数结构体
                */
                class ExportRiskDnsEventListRequest : public AbstractModel
                {
                public:
                    ExportRiskDnsEventListRequest();
                    ~ExportRiskDnsEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li>MachineName  主机名称



InstanceID  实例ID  

 

IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选</li>
<li>HostId - String - 是否必填：否 - 主机Id</li>
<li>AgentId - String - 是否必填：否 - 客户端Id</li>
<li>PolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略</li>
<li>Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>BeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>EndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     * @return Filters <li>MachineName  主机名称



InstanceID  实例ID  

 

IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选</li>
<li>HostId - String - 是否必填：否 - 主机Id</li>
<li>AgentId - String - 是否必填：否 - 客户端Id</li>
<li>PolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略</li>
<li>Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>BeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>EndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>MachineName  主机名称



InstanceID  实例ID  

 

IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选</li>
<li>HostId - String - 是否必填：否 - 主机Id</li>
<li>AgentId - String - 是否必填：否 - 客户端Id</li>
<li>PolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略</li>
<li>Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>BeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>EndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     * @param _filters <li>MachineName  主机名称



InstanceID  实例ID  

 

IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选</li>
<li>HostId - String - 是否必填：否 - 主机Id</li>
<li>AgentId - String - 是否必填：否 - 客户端Id</li>
<li>PolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略</li>
<li>Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>BeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>EndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序方式：[ASC:升序|DESC:降序]
                     * @return Order 排序方式：[ASC:升序|DESC:降序]
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式：[ASC:升序|DESC:降序]
                     * @param _order 排序方式：[ASC:升序|DESC:降序]
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段：[AccessCount:请求次数|LastTime:最近请求时间]
                     * @return By 排序字段：[AccessCount:请求次数|LastTime:最近请求时间]
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段：[AccessCount:请求次数|LastTime:最近请求时间]
                     * @param _by 排序字段：[AccessCount:请求次数|LastTime:最近请求时间]
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <li>MachineName  主机名称



InstanceID  实例ID  

 

IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选</li>
<li>HostId - String - 是否必填：否 - 主机Id</li>
<li>AgentId - String - 是否必填：否 - 客户端Id</li>
<li>PolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略</li>
<li>Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)</li>
<li>HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任</li>
<li>BeginTime - String - 是否必填：否 - 最近访问开始时间</li>
<li>EndTime - String - 是否必填：否 - 最近访问结束时间</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式：[ASC:升序|DESC:降序]
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段：[AccessCount:请求次数|LastTime:最近请求时间]
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTRISKDNSEVENTLISTREQUEST_H_
