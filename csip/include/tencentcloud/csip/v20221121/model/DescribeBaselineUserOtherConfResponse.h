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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEUSEROTHERCONFRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEUSEROTHERCONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BaselineUserOtherConf.h>
#include <tencentcloud/csip/v20221121/model/AccountBriefInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineUserOtherConf返回参数结构体
                */
                class DescribeBaselineUserOtherConfResponse : public AbstractModel
                {
                public:
                    DescribeBaselineUserOtherConfResponse();
                    ~DescribeBaselineUserOtherConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>当前账号的用户级基线配置。</p>
                     * @return UserConf <p>当前账号的用户级基线配置。</p>
                     * 
                     */
                    BaselineUserOtherConf GetUserConf() const;

                    /**
                     * 判断参数 UserConf 是否已赋值
                     * @return UserConf 是否已赋值
                     * 
                     */
                    bool UserConfHasBeenSet() const;

                    /**
                     * 获取<p>是否来自同步</p>
                     * @return IsSync <p>是否来自同步</p>
                     * 
                     */
                    bool GetIsSync() const;

                    /**
                     * 判断参数 IsSync 是否已赋值
                     * @return IsSync 是否已赋值
                     * 
                     */
                    bool IsSyncHasBeenSet() const;

                    /**
                     * 获取<p>同步的账号信息</p>
                     * @return AdminInfo <p>同步的账号信息</p>
                     * 
                     */
                    AccountBriefInfo GetAdminInfo() const;

                    /**
                     * 判断参数 AdminInfo 是否已赋值
                     * @return AdminInfo 是否已赋值
                     * 
                     */
                    bool AdminInfoHasBeenSet() const;

                private:

                    /**
                     * <p>当前账号的用户级基线配置。</p>
                     */
                    BaselineUserOtherConf m_userConf;
                    bool m_userConfHasBeenSet;

                    /**
                     * <p>是否来自同步</p>
                     */
                    bool m_isSync;
                    bool m_isSyncHasBeenSet;

                    /**
                     * <p>同步的账号信息</p>
                     */
                    AccountBriefInfo m_adminInfo;
                    bool m_adminInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEUSEROTHERCONFRESPONSE_H_
