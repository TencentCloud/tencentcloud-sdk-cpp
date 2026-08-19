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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYNCCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYNCCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UserConfSyncStatus.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集团管理员侧的基线同步配置。
                */
                class BaselineSyncConf : public AbstractModel
                {
                public:
                    BaselineSyncConf();
                    ~BaselineSyncConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启向成员账号自动同步基线配置。true 开启，false 关闭。</p>
                     * @return AutoSync <p>是否开启向成员账号自动同步基线配置。true 开启，false 关闭。</p>
                     * 
                     */
                    bool GetAutoSync() const;

                    /**
                     * 设置<p>是否开启向成员账号自动同步基线配置。true 开启，false 关闭。</p>
                     * @param _autoSync <p>是否开启向成员账号自动同步基线配置。true 开启，false 关闭。</p>
                     * 
                     */
                    void SetAutoSync(const bool& _autoSync);

                    /**
                     * 判断参数 AutoSync 是否已赋值
                     * @return AutoSync 是否已赋值
                     * 
                     */
                    bool AutoSyncHasBeenSet() const;

                    /**
                     * 获取<p>自动同步的目标成员账号 Appid 列表，AutoSync=true 时生效。</p>
                     * @return TargetAppidList <p>自动同步的目标成员账号 Appid 列表，AutoSync=true 时生效。</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppidList() const;

                    /**
                     * 设置<p>自动同步的目标成员账号 Appid 列表，AutoSync=true 时生效。</p>
                     * @param _targetAppidList <p>自动同步的目标成员账号 Appid 列表，AutoSync=true 时生效。</p>
                     * 
                     */
                    void SetTargetAppidList(const std::vector<uint64_t>& _targetAppidList);

                    /**
                     * 判断参数 TargetAppidList 是否已赋值
                     * @return TargetAppidList 是否已赋值
                     * 
                     */
                    bool TargetAppidListHasBeenSet() const;

                    /**
                     * 获取<p>用户配置列表</p>
                     * @return UserConfList <p>用户配置列表</p>
                     * 
                     */
                    std::vector<UserConfSyncStatus> GetUserConfList() const;

                    /**
                     * 设置<p>用户配置列表</p>
                     * @param _userConfList <p>用户配置列表</p>
                     * 
                     */
                    void SetUserConfList(const std::vector<UserConfSyncStatus>& _userConfList);

                    /**
                     * 判断参数 UserConfList 是否已赋值
                     * @return UserConfList 是否已赋值
                     * 
                     */
                    bool UserConfListHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启向成员账号自动同步基线配置。true 开启，false 关闭。</p>
                     */
                    bool m_autoSync;
                    bool m_autoSyncHasBeenSet;

                    /**
                     * <p>自动同步的目标成员账号 Appid 列表，AutoSync=true 时生效。</p>
                     */
                    std::vector<uint64_t> m_targetAppidList;
                    bool m_targetAppidListHasBeenSet;

                    /**
                     * <p>用户配置列表</p>
                     */
                    std::vector<UserConfSyncStatus> m_userConfList;
                    bool m_userConfListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINESYNCCONF_H_
