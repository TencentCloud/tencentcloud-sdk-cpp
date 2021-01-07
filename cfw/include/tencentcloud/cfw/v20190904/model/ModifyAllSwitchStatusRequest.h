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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLSWITCHSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLSWITCHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyAllSwitchStatus请求参数结构体
                */
                class ModifyAllSwitchStatusRequest : public AbstractModel
                {
                public:
                    ModifyAllSwitchStatusRequest();
                    ~ModifyAllSwitchStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态，0：关闭，1：开启
                     * @return Status 状态，0：关闭，1：开启
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，0：关闭，1：开启
                     * @param Status 状态，0：关闭，1：开启
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取0: 互联网边界防火墙开关，1：vpc防火墙开关
                     * @return Type 0: 互联网边界防火墙开关，1：vpc防火墙开关
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0: 互联网边界防火墙开关，1：vpc防火墙开关
                     * @param Type 0: 互联网边界防火墙开关，1：vpc防火墙开关
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取选中的防火墙开关Id
                     * @return Ids 选中的防火墙开关Id
                     */
                    std::vector<std::string> GetIds() const;

                    /**
                     * 设置选中的防火墙开关Id
                     * @param Ids 选中的防火墙开关Id
                     */
                    void SetIds(const std::vector<std::string>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取NAT开关切换类型，1,单个子网，2，同开同关，3，全部
                     * @return ChangeType NAT开关切换类型，1,单个子网，2，同开同关，3，全部
                     */
                    int64_t GetChangeType() const;

                    /**
                     * 设置NAT开关切换类型，1,单个子网，2，同开同关，3，全部
                     * @param ChangeType NAT开关切换类型，1,单个子网，2，同开同关，3，全部
                     */
                    void SetChangeType(const int64_t& _changeType);

                    /**
                     * 判断参数 ChangeType 是否已赋值
                     * @return ChangeType 是否已赋值
                     */
                    bool ChangeTypeHasBeenSet() const;

                    /**
                     * 获取NAT实例所在地域
                     * @return Area NAT实例所在地域
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT实例所在地域
                     * @param Area NAT实例所在地域
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 状态，0：关闭，1：开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 0: 互联网边界防火墙开关，1：vpc防火墙开关
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 选中的防火墙开关Id
                     */
                    std::vector<std::string> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * NAT开关切换类型，1,单个子网，2，同开同关，3，全部
                     */
                    int64_t m_changeType;
                    bool m_changeTypeHasBeenSet;

                    /**
                     * NAT实例所在地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLSWITCHSTATUSREQUEST_H_
