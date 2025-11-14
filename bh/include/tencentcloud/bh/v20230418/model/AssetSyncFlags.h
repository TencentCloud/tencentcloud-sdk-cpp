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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_ASSETSYNCFLAGS_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_ASSETSYNCFLAGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 资产同步标志
                */
                class AssetSyncFlags : public AbstractModel
                {
                public:
                    AssetSyncFlags();
                    ~AssetSyncFlags() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否已完成角色授权
                     * @return RoleGranted 是否已完成角色授权
                     * 
                     */
                    bool GetRoleGranted() const;

                    /**
                     * 设置是否已完成角色授权
                     * @param _roleGranted 是否已完成角色授权
                     * 
                     */
                    void SetRoleGranted(const bool& _roleGranted);

                    /**
                     * 判断参数 RoleGranted 是否已赋值
                     * @return RoleGranted 是否已赋值
                     * 
                     */
                    bool RoleGrantedHasBeenSet() const;

                    /**
                     * 获取是否已开启自动资产同步
                     * @return AutoSync 是否已开启自动资产同步
                     * 
                     */
                    bool GetAutoSync() const;

                    /**
                     * 设置是否已开启自动资产同步
                     * @param _autoSync 是否已开启自动资产同步
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
                     * 是否已完成角色授权
                     */
                    bool m_roleGranted;
                    bool m_roleGrantedHasBeenSet;

                    /**
                     * 是否已开启自动资产同步
                     */
                    bool m_autoSync;
                    bool m_autoSyncHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_ASSETSYNCFLAGS_H_
