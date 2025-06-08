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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESAPPBLACKLISTRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESAPPBLACKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceAppBlacklist.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeAndroidInstancesAppBlacklist返回参数结构体
                */
                class DescribeAndroidInstancesAppBlacklistResponse : public AbstractModel
                {
                public:
                    DescribeAndroidInstancesAppBlacklistResponse();
                    ~DescribeAndroidInstancesAppBlacklistResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取黑名单集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppBlacklistSet 黑名单集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AndroidInstanceAppBlacklist> GetAppBlacklistSet() const;

                    /**
                     * 判断参数 AppBlacklistSet 是否已赋值
                     * @return AppBlacklistSet 是否已赋值
                     * 
                     */
                    bool AppBlacklistSetHasBeenSet() const;

                private:

                    /**
                     * 黑名单集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AndroidInstanceAppBlacklist> m_appBlacklistSet;
                    bool m_appBlacklistSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESAPPBLACKLISTRESPONSE_H_
