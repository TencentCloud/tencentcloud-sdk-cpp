/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SPLICEINSERTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SPLICEINSERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SpliceInsertInfo。
                */
                class SpliceInsertInfo : public AbstractModel
                {
                public:
                    SpliceInsertInfo();
                    ~SpliceInsertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EventID。
                     * @return EventID EventID。
                     * 
                     */
                    std::string GetEventID() const;

                    /**
                     * 设置EventID。
                     * @param _eventID EventID。
                     * 
                     */
                    void SetEventID(const std::string& _eventID);

                    /**
                     * 判断参数 EventID 是否已赋值
                     * @return EventID 是否已赋值
                     * 
                     */
                    bool EventIDHasBeenSet() const;

                    /**
                     * 获取AvailNum。
                     * @return AvailNum AvailNum。
                     * 
                     */
                    std::string GetAvailNum() const;

                    /**
                     * 设置AvailNum。
                     * @param _availNum AvailNum。
                     * 
                     */
                    void SetAvailNum(const std::string& _availNum);

                    /**
                     * 判断参数 AvailNum 是否已赋值
                     * @return AvailNum 是否已赋值
                     * 
                     */
                    bool AvailNumHasBeenSet() const;

                    /**
                     * 获取AvailExpected。
                     * @return AvailExpected AvailExpected。
                     * 
                     */
                    std::string GetAvailExpected() const;

                    /**
                     * 设置AvailExpected。
                     * @param _availExpected AvailExpected。
                     * 
                     */
                    void SetAvailExpected(const std::string& _availExpected);

                    /**
                     * 判断参数 AvailExpected 是否已赋值
                     * @return AvailExpected 是否已赋值
                     * 
                     */
                    bool AvailExpectedHasBeenSet() const;

                    /**
                     * 获取ProgramID。
                     * @return ProgramID ProgramID。
                     * 
                     */
                    std::string GetProgramID() const;

                    /**
                     * 设置ProgramID。
                     * @param _programID ProgramID。
                     * 
                     */
                    void SetProgramID(const std::string& _programID);

                    /**
                     * 判断参数 ProgramID 是否已赋值
                     * @return ProgramID 是否已赋值
                     * 
                     */
                    bool ProgramIDHasBeenSet() const;

                private:

                    /**
                     * EventID。
                     */
                    std::string m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * AvailNum。
                     */
                    std::string m_availNum;
                    bool m_availNumHasBeenSet;

                    /**
                     * AvailExpected。
                     */
                    std::string m_availExpected;
                    bool m_availExpectedHasBeenSet;

                    /**
                     * ProgramID。
                     */
                    std::string m_programID;
                    bool m_programIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SPLICEINSERTINFO_H_
