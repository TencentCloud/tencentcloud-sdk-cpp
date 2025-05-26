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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBERACKSREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBERACKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/Filter.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeRacks请求参数结构体
                */
                class DescribeRacksRequest : public AbstractModel
                {
                public:
                    DescribeRacksRequest();
                    ~DescribeRacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件

rack-id
按照机架id进行过滤。
类型：String
必选：否

rack-name
按照机架名称进行过滤。
类型：String
必选：否

idc-id
按照机房id进行过滤。
类型：String
必选：否

idc-unit-id
按照机房管理单元id过滤
类型： String
必选： 否

is-power-on
按照是否开电进行过滤，支持传入 0 和 1。1 代表开电，0 代表关电
类型： String
必选： 否

hosting-type
按照托管类型进行过滤。支持传入 CUSTOMER_MIX 代表客户混合，CUSTOMER_ONLY 代表客户独享 ，NOT_INIT 代表未初始化
类型： String
必选： 否


                     * @return Filters 过滤条件

rack-id
按照机架id进行过滤。
类型：String
必选：否

rack-name
按照机架名称进行过滤。
类型：String
必选：否

idc-id
按照机房id进行过滤。
类型：String
必选：否

idc-unit-id
按照机房管理单元id过滤
类型： String
必选： 否

is-power-on
按照是否开电进行过滤，支持传入 0 和 1。1 代表开电，0 代表关电
类型： String
必选： 否

hosting-type
按照托管类型进行过滤。支持传入 CUSTOMER_MIX 代表客户混合，CUSTOMER_ONLY 代表客户独享 ，NOT_INIT 代表未初始化
类型： String
必选： 否


                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件

rack-id
按照机架id进行过滤。
类型：String
必选：否

rack-name
按照机架名称进行过滤。
类型：String
必选：否

idc-id
按照机房id进行过滤。
类型：String
必选：否

idc-unit-id
按照机房管理单元id过滤
类型： String
必选： 否

is-power-on
按照是否开电进行过滤，支持传入 0 和 1。1 代表开电，0 代表关电
类型： String
必选： 否

hosting-type
按照托管类型进行过滤。支持传入 CUSTOMER_MIX 代表客户混合，CUSTOMER_ONLY 代表客户独享 ，NOT_INIT 代表未初始化
类型： String
必选： 否


                     * @param _filters 过滤条件

rack-id
按照机架id进行过滤。
类型：String
必选：否

rack-name
按照机架名称进行过滤。
类型：String
必选：否

idc-id
按照机房id进行过滤。
类型：String
必选：否

idc-unit-id
按照机房管理单元id过滤
类型： String
必选： 否

is-power-on
按照是否开电进行过滤，支持传入 0 和 1。1 代表开电，0 代表关电
类型： String
必选： 否

hosting-type
按照托管类型进行过滤。支持传入 CUSTOMER_MIX 代表客户混合，CUSTOMER_ONLY 代表客户独享 ，NOT_INIT 代表未初始化
类型： String
必选： 否


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
                     * 获取传入目标服务，返回允许进行此服务的机架列表；可以和Filters一起使用。允许的值：('rackPowerOn', 'rackPowerOff')
                     * @return DstService 传入目标服务，返回允许进行此服务的机架列表；可以和Filters一起使用。允许的值：('rackPowerOn', 'rackPowerOff')
                     * 
                     */
                    std::string GetDstService() const;

                    /**
                     * 设置传入目标服务，返回允许进行此服务的机架列表；可以和Filters一起使用。允许的值：('rackPowerOn', 'rackPowerOff')
                     * @param _dstService 传入目标服务，返回允许进行此服务的机架列表；可以和Filters一起使用。允许的值：('rackPowerOn', 'rackPowerOff')
                     * 
                     */
                    void SetDstService(const std::string& _dstService);

                    /**
                     * 判断参数 DstService 是否已赋值
                     * @return DstService 是否已赋值
                     * 
                     */
                    bool DstServiceHasBeenSet() const;

                    /**
                     * 获取机架名称关键字实现模糊搜索
                     * @return RackName 机架名称关键字实现模糊搜索
                     * 
                     */
                    std::string GetRackName() const;

                    /**
                     * 设置机架名称关键字实现模糊搜索
                     * @param _rackName 机架名称关键字实现模糊搜索
                     * 
                     */
                    void SetRackName(const std::string& _rackName);

                    /**
                     * 判断参数 RackName 是否已赋值
                     * @return RackName 是否已赋值
                     * 
                     */
                    bool RackNameHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件

rack-id
按照机架id进行过滤。
类型：String
必选：否

rack-name
按照机架名称进行过滤。
类型：String
必选：否

idc-id
按照机房id进行过滤。
类型：String
必选：否

idc-unit-id
按照机房管理单元id过滤
类型： String
必选： 否

is-power-on
按照是否开电进行过滤，支持传入 0 和 1。1 代表开电，0 代表关电
类型： String
必选： 否

hosting-type
按照托管类型进行过滤。支持传入 CUSTOMER_MIX 代表客户混合，CUSTOMER_ONLY 代表客户独享 ，NOT_INIT 代表未初始化
类型： String
必选： 否


                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 传入目标服务，返回允许进行此服务的机架列表；可以和Filters一起使用。允许的值：('rackPowerOn', 'rackPowerOff')
                     */
                    std::string m_dstService;
                    bool m_dstServiceHasBeenSet;

                    /**
                     * 机架名称关键字实现模糊搜索
                     */
                    std::string m_rackName;
                    bool m_rackNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBERACKSREQUEST_H_
