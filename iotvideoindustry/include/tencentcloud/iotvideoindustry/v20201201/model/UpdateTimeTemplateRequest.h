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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATETIMETEMPLATEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATETIMETEMPLATEREQUEST_H_

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
                * UpdateTimeTemplate请求参数结构体
                */
                class UpdateTimeTemplateRequest : public AbstractModel
                {
                public:
                    UpdateTimeTemplateRequest();
                    ~UpdateTimeTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取时间模板ID
                     * @return TemplateId 时间模板ID
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置时间模板ID
                     * @param _templateId 时间模板ID
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

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
                     * 获取是否全时录制，即7*24小时录制。
0：非全时录制；1：全时录制。默认1
                     * @return IsAllWeek 是否全时录制，即7*24小时录制。
0：非全时录制；1：全时录制。默认1
                     * 
                     */
                    int64_t GetIsAllWeek() const;

                    /**
                     * 设置是否全时录制，即7*24小时录制。
0：非全时录制；1：全时录制。默认1
                     * @param _isAllWeek 是否全时录制，即7*24小时录制。
0：非全时录制；1：全时录制。默认1
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
                     * 获取录制时间片段
                     * @return TimeTemplateSpecs 录制时间片段
                     * 
                     */
                    std::vector<TimeTemplateSpec> GetTimeTemplateSpecs() const;

                    /**
                     * 设置录制时间片段
                     * @param _timeTemplateSpecs 录制时间片段
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
                     * 时间模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 时间模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否全时录制，即7*24小时录制。
0：非全时录制；1：全时录制。默认1
                     */
                    int64_t m_isAllWeek;
                    bool m_isAllWeekHasBeenSet;

                    /**
                     * 录制时间片段
                     */
                    std::vector<TimeTemplateSpec> m_timeTemplateSpecs;
                    bool m_timeTemplateSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATETIMETEMPLATEREQUEST_H_
