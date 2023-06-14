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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_AUTOUPGRADECLUSTERLEVEL_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_AUTOUPGRADECLUSTERLEVEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 自动变配集群等级
                */
                class AutoUpgradeClusterLevel : public AbstractModel
                {
                public:
                    AutoUpgradeClusterLevel();
                    ~AutoUpgradeClusterLevel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启自动变配集群等级
                     * @return IsAutoUpgrade 是否开启自动变配集群等级
                     * 
                     */
                    bool GetIsAutoUpgrade() const;

                    /**
                     * 设置是否开启自动变配集群等级
                     * @param _isAutoUpgrade 是否开启自动变配集群等级
                     * 
                     */
                    void SetIsAutoUpgrade(const bool& _isAutoUpgrade);

                    /**
                     * 判断参数 IsAutoUpgrade 是否已赋值
                     * @return IsAutoUpgrade 是否已赋值
                     * 
                     */
                    bool IsAutoUpgradeHasBeenSet() const;

                private:

                    /**
                     * 是否开启自动变配集群等级
                     */
                    bool m_isAutoUpgrade;
                    bool m_isAutoUpgradeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_AUTOUPGRADECLUSTERLEVEL_H_
