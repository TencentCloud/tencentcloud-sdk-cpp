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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeTopAttackDomain请求参数结构体
                */
                class DescribeTopAttackDomainRequest : public AbstractModel
                {
                public:
                    DescribeTopAttackDomainRequest();
                    ~DescribeTopAttackDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询起始时间
                     * @return FromTime 查询起始时间
                     * 
                     */
                    std::string GetFromTime() const;

                    /**
                     * 设置查询起始时间
                     * @param _fromTime 查询起始时间
                     * 
                     */
                    void SetFromTime(const std::string& _fromTime);

                    /**
                     * 判断参数 FromTime 是否已赋值
                     * @return FromTime 是否已赋值
                     * 
                     */
                    bool FromTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return ToTime 查询结束时间
                     * 
                     */
                    std::string GetToTime() const;

                    /**
                     * 设置查询结束时间
                     * @param _toTime 查询结束时间
                     * 
                     */
                    void SetToTime(const std::string& _toTime);

                    /**
                     * 判断参数 ToTime 是否已赋值
                     * @return ToTime 是否已赋值
                     * 
                     */
                    bool ToTimeHasBeenSet() const;

                    /**
                     * 获取TOP N,可从0-10选择，默认是10
                     * @return Count TOP N,可从0-10选择，默认是10
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置TOP N,可从0-10选择，默认是10
                     * @param _count TOP N,可从0-10选择，默认是10
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * @return Edition 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * @param _edition 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取WAF实例ID，不传则不过滤
                     * @return InstanceID WAF实例ID，不传则不过滤
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置WAF实例ID，不传则不过滤
                     * @param _instanceID WAF实例ID，不传则不过滤
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * 查询起始时间
                     */
                    std::string m_fromTime;
                    bool m_fromTimeHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_toTime;
                    bool m_toTimeHasBeenSet;

                    /**
                     * TOP N,可从0-10选择，默认是10
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 只有两个值有效，sparta-waf，clb-waf，不传则不过滤
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * WAF实例ID，不传则不过滤
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBETOPATTACKDOMAINREQUEST_H_
