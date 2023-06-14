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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSEQUENCERULESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSEQUENCERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SequenceData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifySequenceRules请求参数结构体
                */
                class ModifySequenceRulesRequest : public AbstractModel
                {
                public:
                    ModifySequenceRulesRequest();
                    ~ModifySequenceRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边Id值
                     * @return EdgeId 边Id值
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置边Id值
                     * @param _edgeId 边Id值
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
                     * 获取修改数据
                     * @return Data 修改数据
                     * 
                     */
                    std::vector<SequenceData> GetData() const;

                    /**
                     * 设置修改数据
                     * @param _data 修改数据
                     * 
                     */
                    void SetData(const std::vector<SequenceData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

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

                    /**
                     * 获取方向，0：出向，1：入向
                     * @return Direction 方向，0：出向，1：入向
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出向，1：入向
                     * @param _direction 方向，0：出向，1：入向
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * 边Id值
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 修改数据
                     */
                    std::vector<SequenceData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * NAT地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 方向，0：出向，1：入向
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSEQUENCERULESREQUEST_H_
