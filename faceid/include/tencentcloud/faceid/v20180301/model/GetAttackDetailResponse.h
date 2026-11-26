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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETATTACKDETAILRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETATTACKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/AttackRegion.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetAttackDetail返回参数结构体
                */
                class GetAttackDetailResponse : public AbstractModel
                {
                public:
                    GetAttackDetailResponse();
                    ~GetAttackDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检测命中的攻击区域列表。本次检测未命中任何攻击区域时返回空数组 []</p>
                     * @return AttackRegionList <p>检测命中的攻击区域列表。本次检测未命中任何攻击区域时返回空数组 []</p>
                     * 
                     */
                    std::vector<AttackRegion> GetAttackRegionList() const;

                    /**
                     * 判断参数 AttackRegionList 是否已赋值
                     * @return AttackRegionList 是否已赋值
                     * 
                     */
                    bool AttackRegionListHasBeenSet() const;

                private:

                    /**
                     * <p>检测命中的攻击区域列表。本次检测未命中任何攻击区域时返回空数组 []</p>
                     */
                    std::vector<AttackRegion> m_attackRegionList;
                    bool m_attackRegionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETATTACKDETAILRESPONSE_H_
