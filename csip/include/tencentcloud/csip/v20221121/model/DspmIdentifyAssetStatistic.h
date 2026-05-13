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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYASSETSTATISTIC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYASSETSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm身份关联资产统计
                */
                class DspmIdentifyAssetStatistic : public AbstractModel
                {
                public:
                    DspmIdentifyAssetStatistic();
                    ~DspmIdentifyAssetStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联资产管理员数。
                     * @return ManagerCount 关联资产管理员数。
                     * 
                     */
                    int64_t GetManagerCount() const;

                    /**
                     * 设置关联资产管理员数。
                     * @param _managerCount 关联资产管理员数。
                     * 
                     */
                    void SetManagerCount(const int64_t& _managerCount);

                    /**
                     * 判断参数 ManagerCount 是否已赋值
                     * @return ManagerCount 是否已赋值
                     * 
                     */
                    bool ManagerCountHasBeenSet() const;

                    /**
                     * 获取关联资产普通成员数。
                     * @return MemberCount 关联资产普通成员数。
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置关联资产普通成员数。
                     * @param _memberCount 关联资产普通成员数。
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                private:

                    /**
                     * 关联资产管理员数。
                     */
                    int64_t m_managerCount;
                    bool m_managerCountHasBeenSet;

                    /**
                     * 关联资产普通成员数。
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMIDENTIFYASSETSTATISTIC_H_
