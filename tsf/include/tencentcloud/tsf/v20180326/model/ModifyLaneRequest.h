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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyLane请求参数结构体
                */
                class ModifyLaneRequest : public AbstractModel
                {
                public:
                    ModifyLaneRequest();
                    ~ModifyLaneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取泳道ID
                     * @return LaneId 泳道ID
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置泳道ID
                     * @param _laneId 泳道ID
                     * 
                     */
                    void SetLaneId(const std::string& _laneId);

                    /**
                     * 判断参数 LaneId 是否已赋值
                     * @return LaneId 是否已赋值
                     * 
                     */
                    bool LaneIdHasBeenSet() const;

                    /**
                     * 获取泳道名称
                     * @return LaneName 泳道名称
                     * 
                     */
                    std::string GetLaneName() const;

                    /**
                     * 设置泳道名称
                     * @param _laneName 泳道名称
                     * 
                     */
                    void SetLaneName(const std::string& _laneName);

                    /**
                     * 判断参数 LaneName 是否已赋值
                     * @return LaneName 是否已赋值
                     * 
                     */
                    bool LaneNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 泳道ID
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * 泳道名称
                     */
                    std::string m_laneName;
                    bool m_laneNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANEREQUEST_H_
