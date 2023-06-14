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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINGROUPLISTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINGROUPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeDomainGroupList返回参数结构体
                */
                class DescribeDomainGroupListResponse : public AbstractModel
                {
                public:
                    DescribeDomainGroupListResponse();
                    ~DescribeDomainGroupListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分组列表
                     * @return GroupList 分组列表
                     * 
                     */
                    std::vector<GroupInfo> GetGroupList() const;

                    /**
                     * 判断参数 GroupList 是否已赋值
                     * @return GroupList 是否已赋值
                     * 
                     */
                    bool GroupListHasBeenSet() const;

                private:

                    /**
                     * 分组列表
                     */
                    std::vector<GroupInfo> m_groupList;
                    bool m_groupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBEDOMAINGROUPLISTRESPONSE_H_
