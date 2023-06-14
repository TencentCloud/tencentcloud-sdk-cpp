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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_GETGROUPLISTRESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_GETGROUPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/GroupInfo.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * GetGroupList返回参数结构体
                */
                class GetGroupListResponse : public AbstractModel
                {
                public:
                    GetGroupListResponse();
                    ~GetGroupListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的人体库信息。
                     * @return GroupInfos 返回的人体库信息。
                     * 
                     */
                    std::vector<GroupInfo> GetGroupInfos() const;

                    /**
                     * 判断参数 GroupInfos 是否已赋值
                     * @return GroupInfos 是否已赋值
                     * 
                     */
                    bool GroupInfosHasBeenSet() const;

                    /**
                     * 获取人体库总数量。
                     * @return GroupNum 人体库总数量。
                     * 
                     */
                    uint64_t GetGroupNum() const;

                    /**
                     * 判断参数 GroupNum 是否已赋值
                     * @return GroupNum 是否已赋值
                     * 
                     */
                    bool GroupNumHasBeenSet() const;

                private:

                    /**
                     * 返回的人体库信息。
                     */
                    std::vector<GroupInfo> m_groupInfos;
                    bool m_groupInfosHasBeenSet;

                    /**
                     * 人体库总数量。
                     */
                    uint64_t m_groupNum;
                    bool m_groupNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_GETGROUPLISTRESPONSE_H_
