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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESTATUSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyZoneStatus返回参数结构体
                */
                class ModifyZoneStatusResponse : public AbstractModel
                {
                public:
                    ModifyZoneStatusResponse();
                    ~ModifyZoneStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID
                     * @return Id 站点 ID
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return Name 站点名称
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取站点状态
- false 开启站点
- true 关闭站点
                     * @return Paused 站点状态
- false 开启站点
- true 关闭站点
                     */
                    bool GetPaused() const;

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     */
                    bool PausedHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return ModifiedOn 更新时间
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * 站点 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 站点状态
- false 开启站点
- true 关闭站点
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONESTATUSRESPONSE_H_
