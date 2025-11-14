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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYASSETSYNCFLAGREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYASSETSYNCFLAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyAssetSyncFlag请求参数结构体
                */
                class ModifyAssetSyncFlagRequest : public AbstractModel
                {
                public:
                    ModifyAssetSyncFlagRequest();
                    ~ModifyAssetSyncFlagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启资产自动同步，false-不开启，true-开启
                     * @return AutoSync 是否开启资产自动同步，false-不开启，true-开启
                     * 
                     */
                    bool GetAutoSync() const;

                    /**
                     * 设置是否开启资产自动同步，false-不开启，true-开启
                     * @param _autoSync 是否开启资产自动同步，false-不开启，true-开启
                     * 
                     */
                    void SetAutoSync(const bool& _autoSync);

                    /**
                     * 判断参数 AutoSync 是否已赋值
                     * @return AutoSync 是否已赋值
                     * 
                     */
                    bool AutoSyncHasBeenSet() const;

                private:

                    /**
                     * 是否开启资产自动同步，false-不开启，true-开启
                     */
                    bool m_autoSync;
                    bool m_autoSyncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYASSETSYNCFLAGREQUEST_H_
