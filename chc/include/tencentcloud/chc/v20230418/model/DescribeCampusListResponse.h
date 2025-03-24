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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBECAMPUSLISTRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBECAMPUSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/Campus.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeCampusList返回参数结构体
                */
                class DescribeCampusListResponse : public AbstractModel
                {
                public:
                    DescribeCampusListResponse();
                    ~DescribeCampusListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户可操作的园区列表
                     * @return CampusSet 客户可操作的园区列表
                     * 
                     */
                    std::vector<Campus> GetCampusSet() const;

                    /**
                     * 判断参数 CampusSet 是否已赋值
                     * @return CampusSet 是否已赋值
                     * 
                     */
                    bool CampusSetHasBeenSet() const;

                private:

                    /**
                     * 客户可操作的园区列表
                     */
                    std::vector<Campus> m_campusSet;
                    bool m_campusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBECAMPUSLISTRESPONSE_H_
