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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEACRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEACRULEREQUEST_H_

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
                * DeleteAcRule请求参数结构体
                */
                class DeleteAcRuleRequest : public AbstractModel
                {
                public:
                    DeleteAcRuleRequest();
                    ~DeleteAcRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取删除规则对应的id值, 对应获取规则列表接口的Id 值
                     * @return Id 删除规则对应的id值, 对应获取规则列表接口的Id 值
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置删除规则对应的id值, 对应获取规则列表接口的Id 值
                     * @param _id 删除规则对应的id值, 对应获取规则列表接口的Id 值
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取EdgeId值两个vpc间的边id
                     * @return EdgeId EdgeId值两个vpc间的边id
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置EdgeId值两个vpc间的边id
                     * @param _edgeId EdgeId值两个vpc间的边id
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
                     * 获取NAT地域， 如ap-shanghai/ap-guangzhou/ap-chongqing等
                     * @return Area NAT地域， 如ap-shanghai/ap-guangzhou/ap-chongqing等
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置NAT地域， 如ap-shanghai/ap-guangzhou/ap-chongqing等
                     * @param _area NAT地域， 如ap-shanghai/ap-guangzhou/ap-chongqing等
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
                     * 删除规则对应的id值, 对应获取规则列表接口的Id 值
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 方向，0：出站，1：入站
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                    /**
                     * EdgeId值两个vpc间的边id
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * NAT地域， 如ap-shanghai/ap-guangzhou/ap-chongqing等
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEACRULEREQUEST_H_
