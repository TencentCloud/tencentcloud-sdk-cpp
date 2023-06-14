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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSWITCHREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWebPageProtectSwitch请求参数结构体
                */
                class ModifyWebPageProtectSwitchRequest : public AbstractModel
                {
                public:
                    ModifyWebPageProtectSwitchRequest();
                    ~ModifyWebPageProtectSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开关类型 1 防护开关  2 自动恢复开关 3 移除防护目录
                     * @return SwitchType 开关类型 1 防护开关  2 自动恢复开关 3 移除防护目录
                     * 
                     */
                    uint64_t GetSwitchType() const;

                    /**
                     * 设置开关类型 1 防护开关  2 自动恢复开关 3 移除防护目录
                     * @param _switchType 开关类型 1 防护开关  2 自动恢复开关 3 移除防护目录
                     * 
                     */
                    void SetSwitchType(const uint64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取需要操作开关的网站 最大100条
                     * @return Ids 需要操作开关的网站 最大100条
                     * 
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置需要操作开关的网站 最大100条
                     * @param _ids 需要操作开关的网站 最大100条
                     * 
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取1 开启 0 关闭 SwitchType 为 1 | 2 必填;
                     * @return Status 1 开启 0 关闭 SwitchType 为 1 | 2 必填;
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置1 开启 0 关闭 SwitchType 为 1 | 2 必填;
                     * @param _status 1 开启 0 关闭 SwitchType 为 1 | 2 必填;
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 开关类型 1 防护开关  2 自动恢复开关 3 移除防护目录
                     */
                    uint64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * 需要操作开关的网站 最大100条
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 1 开启 0 关闭 SwitchType 为 1 | 2 必填;
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBPAGEPROTECTSWITCHREQUEST_H_
