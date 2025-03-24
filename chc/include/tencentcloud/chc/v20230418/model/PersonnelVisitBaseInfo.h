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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNELVISITBASEINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNELVISITBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 人员到访工单基本信息
                */
                class PersonnelVisitBaseInfo : public AbstractModel
                {
                public:
                    PersonnelVisitBaseInfo();
                    ~PersonnelVisitBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机房名称
                     * @return IdcName 机房名称
                     * 
                     */
                    std::string GetIdcName() const;

                    /**
                     * 设置机房名称
                     * @param _idcName 机房名称
                     * 
                     */
                    void SetIdcName(const std::string& _idcName);

                    /**
                     * 判断参数 IdcName 是否已赋值
                     * @return IdcName 是否已赋值
                     * 
                     */
                    bool IdcNameHasBeenSet() const;

                    /**
                     * 获取到访原因。到访原因，映射关系：DEVICE_MAINTENANCE 设备维护 DEVICE_MOVE 设备收货上下架 CHECK 盘点 OTHER 其他
                     * @return VisitReason 到访原因。到访原因，映射关系：DEVICE_MAINTENANCE 设备维护 DEVICE_MOVE 设备收货上下架 CHECK 盘点 OTHER 其他
                     * 
                     */
                    std::vector<std::string> GetVisitReason() const;

                    /**
                     * 设置到访原因。到访原因，映射关系：DEVICE_MAINTENANCE 设备维护 DEVICE_MOVE 设备收货上下架 CHECK 盘点 OTHER 其他
                     * @param _visitReason 到访原因。到访原因，映射关系：DEVICE_MAINTENANCE 设备维护 DEVICE_MOVE 设备收货上下架 CHECK 盘点 OTHER 其他
                     * 
                     */
                    void SetVisitReason(const std::vector<std::string>& _visitReason);

                    /**
                     * 判断参数 VisitReason 是否已赋值
                     * @return VisitReason 是否已赋值
                     * 
                     */
                    bool VisitReasonHasBeenSet() const;

                    /**
                     * 获取到访原因
                     * @return VisitRemark 到访原因
                     * 
                     */
                    std::string GetVisitRemark() const;

                    /**
                     * 设置到访原因
                     * @param _visitRemark 到访原因
                     * 
                     */
                    void SetVisitRemark(const std::string& _visitRemark);

                    /**
                     * 判断参数 VisitRemark 是否已赋值
                     * @return VisitRemark 是否已赋值
                     * 
                     */
                    bool VisitRemarkHasBeenSet() const;

                    /**
                     * 获取到访结束时间
                     * @return EnterStartTime 到访结束时间
                     * 
                     */
                    std::string GetEnterStartTime() const;

                    /**
                     * 设置到访结束时间
                     * @param _enterStartTime 到访结束时间
                     * 
                     */
                    void SetEnterStartTime(const std::string& _enterStartTime);

                    /**
                     * 判断参数 EnterStartTime 是否已赋值
                     * @return EnterStartTime 是否已赋值
                     * 
                     */
                    bool EnterStartTimeHasBeenSet() const;

                    /**
                     * 获取到访开始时间
                     * @return EnterEndTime 到访开始时间
                     * 
                     */
                    std::string GetEnterEndTime() const;

                    /**
                     * 设置到访开始时间
                     * @param _enterEndTime 到访开始时间
                     * 
                     */
                    void SetEnterEndTime(const std::string& _enterEndTime);

                    /**
                     * 判断参数 EnterEndTime 是否已赋值
                     * @return EnterEndTime 是否已赋值
                     * 
                     */
                    bool EnterEndTimeHasBeenSet() const;

                    /**
                     * 获取机房管理单元列表
                     * @return IdcUnitNameList 机房管理单元列表
                     * 
                     */
                    std::vector<std::string> GetIdcUnitNameList() const;

                    /**
                     * 设置机房管理单元列表
                     * @param _idcUnitNameList 机房管理单元列表
                     * 
                     */
                    void SetIdcUnitNameList(const std::vector<std::string>& _idcUnitNameList);

                    /**
                     * 判断参数 IdcUnitNameList 是否已赋值
                     * @return IdcUnitNameList 是否已赋值
                     * 
                     */
                    bool IdcUnitNameListHasBeenSet() const;

                private:

                    /**
                     * 机房名称
                     */
                    std::string m_idcName;
                    bool m_idcNameHasBeenSet;

                    /**
                     * 到访原因。到访原因，映射关系：DEVICE_MAINTENANCE 设备维护 DEVICE_MOVE 设备收货上下架 CHECK 盘点 OTHER 其他
                     */
                    std::vector<std::string> m_visitReason;
                    bool m_visitReasonHasBeenSet;

                    /**
                     * 到访原因
                     */
                    std::string m_visitRemark;
                    bool m_visitRemarkHasBeenSet;

                    /**
                     * 到访结束时间
                     */
                    std::string m_enterStartTime;
                    bool m_enterStartTimeHasBeenSet;

                    /**
                     * 到访开始时间
                     */
                    std::string m_enterEndTime;
                    bool m_enterEndTimeHasBeenSet;

                    /**
                     * 机房管理单元列表
                     */
                    std::vector<std::string> m_idcUnitNameList;
                    bool m_idcUnitNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_PERSONNELVISITBASEINFO_H_
