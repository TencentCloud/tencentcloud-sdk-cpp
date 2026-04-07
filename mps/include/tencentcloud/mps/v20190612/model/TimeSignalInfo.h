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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TIMESIGNALINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TIMESIGNALINFO_H_

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
                * TimeSignalInfo。
                */
                class TimeSignalInfo : public AbstractModel
                {
                public:
                    TimeSignalInfo();
                    ~TimeSignalInfo() = default;
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
                     * 获取UPIDType。
                     * @return UPIDType UPIDType。
                     * 
                     */
                    std::string GetUPIDType() const;

                    /**
                     * 设置UPIDType。
                     * @param _uPIDType UPIDType。
                     * 
                     */
                    void SetUPIDType(const std::string& _uPIDType);

                    /**
                     * 判断参数 UPIDType 是否已赋值
                     * @return UPIDType 是否已赋值
                     * 
                     */
                    bool UPIDTypeHasBeenSet() const;

                    /**
                     * 获取UPID。
                     * @return UPID UPID。
                     * 
                     */
                    std::string GetUPID() const;

                    /**
                     * 设置UPID。
                     * @param _uPID UPID。
                     * 
                     */
                    void SetUPID(const std::string& _uPID);

                    /**
                     * 判断参数 UPID 是否已赋值
                     * @return UPID 是否已赋值
                     * 
                     */
                    bool UPIDHasBeenSet() const;

                    /**
                     * 获取TypeID。
                     * @return TypeID TypeID。
                     * 
                     */
                    std::string GetTypeID() const;

                    /**
                     * 设置TypeID。
                     * @param _typeID TypeID。
                     * 
                     */
                    void SetTypeID(const std::string& _typeID);

                    /**
                     * 判断参数 TypeID 是否已赋值
                     * @return TypeID 是否已赋值
                     * 
                     */
                    bool TypeIDHasBeenSet() const;

                    /**
                     * 获取Num。
                     * @return Num Num。
                     * 
                     */
                    std::string GetNum() const;

                    /**
                     * 设置Num。
                     * @param _num Num。
                     * 
                     */
                    void SetNum(const std::string& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取Expected。
                     * @return Expected Expected。
                     * 
                     */
                    std::string GetExpected() const;

                    /**
                     * 设置Expected。
                     * @param _expected Expected。
                     * 
                     */
                    void SetExpected(const std::string& _expected);

                    /**
                     * 判断参数 Expected 是否已赋值
                     * @return Expected 是否已赋值
                     * 
                     */
                    bool ExpectedHasBeenSet() const;

                    /**
                     * 获取SubsegmentNum。
                     * @return SubsegmentNum SubsegmentNum。
                     * 
                     */
                    std::string GetSubsegmentNum() const;

                    /**
                     * 设置SubsegmentNum。
                     * @param _subsegmentNum SubsegmentNum。
                     * 
                     */
                    void SetSubsegmentNum(const std::string& _subsegmentNum);

                    /**
                     * 判断参数 SubsegmentNum 是否已赋值
                     * @return SubsegmentNum 是否已赋值
                     * 
                     */
                    bool SubsegmentNumHasBeenSet() const;

                    /**
                     * 获取SubsegmentsExpected。
                     * @return SubsegmentsExpected SubsegmentsExpected。
                     * 
                     */
                    std::string GetSubsegmentsExpected() const;

                    /**
                     * 设置SubsegmentsExpected。
                     * @param _subsegmentsExpected SubsegmentsExpected。
                     * 
                     */
                    void SetSubsegmentsExpected(const std::string& _subsegmentsExpected);

                    /**
                     * 判断参数 SubsegmentsExpected 是否已赋值
                     * @return SubsegmentsExpected 是否已赋值
                     * 
                     */
                    bool SubsegmentsExpectedHasBeenSet() const;

                private:

                    /**
                     * EventID。
                     */
                    std::string m_eventID;
                    bool m_eventIDHasBeenSet;

                    /**
                     * UPIDType。
                     */
                    std::string m_uPIDType;
                    bool m_uPIDTypeHasBeenSet;

                    /**
                     * UPID。
                     */
                    std::string m_uPID;
                    bool m_uPIDHasBeenSet;

                    /**
                     * TypeID。
                     */
                    std::string m_typeID;
                    bool m_typeIDHasBeenSet;

                    /**
                     * Num。
                     */
                    std::string m_num;
                    bool m_numHasBeenSet;

                    /**
                     * Expected。
                     */
                    std::string m_expected;
                    bool m_expectedHasBeenSet;

                    /**
                     * SubsegmentNum。
                     */
                    std::string m_subsegmentNum;
                    bool m_subsegmentNumHasBeenSet;

                    /**
                     * SubsegmentsExpected。
                     */
                    std::string m_subsegmentsExpected;
                    bool m_subsegmentsExpectedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TIMESIGNALINFO_H_
