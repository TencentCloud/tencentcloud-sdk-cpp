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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKMONITORINFOSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKMONITORINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTaskMonitorInfos请求参数结构体
                */
                class DescribeTaskMonitorInfosRequest : public AbstractModel
                {
                public:
                    DescribeTaskMonitorInfosRequest();
                    ~DescribeTaskMonitorInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID列表，上限50个
                     * @return TaskIdList 任务ID列表，上限50个
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置任务ID列表，上限50个
                     * @param _taskIdList 任务ID列表，上限50个
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取引擎名称
                     * @return HouseName 引擎名称
                     * 
                     */
                    std::string GetHouseName() const;

                    /**
                     * 设置引擎名称
                     * @param _houseName 引擎名称
                     * 
                     */
                    void SetHouseName(const std::string& _houseName);

                    /**
                     * 判断参数 HouseName 是否已赋值
                     * @return HouseName 是否已赋值
                     * 
                     */
                    bool HouseNameHasBeenSet() const;

                    /**
                     * 获取任务创建时间的起始时间
                     * @return CreateTimeStart 任务创建时间的起始时间
                     * 
                     */
                    std::string GetCreateTimeStart() const;

                    /**
                     * 设置任务创建时间的起始时间
                     * @param _createTimeStart 任务创建时间的起始时间
                     * 
                     */
                    void SetCreateTimeStart(const std::string& _createTimeStart);

                    /**
                     * 判断参数 CreateTimeStart 是否已赋值
                     * @return CreateTimeStart 是否已赋值
                     * 
                     */
                    bool CreateTimeStartHasBeenSet() const;

                    /**
                     * 获取任务创建时间的结束时间
                     * @return CreateTimeEnd 任务创建时间的结束时间
                     * 
                     */
                    std::string GetCreateTimeEnd() const;

                    /**
                     * 设置任务创建时间的结束时间
                     * @param _createTimeEnd 任务创建时间的结束时间
                     * 
                     */
                    void SetCreateTimeEnd(const std::string& _createTimeEnd);

                    /**
                     * 判断参数 CreateTimeEnd 是否已赋值
                     * @return CreateTimeEnd 是否已赋值
                     * 
                     */
                    bool CreateTimeEndHasBeenSet() const;

                    /**
                     * 获取每一页条数
                     * @return Limit 每一页条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每一页条数
                     * @param _limit 每一页条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 任务ID列表，上限50个
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 引擎名称
                     */
                    std::string m_houseName;
                    bool m_houseNameHasBeenSet;

                    /**
                     * 任务创建时间的起始时间
                     */
                    std::string m_createTimeStart;
                    bool m_createTimeStartHasBeenSet;

                    /**
                     * 任务创建时间的结束时间
                     */
                    std::string m_createTimeEnd;
                    bool m_createTimeEndHasBeenSet;

                    /**
                     * 每一页条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETASKMONITORINFOSREQUEST_H_
