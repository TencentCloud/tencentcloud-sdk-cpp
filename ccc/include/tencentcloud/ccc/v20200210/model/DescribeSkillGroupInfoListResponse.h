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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SkillGroupInfoItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeSkillGroupInfoList返回参数结构体
                */
                class DescribeSkillGroupInfoListResponse : public AbstractModel
                {
                public:
                    DescribeSkillGroupInfoListResponse();
                    ~DescribeSkillGroupInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取技能组总数
                     * @return TotalCount 技能组总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取技能组信息列表
                     * @return SkillGroupList 技能组信息列表
                     * 
                     */
                    std::vector<SkillGroupInfoItem> GetSkillGroupList() const;

                    /**
                     * 判断参数 SkillGroupList 是否已赋值
                     * @return SkillGroupList 是否已赋值
                     * 
                     */
                    bool SkillGroupListHasBeenSet() const;

                private:

                    /**
                     * 技能组总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 技能组信息列表
                     */
                    std::vector<SkillGroupInfoItem> m_skillGroupList;
                    bool m_skillGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBESKILLGROUPINFOLISTRESPONSE_H_
