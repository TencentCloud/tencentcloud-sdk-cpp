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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_PERSONINFO_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_PERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/TraceInfo.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 人员信息。
                */
                class PersonInfo : public AbstractModel
                {
                public:
                    PersonInfo();
                    ~PersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员名称。
                     * @return PersonName 人员名称。
                     * 
                     */
                    std::string GetPersonName() const;

                    /**
                     * 设置人员名称。
                     * @param _personName 人员名称。
                     * 
                     */
                    void SetPersonName(const std::string& _personName);

                    /**
                     * 判断参数 PersonName 是否已赋值
                     * @return PersonName 是否已赋值
                     * 
                     */
                    bool PersonNameHasBeenSet() const;

                    /**
                     * 获取人员ID。
                     * @return PersonId 人员ID。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员ID。
                     * @param _personId 人员ID。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取包含的人体动作轨迹图片信息列表。
                     * @return TraceInfos 包含的人体动作轨迹图片信息列表。
                     * 
                     */
                    std::vector<TraceInfo> GetTraceInfos() const;

                    /**
                     * 设置包含的人体动作轨迹图片信息列表。
                     * @param _traceInfos 包含的人体动作轨迹图片信息列表。
                     * 
                     */
                    void SetTraceInfos(const std::vector<TraceInfo>& _traceInfos);

                    /**
                     * 判断参数 TraceInfos 是否已赋值
                     * @return TraceInfos 是否已赋值
                     * 
                     */
                    bool TraceInfosHasBeenSet() const;

                private:

                    /**
                     * 人员名称。
                     */
                    std::string m_personName;
                    bool m_personNameHasBeenSet;

                    /**
                     * 人员ID。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 包含的人体动作轨迹图片信息列表。
                     */
                    std::vector<TraceInfo> m_traceInfos;
                    bool m_traceInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_PERSONINFO_H_
