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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLRULESTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLRULESTATUSREQUEST_H_

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
                * ModifyAllRuleStatus请求参数结构体
                */
                class ModifyAllRuleStatusRequest : public AbstractModel
                {
                public:
                    ModifyAllRuleStatusRequest();
                    ~ModifyAllRuleStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取状态，0：全部停用，1：全部启用
                     * @return Status 状态，0：全部停用，1：全部启用
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态，0：全部停用，1：全部启用
                     * @param _status 状态，0：全部停用，1：全部启用
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取方向，0：出站，1：入站
                     * @return Direction 方向，0：出站，1：入站
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站
                     * @param _direction 方向，0：出站，1：入站
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                    /**
                     * 获取Edge ID值
                     * @return EdgeId Edge ID值
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置Edge ID值
                     * @param _edgeId Edge ID值
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取NAT地域
                     * @return Area NAT地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT地域
                     * @param _area NAT地域
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 状态，0：全部停用，1：全部启用
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 方向，0：出站，1：入站
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * Edge ID值
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * NAT地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYALLRULESTATUSREQUEST_H_
