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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELORGANIZATIONSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELORGANIZATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelOrganizationInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeChannelOrganizations返回参数结构体
                */
                class DescribeChannelOrganizationsResponse : public AbstractModel
                {
                public:
                    DescribeChannelOrganizationsResponse();
                    ~DescribeChannelOrganizationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取满足查询条件的企业信息列表。
                     * @return ChannelOrganizationInfos 满足查询条件的企业信息列表。
                     * 
                     */
                    std::vector<ChannelOrganizationInfo> GetChannelOrganizationInfos() const;

                    /**
                     * 判断参数 ChannelOrganizationInfos 是否已赋值
                     * @return ChannelOrganizationInfos 是否已赋值
                     * 
                     */
                    bool ChannelOrganizationInfosHasBeenSet() const;

                    /**
                     * 获取指定分页返回第几页的数据。页码从 0 开始，即首页为 0，最大20000。
                     * @return Offset 指定分页返回第几页的数据。页码从 0 开始，即首页为 0，最大20000。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取指定分页每页返回的数据条数，单页最大支持 200。
                     * @return Limit 指定分页每页返回的数据条数，单页最大支持 200。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取满足查询条件的企业总数量。
                     * @return Total 满足查询条件的企业总数量。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 满足查询条件的企业信息列表。
                     */
                    std::vector<ChannelOrganizationInfo> m_channelOrganizationInfos;
                    bool m_channelOrganizationInfosHasBeenSet;

                    /**
                     * 指定分页返回第几页的数据。页码从 0 开始，即首页为 0，最大20000。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定分页每页返回的数据条数，单页最大支持 200。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 满足查询条件的企业总数量。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBECHANNELORGANIZATIONSRESPONSE_H_
