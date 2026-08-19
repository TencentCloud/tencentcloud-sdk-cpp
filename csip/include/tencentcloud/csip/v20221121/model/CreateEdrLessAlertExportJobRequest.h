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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRLESSALERTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRLESSALERTEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateEdrLessAlertExportJob请求参数结构体
                */
                class CreateEdrLessAlertExportJobRequest : public AbstractModel
                {
                public:
                    CreateEdrLessAlertExportJobRequest();
                    ~CreateEdrLessAlertExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>MachineName  主机名称InstanceID  实例ID  IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选HostId - String - 是否必填：否 - 主机IdAgentId - String - 是否必填：否 - 客户端IdPolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任BeginTime - String - 是否必填：否 - 最近访问开始时间EndTime - String - 是否必填：否 - 最近访问结束时间</p>
                     * @return Filters <p>MachineName  主机名称InstanceID  实例ID  IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选HostId - String - 是否必填：否 - 主机IdAgentId - String - 是否必填：否 - 客户端IdPolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任BeginTime - String - 是否必填：否 - 最近访问开始时间EndTime - String - 是否必填：否 - 最近访问结束时间</p>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<p>MachineName  主机名称InstanceID  实例ID  IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选HostId - String - 是否必填：否 - 主机IdAgentId - String - 是否必填：否 - 客户端IdPolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任BeginTime - String - 是否必填：否 - 最近访问开始时间EndTime - String - 是否必填：否 - 最近访问结束时间</p>
                     * @param _filters <p>MachineName  主机名称InstanceID  实例ID  IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选HostId - String - 是否必填：否 - 主机IdAgentId - String - 是否必填：否 - 客户端IdPolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任BeginTime - String - 是否必填：否 - 最近访问开始时间EndTime - String - 是否必填：否 - 最近访问结束时间</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>排序方式：[ASC:升序|DESC:降序]</p>
                     * @return Order <p>排序方式：[ASC:升序|DESC:降序]</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方式：[ASC:升序|DESC:降序]</p>
                     * @param _order <p>排序方式：[ASC:升序|DESC:降序]</p>
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
                     * 获取<p>排序字段：[ LatestDetectTime:最近请求时间]</p>
                     * @return By <p>排序字段：[ LatestDetectTime:最近请求时间]</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>排序字段：[ LatestDetectTime:最近请求时间]</p>
                     * @param _by <p>排序字段：[ LatestDetectTime:最近请求时间]</p>
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
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>MachineName  主机名称InstanceID  实例ID  IP   内网IP或公网IP - 是否必填：否 - 主机Ip或别名筛选HostId - String - 是否必填：否 - 主机IdAgentId - String - 是否必填：否 - 客户端IdPolicyType - String - 是否必填：否 - 策略类型,0:系统策略1:用户自定义策略Domain - String - 是否必填：否 - 域名(先对域名做urlencode,再base64)HandleStatus - String - 是否必填：否 - 状态筛选0:待处理；2:信任；3:不信任BeginTime - String - 是否必填：否 - 最近访问开始时间EndTime - String - 是否必填：否 - 最近访问结束时间</p>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>排序方式：[ASC:升序|DESC:降序]</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段：[ LatestDetectTime:最近请求时间]</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEEDRLESSALERTEXPORTJOBREQUEST_H_
