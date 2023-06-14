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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CREATELANEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CREATELANEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/LaneGroup.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * CreateLane请求参数结构体
                */
                class CreateLaneRequest : public AbstractModel
                {
                public:
                    CreateLaneRequest();
                    ~CreateLaneRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取泳道备注
                     * @return Remark 泳道备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置泳道备注
                     * @param _remark 泳道备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取泳道部署组信息
                     * @return LaneGroupList 泳道部署组信息
                     * 
                     */
                    std::vector<LaneGroup> GetLaneGroupList() const;

                    /**
                     * 设置泳道部署组信息
                     * @param _laneGroupList 泳道部署组信息
                     * 
                     */
                    void SetLaneGroupList(const std::vector<LaneGroup>& _laneGroupList);

                    /**
                     * 判断参数 LaneGroupList 是否已赋值
                     * @return LaneGroupList 是否已赋值
                     * 
                     */
                    bool LaneGroupListHasBeenSet() const;

                    /**
                     * 获取无
                     * @return ProgramIdList 无
                     * 
                     */
                    std::vector<std::string> GetProgramIdList() const;

                    /**
                     * 设置无
                     * @param _programIdList 无
                     * 
                     */
                    void SetProgramIdList(const std::vector<std::string>& _programIdList);

                    /**
                     * 判断参数 ProgramIdList 是否已赋值
                     * @return ProgramIdList 是否已赋值
                     * 
                     */
                    bool ProgramIdListHasBeenSet() const;

                private:

                    /**
                     * 泳道名称
                     */
                    std::string m_laneName;
                    bool m_laneNameHasBeenSet;

                    /**
                     * 泳道备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 泳道部署组信息
                     */
                    std::vector<LaneGroup> m_laneGroupList;
                    bool m_laneGroupListHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_programIdList;
                    bool m_programIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CREATELANEREQUEST_H_
