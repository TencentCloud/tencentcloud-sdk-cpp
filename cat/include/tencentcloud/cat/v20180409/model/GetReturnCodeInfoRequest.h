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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_GETRETURNCODEINFOREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_GETRETURNCODEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * GetReturnCodeInfo请求参数结构体
                */
                class GetReturnCodeInfoRequest : public AbstractModel
                {
                public:
                    GetReturnCodeInfoRequest();
                    ~GetReturnCodeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取正整数。验证成功的拨测任务id
                     * @return TaskId 正整数。验证成功的拨测任务id
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置正整数。验证成功的拨测任务id
                     * @param TaskId 正整数。验证成功的拨测任务id
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取开始时间点。格式如：2017-05-09 10:20:00，最多拉群两天的数据
                     * @return BeginTime 开始时间点。格式如：2017-05-09 10:20:00，最多拉群两天的数据
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间点。格式如：2017-05-09 10:20:00，最多拉群两天的数据
                     * @param BeginTime 开始时间点。格式如：2017-05-09 10:20:00，最多拉群两天的数据
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间点。格式如：2017-05-09 10:25:00，最多拉群两天的数据
                     * @return EndTime 结束时间点。格式如：2017-05-09 10:25:00，最多拉群两天的数据
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间点。格式如：2017-05-09 10:25:00，最多拉群两天的数据
                     * @param EndTime 结束时间点。格式如：2017-05-09 10:25:00，最多拉群两天的数据
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取省份名称的全拼
                     * @return Province 省份名称的全拼
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份名称的全拼
                     * @param Province 省份名称的全拼
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                private:

                    /**
                     * 正整数。验证成功的拨测任务id
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 开始时间点。格式如：2017-05-09 10:20:00，最多拉群两天的数据
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间点。格式如：2017-05-09 10:25:00，最多拉群两天的数据
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 省份名称的全拼
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_GETRETURNCODEINFOREQUEST_H_
