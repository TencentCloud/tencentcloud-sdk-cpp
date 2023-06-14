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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATETIMETEMPLATEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATETIMETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/TimeTemplateSpec.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * CreateTimeTemplate请求参数结构体
                */
                class CreateTimeTemplateRequest : public AbstractModel
                {
                public:
                    CreateTimeTemplateRequest();
                    ~CreateTimeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取时间模板名称
                     * @return Name 时间模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置时间模板名称
                     * @param _name 时间模板名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取是否为每周全时录制（即7*24h录制），0：非全时录制，1；全时录制，默认0
                     * @return IsAllWeek 是否为每周全时录制（即7*24h录制），0：非全时录制，1；全时录制，默认0
                     * 
                     */
                    int64_t GetIsAllWeek() const;

                    /**
                     * 设置是否为每周全时录制（即7*24h录制），0：非全时录制，1；全时录制，默认0
                     * @param _isAllWeek 是否为每周全时录制（即7*24h录制），0：非全时录制，1；全时录制，默认0
                     * 
                     */
                    void SetIsAllWeek(const int64_t& _isAllWeek);

                    /**
                     * 判断参数 IsAllWeek 是否已赋值
                     * @return IsAllWeek 是否已赋值
                     * 
                     */
                    bool IsAllWeekHasBeenSet() const;

                    /**
                     * 获取当IsAllWeek为0时必选，用于描述模板的各个时间片段
                     * @return TimeTemplateSpecs 当IsAllWeek为0时必选，用于描述模板的各个时间片段
                     * 
                     */
                    std::vector<TimeTemplateSpec> GetTimeTemplateSpecs() const;

                    /**
                     * 设置当IsAllWeek为0时必选，用于描述模板的各个时间片段
                     * @param _timeTemplateSpecs 当IsAllWeek为0时必选，用于描述模板的各个时间片段
                     * 
                     */
                    void SetTimeTemplateSpecs(const std::vector<TimeTemplateSpec>& _timeTemplateSpecs);

                    /**
                     * 判断参数 TimeTemplateSpecs 是否已赋值
                     * @return TimeTemplateSpecs 是否已赋值
                     * 
                     */
                    bool TimeTemplateSpecsHasBeenSet() const;

                private:

                    /**
                     * 时间模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否为每周全时录制（即7*24h录制），0：非全时录制，1；全时录制，默认0
                     */
                    int64_t m_isAllWeek;
                    bool m_isAllWeekHasBeenSet;

                    /**
                     * 当IsAllWeek为0时必选，用于描述模板的各个时间片段
                     */
                    std::vector<TimeTemplateSpec> m_timeTemplateSpecs;
                    bool m_timeTemplateSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATETIMETEMPLATEREQUEST_H_
