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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBELINEGROUPLISTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBELINEGROUPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/LineGroupItem.h>
#include <tencentcloud/dnspod/v20210323/model/LineGroupSum.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeLineGroupList返回参数结构体
                */
                class DescribeLineGroupListResponse : public AbstractModel
                {
                public:
                    DescribeLineGroupListResponse();
                    ~DescribeLineGroupListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义线路分组列表
                     * @return LineGroups 自定义线路分组列表
                     * 
                     */
                    std::vector<LineGroupItem> GetLineGroups() const;

                    /**
                     * 判断参数 LineGroups 是否已赋值
                     * @return LineGroups 是否已赋值
                     * 
                     */
                    bool LineGroupsHasBeenSet() const;

                    /**
                     * 获取自定义线路分组数量信息
                     * @return Info 自定义线路分组数量信息
                     * 
                     */
                    LineGroupSum GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 自定义线路分组列表
                     */
                    std::vector<LineGroupItem> m_lineGroups;
                    bool m_lineGroupsHasBeenSet;

                    /**
                     * 自定义线路分组数量信息
                     */
                    LineGroupSum m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBELINEGROUPLISTRESPONSE_H_
